# rage_seed.ps1 - set the two config flags the rage bot checks before it fires.
#
#   pwsh -File tools\rage_seed.ps1 -ProcessId <cs2 pid> -Base <image base hex>
#
# The six licence patches ungate the module. They do not enable the rage bot:
# the aim path reads two config values every command and bails out when they are
# zero. With the vendor loader gone, nothing ever writes them - the menu toggle
# goes into a config library that is no longer fed - so they sit at 0 forever and
# rage.log repeats `reason=rage_inactive`.
#
#   image + 0xCAD2E0  int32  rage master      must be 1   (else rage_inactive)
#   image + 0xC7E1F0  byte   autofire         must be 1   (else auto_fire_disabled)
#   image + 0xCADA90  byte   penetration pass must be 1   (else autowall path is skipped)
#   image + 0xCAD648  byte   weapon group A   must be 1   (else weapon_feature_disabled)
#   image + 0xCAD4A0  byte   weapon group B   must be 1   (else weapon_feature_disabled)
#
# -Full also seeds the aim sub-features the same way:
#   image + 0xCAD358  byte   aim gate
#   image + 0xCAD880  byte   aim sub-mode A
#   image + 0xCAD8E8  byte   aim sub-mode B
#
# This seeds both in the mapped image. Values read back after the write; if the
# runtime rewrites them from config, the line says so instead of pretending.
param(
    [Alias('Pid')][Parameter(Mandatory = $true)][int]$ProcessId,
    [Parameter(Mandatory = $true)][string]$Base,
    [switch]$Full
)

$ErrorActionPreference = 'Stop'

if (-not ('RageSeed' -as [type])) {
    Add-Type -TypeDefinition @'
using System;
using System.Runtime.InteropServices;

public static class RageSeed
{
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr OpenProcess(uint access, bool inherit, int pid);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool CloseHandle(IntPtr h);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool ReadProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool WriteProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);

    const uint PROCESS_VM_READ = 0x0010;
    const uint PROCESS_VM_WRITE = 0x0020;
    const uint PROCESS_VM_OPERATION = 0x0008;

    static IntPtr Open(int pid, bool write)
    {
        uint access = PROCESS_VM_READ | (write ? (PROCESS_VM_WRITE | PROCESS_VM_OPERATION) : 0);
        IntPtr h = OpenProcess(access, false, pid);
        if (h == IntPtr.Zero) throw new Exception("OpenProcess failed: " + Marshal.GetLastWin32Error());
        return h;
    }

    public static int ReadInt(int pid, ulong addr)
    {
        IntPtr h = Open(pid, false);
        try
        {
            byte[] b = new byte[4];
            UIntPtr got;
            if (!ReadProcessMemory(h, addr, b, (UIntPtr)4, out got)) throw new Exception("RPM failed: " + Marshal.GetLastWin32Error());
            return BitConverter.ToInt32(b, 0);
        }
        finally { CloseHandle(h); }
    }

    public static int ReadByte(int pid, ulong addr)
    {
        IntPtr h = Open(pid, false);
        try
        {
            byte[] b = new byte[1];
            UIntPtr got;
            if (!ReadProcessMemory(h, addr, b, (UIntPtr)1, out got)) throw new Exception("RPM failed: " + Marshal.GetLastWin32Error());
            return b[0];
        }
        finally { CloseHandle(h); }
    }

    public static void Write(int pid, ulong addr, byte[] data)
    {
        IntPtr h = Open(pid, true);
        try
        {
            UIntPtr got;
            if (!WriteProcessMemory(h, addr, data, (UIntPtr)(uint)data.Length, out got) || (uint)got != (uint)data.Length)
                throw new Exception("WPM failed: " + Marshal.GetLastWin32Error());
        }
        finally { CloseHandle(h); }
    }
}
'@
}

$image = [Convert]::ToUInt64(($Base -replace '^0x', ''), 16)
$rageRva = [uint64]0xCAD2E0
$flags = @(
    @{ Name = 'master';      Rva = [uint64]0xCAD2E0; Size = 4 },
    @{ Name = 'autofire';    Rva = [uint64]0xC7E1F0; Size = 1 },
    @{ Name = 'penetration'; Rva = [uint64]0xCADA90; Size = 1 },
    @{ Name = 'weapon_a';    Rva = [uint64]0xCAD648; Size = 1 },
    @{ Name = 'weapon_b';    Rva = [uint64]0xCAD4A0; Size = 1 }
)
if ($Full) {
    $flags += @{ Name = 'aim_gate';   Rva = [uint64]0xCAD358; Size = 1 }
    $flags += @{ Name = 'aim_mode_a'; Rva = [uint64]0xCAD880; Size = 1 }
    $flags += @{ Name = 'aim_mode_b'; Rva = [uint64]0xCAD8E8; Size = 1 }
}

$before = @{}
foreach ($f in $flags) {
    $before[$f.Name] = if ($f.Size -eq 4) { [RageSeed]::ReadInt($ProcessId, $image + $f.Rva) } else { [RageSeed]::ReadByte($ProcessId, $image + $f.Rva) }
}
Write-Output ("[rage] base 0x{0:X}  {1}" -f $image, (($before.Keys | ForEach-Object { "$_=$($before[$_])" }) -join '  '))

foreach ($f in $flags) {
    if ($before[$f.Name] -eq 1) { continue }
    if ($f.Size -eq 4) { [RageSeed]::Write($ProcessId, $image + $f.Rva, [BitConverter]::GetBytes([int]1)) }
    else { [RageSeed]::Write($ProcessId, $image + $f.Rva, [byte[]]@(1)) }
}

Start-Sleep -Milliseconds 250
$after = @{}
foreach ($f in $flags) {
    $after[$f.Name] = if ($f.Size -eq 4) { [RageSeed]::ReadInt($ProcessId, $image + $f.Rva) } else { [RageSeed]::ReadByte($ProcessId, $image + $f.Rva) }
}
Write-Output ("[rage] read back  {0}" -f (($after.Keys | ForEach-Object { "$_=$($after[$_])" }) -join '  '))

$ok = ($after.Values | Where-Object { $_ -ne 1 }).Count -eq 0
if ($ok) {
    Write-Output '[rage] seeded: the aim path no longer bails on rage_inactive / weapon_feature_disabled'
} else {
    Write-Output '[rage] refused: the runtime rewrote the flags - config is overriding them'
    exit 1
}


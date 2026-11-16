// FUN_180049340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180049340 */

void FUN_180049340(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint in_stack_00000040;
  longlong in_stack_00000068;
  undefined1 local_121 [137];
  undefined4 local_98;
  uint local_94;
  
  local_94 = in_stack_00000040;
  do {
    uVar1 = (uint)local_121 ^ 0xd6483748;
    uVar2 = (uint)local_121 ^ 0xd6483748;
  } while ((uVar1 * -0x3fcdec80 ^ uVar1 * -0x1c7f9bd9 >> 0xd) ==
           (uVar2 * -0x3fcdec80 ^ uVar2 * -0x1c7f9bd9 >> 0xd) + 1);
  uVar1 = (in_stack_00000040 ^ in_stack_00000040 >> 0xf) * -0x7a143589;
  bVar3 = *param_1 ^ (byte)uVar1 ^ (byte)(uVar1 >> 0xd);
  local_98 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00018008dbf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000068 +
              (ulonglong)
              (((*(uint *)((ulonglong)(((uint)bVar3 + (bVar3 / 0x38) * -0x38) * 8) + 0x548 +
                          in_stack_00000068) ^ in_stack_00000040) % 0x38) * 3 +
              (in_stack_00000040 >> 3) % 3) * 8))();
  return;
}




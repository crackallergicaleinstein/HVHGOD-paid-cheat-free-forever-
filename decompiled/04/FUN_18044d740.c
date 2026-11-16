// FUN_18044d740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044d740 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044d740(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  SIZE_T SVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  LPCVOID lpAddress;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  longlong local_218;
  longlong local_210;
  longlong *local_208;
  longlong *local_200;
  _MEMORY_BASIC_INFORMATION local_1f8;
  undefined1 local_1c8 [8];
  byte local_1c0;
  byte local_1b4;
  byte local_1a8;
  int local_16c;
  int local_160;
  int local_c0;
  char local_b8;
  byte local_b7;
  int local_a8;
  char local_a0;
  byte local_9f;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  lVar13 = 0;
  uVar12 = 0;
  uVar10 = 0;
  local_218 = param_1;
  local_210 = param_2;
  local_208 = param_3;
  local_200 = param_4;
  FUN_18063ab10(local_1c8,0,0x148);
  lVar11 = 5;
  do {
    lpAddress = (LPCVOID)(param_1 + lVar13);
    if (lpAddress == (LPCVOID)0x0) {
    }
    local_1f8.BaseAddress = (LPCVOID)0x0;
    local_1f8.AllocationBase = (PVOID)0x0;
    local_1f8.AllocationProtect = 0;
    local_1f8._20_4_ = 0;
    local_1f8.RegionSize = 0;
    local_1f8.State = 0;
    local_1f8.Protect = 0;
    local_1f8.Type = 0;
    local_1f8._44_4_ = 0;
    SVar4 = VirtualQuery(lpAddress,&local_1f8,0x30);
    if (SVar4 == 0) {
    }
    if (local_1f8.State != 0x1000) {
    }
    if ((local_1f8.Protect & 0x101) != 0) {
    }
    if ((LPCVOID)(-local_1f8.RegionSize - 1) < local_1f8.BaseAddress) {
    }
    if (lpAddress < local_1f8.BaseAddress) {
    }
    if ((LPCVOID)(local_1f8.RegionSize + (longlong)local_1f8.BaseAddress) <= lpAddress) {
    }
    uVar5 = (longlong)(local_1f8.RegionSize + (longlong)local_1f8.BaseAddress) - (longlong)lpAddress
    ;
    uVar6 = 0xf;
    if (uVar5 < 0xf) {
      uVar6 = uVar5;
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_6a = 0;
    if (uVar6 == 0) {
    }
    cVar2 = FUN_1804514f0(&local_78,lpAddress,uVar6);
    if (cVar2 == '\0') {
    }
    local_64 = 2;
    local_57 = 0;
    local_55 = 0;
    local_68 = 0;
    local_58 = 1;
    local_228 = local_1c8;
    local_60 = 0x1010101000000;
    iVar3 = FUN_180443e50(&local_68);
    bVar1 = local_1c0;
    if (iVar3 < 0) {
    }
    puVar9 = (undefined1 *)(param_2 + uVar12);
    if ((local_1a8 & 0x80) == 0) {
      cVar2 = FUN_1804514f0(puVar9,lpAddress,local_1c0);
      if (cVar2 == '\0') {
      }
LAB_18044d9fe:
      uVar6 = (ulonglong)bVar1;
    }
    else {
      iVar3 = (int)lpAddress;
      iVar8 = (int)puVar9;
      if (local_b8 == ' ') {
        cVar2 = FUN_1804514f0(puVar9,lpAddress,local_1c0);
        if (cVar2 == '\0') {
        }
        *(int *)(puVar9 + local_b7) = (iVar3 - iVar8) + local_c0;
        goto LAB_18044d9fe;
      }
      if (local_a0 == ' ') {
        cVar2 = FUN_1804514f0(puVar9,lpAddress,local_1c0);
        if (cVar2 == '\0') {
        }
        *(int *)(puVar9 + local_9f) = (iVar3 - iVar8) + local_a8;
        goto LAB_18044d9fe;
      }
      if (local_16c == 0x1c) {
        if (local_160 != 1) {
        }
        *puVar9 = 0xf;
        *(uint *)(puVar9 + 2) = ((char)local_a8 - iVar8) + -6 + (uint)local_1c0 + iVar3;
        puVar9[1] = (local_1b4 & 0xf) + 0x80;
        uVar6 = 6;
      }
      else {
        if (local_16c != 0x60) {
        }
        if (local_160 != 1) {
        }
        *puVar9 = 0xe9;
        uVar6 = 5;
        *(uint *)(puVar9 + 1) = (local_1c0 - 5) + ((char)local_a8 - iVar8) + iVar3;
      }
    }
    uVar12 = uVar12 + uVar6;
    lVar13 = lVar13 + (ulonglong)bVar1;
    uVar10 = uVar10 + bVar1;
    if (0x30 < uVar12) {
    }
    if (0xd < uVar10) {
      lVar7 = ((local_218 + lVar13) - local_210) - uVar12;
      if (lVar7 + 0x7ffffffbU < 0x100000000) {
        *(undefined1 *)(local_210 + uVar12) = 0xe9;
        *(int *)(local_210 + 1 + uVar12) = (int)lVar7 + -5;
      }
      else {
        *(undefined4 *)(local_210 + uVar12) = 0x25ff;
        lVar11 = 0xe;
        *(undefined2 *)(local_210 + 4 + uVar12) = 0;
        *(longlong *)(local_210 + 6 + uVar12) = local_218 + lVar13;
      }
      *local_208 = lVar13;
      *local_200 = uVar12 + lVar11;
    }
    param_1 = local_218;
    param_2 = local_210;
  } while( true );
}




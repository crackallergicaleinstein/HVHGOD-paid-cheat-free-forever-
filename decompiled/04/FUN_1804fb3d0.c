// FUN_1804fb3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb3d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804fb3d0(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  ushort local_58;
  undefined1 local_56;
  undefined8 local_55;
  undefined8 local_4d;
  undefined5 local_45;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined3 uStack_34;
  undefined1 local_31;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar7 = *param_3;
  uVar8 = (ulonglong)uVar7;
  local_6c = *(uint *)(param_2 + 0x10);
  bVar2 = true;
  if (0x1f < uVar7) goto LAB_1804fb462;
  bVar2 = true;
  uVar6 = local_6c & 0x4000000;
  if ((uVar7 == 10) && (uVar6 != 0)) {
    bVar4 = true;
LAB_1804fb437:
    bVar3 = bVar4;
    if (param_6 == '\0') {
      if (uVar6 == 0) goto LAB_1804fb661;
    }
    else if (uVar6 == 0) {
      uVar8 = 0x20;
      *param_3 = 0x20;
    }
LAB_1804fb455:
    bVar3 = bVar2;
    bVar2 = false;
  }
  else {
    bVar3 = false;
    bVar4 = false;
    if (uVar7 == 10) goto LAB_1804fb437;
LAB_1804fb661:
    bVar2 = bVar3;
    if ((uVar7 != 9) || ((local_6c & 0x20) == 0)) goto LAB_1804fb455;
    bVar2 = true;
  }
  if (!bVar3 && !bVar2) {
  }
  bVar2 = false;
LAB_1804fb462:
  uVar7 = (uint)uVar8;
  if (param_6 == '\0') {
    if (uVar7 == 0x7f) {
    }
    if (uVar7 - 0xe000 < 0x1900) {
    }
  }
  if (0xffff < uVar7) {
  }
  if ((bVar2) && ((local_6c & 0x1000001f) != 0)) {
    uVar6 = (uint)*(ushort *)(param_1 + 0xc30);
    if (((local_6c & 0x10000005) != 0) && ((uVar7 - 0x2c & 0xfffffffd) == 0)) {
      uVar8 = (ulonglong)uVar6;
    }
    if (((local_6c & 7) != 0) && ((int)uVar8 - 0xff01U < 0x5e)) {
      uVar8 = (ulonglong)((int)uVar8 - 0xfee0);
    }
    uVar7 = (uint)uVar8;
    if ((((local_6c & 1) != 0) && (9 < uVar7 - 0x30)) && (uVar7 != uVar6)) {
      if (0x2f < uVar7) {
      }
      if ((0xac0000000000U >> (uVar8 & 0x3f) & 1) == 0) {
      }
    }
    if ((((local_6c & 4) != 0) && (9 < uVar7 - 0x30)) && (uVar7 != uVar6)) {
      if (0x3b < uVar7 - 0x2a) {
      }
      if ((0x80000000800002bU >> ((ulonglong)(uVar7 - 0x2a) & 0x3f) & 1) == 0) {
      }
    }
    if ((local_6c & 2) != 0) {
      if (0x36 < uVar7 - 0x30) {
      }
      if ((0x7e0000007e03ffU >> ((ulonglong)(uVar7 - 0x30) & 0x3f) & 1) == 0) {
      }
    }
    if (((local_6c & 8) != 0) && (uVar7 - 0x61 < 0x1a)) {
      uVar8 = (ulonglong)(uVar7 - 0x20);
    }
    uVar7 = (uint)uVar8;
    if ((local_6c & 0x10) != 0) {
      if (uVar7 == 0x20) {
      }
      if (uVar7 == 9) {
      }
      if (uVar7 == 0x3000) {
      }
    }
    *param_3 = uVar7;
  }
  if ((local_6c >> 0x15 & 1) != 0) {
    local_60 = *(int *)(param_2 + 0x14);
    local_68 = 0;
    local_5c = 0;
    local_55 = 0;
    local_4d = 0;
    local_45 = 0;
    uStack_34 = 0;
    local_31 = 0;
    local_78 = DAT_180bb8ae8;
    local_70 = 0x200000;
    local_58 = (ushort)uVar8;
    if ((*(int *)(DAT_180bb8ae8 + 0x1550) != local_60) ||
       (local_56 = 1, *(char *)(DAT_180bb8ae8 + 0x155c) == '\0')) {
      local_56 = 0;
    }
    puVar1 = *(undefined4 **)(param_2 + 8);
    uStack_40 = *puVar1;
    uStack_3c = puVar1[1];
    uStack_38 = puVar1[2];
    iVar5 = (*(code *)0x0)(&local_78);
    if (iVar5 == 0) {
      *param_3 = (uint)local_58;
    }
  }
}




// FUN_180218c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180218c10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180218c10(longlong param_1,undefined4 *param_2,uint param_3)

{
  PSRWLOCK SRWLock;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [48];
  undefined4 *local_a8 [2];
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  SRWLock = (PSRWLOCK)(param_1 + 0xd0);
  local_98[8] = 1;
  local_98._0_8_ = SRWLock;
  local_98._9_7_ = 0;
  local_a8[0] = param_2;
  AcquireSRWLockShared(SRWLock);
  if (((param_3 & 0xfffffffc) != 0) || (param_3 == 1)) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    FUN_180150e80(param_2 + 2);
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 7;
    *(undefined8 *)(param_2 + 0xe) = 8;
    *param_2 = 0x3f800000;
    FUN_1801406e0(param_2 + 6,0x10,*(undefined8 *)(param_2 + 2));
    goto LAB_180218dee;
  }
  uStack_70 = 0;
  local_68 = ZEXT816(0);
  uStack_58 = 0;
  uStack_50 = 0;
  local_88 = (ulonglong)*(uint *)(param_1 + 0x10);
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_180150e80(&uStack_80);
  uStack_70 = 0;
  local_68 = (undefined1  [16])0x0;
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  FUN_1801406e0(&uStack_70,*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3,
                uStack_80);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_180231ce0(&local_88,local_a8,puVar2 + 2);
  }
  if ((param_3 & 0xfffffffd) == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      plVar3 = (longlong *)FUN_1800f9910(&local_88,local_a8,puVar2 + 2);
      FUN_18017edf0(*plVar3 + 0x18,puVar2 + 3);
    }
    if (param_3 != 0) goto LAB_180218d4e;
LAB_180218d54:
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      plVar3 = (longlong *)FUN_1800f9910(&local_88,local_a8,puVar2 + 2);
      FUN_18017edf0(*plVar3 + 0x18,puVar2 + 3);
    }
  }
  else {
LAB_180218d4e:
    if (param_3 == 3) goto LAB_180218d54;
  }
  FUN_18022fdb0(param_2,&local_88);
  FUN_1800cf8e0(&local_88);
LAB_180218dee:
  ReleaseSRWLockShared(SRWLock);
}




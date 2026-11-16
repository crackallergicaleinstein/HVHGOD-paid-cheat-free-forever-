// FUN_1801eb060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801eb060 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eb060(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0xffff;
  if (((byte)*(uint *)(param_1 + 0x1c) & 3) == 3) {
    param_2[2] = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = 0x16d;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x1ff;
    }
    param_2[1] = uVar2;
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
LAB_1801eb0c6:
        uVar1 = 4;
        goto LAB_1801eb1ae;
      }
      if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
LAB_1801eb0d7:
        uVar1 = 10;
        goto LAB_1801eb1ae;
      }
    }
    if ((uVar1 & 0x10) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    goto LAB_1801eb1ae;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  plVar3 = (longlong *)(param_1 + 0x20);
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    plVar3 = (longlong *)*plVar3;
  }
  uVar1 = FUN_1805fb620(plVar3,local_38,3,uVar4);
  param_2[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_28 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_2[1] = uVar1;
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) goto LAB_1801eb0c6;
      if (local_24 == -0x5ffffffd) goto LAB_1801eb0d7;
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
    goto LAB_1801eb1ae;
  }
  param_2[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar5 = uVar1 == 0x35;
LAB_1801eb1a0:
      if (!bVar5) {
        uVar1 = 0;
        goto LAB_1801eb1ae;
      }
    }
  }
  else if (uVar1 != 0x7b) {
    bVar5 = uVar1 == 0x10b;
    goto LAB_1801eb1a0;
  }
  uVar1 = 1;
LAB_1801eb1ae:
  *param_2 = uVar1;
}




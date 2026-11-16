// FUN_1804e6dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6dd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e6dd0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x38);
  piVar3 = (int *)FUN_1804b8110(0x60);
  if (piVar3 != (int *)0x0) {
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    piVar3[0x11] = 0;
    piVar3[0x12] = 0;
    piVar3[0x13] = 0;
    piVar3[0x14] = 0;
    piVar3[0x15] = 0;
    piVar3[0x16] = 0;
    piVar3[0x17] = 0;
    piVar3[1] = 1;
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar2 + 1;
  *piVar3 = iVar2;
  iVar2 = *(int *)(param_1 + 0x44);
  local_30 = piVar3;
  if (*(int *)(param_1 + 0x40) == iVar2) {
    iVar4 = *(int *)(param_1 + 0x40) + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_1804d0a80(param_1 + 0x40,iVar4);
  }
  *(int **)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 8) = piVar3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x5f) = 1;
  }
  FUN_1804e2610(piVar3,*(undefined4 *)(param_1 + 4),param_2,param_3);
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_1804e6c00(param_1,piVar3);
}




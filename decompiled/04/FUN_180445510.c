// FUN_180445510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445510 */

int FUN_180445510(longlong param_1,char *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffffe0;
  
  if (*param_2 != '\0') {
    uVar1 = *(longlong *)(param_2 + 0x28) + 2;
    if (*(ulonglong *)(param_2 + 8) <= uVar1) {
      return -0x7feffff7;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
    uVar6 = *(longlong *)(param_2 + 8) - uVar1;
    param_2[0x28] = '\x01';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    lVar2 = *(longlong *)(param_2 + 0x48);
    *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar1 + lVar2);
    *(ulonglong *)(param_2 + 8) = uVar6;
    uVar4 = 0xff;
    if (uVar6 < 0xff) {
      uVar4 = uVar6;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    *(undefined1 *)(uVar1 + lVar2) = 0;
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 10;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if ((iVar5 == 0) || (iVar5 == 1)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar3 = FUN_180444450(param_2 + 0x10,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x48),
                            *(undefined1 *)(param_1 + 0x24),0,*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_1 + 0xa8));
      iVar5 = 0x100000;
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      return iVar5;
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar3 = FUN_180444570(param_2 + 0x10,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x48),
                            *(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x49),
                            *(undefined1 *)(param_1 + 0x48),
                            in_stack_ffffffffffffffe0 & 0xffffffffffffff00,
                            *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x158));
      iVar5 = 0x100000;
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      return iVar5;
    }
  }
  else if (iVar5 == 2) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar3 = FUN_180449ba0(param_2 + 0x10,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x48),
                            *(undefined1 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_1 + 0xa8));
      iVar5 = 0x100000;
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      return iVar5;
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar3 = FUN_180449d80(param_2 + 0x10,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x48),
                            *(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x49),
                            *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x100),
                            *(undefined8 *)(param_1 + 0x158));
      iVar5 = 0x100000;
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      return iVar5;
    }
  }
  return -0x7feffffc;
}




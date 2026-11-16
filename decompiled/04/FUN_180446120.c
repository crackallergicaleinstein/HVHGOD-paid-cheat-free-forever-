// FUN_180446120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180446120 */

ulonglong FUN_180446120(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffffe0;
  
  if (*param_2 != '\0') {
    uVar5 = *(longlong *)(param_2 + 0x28) + 2;
    if (*(ulonglong *)(param_2 + 8) <= uVar5) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
    uVar7 = *(longlong *)(param_2 + 8) - uVar5;
    param_2[0x28] = '\x01';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    lVar2 = *(longlong *)(param_2 + 0x48);
    *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar5 + lVar2);
    *(ulonglong *)(param_2 + 8) = uVar7;
    uVar4 = 0xff;
    if (uVar7 < 0xff) {
      uVar4 = uVar7;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    *(undefined1 *)(uVar5 + lVar2) = 0;
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 0xb;
  }
  if (((*(int *)(param_1 + 0x2c) != 1) &&
      ((*(int *)(param_1 + 0x2c) != 0 || (*(char *)(param_3[2] + 0x28) == '\0')))) ||
     (lVar2 = *(longlong *)(param_3[2] + 0x30), -1 < lVar2)) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar6 = 0;
    if (uVar3 != 0xffffffff) {
      uVar6 = uVar3 & 0xff;
    }
    cVar1 = *(char *)(*param_3 + 0x16);
    if (cVar1 == '\b') {
      if (uVar3 == 0xffffffff) {
        uVar6 = 2;
      }
      uVar5 = (ulonglong)*(byte *)(param_3[2] + 0x30);
    }
    else if (cVar1 == '\x10') {
      if (uVar3 == 0xffffffff) {
        uVar6 = 4;
      }
      uVar5 = (ulonglong)*(ushort *)(param_3[2] + 0x30);
    }
    else if (cVar1 == ' ') {
      if (uVar3 == 0xffffffff) {
        uVar6 = 8;
      }
      uVar5 = (ulonglong)*(uint *)(param_3[2] + 0x30);
    }
    else {
      if (cVar1 != '@') {
        return 0x80100004;
      }
      if (uVar3 == 0xffffffff) {
        uVar6 = 0x10;
      }
      uVar5 = *(ulonglong *)(param_3[2] + 0x30);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = FUN_180449ba0(param_2 + 0x10,uVar5,uVar6,*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_1 + 0xa8));
    }
    else {
      if (*(int *)(param_1 + 0x28) != 1) {
        return 0x80100004;
      }
      uVar3 = FUN_180449d80(param_2 + 0x10,uVar5,uVar6,*(undefined1 *)(param_1 + 0x49),
                            *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x100),
                            *(undefined8 *)(param_1 + 0x158));
    }
    uVar6 = 0x100000;
    if ((int)uVar3 < 0) {
      uVar6 = uVar3;
    }
    return (ulonglong)uVar6;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = FUN_180444450(param_2 + 0x10,lVar2,*(undefined1 *)(param_1 + 0x30),0,
                          *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xa8));
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) {
      return 0x80100004;
    }
    uVar5 = FUN_180444570(param_2 + 0x10,lVar2,*(undefined1 *)(param_1 + 0x30),
                          *(undefined1 *)(param_1 + 0x49),*(undefined1 *)(param_1 + 0x48),
                          in_stack_ffffffffffffffe0 & 0xffffffffffffff00,
                          *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x158));
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  return 0x100000;
}




// FUN_180441440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441440 */

undefined8 FUN_180441440(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  
  *(char *)(param_2 + 0x110) = param_3;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_2 + 0x111) = bVar1;
  if (param_3 == '\b') {
    if (0xe < bVar1) {
      return 0x80200002;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      cVar2 = **(char **)(param_1 + 0x10);
      *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
      *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + '\x01';
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
      *(longlong *)(param_2 + 0x108) = (longlong)cVar2;
      return 0x100000;
    }
  }
  else if (param_3 == '\x10') {
    if (0xf < bVar1 + 2) {
      return 0x80200002;
    }
    if (1 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar1 + 2;
      sVar3 = **(short **)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -2;
      *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
      *(longlong *)(param_2 + 0x108) = (longlong)sVar3;
      return 0x100000;
    }
  }
  else if (param_3 == ' ') {
    if (0xf < bVar1 + 4) {
      return 0x80200002;
    }
    if (3 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar1 + 4;
      iVar4 = **(int **)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -4;
      *(int **)(param_1 + 0x10) = *(int **)(param_1 + 0x10) + 1;
      *(longlong *)(param_2 + 0x108) = (longlong)iVar4;
      return 0x100000;
    }
  }
  else {
    if (0xf < bVar1 + 8) {
      return 0x80200002;
    }
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar1 + 8;
      uVar5 = **(undefined8 **)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
      *(undefined8 **)(param_1 + 0x10) = *(undefined8 **)(param_1 + 0x10) + 1;
      *(undefined8 *)(param_2 + 0x108) = uVar5;
      return 0x100000;
    }
  }
  return 0x80200000;
}




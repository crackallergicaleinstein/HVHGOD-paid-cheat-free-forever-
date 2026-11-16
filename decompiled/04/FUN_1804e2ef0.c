// FUN_1804e2ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2ef0 */

longlong FUN_1804e2ef0(longlong param_1)

{
  uint7 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + iVar2 / 2;
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      FUN_1804d0a80(param_1 + 0x48,iVar3);
    }
    iVar2 = *(int *)(param_1 + 4);
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  uVar1 = (uint7)(uint3)((uint)iVar2 >> 8);
  if (((*(char *)(param_1 + 0x5f) == '\0') || (iVar2 == 1)) || (iVar2 == 4)) {
    if (iVar2 == 4) goto LAB_1804e2f66;
    if (iVar2 != 1) goto LAB_1804e2fa7;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
LAB_1804e2f66:
    if (((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 8) != 0)) ||
       (*(longlong *)(param_1 + 0x10) != 0)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      return (ulonglong)uVar1 << 8;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (*(char *)(param_1 + 0x5f) != '\0') {
    return CONCAT71(uVar1,1);
  }
  *(undefined4 *)(param_1 + 4) = 2;
LAB_1804e2fa7:
  return (ulonglong)uVar1 << 8;
}




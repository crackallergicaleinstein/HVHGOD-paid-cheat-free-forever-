// FUN_1805bd0c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd0c0 */

ulonglong FUN_1805bd0c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    return 0;
  }
  puVar1 = *(ushort **)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    *puVar1 = *puVar1 + 1;
    uVar4 = FUN_1805b29c0(param_1,param_2,param_3);
    return uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar2 + 0xc) < *(ushort *)(lVar2 + 0x60) + 1 + (uint)*(ushort *)(lVar2 + 0x18)) {
    uVar3 = FUN_180573d00(lVar2,0,1);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 != 0) goto LAB_1805bd174;
  }
  if (*puVar1 != 0) {
    *(ushort *)(*(longlong *)(puVar1 + 0xc) + -2 + (ulonglong)*puVar1 * 2) = puVar1[1] - 1;
  }
  *puVar1 = *puVar1 + 1;
LAB_1805bd174:
  if ((int)uVar4 == 0) {
    uVar4 = FUN_1805b29c0(param_1,param_2,param_3);
  }
  return uVar4;
}




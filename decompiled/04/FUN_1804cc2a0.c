// FUN_1804cc2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cc2a0 */

undefined8 FUN_1804cc2a0(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)param_1;
  if (-1 < param_1) {
    uVar3 = uVar2;
    do {
      if ((longlong)*(int *)(DAT_180bb8ae8 + 0x1480) <= (longlong)uVar2) {
        return 0;
      }
      if (uVar2 == (longlong)param_2) {
        return 0;
      }
      lVar1 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1488) + uVar2 * 8);
      if (((*(char *)(lVar1 + 0xcd) != '\0') && (lVar1 == *(longlong *)(lVar1 + 0x3d8))) &&
         ((*(uint *)(lVar1 + 0x14) & 0x20000) == 0)) {
        return *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x1488) + (longlong)(int)uVar3 * 8);
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + param_3);
      uVar2 = uVar2 + (longlong)param_3;
    } while (-1 < (longlong)uVar2);
  }
  return 0;
}




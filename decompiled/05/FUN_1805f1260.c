// FUN_1805f1260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f1260 */

ulonglong FUN_1805f1260(ulonglong *param_1,int *param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_3 < 5) {
    return 5;
  }
  if (*param_2 != -0x2d04ada) {
    return 0xfffffffffffffff6;
  }
  uVar2 = *(longlong *)(&DAT_180688d60 + (ulonglong)(*(byte *)(param_2 + 1) >> 6) * 8) + 5;
  if (uVar2 <= param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    bVar1 = *(byte *)(param_2 + 1);
    *(uint *)(param_1 + 1) = (bVar1 & 0xf) + 0xc;
    if ((bVar1 & 0x20) != 0) {
      return 0xfffffffffffffff2;
    }
    bVar1 = bVar1 >> 6;
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        *param_1 = (ulonglong)*(byte *)((longlong)param_2 + 5);
        return 0;
      }
      if (bVar1 == 2) {
        *param_1 = (ulonglong)*(ushort *)((longlong)param_2 + 5) + 0x100;
        return 0;
      }
      if (bVar1 == 3) {
        *param_1 = *(ulonglong *)((longlong)param_2 + 5);
        return 0;
      }
    }
    uVar2 = 0;
    *param_1 = 0;
  }
  return uVar2;
}




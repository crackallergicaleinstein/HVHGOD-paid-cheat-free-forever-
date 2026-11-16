// FUN_180501a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180501a10 */

ulonglong FUN_180501a10(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = (ulonglong)*(int *)(DAT_180bb8ae8 + 0x2008);
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (uVar2 = *(ulonglong *)(DAT_180bb8ae8 + 0x14d0), (*(uint *)(uVar2 + 0x14) & 0x10000000) == 0))
  {
    lVar5 = uVar4 * 0x38;
    uVar1 = *(uint *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 0x18 + lVar5);
    uVar4 = (ulonglong)uVar1;
    if ((*(uint *)(uVar2 + 0x170) == uVar1) &&
       ((uVar4 = *(ulonglong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8 + lVar5), uVar4 != 0 &&
        ((*(uint *)(uVar4 + 0x14) & 0x10000000) != 0)))) {
      uVar6 = uVar4;
      do {
        uVar3 = *(ulonglong *)(*(longlong *)(uVar6 + 0x3d8) + 0x3e0);
        bVar7 = uVar6 != uVar3;
        uVar6 = uVar3;
      } while (bVar7);
      if (uVar3 == uVar2) {
LAB_180501a99:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      do {
        if (uVar4 == uVar2) goto LAB_180501a99;
      } while ((uVar4 != uVar3) && (uVar4 = *(ulonglong *)(uVar4 + 0x3c8), uVar4 != 0));
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




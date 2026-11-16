// FUN_1804c7bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7bf0 */

void FUN_1804c7bf0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar1 = DAT_180bb8ae8;
  iVar6 = *(int *)(DAT_180bb8ae8 + 0x2008) + -1;
  uVar4 = (ulonglong)iVar6;
  if ((-1 < iVar6) && (iVar6 < *(int *)(DAT_180bb8ae8 + 0x1ff8))) {
    lVar3 = uVar4 * 0x38;
    if (*(int *)(lVar3 + *(longlong *)(DAT_180bb8ae8 + 0x2010)) ==
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + lVar3)) {
      if (0 < iVar6) {
        plVar2 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8 + lVar3);
        lVar3 = *plVar2;
        uVar5 = uVar4;
        while ((lVar3 != 0 && ((*(uint *)(lVar3 + 0x14) & 0x10000000) != 0))) {
          lVar3 = plVar2[-7];
          plVar2 = plVar2 + -7;
          if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x14) & 0x400) != 0)) break;
          uVar4 = (ulonglong)((int)uVar4 - 1);
          uVar5 = uVar5 - 1;
          if ((longlong)uVar5 < 1) break;
        }
      }
      if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 8) != 0) {
        FUN_1804cf3e0("[popup] CloseCurrentPopup %d -> %d\n",iVar6,uVar4 & 0xffffffff);
      }
      FUN_1804c7a50(uVar4 & 0xffffffff,1);
      if (*(longlong *)(lVar1 + 0x2040) != 0) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x2040) + 0x179) = 1;
      }
    }
  }
  return;
}




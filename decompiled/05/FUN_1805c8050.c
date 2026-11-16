// FUN_1805c8050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8050 */

longlong FUN_1805c8050(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  lVar3 = 0;
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x408) != 0) &&
       (((*(uint *)(param_1 + 4) & 0x7fff0000) != 0 || ((*(uint *)(param_1 + 8) & 0x8000) != 0)))) {
      lVar1 = FUN_1805cbb00();
      *(longlong *)(param_1 + 0x3f0) = lVar1;
      return lVar1;
    }
    iVar6 = -1;
    iVar5 = -1;
    iVar4 = 0;
    if (*(ushort *)(param_1 + 0x1d0) != 0) {
      psVar2 = *(short **)(param_1 + 0x1e8);
      do {
        if ((psVar2[3] == 6) && (psVar2[4] != 0)) {
          if (*psVar2 == 3) {
            if (((psVar2[1] == 1) || (psVar2[1] == 0)) && ((psVar2[2] == 0x409 || (iVar6 == -1)))) {
              iVar6 = iVar4;
            }
          }
          else if (((*psVar2 == 1) && (psVar2[1] == 0)) && ((psVar2[2] == 0 || (iVar5 == -1)))) {
            iVar5 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        psVar2 = psVar2 + 0xc;
      } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1d0));
      if ((-1 < iVar6) || (-1 < iVar5)) {
        if (iVar6 != -1) {
          lVar3 = FUN_1805ca0c0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                *(short **)(param_1 + 0x1e8) + (longlong)iVar6 * 0xc,FUN_1805cc170,1
                               );
          if (lVar3 != 0) goto LAB_1805c81b2;
        }
        if (iVar5 != -1) {
          lVar3 = FUN_1805c9ec0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                                *(longlong *)(param_1 + 0x1e8) + (longlong)iVar5 * 0x18,
                                FUN_1805cc170,1);
        }
LAB_1805c81b2:
        *(longlong *)(param_1 + 0x3f0) = lVar3;
        return lVar3;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}




// FUN_180474390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474390 */

uint FUN_180474390(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)(int)param_2;
  if (DAT_180b909b0 == 0) {
    iVar9 = (int)*(short *)(&DAT_180797bea + uVar6 * 0x10);
  }
  else {
    lVar3 = *(longlong *)(DAT_180b909b0 + 0x28);
    if ((ulonglong)(*(longlong *)(DAT_180b909b0 + 0x30) - lVar3 >> 4) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18047c010();
    }
    sVar2 = *(short *)(lVar3 + 10 + uVar6 * 0x10);
    iVar9 = (int)sVar2;
    iVar4 = (int)sVar2;
    if (((-1 < iVar9) &&
        (iVar4 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) /
                      0x68))) &&
       (pbVar7 = (byte *)((longlong)sVar2 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
       pbVar7 != (byte *)0x0)) {
      lVar10 = (longlong)param_1 * 0x40;
      uVar5 = (((((ulonglong)*pbVar7 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar7[1]) *
                0x100000001b3 ^ (ulonglong)pbVar7[2]) * 0x100000001b3 ^ (ulonglong)pbVar7[3]) *
              0x100000001b3 & *(ulonglong *)(&DAT_180bbb1c0 + lVar10);
      lVar8 = *(longlong *)(*(longlong *)(&DAT_180bbb1a8 + lVar10) + 8 + uVar5 * 0x10);
      if (lVar8 == *(longlong *)(&DAT_180bbb198 + lVar10)) {
LAB_1804744a5:
        lVar8 = 0;
      }
      else {
        iVar1 = *(int *)(lVar8 + 0x10);
        while (*(int *)pbVar7 != iVar1) {
          if (lVar8 == *(longlong *)(*(longlong *)(&DAT_180bbb1a8 + lVar10) + uVar5 * 0x10))
          goto LAB_1804744a5;
          lVar8 = *(longlong *)(lVar8 + 8);
          iVar1 = *(int *)(lVar8 + 0x10);
        }
      }
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(&DAT_180bbb198 + lVar10);
      }
      if (lVar8 != *(longlong *)(&DAT_180bbb198 + lVar10)) {
        for (; iVar4 < (int)*(short *)(lVar3 + uVar6 * 0x10 + 0xc) + (int)sVar2; iVar4 = iVar4 + 1)
        {
          if (((DAT_180b909b0 != 0) && (-1 < iVar4)) &&
             ((iVar4 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) -
                             *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68) &&
              ((lVar10 = *(longlong *)(DAT_180b909b0 + 0x58) + (longlong)iVar4 * 0x68, lVar10 != 0
               && (*(int *)(lVar10 + 4) == *(int *)(lVar8 + 0x14))))))) {
            iVar9 = iVar4;
            break;
          }
        }
      }
    }
  }
  return iVar9 << 0x10 | param_2 & 0xffff;
}




// FUN_180488c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180488c60 */

void FUN_180488c60(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 uStack_2c;
  
  lVar11 = DAT_180bb8ae8;
  fVar7 = DAT_180b0a41c;
  if (DAT_180bbecdb != '\0') {
    return;
  }
  fVar5 = DAT_180b0a41c * 1.1999998;
  fVar15 = 0.5;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar11 + 0x14d0);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar5 + 0.5)),1);
  uVar16 = 0;
  if (auVar6._0_4_ + *(float *)(lVar4 + 300) + 0.5 < *(float *)(lVar4 + 0x11c)) {
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar7 * 5.9 + 0.5)),1);
    local_resc = auVar6._0_4_;
    local_res8 = 0;
    FUN_1804c6420(&local_res8,0xbf800000);
    lVar11 = DAT_180bb8ae8;
  }
  *(undefined1 *)(*(longlong *)(lVar11 + 0x14d0) + 0xce) = 1;
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14d0) + 0x2c8);
  FUN_1804e1860(lVar11 + 0x88);
  FUN_1804e1d30(lVar11 + 0x88,lVar11,1);
  uVar3 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
  if (DAT_180bbb210 == DAT_180bbb214) {
    if (DAT_180bbb214 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = DAT_180bbb214 / 2 + DAT_180bbb214;
    }
    iVar14 = DAT_180bbb210 + 1;
    if (DAT_180bbb210 + 1 < iVar10) {
      iVar14 = iVar10;
    }
    if (DAT_180bbb214 < iVar14) {
      lVar11 = FUN_1804b8110((longlong)iVar14 << 4);
      if (DAT_180bbb218 != 0) {
        FUN_18063aed0(lVar11,DAT_180bbb218,(longlong)DAT_180bbb210 << 4);
        lVar9 = DAT_180bbb218;
        lVar8 = DAT_180bb8ae8;
        if ((DAT_180bbb218 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar13 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar13 != *piVar1) {
            iVar10 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar12 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar12;
            piVar13 = (int *)(lVar8 + ((longlong)sVar12 + 0x533) * 8);
            *piVar13 = *piVar1;
            piVar13[1] = 0;
          }
          *(short *)((longlong)piVar13 + 6) = *(short *)((longlong)piVar13 + 6) + 1;
          piVar1 = (int *)(lVar8 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar9);
      }
      DAT_180bbb214 = iVar14;
      DAT_180bbb218 = lVar11;
    }
  }
  plVar2 = (longlong *)(DAT_180bbb218 + (longlong)DAT_180bbb210 * 0x10);
  *plVar2 = lVar4;
  plVar2[1] = CONCAT44(uStack_2c,uVar3);
  DAT_180bbb210 = DAT_180bbb210 + 1;
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 5.8 + fVar15)),1);
  local_resc = auVar6._0_4_;
  local_res8 = uVar16;
  FUN_1804c6420(&local_res8,0xbf800000);
  return;
}




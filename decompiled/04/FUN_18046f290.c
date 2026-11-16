// FUN_18046f290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046f290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18046f290(ulonglong param_1,int param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  
  uVar8 = param_2 * param_3 * param_4;
  uVar3 = _malloc_base((longlong)(int)uVar8);
  auVar2 = _DAT_18086ed20;
  if (uVar3 == 0) {
    return 0;
  }
  lVar9 = 0;
  iVar7 = 0;
  if (((0 < (int)uVar8) && (3 < uVar8)) &&
     ((param_1 + (longlong)(int)(uVar8 - 1) * 2 < uVar3 ||
      ((longlong)(int)(uVar8 - 1) + uVar3 < param_1)))) {
    if (0x3f < uVar8) {
      uVar5 = uVar8 & 0x8000003f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
      }
      pauVar4 = (undefined1 (*) [32])(param_1 + 0x40);
      uVar6 = uVar3;
      do {
        auVar11 = vpsrlw_avx2(pauVar4[-2],8);
        auVar11 = vpshufb_avx2(auVar11,auVar2);
        auVar11 = vpermq_avx2(auVar11,0xd8);
        *(undefined1 (*) [16])(uVar3 + lVar9) = auVar11._0_16_;
        auVar11 = vpsrlw_avx2(pauVar4[-1],8);
        auVar11 = vpshufb_avx2(auVar11,auVar2);
        auVar11 = vpermq_avx2(auVar11,0xd8);
        *(undefined1 (*) [16])(uVar6 + 0x10) = auVar11._0_16_;
        auVar11 = vpsrlw_avx2(*pauVar4,8);
        auVar11 = vpshufb_avx2(auVar11,auVar2);
        auVar11 = vpermq_avx2(auVar11,0xd8);
        *(undefined1 (*) [16])(uVar3 + 0x20 + lVar9) = auVar11._0_16_;
        auVar11 = vpsrlw_avx2(pauVar4[1],8);
        auVar11 = vpshufb_avx2(auVar11,auVar2);
        auVar11 = vpermq_avx2(auVar11,0xd8);
        *(undefined1 (*) [16])(uVar3 + 0x30 + lVar9) = auVar11._0_16_;
        lVar9 = lVar9 + 0x40;
        pauVar4 = pauVar4 + 4;
        iVar7 = iVar7 + 0x40;
        uVar6 = uVar6 + 0x40;
      } while (lVar9 < (int)(uVar8 - uVar5));
      if (((byte)uVar8 & 0x3f) < 4) goto LAB_18046f400;
    }
    auVar1 = _DAT_18086d8f0;
    lVar9 = (longlong)iVar7;
    uVar5 = uVar8 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(param_1 + lVar9 * 2);
      auVar10 = vpsrlw_avx(auVar10,8);
      auVar10 = vpshufb_avx(auVar10,auVar1);
      *(int *)(uVar3 + lVar9) = auVar10._0_4_;
      lVar9 = lVar9 + 4;
      iVar7 = iVar7 + 4;
    } while (lVar9 < (int)(uVar8 - uVar5));
  }
LAB_18046f400:
  for (lVar9 = (longlong)iVar7; lVar9 < (int)uVar8; lVar9 = lVar9 + 1) {
    *(undefined1 *)(uVar3 + lVar9) = *(undefined1 *)(param_1 + 1 + lVar9 * 2);
  }
  thunk_FUN_180621380(param_1);
                    /* WARNING: Read-only address (ram,0x00018086d8f0) is written */
                    /* WARNING: Read-only address (ram,0x00018086ed20) is written */
  return uVar3;
}




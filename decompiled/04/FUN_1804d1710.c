// FUN_1804d1710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d1710 */

void FUN_1804d1710(int *param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  iVar9 = 0;
  uVar1 = param_5 - 1;
  if ((0 < (int)uVar1) && (7 < uVar1)) {
    uVar5 = uVar1 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    plVar7 = (longlong *)(param_4 + 0x28);
    iVar10 = iVar9;
    do {
      auVar11._0_4_ = iVar10 + 1;
      auVar11._4_4_ = iVar10 + 2;
      auVar11._8_4_ = iVar10 + 3;
      auVar11._12_4_ = iVar10 + 4;
      auVar13 = vpmovsxdq_avx2(auVar11);
      auVar12 = vpsllq_avx2(auVar13,4);
      auVar3._0_8_ = auVar12._0_8_ + param_4;
      auVar3._8_8_ = auVar12._8_8_ + param_4;
      auVar13._16_8_ = auVar12._16_8_ + param_4;
      auVar13._0_16_ = auVar3;
      auVar13._24_8_ = auVar12._24_8_ + param_4;
      plVar7[-4] = auVar3._0_8_;
      auVar11 = vpsrldq_avx(auVar3,8);
      plVar7[-2] = auVar11._0_8_;
      auVar11 = vpsrldq_avx(auVar13._16_16_,8);
      plVar7[2] = auVar11._0_8_;
      *plVar7 = auVar13._16_8_;
      iVar9 = iVar10 + 8;
      auVar2._0_4_ = iVar10 + 5;
      auVar2._4_4_ = iVar10 + 6;
      auVar2._8_4_ = iVar10 + 7;
      auVar2._12_4_ = iVar10 + 8;
      auVar13 = vpmovsxdq_avx2(auVar2);
      auVar13 = vpsllq_avx2(auVar13,4);
      auVar4._0_8_ = auVar13._0_8_ + param_4;
      auVar4._8_8_ = auVar13._8_8_ + param_4;
      auVar12._16_8_ = auVar13._16_8_ + param_4;
      auVar12._0_16_ = auVar4;
      auVar12._24_8_ = auVar13._24_8_ + param_4;
      plVar7[4] = auVar4._0_8_;
      auVar11 = vpsrldq_avx(auVar4,8);
      plVar7[6] = auVar11._0_8_;
      auVar11 = vpsrldq_avx(auVar12._16_16_,8);
      plVar7[10] = auVar11._0_8_;
      plVar7[8] = auVar12._16_8_;
      plVar7 = plVar7 + 0x10;
      iVar10 = iVar9;
    } while (iVar9 < (int)(uVar1 - uVar5));
  }
  lVar8 = (longlong)iVar9;
  iVar10 = iVar9;
  if (lVar8 < (int)uVar1) {
    lVar6 = (int)uVar1 - lVar8;
    iVar10 = iVar9 + (int)lVar6;
    plVar7 = (longlong *)(lVar8 * 0x10 + 8 + param_4);
    do {
      iVar9 = iVar9 + 1;
      *plVar7 = (longlong)iVar9 * 0x10 + param_4;
      lVar6 = lVar6 + -1;
      plVar7 = plVar7 + 2;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(param_4 + 8 + (longlong)iVar10 * 0x10) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  *(longlong *)(param_1 + 8) = param_4;
  *(int **)(param_1 + 6) = param_1 + 10;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  param_1[2] = (param_5 + -1 + param_2) / param_5;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[0xe] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0x40000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}




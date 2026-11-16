// FUN_1803d1040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d1040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d1040(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  HWND pHVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  HWND pHVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined8 local_58;
  
  DAT_180ccaa21 = '\0';
  if (DAT_180ccaa20 == 0) {
    puVar6 = (undefined8 *)FUN_180439710();
    plVar1 = (longlong *)puVar6[1];
    for (plVar14 = (longlong *)*puVar6; plVar14 != plVar1; plVar14 = plVar14 + 1) {
      if (*plVar14 != 0) {
        *(undefined2 *)(*plVar14 + 0x20) = 0x101;
      }
    }
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x428) = 0;
  }
  FUN_18015ddb0(0);
  pHVar8 = GetForegroundWindow();
  FUN_1803d1c70(extraout_XMM0_Qa,pHVar8 == DAT_180c6e520);
  cVar5 = FUN_18054c7c0();
  if (cVar5 != '\0') {
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x420) = 1;
  }
  pfVar9 = (float *)FUN_180439770();
  *(undefined1 *)((longlong)pfVar9 + 0x13) = 0;
  if (*(char *)((longlong)pfVar9 + 0x11) != '\0') {
    FUN_18017bf40(&local_58);
    if (((float)(local_58 - _DAT_180c7dd08) / 1e+09 < 0.4) &&
       ((pfVar9[1] - DAT_180c7dd14) * (pfVar9[1] - DAT_180c7dd14) +
        (*pfVar9 - DAT_180c7dd10) * (*pfVar9 - DAT_180c7dd10) < 25.0)) {
      *(undefined1 *)((longlong)pfVar9 + 0x13) = 1;
    }
    _DAT_180c7dd08 = local_58;
    DAT_180c7dd10 = *pfVar9;
    DAT_180c7dd14 = pfVar9[1];
  }
  FUN_18043ac50(pfVar9);
  lVar7 = *(longlong *)(pfVar9 + 0x120);
  lVar15 = *(longlong *)(pfVar9 + 0x11e);
  if (lVar15 != lVar7) {
    do {
      FUN_18015c010(lVar15);
      lVar15 = lVar15 + 0x78;
    } while (lVar15 != lVar7);
    *(undefined8 *)(pfVar9 + 0x120) = *(undefined8 *)(pfVar9 + 0x11e);
  }
  if (*(longlong *)(pfVar9 + 0x124) != *(longlong *)(pfVar9 + 0x126)) {
    *(longlong *)(pfVar9 + 0x126) = *(longlong *)(pfVar9 + 0x124);
  }
  if (*(longlong *)(pfVar9 + 0x174) != *(longlong *)(pfVar9 + 0x176)) {
    *(longlong *)(pfVar9 + 0x176) = *(longlong *)(pfVar9 + 0x174);
  }
  pauVar10 = (undefined1 (*) [16])FUN_1803874e0(&local_58,DAT_180c6e520);
  auVar19 = ZEXT1664(*pauVar10);
  puVar11 = (undefined4 *)FUN_180439770();
  pHVar8 = DAT_180c6e520;
  pHVar12 = GetForegroundWindow();
  if (pHVar12 == pHVar8) {
    lVar7 = FUN_1803cf090(DAT_180c6e520);
    local_58._0_4_ = (undefined4)lVar7;
    *puVar11 = (undefined4)local_58;
    local_58._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
    puVar11[1] = local_58._4_4_;
    uVar16 = (undefined4)local_58;
    uVar17 = local_58._4_4_;
  }
  else {
    puVar11[1] = 0xff7fffff;
    *puVar11 = 0xff7fffff;
    uVar16 = 0xff7fffff;
    lVar7 = local_58;
    uVar17 = uVar16;
  }
  local_58 = lVar7;
  auVar18 = auVar19._0_16_;
  auVar2 = vshufps_avx(auVar18,auVar18,0xff);
  auVar20 = ZEXT1664(auVar2);
  auVar3 = vshufps_avx(auVar18,auVar18,0xaa);
  auVar21 = ZEXT1664(auVar3);
  auVar18 = vshufps_avx(auVar18,auVar18,0x55);
  auVar22 = ZEXT1664(auVar18);
  if ((((auVar19._0_4_ != DAT_180c71e20) || (auVar18._0_4_ != DAT_180c71e24)) ||
      (auVar3._0_4_ != DAT_180c71e28)) || (auVar2._0_4_ != DAT_180c71e2c)) {
    puVar11[2] = uVar16;
    puVar11[3] = uVar17;
    *(undefined2 *)(puVar11 + 5) = 0;
    *(undefined2 *)(puVar11 + 4) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x16) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x12) = 0;
    puVar11[6] = 0;
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x438) = 0;
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x410) = 0;
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x408) = 0;
    lVar7 = FUN_180439770();
    *(undefined8 *)(lVar7 + 0x418) = 0;
    DAT_180c71e20 = auVar19._0_4_;
    DAT_180c71e24 = auVar22._0_4_;
    DAT_180c71e28 = auVar21._0_4_;
    DAT_180c71e2c = auVar20._0_4_;
  }
  iVar4 = DAT_180cad2e4;
  if ((cVar5 == '\0') && (DAT_180cad2e4 - 1U < 0xff)) {
    lVar15 = FUN_180439770();
    lVar7 = lVar15 + 0x68;
    lVar15 = *(longlong *)(lVar15 + 0xe8);
    lVar13 = thunk_FUN_1805f8070(lVar7,lVar7 + lVar15 * 4,iVar4);
    if (lVar13 != lVar7 + lVar15 * 4) {
      DAT_180cad2e0 = (uint)(DAT_180cad2e0 != 1);
    }
  }
  auVar2 = vpcmpeqd_avx(ZEXT116(DAT_180ccaa20),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar2);
  DAT_180ccaa28 = auVar2._0_4_;
  if (DAT_180ccaa20 != 0) {
    FUN_1803d0b70();
  }
  FUN_18054bad0(DAT_180ccaa20,&DAT_180ccaa74);
  if (DAT_180ccaa21 == '\0') {
    FUN_18043ba80();
  }
  return;
}




// FUN_18047da90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047da90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18047da90(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 in_ZMM2 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  longlong alStack_4f678 [2];
  char *pcStack_4f668;
  undefined8 uStack_4f660;
  undefined1 auStack_4f658 [162576];
  undefined1 auStack_27b48 [162592];
  
  *(undefined8 *)((longlong)param_1 + 0x71cc) = *param_2;
  auVar11 = ZEXT464(0x3f400000);
  if (0.75 <= in_ZMM2._0_4_) {
    auVar10 = vminss_avx(SUB6416(ZEXT464(0x40400000),0),in_ZMM2._0_16_);
  }
  else {
    auVar10 = auVar11._0_16_;
  }
  *(float *)((longlong)param_1 + 0x71d4) = auVar10._0_4_;
  if (0.75 <= auVar10._0_4_) {
    auVar3 = vminss_avx(SUB6416(ZEXT464(0x40400000),0),auVar10);
    auVar11 = ZEXT1664(auVar3);
  }
  if ((*(char *)((longlong)param_1 + 0x71e4) != '\0') && (auVar11._0_4_ != DAT_180b0a41c)) {
    FUN_18047e2f0(auVar10._0_8_,auVar11._0_8_,0x3f800000);
  }
  DAT_180b0a41c = auVar11._0_4_;
  FUN_18047d3f0();
  DAT_180c62c50 = 0x71e8;
  DAT_180c62c68 = param_1;
  uVar4 = FUN_180460b70(auStack_27b48);
  FUN_18063aed0(auStack_4f658,uVar4,0x27b10);
  lVar1 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar1) {
    do {
      FUN_1804842c0(lVar6);
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar1);
    param_1[1] = *param_1;
  }
  iVar7 = 0;
  ppuVar8 = &PTR_s_PREMIER_CFG_by_gra1ncheats_180830e30;
  puVar9 = auStack_4f658;
  do {
    alStack_4f678[0] = 0;
    FUN_1804841d0(alStack_4f678);
    lVar1 = alStack_4f678[0];
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while ((*ppuVar8)[lVar6] != '\0');
    FUN_180113930(alStack_4f678[0]);
    puVar5 = (undefined *)0x0;
    if (iVar7 == 0) {
      puVar5 = &DAT_180830b60;
    }
    *(undefined **)(lVar1 + 0x20) = puVar5;
    FUN_18063aed0(lVar1 + 0x28,puVar9,0x69d8);
    FUN_18063aed0(lVar1 + 0x6a00,lVar1 + 0x28,0x69d8);
    plVar2 = (longlong *)param_1[1];
    if (plVar2 == (longlong *)param_1[2]) {
      FUN_180485470(param_1,plVar2,alStack_4f678);
    }
    else {
      alStack_4f678[0] = 0;
      *plVar2 = lVar1;
      param_1[1] = param_1[1] + 8;
    }
    lVar1 = alStack_4f678[0];
    if (alStack_4f678[0] != 0) {
      FUN_1804853b0(alStack_4f678[0] + 0xd3d8);
      FUN_18015c010(lVar1);
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        pcStack_4f668 = "tier0.dll:g_pMemAlloc";
        uStack_4f660 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_4f668);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar1);
    }
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 0x69d8;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar7 < 6);
  FUN_18063aed0((longlong)param_1 + 0x21c,*(longlong *)*param_1 + 0x28,0x69d8);
  return;
}




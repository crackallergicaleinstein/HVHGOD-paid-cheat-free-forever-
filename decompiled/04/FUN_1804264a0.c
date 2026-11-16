// FUN_1804264a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804264a0 */

void FUN_1804264a0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined8 uVar11;
  undefined1 auVar12 [64];
  
  lVar3 = *param_2;
  uVar11 = 0;
  auVar12 = ZEXT864(0);
  uVar7 = 0;
  auVar8 = ZEXT864(0);
  auVar10 = ZEXT864(0);
  auVar9 = ZEXT864(0);
  if (lVar3 != 0) {
    plVar4 = param_2 + 1;
    lVar6 = 0;
    plVar5 = param_2;
    do {
      iVar2 = FUN_180423a20(param_1,lVar3,*plVar4);
      if (iVar2 == 0) {
        pcVar1 = (char *)*plVar5;
        if (((*pcVar1 == 'x') && (pcVar1[1] == '1')) && (pcVar1[2] == '\0')) {
          uVar7 = FUN_180422f50(param_1,*plVar4,*(undefined4 *)(param_1 + 0x9c38),
                                *(undefined4 *)(param_1 + 40000));
          auVar8 = ZEXT1664(CONCAT88(extraout_XMM0_Qb,uVar7));
        }
        pcVar1 = (char *)*plVar5;
        if (((*pcVar1 == 'y') && (pcVar1[1] == '1')) && (pcVar1[2] == '\0')) {
          uVar7 = FUN_180422f50(param_1,*plVar4,*(undefined4 *)(param_1 + 0x9c3c),
                                *(undefined4 *)(param_1 + 0x9c44));
          auVar12 = ZEXT1664(CONCAT88(extraout_XMM0_Qb_00,uVar7));
        }
        pcVar1 = (char *)*plVar5;
        if (((*pcVar1 == 'x') && (pcVar1[1] == '2')) && (pcVar1[2] == '\0')) {
          uVar7 = FUN_180422f50(param_1,*plVar4,*(undefined4 *)(param_1 + 0x9c38),
                                *(undefined4 *)(param_1 + 40000));
          auVar10 = ZEXT1664(CONCAT88(extraout_XMM0_Qb_01,uVar7));
        }
        pcVar1 = (char *)*plVar5;
        if (((*pcVar1 == 'y') && (pcVar1[1] == '2')) && (pcVar1[2] == '\0')) {
          uVar7 = FUN_180422f50(param_1,*plVar4,*(undefined4 *)(param_1 + 0x9c3c),
                                *(undefined4 *)(param_1 + 0x9c44));
          auVar9 = ZEXT1664(CONCAT88(extraout_XMM0_Qb_02,uVar7));
        }
      }
      uVar7 = auVar8._0_8_;
      uVar11 = auVar12._0_8_;
      lVar6 = lVar6 + 0x10;
      plVar4 = plVar4 + 2;
      lVar3 = *(longlong *)(lVar6 + (longlong)param_2);
      plVar5 = (longlong *)(lVar6 + (longlong)param_2);
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x9c10) = 0;
  FUN_1804218b0(param_1,uVar7,uVar11);
  FUN_180421970(param_1,auVar10._0_8_,auVar9._0_8_);
  FUN_1804225d0(param_1,0);
  FUN_180422270(param_1);
  return;
}




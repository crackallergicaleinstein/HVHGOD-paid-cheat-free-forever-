// FUN_18029fb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029fb50 */

void FUN_18029fb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,undefined4 *param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 in_ZMM3 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  float local_a4 [35];
  
  uVar9 = 0;
  auVar1 = vminss_avx(ZEXT416((uint)param_5),in_ZMM3._0_16_);
  local_a4[0] = auVar1._0_4_ * 0.5;
  pfVar4 = &local_a8;
  if (0.0 <= param_7) {
    pfVar4 = &param_7;
  }
  pfVar3 = local_a4;
  if (param_7 <= local_a4[0]) {
    pfVar3 = pfVar4;
  }
  local_a8 = 0.0;
  auVar5 = ZEXT1664(in_ZMM3._0_16_);
  fVar10 = *pfVar3;
  if (0.0 < fVar10) {
    FUN_1804353e0(*param_1,0);
    iVar2 = FUN_1804354e0(*param_1,param_2,param_3,0,uVar9,*param_6);
    fVar11 = auVar5._0_4_ + (float)param_2;
    auVar8 = ZEXT464((uint)fVar11);
    FUN_1804354e0(*param_1,fVar11,param_3,0,uVar9,*param_6);
    fVar11 = (float)param_3;
    auVar7 = ZEXT464((uint)(fVar11 + fVar10));
    FUN_1804354e0(*param_1,auVar8._0_8_,fVar11 + fVar10,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,param_2,auVar7._0_8_,0,uVar9,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    auVar5 = ZEXT464((uint)(fVar11 + param_5));
    fVar11 = (fVar11 + param_5) - fVar10;
    auVar6 = ZEXT464((uint)fVar11);
    iVar2 = FUN_1804354e0(*param_1,param_2,fVar11,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar8._0_8_,auVar6._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar8._0_8_,auVar5._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,param_2,auVar5._0_8_,0,uVar9,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    iVar2 = FUN_1804354e0(*param_1,param_2,auVar7._0_8_,0,uVar9,*param_6);
    fVar11 = (float)param_2 + fVar10;
    auVar5 = ZEXT464((uint)fVar11);
    FUN_1804354e0(*param_1,fVar11,auVar7._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar5._0_8_,auVar6._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,param_2,auVar6._0_8_,0,uVar9,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    fVar10 = auVar8._0_4_ - fVar10;
    auVar5 = ZEXT464((uint)fVar10);
    iVar2 = FUN_1804354e0(*param_1,fVar10,auVar7._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar8._0_8_,auVar7._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar8._0_8_,auVar6._0_8_,0,uVar9,*param_6);
    FUN_1804354e0(*param_1,auVar5._0_8_,auVar6._0_8_,0,uVar9,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
  }
  return;
}




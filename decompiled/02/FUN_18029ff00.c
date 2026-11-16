// FUN_18029ff00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029ff00 */

void FUN_18029ff00(undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  float param_5,undefined4 *param_6,uint param_7,float param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 in_ZMM3 [64];
  undefined1 auVar5 [64];
  float fVar6;
  ulonglong uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined4 uVar16;
  float fVar17;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  
  auVar1 = vminss_avx(ZEXT416((uint)param_5),in_ZMM3._0_16_);
  uVar16 = 0;
  local_c8 = (uint)param_2;
  local_d0 = auVar1._0_4_ * 0.5;
  auVar1 = vminss_avx(ZEXT416((uint)local_d0),ZEXT416(param_7));
  auVar12 = ZEXT1664(auVar1);
  pfVar4 = &local_d4;
  if (0.0 <= param_8) {
    pfVar4 = &param_8;
  }
  pfVar3 = &local_d0;
  if (param_8 <= local_d0) {
    pfVar3 = pfVar4;
  }
  local_d4 = 0.0;
  local_cc = auVar1._0_4_;
  fVar17 = *pfVar3;
  auVar5 = ZEXT1664(in_ZMM3._0_16_);
  if (0.0 < fVar17) {
    uVar7 = param_3;
    FUN_1804353e0(*param_1,0);
    iVar2 = FUN_1804354e0(*param_1,param_2,uVar7,0,uVar16,*param_6);
    fVar10 = auVar12._0_4_ + (float)param_2;
    auVar15 = ZEXT464((uint)fVar10);
    FUN_1804354e0(*param_1,fVar10,uVar7,0,uVar16,*param_6);
    fVar6 = (float)uVar7;
    auVar9 = ZEXT464((uint)(fVar6 + fVar17));
    FUN_1804354e0(*param_1,auVar15._0_8_,fVar6 + fVar17,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,param_2,auVar9._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    iVar2 = FUN_1804354e0(*param_1,param_2,auVar9._0_8_,0,uVar16,*param_6);
    fVar10 = (float)param_2 + fVar17;
    auVar14 = ZEXT464((uint)fVar10);
    FUN_1804354e0(*param_1,fVar10,auVar9._0_8_,0,uVar16,*param_6);
    fVar6 = auVar12._0_4_ + fVar6;
    auVar8 = ZEXT464((uint)fVar6);
    FUN_1804354e0(*param_1,auVar14._0_8_,fVar6,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,param_2,auVar8._0_8_,0,uVar16,*param_6);
    fVar10 = (float)param_2;
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    fVar10 = auVar5._0_4_ + fVar10;
    auVar11 = ZEXT464((uint)fVar10);
    fVar10 = fVar10 - auVar12._0_4_;
    auVar13 = ZEXT464((uint)fVar10);
    iVar2 = FUN_1804354e0(*param_1,fVar10,param_3 & 0xffffffff,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,param_3 & 0xffffffff,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar13._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    fVar10 = auVar11._0_4_ - fVar17;
    auVar12 = ZEXT464((uint)fVar10);
    iVar2 = FUN_1804354e0(*param_1,fVar10,auVar9._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar12._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    param_5 = param_5 + (float)param_3;
    auVar9 = ZEXT464((uint)param_5);
    param_5 = param_5 - local_cc;
    auVar5 = ZEXT464((uint)param_5);
    iVar2 = FUN_1804354e0(*param_1,auVar12._0_8_,param_5,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar5._0_8_,0,uVar16,*param_6);
    fVar17 = auVar9._0_4_ - fVar17;
    auVar8 = ZEXT464((uint)fVar17);
    FUN_1804354e0(*param_1,auVar11._0_8_,fVar17,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar12._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    iVar2 = FUN_1804354e0(*param_1,auVar13._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar11._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar13._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    auVar12 = ZEXT464(local_c8);
    iVar2 = FUN_1804354e0(*param_1,local_c8,auVar5._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar14._0_8_,auVar5._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar14._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar12._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
    iVar2 = FUN_1804354e0(*param_1,auVar12._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar15._0_8_,auVar8._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar15._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_1804354e0(*param_1,auVar12._0_8_,auVar9._0_8_,0,uVar16,*param_6);
    FUN_180435650(*param_1,iVar2,iVar2 + 1,iVar2 + 2,iVar2 + 3);
  }
  return;
}




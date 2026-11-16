// FUN_1804635b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804635b0 */

void FUN_1804635b0(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,uint param_5,
                  uint param_6,float param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  ulonglong uVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  
  fVar19 = 0.5;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_3 * DAT_180b0a41c + 0.5)),1);
  auVar18 = ZEXT464(0x3f800000);
  auVar2 = vmaxss_avx(auVar18._0_16_,auVar2);
  auVar14 = ZEXT1664(auVar2);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4[1] + 0.5)),1);
  auVar10 = ZEXT1664(auVar2);
  fVar7 = (float)FUN_1804632d0(param_2,param_3);
  fVar7 = auVar10._0_4_ - fVar7;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar19 + *param_4)),1);
  auVar10 = ZEXT1664(auVar2);
  local_108 = auVar2._0_4_;
  uVar1 = *(uint *)(param_1 + 0x30);
  local_f0._8_4_ = uVar1;
  local_f0._0_8_ = param_1;
  local_f0._12_4_ = 0;
  *(uint *)(param_1 + 0x30) = uVar1 | 0x100000;
  uVar6 = 1;
  fVar12 = 0.0;
  fVar16 = 6.2831855;
  fVar17 = 0.0625;
  local_104 = fVar7;
  do {
    fVar15 = (float)(int)uVar6 * param_7 * fVar19;
    auVar2 = vpcmpeqd_avx(ZEXT416(uVar6),SUB6416(ZEXT464(1),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3ee66666),0),auVar18._0_16_,auVar2);
    fVar9 = auVar2._0_4_ * ((float)(param_6 >> 0x18) / 255.0);
    fVar8 = fVar12;
    if (fVar12 <= fVar9) {
      auVar2 = vminss_avx(auVar18._0_16_,ZEXT416((uint)fVar9));
      fVar8 = auVar2._0_4_;
    }
    uVar5 = (int)(longlong)(fVar8 * 255.0 + fVar19) << 0x18;
    iVar4 = 0;
    do {
      fVar9 = (float)iVar4 * fVar16 * fVar17;
      auVar11 = ZEXT464((uint)fVar9);
      fVar9 = (float)FUN_180637540(fVar9);
      local_110 = fVar9 * fVar15 + auVar10._0_4_;
      fVar9 = (float)FUN_180638e00(auVar11._0_8_);
      local_10c = fVar9 * fVar15 + fVar7;
      uVar13 = auVar14._0_8_;
      if (uVar5 != 0) {
        lVar3 = param_2;
        if (param_2 == 0) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        if (auVar14._0_4_ == fVar12) {
          uVar13 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
        }
        local_100 = *(undefined8 *)(param_1 + 0x60);
        uStack_f8 = *(undefined8 *)(param_1 + 0x68);
        FUN_1804ea5f0(lVar3,param_1,uVar13,&local_110,uVar5 | param_6 & 0xffffff,&local_100,
                      &DAT_1807d4e0c,0,fVar12,0);
      }
      uVar13 = auVar14._0_8_;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 3);
  *(uint *)(param_1 + 0x30) = uVar1;
  if ((param_5 & 0xff000000) != 0) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    if (auVar14._0_4_ == fVar12) {
      uVar13 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
    }
    local_100 = *(undefined8 *)(param_1 + 0x60);
    uStack_f8 = *(undefined8 *)(param_1 + 0x68);
    FUN_1804ea5f0(param_2,param_1,uVar13,&local_108,param_5,&local_100,&DAT_1807d4e0c,0,fVar12,0);
  }
  return;
}




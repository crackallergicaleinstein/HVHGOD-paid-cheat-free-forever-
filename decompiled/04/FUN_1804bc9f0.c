// FUN_1804bc9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc9f0 */

void FUN_1804bc9f0(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  
  uVar1 = *param_2;
  local_res8._0_4_ = (float)uVar1;
  local_res8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  if ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3c8);
    auVar2 = *(undefined1 (*) [16])(lVar3 + 0x228);
    auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x58)),ZEXT416(*(uint *)(lVar3 + 100)));
    auVar6 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x5c)),ZEXT416(*(uint *)(lVar3 + 100)));
    auVar7 = vshufps_avx(auVar2,auVar2,0x55);
    fVar12 = auVar7._0_4_ - -auVar6._0_4_;
    auVar7 = vshufps_avx(auVar2,auVar2,0xaa);
    fVar8 = auVar2._0_4_ - -auVar5._0_4_;
    uVar9 = *(uint *)(lVar3 + 0x14) & 8;
    auVar2 = vshufps_avx(auVar2,auVar2,0xff);
    if (((*(uint *)(lVar3 + 0x14) & 0x8800) == 0) || (uVar9 != 0)) {
      if (fVar8 <= (float)local_res8) {
        auVar5 = vminss_avx(ZEXT416((uint)(-auVar5._0_4_ + auVar7._0_4_)),
                            ZEXT416((uint)(float)local_res8));
        fVar8 = auVar5._0_4_;
      }
      local_res8._0_4_ = fVar8;
      if (uVar9 != 0) {
        if (fVar12 <= local_res8._4_4_) {
          auVar2 = vminss_avx(ZEXT416((uint)(-auVar6._0_4_ + auVar2._0_4_)),
                              ZEXT416((uint)local_res8._4_4_));
          fVar12 = auVar2._0_4_;
        }
        goto LAB_1804bcadc;
      }
    }
  }
  fVar12 = local_res8._4_4_;
LAB_1804bcadc:
  fVar8 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
  fVar4 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
  local_res10 = (*(float *)(param_1 + 0x28) - (float)local_res8) * *param_3 + (float)local_res8;
  auVar11 = ZEXT464((uint)local_res10);
  local_res14 = (*(float *)(param_1 + 0x2c) - fVar12) * param_3[1] + fVar12;
  auVar10 = ZEXT464((uint)local_res14);
  local_res10 = (((float)local_res8 - fVar4) * *param_3 + fVar4) - local_res10;
  local_res14 = ((fVar12 - fVar8) * param_3[1] + fVar8) - local_res14;
  local_res8 = uVar1;
  FUN_1804bc370(&local_res8,param_1,&local_res10);
  auVar2 = vunpcklps_avx(auVar11._0_16_,auVar10._0_16_);
  *(longlong *)param_4 = auVar2._0_8_;
  if (*param_3 == 0.0) {
    *param_4 = *param_4 - ((float)local_res8 - local_res10);
  }
  if (param_3[1] == 0.0) {
    param_4[1] = param_4[1] - (local_res8._4_4_ - local_res14);
  }
  *param_5 = local_res8;
  return;
}




// FUN_1804b3670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b3670 */

void FUN_1804b3670(longlong param_1,float *param_2,float *param_3,char *param_4,char *param_5,
                  undefined8 *param_6,float *param_7,float *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  byte bVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [48];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_res10 = *(undefined8 *)param_2;
  fVar12 = 0.0;
  if (param_6 == (undefined8 *)0x0) {
    if (param_4 == param_5) {
      local_58 = 0.0;
      local_54 = *(undefined4 *)(DAT_180bb8ae8 + 0x11e0);
    }
    else {
      uVar13 = 0;
      FUN_1804ea040(&param_6,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                    *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff,0,param_4,param_5,param_5,0);
      local_58 = (float)(int)((uint)((float)(int)param_6._0_4_ < param_6._0_4_) + (int)param_6._0_4_
                             );
      local_54 = param_6._4_4_;
    }
    pfVar9 = &local_58;
  }
  else {
    local_50 = *param_6;
    pfVar9 = (float *)&local_50;
  }
  pfVar11 = param_8 + 2;
  pfVar10 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar11 = param_3;
    pfVar10 = param_2;
  }
  fVar7 = local_res10._4_4_;
  if ((*pfVar11 <= *pfVar9 + (float)local_res10) || (pfVar11[1] <= pfVar9[1] + local_res10._4_4_)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (param_8 != (float *)0x0) {
    if (((float)local_res10 < *pfVar10) || (local_res10._4_4_ < pfVar10[1])) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    bVar5 = (bool)(bVar5 | bVar6);
  }
  if (fVar12 < *param_7) {
    auVar1 = vmaxss_avx(ZEXT416((uint)(float)local_res10),
                        ZEXT416((uint)(((*param_3 - (float)local_res10) - *pfVar9) * *param_7 +
                                      (float)local_res10)));
    local_res10 = CONCAT44(local_res10._4_4_,auVar1._0_4_);
  }
  if (fVar12 < param_7[1]) {
    auVar1 = vmaxss_avx(ZEXT416((uint)fVar7),
                        ZEXT416((uint)(((param_3[1] - fVar7) - pfVar9[1]) * param_7[1] + fVar7)));
    local_res10 = CONCAT44(auVar1._0_4_,(float)local_res10);
  }
  auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
  auVar4 = vshufps_avx(auVar1,auVar1,0xff);
  local_48._0_12_ = auVar1._0_12_;
  local_48._12_4_ = auVar4._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  if (bVar5) {
    uVar8 = FUN_1804b1120(local_48);
    if ((uVar8 & 0xff000000) == 0) {
      return;
    }
    if (param_4 == param_5) {
      return;
    }
    if (*param_4 == '\0') {
      return;
    }
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
    local_48._4_4_ = auVar1._4_4_;
    auVar4 = vmaxss_avx(auVar1,ZEXT416((uint)*pfVar10));
    auVar2 = vmaxss_avx(ZEXT416((uint)local_48._4_4_),ZEXT416((uint)pfVar10[1]));
    local_48._8_4_ = auVar1._8_4_;
    auVar3 = vminss_avx(ZEXT416((uint)local_48._8_4_),ZEXT416((uint)*pfVar11));
    local_48._4_4_ = auVar2._0_4_;
    local_48._0_4_ = auVar4._0_4_;
    local_48._12_4_ = auVar1._12_4_;
    auVar1 = vminss_avx(ZEXT416((uint)local_48._12_4_),ZEXT416((uint)pfVar11[1]));
    local_48._8_4_ = auVar3._0_4_;
    local_48._12_4_ = auVar1._0_4_;
    uVar14 = 1;
  }
  else {
    uVar8 = FUN_1804b1120(local_48);
    if ((uVar8 & 0xff000000) == 0) {
      return;
    }
    if (param_4 == param_5) {
      return;
    }
    if (*param_4 == '\0') {
      return;
    }
    local_48._0_16_ = *(undefined1 (*) [16])(param_1 + 0x60);
    uVar14 = 0;
  }
  FUN_1804ea5f0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x20),param_1,
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28),&local_res10,uVar8,local_48,
                param_4,param_5,CONCAT44(uVar13,fVar12),uVar14);
  return;
}




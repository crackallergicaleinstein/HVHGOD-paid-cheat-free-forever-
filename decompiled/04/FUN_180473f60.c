// FUN_180473f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180473f60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180473f60(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  longlong lVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auStack_148 [32];
  float *local_128;
  int *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8 [2];
  float local_a0 [4];
  ulonglong local_90;
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  uVar8 = (ulonglong)param_2;
  local_e8 = param_4;
  local_e0 = param_3;
  if (DAT_180cd68b8 == 0) {
    if (DAT_180b909b0 == 0) {
      ppuVar7 = &PTR_s_No_Skin_18078acd0 + uVar8 * 3;
    }
    else {
      if ((ulonglong)
          ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18) <=
          uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_18047c010();
      }
      ppuVar7 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x40) + uVar8 * 0x18);
    }
    sVar5 = *(short *)((longlong)ppuVar7 + 0x16);
    if (sVar5 < 0) {
      sVar5 = *(short *)((longlong)ppuVar7 + 0x12);
    }
    local_118 = (ulonglong)local_118._4_4_ << 0x20;
    local_120 = local_a8;
    local_128 = local_a0;
    local_a0[0] = 0.0;
    local_a0[1] = 0.0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_180473450((int)sVar5,&local_e0,&local_e8,1);
    FUN_180473680(param_1,(int)sVar5,local_a0,local_a8);
  }
  else {
    local_b8 = local_a0;
    fVar11 = 0.0;
    local_b0 = local_a0 + 2;
    local_a0[2] = 0.0;
    local_a0[0] = 0.0;
    local_a8[0] = param_2;
    local_c0 = (**(code **)(*(longlong *)DAT_180cd68b8 + 0x10))
                         (DAT_180cd68b8,local_a8,&local_b0,&local_b8);
    if (((local_c0 == 0) || (local_a0[2] <= fVar11)) || (local_a0[0] <= fVar11)) {
      if ((DAT_180cd66f8 == 0) ||
         (local_a8[0] = param_2,
         lVar6 = (**(code **)(*(longlong *)DAT_180cd66f8 + 0x10))(DAT_180cd66f8,local_a8),
         lVar6 == 0)) {
        local_b8 = (float *)CONCAT44((local_e0._4_4_ + local_e8._4_4_) * 0.5,
                                     ((float)local_e0 + (float)local_e8) * 0.5);
        local_128 = (float *)CONCAT44(local_128._4_4_,0x41600000);
        FUN_180463dc0(param_1,&local_b8,DAT_1808da474,&DAT_18082a240);
      }
      else {
        auVar10 = ZEXT464(0x41100000);
        fVar9 = 0.5;
        local_f8 = 0;
        local_108 = 0;
        auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.0 + 0.5)),1);
        local_110 = 0;
        auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
        local_118 = 0;
        local_120 = (int *)lVar6;
        local_128._0_4_ = fVar11;
        FUN_1804ea040(&local_b8,DAT_180c62ca8,auVar1._0_8_,0x7f7fffff);
        local_118 = 0;
        local_b8 = (float *)CONCAT44((local_e0._4_4_ + local_e8._4_4_) * fVar9 - DAT_180b0a41c * 5.0
                                     ,(((float)local_e0 + (float)local_e8) - (float)local_b8) *
                                      fVar9);
        local_128 = (float *)CONCAT44(local_128._4_4_,DAT_1808da474);
        local_120 = (int *)lVar6;
        FUN_180463450(param_1,DAT_180c62ca8,auVar10._0_8_,&local_b8);
      }
    }
    else {
      auVar1 = vminss_avx(ZEXT416((uint)(((float)local_e8 - (float)local_e0) / local_a0[2])),
                          ZEXT416((uint)((local_e8._4_4_ - local_e0._4_4_) / local_a0[0])));
      fVar9 = auVar1._0_4_ * local_a0[0] * 0.5;
      fVar2 = (local_e8._4_4_ + local_e0._4_4_) * 0.5;
      fVar3 = auVar1._0_4_ * local_a0[2] * 0.5;
      fVar4 = ((float)local_e8 + (float)local_e0) * 0.5;
      local_a8[0] = 0x3f800000;
      local_a8[1] = 0x3f800000;
      local_120 = local_a8;
      local_118 = CONCAT44(local_118._4_4_,0xffffffff);
      local_b0 = (float *)CONCAT44(fVar2 + fVar9,fVar4 + fVar3);
      local_128 = &local_d8;
      local_c8 = 0;
      local_b8 = (float *)CONCAT44(fVar2 - fVar9,fVar4 - fVar3);
      local_d8 = fVar11;
      local_d4 = fVar11;
      FUN_1804e0320(param_1,&local_c8,&local_b8,&local_b0);
    }
  }
}




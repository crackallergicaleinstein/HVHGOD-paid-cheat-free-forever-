// FUN_1802af0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802af0d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802af0d0(float *param_1)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auStack_a8 [32];
  float local_88 [4];
  undefined4 **local_78;
  undefined8 local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (DAT_180c64058 == 0) {
    *param_1 = 99.0;
    param_1[1] = 350.0;
    param_1[2] = 1.2;
  }
  else {
    if ((DAT_180c6e670 & 1) == 0) {
      DAT_180c6e670 = DAT_180c6e670 | 1;
      local_58[0] = 0x217066de;
      local_50 = 0;
      local_68 = local_58;
      local_60 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_68);
      DAT_180c6e678 = local_50;
    }
    fVar10 = 0.0;
    if (DAT_180c6e678 == 0) {
      auVar8 = SUB6416(ZEXT464(0x3f800000),0);
    }
    else {
      lVar4 = DAT_180c6e678 + 0x58;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      uVar5 = 0;
      if (lVar4 != 0) {
        local_88[0] = fVar10;
        cVar1 = FUN_1804514f0(local_88,lVar4,4);
        if (cVar1 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      auVar7 = ZEXT464((uint)local_88[0]);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      auVar8 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(0),0));
      auVar8 = vblendvps_avx(auVar7._0_16_,SUB6416(ZEXT464(0x3f800000),0),auVar8);
    }
    lVar4 = DAT_180c64058;
    auVar9 = ZEXT464(0x3f800000);
    auVar7 = ZEXT1664(auVar8);
    sVar2 = thunk_FUN_180624430(auVar8._0_8_);
    fVar6 = auVar7._0_4_;
    if ((0 < sVar2) || (fVar6 < fVar10)) {
      fVar6 = auVar9._0_4_;
    }
    *param_1 = fVar6 * 99.0;
    if ((DAT_180c6e680 & 1) == 0) {
      DAT_180c6e680 = DAT_180c6e680 | 1;
      local_68 = (undefined4 *)CONCAT44(local_68._4_4_,0x30fa765b);
      local_60 = 0;
      local_78 = &local_68;
      local_70 = 1;
      FUN_18044c9c0(lVar4,&local_78);
      DAT_180c6e688 = local_60;
    }
    if (DAT_180c6e688 == 0) {
      auVar8 = auVar9._0_16_;
    }
    else {
      lVar4 = DAT_180c6e688 + 0x58;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      uVar5 = 0;
      if (lVar4 != 0) {
        local_88[0] = fVar10;
        cVar1 = FUN_1804514f0(local_88,lVar4,4);
        if (cVar1 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      auVar7 = ZEXT464((uint)local_88[0]);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      auVar8 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(0),0));
      auVar8 = vblendvps_avx(auVar7._0_16_,auVar9._0_16_,auVar8);
    }
    auVar7 = ZEXT1664(auVar8);
    sVar2 = thunk_FUN_180624430(auVar8._0_8_);
    fVar6 = auVar7._0_4_;
    if ((0 < sVar2) || (fVar6 < fVar10)) {
      fVar6 = auVar9._0_4_;
    }
    param_1[1] = fVar6 * 350.0;
    param_1[2] = 1.2;
  }
}




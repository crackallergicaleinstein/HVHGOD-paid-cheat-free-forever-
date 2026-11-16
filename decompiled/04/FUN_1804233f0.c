// FUN_1804233f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804233f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804233f0(undefined8 *param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_118 [32];
  uint local_f8 [2];
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  if (*param_2 != '\0') {
    auVar6 = ZEXT864((ulonglong)auStack_e8._8_8_);
    auVar8 = ZEXT1664(_DAT_18086d3c0);
    uVar9 = 0x3f800000;
    fVar10 = 180.0;
    fVar11 = 3.1415927;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f80000000000000;
    auVar7 = ZEXT864(0);
    do {
      iVar3 = strncmp(param_2,"matrix",6);
      if (iVar3 == 0) {
        local_f8[0] = 0;
        iVar3 = FUN_180422ff0(param_2,&local_c0,6,local_f8);
        if (local_f8[0] == 6) {
          auVar6 = ZEXT864(local_b0);
          local_f0 = local_c0;
          auStack_e8._8_8_ = local_b0;
          auStack_e8._0_8_ = uStack_b8;
        }
LAB_1804236fd:
        if (iVar3 == 0) goto LAB_180423735;
        local_c0 = local_f0;
        uStack_b8 = auStack_e8._0_8_;
        local_b0 = auVar6._0_8_;
        FUN_1804210f0(&local_c0,param_1);
        *param_1 = local_c0;
        param_1[1] = uStack_b8;
        param_1[2] = local_b0;
        lVar4 = (longlong)iVar3;
      }
      else {
        iVar3 = strncmp(param_2,"translate",9);
        if (iVar3 == 0) {
          local_f8[0] = 0;
          iVar3 = FUN_180422ff0(param_2,&local_d0,2,local_f8);
          auVar1 = vpcmpeqd_avx(ZEXT416(local_f8[0]),SUB6416(ZEXT464(1),0));
          auVar1 = vblendvps_avx(ZEXT416(local_cc),auVar7._0_16_,auVar1);
          auVar2 = vunpcklps_avx(ZEXT416(local_d0),auVar1);
          auVar6 = ZEXT1664(auVar2);
          local_cc = auVar1._0_4_;
          auStack_e8._8_8_ = auVar2._0_8_;
          auStack_e8._0_8_ = uVar13;
          local_f0 = uVar12;
          goto LAB_1804236fd;
        }
        iVar3 = strncmp(param_2,"scale",5);
        if (iVar3 == 0) {
          local_f8[0] = 0;
          iVar3 = FUN_180422ff0(param_2,&local_c8,2,local_f8);
          auVar1 = vpcmpeqd_avx(ZEXT416(local_f8[0]),SUB6416(ZEXT464(1),0));
          auVar1 = vblendvps_avx(ZEXT416(local_c4),ZEXT416(local_c8),auVar1);
          auVar2 = vunpcklps_avx(auVar7._0_16_,auVar7._0_16_);
          auVar6 = ZEXT1664(auVar2);
          local_c4 = auVar1._0_4_;
          local_f0 = CONCAT44(auVar7._0_4_,local_c8);
          auStack_e8._4_4_ = local_c4;
          auStack_e8._0_4_ = auVar7._0_4_;
          auStack_e8._8_8_ = auVar2._0_8_;
          goto LAB_1804236fd;
        }
        iVar3 = strncmp(param_2,"rotate",6);
        if (iVar3 == 0) {
          iVar3 = FUN_1804230f0(&local_f0,param_2);
          auVar6 = ZEXT864((ulonglong)auStack_e8._8_8_);
          goto LAB_1804236fd;
        }
        iVar3 = strncmp(param_2,"skewX",5);
        if (iVar3 == 0) {
          local_f8[0] = 0;
          iVar3 = FUN_180422ff0(param_2,&local_d8,1,local_f8);
          local_f0 = CONCAT44(auVar7._0_4_,uVar9);
          auStack_e8._0_4_ = FUN_180639470((local_d8 / fVar10) * fVar11);
          auVar1 = vunpcklps_avx(auVar7._0_16_,auVar7._0_16_);
          auVar6 = ZEXT1664(auVar1);
          auStack_e8._4_4_ = uVar9;
          auStack_e8._8_8_ = auVar1._0_8_;
          goto LAB_1804236fd;
        }
        iVar3 = strncmp(param_2,"skewY",5);
        if (iVar3 == 0) {
          local_f8[0] = 0;
          iVar3 = FUN_180422ff0(param_2,&local_d4,1,local_f8);
          local_f0 = CONCAT44(local_f0._4_4_,uVar9);
          uVar5 = FUN_180639470((local_d4 / fVar10) * fVar11);
          local_f0 = CONCAT44(uVar5,(undefined4)local_f0);
          auStack_e8 = auVar8._0_16_;
          auVar1 = vunpckhpd_avx(auStack_e8,auStack_e8);
          auVar6 = ZEXT1664(auVar1);
          goto LAB_1804236fd;
        }
LAB_180423735:
        lVar4 = 1;
      }
      param_2 = param_2 + lVar4;
    } while (*param_2 != '\0');
  }
}




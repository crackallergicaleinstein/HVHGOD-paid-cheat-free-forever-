// FUN_18045ccc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045ccc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045ccc0(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [32];
  float *local_d8;
  undefined4 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_a8 [4];
  float local_a4;
  float local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  float local_78;
  float local_74;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 19.656 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.129 + 0.5)),1);
    local_a8[0] = 0.5 < *(float *)(param_1 + 0x58);
    local_68 = CONCAT44(*(float *)(param_2 + 0x10) - auVar4._0_4_ * 0.5,param_3 - auVar3._0_4_);
    local_d8 = (float *)CONCAT44(local_d8._4_4_,0x3f47ae14);
    cVar6 = FUN_1804aaf40("##value_toggle",local_a8,&local_68,1);
    if (cVar6 != '\0') {
      auVar3 = vpcmpeqd_avx(ZEXT116(local_a8[0]),SUB6416(ZEXT464(0),0));
      auVar3 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar3);
      *(int *)(param_1 + 0x58) = auVar3._0_4_;
    }
  }
  else if (iVar2 == 1) {
    local_c0 = *(undefined1 **)(param_1 + 0x38);
    local_d8 = (float *)(param_1 + 0x58);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_3 - DAT_180b0a41c * 87.0) + 0.5)),1);
    local_b8 = *(undefined4 *)(param_1 + 0x34);
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x30));
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0x2c));
    FUN_1804ad940("##value_slider",auVar3._0_8_,param_2,*(undefined4 *)(param_2 + 0x10));
  }
  else if (iVar2 == 2) {
    local_a4 = (float)(int)*(float *)(param_1 + 0x58);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.0 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_3 - DAT_180b0a41c * 74.0) + 0.5)),1);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_2 + 0x10) - auVar3._0_4_ * 0.5) + 0.5)),1
                         );
    local_74 = auVar5._0_4_ + auVar3._0_4_;
    local_c0 = local_98;
    local_c8 = local_88;
    local_98 = (undefined1  [16])0x0;
    local_58 = *(undefined1 (*) [16])(param_1 + 0x40);
    local_d8 = &local_a4;
    local_88 = (undefined1  [16])0x0;
    local_68 = CONCAT44(auVar5._0_4_,auVar4._0_4_);
    local_78 = param_3;
    cVar6 = FUN_1804abea0("##value_combo",&local_68,&local_78,local_58);
    if (cVar6 != '\0') {
      *(float *)(param_1 + 0x58) = (float)(int)local_a4;
    }
  }
  else if (iVar2 == 3) {
    fVar1 = *(float *)(param_1 + 0x58);
    local_48 = 0;
    uVar9 = 0x18;
    if (*(ulonglong *)(param_1 + 0x48) < 0x18) {
      uVar9 = *(ulonglong *)(param_1 + 0x48);
    }
    uVar8 = 0;
    uVar7 = 0;
    local_58 = (undefined1  [16])0x0;
    if (uVar9 != 0) {
      do {
        local_58[uVar7] = (byte)((uint)(longlong)fVar1 >> ((uint)uVar7 & 0x1f)) & 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
    local_68 = *(undefined8 *)(param_1 + 0x40);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.0 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_3 - DAT_180b0a41c * 74.0) + 0.5)),1);
    local_78 = auVar4._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_2 + 0x10) - auVar3._0_4_ * 0.5) + 0.5)),1
                         );
    local_d0 = &DAT_1808007b0;
    local_74 = auVar4._0_4_;
    local_a0 = local_74 + auVar3._0_4_;
    local_d8 = (float *)local_58;
    local_a4 = param_3;
    local_60 = uVar9;
    cVar6 = FUN_1804ac430("##value_multi",&local_78,&local_a4,&local_68);
    if (cVar6 != '\0') {
      uVar7 = 0;
      if (uVar9 != 0) {
        do {
          if (local_58[uVar7] != '\0') {
            uVar8 = uVar8 | 1 << ((uint)uVar7 & 0x1f);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      *(float *)(param_1 + 0x58) = (float)uVar8;
    }
  }
}




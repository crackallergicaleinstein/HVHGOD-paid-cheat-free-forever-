// FUN_18031a9e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a9e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031a9e0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  short sVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined4 local_168;
  uint uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_13c;
  undefined7 uStack_137;
  undefined1 local_128;
  char local_127;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a0;
  uint local_9c;
  undefined1 local_98;
  char local_74;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  if (*(char *)*param_1 == '\0') goto LAB_18031aa71;
  if (*(int *)(param_1[1] + 0x98) < 0x6e) {
    if (DAT_180bda168 != 0) {
      plVar5 = (longlong *)FUN_18017bf40(&local_168);
      if ((*plVar5 == DAT_180bda168) || (DAT_180bda168 <= *plVar5)) {
        if (DAT_180bbeaba == '\0') {
          DAT_180bda164 = DAT_180bda164 + 1;
          DAT_180bbeaba = '\x01';
        }
        goto LAB_18031aa66;
      }
    }
    *(int *)(param_1[1] + 0x98) = *(int *)(param_1[1] + 0x98) + 1;
    uVar6 = FUN_18031a940(param_1[2],param_3,param_4,param_5);
    uVar3 = uStack_164;
    uStack_164 = uStack_164 & 0xffffff00;
    local_178 = CONCAT44(uVar3,local_168) & 0xffffff00ffffffff;
    FUN_1804136a0(uVar6,&local_128,*(undefined8 *)param_1[3],param_1[4]);
    if (local_74 != '\0') {
      if (local_127 != '\0') {
        auVar7 = ZEXT464(local_d0);
        sVar4 = thunk_FUN_180624430(local_d0);
        if (sVar4 < 1) {
          auVar9 = ZEXT464(local_cc);
          sVar4 = thunk_FUN_180624430(local_cc);
          if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(local_c8), sVar4 < 1)) {
            auVar8 = ZEXT464(local_c4);
            sVar4 = thunk_FUN_180624430(local_c4);
            if (sVar4 < 1) {
              auVar10 = ZEXT464(local_c0);
              sVar4 = thunk_FUN_180624430(local_c0);
              if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(local_bc), sVar4 < 1)) {
                auVar1 = vunpcklps_avx(auVar7._0_16_,auVar9._0_16_);
                uStack_15c = auVar1._0_4_;
                uStack_158 = auVar1._4_4_;
                auVar2 = vunpcklps_avx(auVar8._0_16_,auVar10._0_16_);
                auVar1._4_4_ = uStack_13c;
                auVar1._0_4_ = local_a8;
                auVar1[8] = local_98;
                auVar1._9_7_ = uStack_137;
                auVar1 = vinsertps_avx(auVar1,ZEXT416(local_a0),0x10);
                auVar1 = vinsertps_avx(auVar1,ZEXT416(local_9c),0x30);
                local_160 = CONCAT31(local_160._1_3_,1);
                *param_2 = CONCAT44(uStack_15c,local_160);
                param_2[1] = CONCAT44(local_c8,uStack_158);
                param_2[2] = auVar2._0_8_;
                param_2[3] = CONCAT44(local_ac,local_bc);
                *(undefined1 (*) [16])(param_2 + 4) = auVar1;
                *(undefined1 *)(param_2 + 6) = 1;
              }
            }
          }
        }
      }
      *(undefined1 *)(param_2 + 6) = 0;
    }
  }
  else {
LAB_18031aa66:
    *(undefined1 *)(param_1[1] + 0x9d) = 1;
  }
LAB_18031aa71:
  *(undefined1 *)(param_2 + 6) = 0;
}




// FUN_1802b25d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b25d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b25d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,char param_6,float param_7,float param_8,char param_9,
                  longlong param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1b8 [32];
  float local_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  float local_168;
  undefined4 local_158;
  char *local_148;
  longlong local_140;
  undefined1 local_138 [16];
  int local_128;
  char local_110;
  char local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  uVar19 = 0;
  if (param_8 <= 0.0) {
  }
  FUN_1802b00c0(local_138,param_11);
  cVar14 = (char)_local_108;
  if (param_9 == '\0') {
    if (cVar14 == '\0') {
    }
    if (local_128 < 1) {
    }
  }
  if ((cVar14 == '\0') || (local_110 == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  FUN_1802b02f0(&local_100,*(undefined4 *)(param_10 + 0x68),param_10,uVar8);
  FUN_1802b02f0(&local_f8,*(undefined4 *)(param_10 + 0x6c),param_10,uVar8);
  local_158 = (float)CONCAT13((char)(int)((float)*(byte *)(param_10 + 0x73) * param_8),
                              *(undefined3 *)(param_10 + 0x70));
  local_190 = CONCAT44(local_190._4_4_,0x20);
  local_198 = local_158;
  FUN_180432510(param_2,param_3,param_4,0x41900000);
  fVar17 = (float)local_f8._3_1_ * param_8;
  uVar9 = (uint)(float)local_f8;
  local_158 = (float)CONCAT13((char)(int)fVar17,(int3)local_f8);
  iVar10 = 9;
  if (param_9 == '\0') {
    local_f0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    uVar7 = FUN_18015ba30(local_f0,"hegrenade",9);
    plVar5 = (longlong *)FUN_1803db750(uVar7,local_f0,0x3f0ccccd);
    FUN_18015c010(local_f0);
    if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) goto LAB_1802b29d5;
    local_198 = (float)*(int *)((longlong)plVar5 + 0x24);
    local_168 = (float)(((((int)fVar17 & 0xffU) << 8 | (uint)local_f8._2_1_) << 8 |
                        (uint)local_f8._1_1_) << 8 | uVar9 & 0xff);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_4 - local_198 * 0.5)),1);
    uVar7 = auVar2._0_8_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_3 - (float)(int)plVar5[4] * 0.5)),1
                         );
    uVar1 = auVar2._0_8_;
    local_190 = *plVar5;
    local_180 = uVar19;
  }
  else {
    if ((DAT_180cd3e00 & 1) == 0) {
      DAT_180cd3e00 = DAT_180cd3e00 | 1;
      DAT_180cd3e08 = 0;
      _DAT_180cd3e10 = 0;
      atexit(FUN_180662cd0);
    }
    if (DAT_180c6e66c == '\0') {
      local_148 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"32\" height=\"32\" viewBox=\"0 0 24 24\"><path fill=\"#ffffff\" d=\"M12 23a7.5 7.5 0 0 1-5.138-12.963C8.204 8.774 11.5 6.5 11 1.5c6 4 9 8 3 14c1 0 2.5 0 5-2.47c.27.773.5 1.604.5 2.47A7.5 7.5 0 0 1 12 23\"/></svg>"
      ;
      local_140 = 0xfa;
      local_190 = 0;
      local_198 = -1.8848546e-38;
      uStack_194 = 1;
      FUN_180437bd0(&local_f8,&local_148,0x3f400000,&DAT_180cd3e10);
      plVar5 = local_f8;
      lVar12 = DAT_180cd3e08;
      local_f8 = (longlong *)0x0;
      DAT_180cd3e08 = (longlong)plVar5;
      if (lVar12 != 0) {
        (**(code **)(*(longlong *)lVar12 + 0x10))();
      }
      plVar5 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)0x0;
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      DAT_180c6e66c = '\x01';
    }
    plVar5 = (longlong *)0x0;
    if (DAT_180cd3e08 != 0) {
      plVar5 = &DAT_180cd3e08;
    }
    if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) goto LAB_1802b29d5;
    local_198 = (float)*(int *)((longlong)plVar5 + 0xc);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_4 - local_198 * 0.5)),1);
    uVar7 = auVar2._0_8_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_3 - (float)(int)plVar5[1] * 0.5)),1
                         );
    uVar1 = auVar2._0_8_;
    local_168 = local_158;
    local_190 = *plVar5;
    local_180 = uVar19;
  }
  local_170 = 0x3f800000;
  local_178 = 0x3f800000;
  local_188 = local_180;
  FUN_180435220(param_2,uVar1,uVar7);
LAB_1802b29d5:
  uVar9 = local_100;
  fVar17 = param_7 * 6.2831855;
  if (0.01 < fVar17) {
    fVar24 = (float)local_100._3_1_;
    local_158 = (float)CONCAT13((char)(int)(fVar24 * param_8),(int3)local_100);
    iVar15 = 3;
    if (3 < (int)(param_7 * 32.0)) {
      iVar15 = (int)(param_7 * 32.0);
    }
    local_f0 = (undefined1  [16])0x0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_e0._8_8_;
    local_e0 = auVar3 << 0x40;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar15 + 1;
    uVar6 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    if (uVar6 != 0) {
      if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar7 = FUN_18015bca0(uVar6 * 4);
      FUN_18063aed0(uVar7,local_f0._0_8_,local_f0._8_8_ - local_f0._0_8_);
      FUN_180158f30(local_f0,uVar7,0,uVar6);
    }
    iVar11 = 0;
    if (-1 < iVar15) {
      fVar22 = (float)iVar15;
      fVar23 = 1.5707964;
      fVar20 = 22.0;
      do {
        fVar16 = ((float)iVar11 / fVar22) * fVar17 - fVar23;
        auVar18 = ZEXT464((uint)fVar16);
        fVar16 = (float)FUN_180637540(fVar16);
        local_f8._0_4_ = fVar16 * fVar20 + (float)param_3;
        FUN_1802aa650(local_f0,&local_f8);
        fVar16 = (float)FUN_180638e00(auVar18._0_8_);
        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,fVar16 * fVar20 + (float)param_4);
        FUN_1802aa650(local_f0,&local_f8);
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar15);
    }
    uVar7 = local_f0._0_8_;
    lVar12 = (longlong)(local_f0._8_8_ - local_f0._0_8_) >> 2;
    local_148 = (char *)local_f0._0_8_;
    local_198 = 2.75;
    local_140 = lVar12;
    FUN_180433590(param_2,&local_148,local_158,0);
    if (*(char *)(param_10 + 0x78) != '\0') {
      local_148 = (char *)uVar7;
      local_198 = 4.75;
      local_140 = lVar12;
      FUN_180433590(&DAT_180bbb038,&local_148,
                    ((((int)(fVar24 * *(float *)(param_10 + 0xe0) * param_8) & 0xffU) << 8 |
                     local_100 >> 0x10 & 0xff) << 8 | local_100 >> 8 & 0xff) << 8 | uVar9 & 0xff,0);
    }
    FUN_180159650(local_f0);
    cVar14 = local_108;
  }
  uVar13 = (uint)local_100._3_1_;
  if (param_6 != '\0') {
    auVar18 = ZEXT464(param_5);
    fVar17 = (float)FUN_180637540(param_5);
    local_158 = fVar17 * 36.5 + (float)param_3;
    fVar17 = (float)FUN_180638e00(auVar18._0_8_);
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,fVar17 * 36.5 + (float)param_4);
    auVar21 = ZEXT464((uint)(auVar18._0_4_ - 0.45));
    auVar18 = ZEXT464((uint)(auVar18._0_4_ + 0.45));
    local_f0 = (undefined1  [16])0x0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_e0._8_8_;
    local_e0 = auVar4 << 0x40;
    uVar7 = FUN_18015bca0(0x68);
    FUN_18063aed0(uVar7,local_f0._0_8_,local_f0._8_8_ - local_f0._0_8_);
    FUN_180158f30(local_f0,uVar7,0,0x1a);
    FUN_1802aa650(local_f0,&local_158);
    FUN_1802aa650(local_f0,&local_f8);
    fVar17 = (float)FUN_180637540(auVar18._0_8_);
    fVar24 = 25.5;
    local_158 = fVar17 * 25.5 + (float)param_3;
    FUN_1802aa650(local_f0,&local_158);
    fVar17 = (float)FUN_180638e00(auVar18._0_8_);
    local_158 = fVar17 * fVar24 + (float)param_4;
    FUN_1802aa650(local_f0,&local_158);
    fVar17 = auVar18._0_4_ - auVar21._0_4_;
    fVar20 = 10.0;
    do {
      fVar22 = ((float)iVar10 / fVar20) * fVar17 + auVar21._0_4_;
      auVar18 = ZEXT464((uint)fVar22);
      fVar22 = (float)FUN_180637540(fVar22);
      local_158 = fVar22 * fVar24 + (float)param_3;
      FUN_1802aa650(local_f0,&local_158);
      fVar22 = (float)FUN_180638e00(auVar18._0_8_);
      local_158 = fVar22 * fVar24 + (float)param_4;
      FUN_1802aa650(local_f0,&local_158);
      iVar10 = iVar10 + -1;
    } while (0 < iVar10);
    fVar17 = (float)FUN_180637540(auVar21._0_8_);
    local_158 = fVar17 * fVar24 + (float)param_3;
    FUN_1802aa650(local_f0,&local_158);
    fVar17 = (float)FUN_180638e00(auVar21._0_8_);
    local_158 = fVar17 * fVar24 + (float)param_4;
    FUN_1802aa650(local_f0,&local_158);
    uVar7 = local_f0._0_8_;
    lVar12 = (longlong)(local_f0._8_8_ - local_f0._0_8_) >> 2;
    fVar17 = (float)uVar13;
    local_148 = (char *)local_f0._0_8_;
    uVar9 = uVar9 & 0xff;
    uVar13 = local_100 >> 0x10 & 0xff;
    local_140 = lVar12;
    FUN_180432700(param_2,&local_148,
                  ((((int)(fVar17 * param_8) & 0xffU) << 8 | uVar13) << 8 | local_100 >> 8 & 0xff)
                  << 8 | uVar9);
    if (*(char *)(param_10 + 0x78) != '\0') {
      local_148 = (char *)uVar7;
      local_140 = lVar12;
      FUN_180432700(&DAT_180bbb038,&local_148,
                    ((((int)(fVar17 * *(float *)(param_10 + 0xe0) * param_8) & 0xffU) << 8 | uVar13)
                     << 8 | local_100 >> 8 & 0xff) << 8 | uVar9);
    }
    FUN_180159650(local_f0);
  }
  if (((param_9 == '\0') && (*(char *)(param_10 + 0x150) != '\0')) && (cVar14 != '\0')) {
    local_190 = DAT_180b90840;
    _local_198 = CONCAT44(uStack_194,param_8);
    FUN_1802af360(param_2,param_3,param_4,local_128);
  }
}




// FUN_1800b0420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b0420 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1800b0420(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3,char param_4,
                  undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (**ppauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 (**ppauVar15) [16];
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  double dVar27;
  float fVar28;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 *****local_260;
  longlong local_258;
  undefined1 local_248 [16];
  undefined1 local_238 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 (*local_218 [2]) [16];
  undefined1 (*local_208 [2]) [16];
  undefined1 (*local_1f8) [16];
  undefined8 local_1f0;
  undefined1 (*local_1e8) [16];
  longlong lStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 (*local_138) [16];
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 auStack_108 [16];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  undefined8 *****local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  undefined8 *****local_98;
  longlong lStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  local_1d8 = (undefined1 (*) [16])((ulonglong)local_1d8 & 0xffffffff00000000);
  pauVar6 = (undefined1 (*) [16])FUN_1800ada00(param_3,0,param_5,param_6);
  local_208[0] = pauVar6;
  lVar7 = FUN_1800ada00(param_3,1);
  lVar8 = FUN_1800ada00(param_3,2);
  local_1d8 = (undefined1 (*) [16])FUN_1800ada00(param_3,3);
  if (param_4 == '\0') {
    pauVar6 = (undefined1 (*) [16])
              FUN_1800afd50(&local_1e8,(*pauVar6)[0] != '\0',*(undefined4 *)(*pauVar6 + 4),
                            *(undefined4 *)(param_3 + 8));
    local_248 = *pauVar6;
    (*pauVar6)[0] = 0;
    *(undefined8 *)(*pauVar6 + 8) = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0x6;
    local_238 = (undefined1  [8])"aimbot";
    local_1f0 = *(undefined8 *)param_2[1];
    local_218[0] = pauVar6;
    FUN_1800afbf0(param_1,&local_1f8,local_238,local_248);
    FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
    pauVar6 = local_208[0];
    local_1f8 = (undefined1 (*) [16])CONCAT44(local_1f8._4_4_,0x43340000);
    fVar28 = 0.0;
    local_218[0] = (undefined1 (*) [16])((ulonglong)local_218[0] & 0xffffffff00000000);
    fVar1 = *(float *)local_208[0][1];
    _local_238 = ZEXT816(0);
    pauVar12 = (undefined1 (*) [16])local_218;
    if (0.0 <= fVar1) {
      pauVar12 = local_208[0] + 1;
    }
    pauVar9 = (undefined1 (*) [16])&local_1f8;
    if (fVar1 <= 180.0) {
      pauVar9 = pauVar12;
    }
    auVar24 = ZEXT464(*(uint *)*pauVar9);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 7;
    auVar21._0_8_ = (double)auVar24._0_4_;
    auVar21._8_8_ = auVar24._8_8_;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248 = vunpcklpd_avx(_local_238,auVar21);
    local_238 = (undefined1  [8])(local_248._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])&DAT_1806bc4cc;
    local_218[1] = (undefined1 (*) [16])0x3;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    local_218[0] = (undefined1 (*) [16])(double)*(float *)(pauVar6[1] + 8);
    pauVar9 = (undefined1 (*) [16])0x4059000000000000;
    local_1f8 = (undefined1 (*) [16])0x4059000000000000;
    pauVar12 = (undefined1 (*) [16])0x0;
    local_208[0] = (undefined1 (*) [16])0x0;
    ppauVar15 = local_208;
    if (0.0 <= (double)local_218[0]) {
      ppauVar15 = local_218;
    }
    ppauVar11 = &local_1f8;
    if ((double)local_218[0] <= 100.0) {
      ppauVar11 = ppauVar15;
    }
    iVar4 = FUN_18060eb10(*ppauVar11);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])(longlong)iVar4;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._8_8_ = (longlong)iVar4;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc4d0;
    local_218[1] = (undefined1 (*) [16])0x6;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    if ((*(char *)(lVar8 + 0x61) == '\0') && (*(char *)(lVar8 + 0x62) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    local_1c8 = ZEXT816(0);
    FUN_1801409d0(local_1c8 + 8,0);
    local_1c8[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,uVar16);
    local_1c8._8_8_ = local_208[0];
    local_1b8 = 0;
    cVar2 = *(char *)(lVar8 + 99);
    local_1b0 = ZEXT816(0);
    FUN_1801409d0(local_1b0 + 8,0);
    local_1b0[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_1b0._8_8_ = local_208[0];
    local_1a0 = 0;
    cVar2 = *(char *)(lVar8 + 100);
    local_198 = ZEXT816(0);
    FUN_1801409d0(local_198 + 8,0);
    local_198[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_198._8_8_ = local_208[0];
    local_188 = 0;
    if ((*(char *)(lVar8 + 0x65) == '\0') && (*(char *)(lVar8 + 0x66) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    local_180 = ZEXT816(0);
    FUN_1801409d0(local_180 + 8,0);
    local_180[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,uVar16);
    local_180._8_8_ = local_208[0];
    local_170 = 0;
    if ((*(char *)(lVar8 + 0x67) == '\0') && (*(char *)(lVar8 + 0x68) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    local_168 = ZEXT816(0);
    FUN_1801409d0(local_168 + 8,0);
    local_168[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,uVar16);
    local_168._8_8_ = local_208[0];
    local_158 = 0;
    local_238 = (undefined1  [8])local_1c8;
    uStack_230 = (undefined1 (**) [16])local_150;
    FUN_1800f4e90(local_248,local_238,0,2);
    local_208[0] = &local_248;
    _local_238 = local_248;
    local_248._0_8_ = local_248._1_8_ << 8;
    local_248._8_8_ = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc4d8;
    local_218[1] = (undefined1 (*) [16])0x8;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_238);
    FUN_1801409d0(local_248 + 8,local_248[0]);
    _eh_vector_destructor_iterator_(local_1c8,0x18,5,FUN_1800aab30);
    pauVar10 = (undefined1 (*) [16])
               FUN_1800afd50(&local_1e8,local_1d8[7][4] != '\0',*(undefined4 *)(local_1d8[7] + 8),
                             *(undefined4 *)(param_3 + 0x7c));
    local_248 = *pauVar10;
    (*pauVar10)[0] = 0;
    *(undefined8 *)(*pauVar10 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc4e8;
    uStack_230 = (undefined1 (**) [16])0xe;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar10;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar10 + 8,(*pauVar10)[0]);
    pauVar10 = (undefined1 (*) [16])
               FUN_1800afd50(&local_1e8,local_1d8[7][4] != '\0',*(undefined4 *)(local_1d8[7] + 8),
                             *(undefined4 *)(param_3 + 0x7c));
    local_248 = *pauVar10;
    (*pauVar10)[0] = 0;
    *(undefined8 *)(*pauVar10 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0xe;
    local_238 = (undefined1  [8])"standalone rcs";
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar10;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar10 + 8,(*pauVar10)[0]);
    dVar27 = 0.5;
    local_218[0] = (undefined1 (*) [16])
                   (((double)*(float *)(local_1d8[8] + 4) + (double)*(float *)local_1d8[8]) * 0.5);
    local_1f8 = pauVar9;
    local_208[0] = pauVar12;
    ppauVar15 = local_208;
    if ((double)pauVar12 <= (double)local_218[0]) {
      ppauVar15 = local_218;
    }
    ppauVar11 = &local_1f8;
    if ((double)local_218[0] <= (double)pauVar9) {
      ppauVar11 = ppauVar15;
    }
    iVar4 = FUN_18060eb10(*ppauVar11);
    lVar19 = (longlong)iVar4;
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])lVar19;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc508;
    local_218[1] = (undefined1 (*) [16])0x7;
    local_1f0 = *(undefined8 *)param_2[1];
    local_248._8_8_ = lVar19;
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])lVar19;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc510;
    local_218[1] = (undefined1 (*) [16])0x7;
    local_1f0 = *(undefined8 *)param_2[1];
    local_248._8_8_ = lVar19;
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])lVar19;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc518;
    local_218[1] = (undefined1 (*) [16])0x17;
    local_1f0 = *(undefined8 *)param_2[1];
    local_248._8_8_ = lVar19;
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    local_218[0] = (undefined1 (*) [16])0x64;
    uStack_230 = (undefined1 (**) [16])0x64;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_248._8_8_ = 100;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1d8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1d8 = *(undefined1 (**) [16])*param_2;
    }
    local_1f8 = (undefined1 (*) [16])0x1806bc530;
    local_1f0 = 0x12;
    local_1d0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1d8,&local_1f8,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])0x64;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_248._8_8_ = 100;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1d8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1d8 = *(undefined1 (**) [16])*param_2;
    }
    local_1f8 = (undefined1 (*) [16])0x1806bc548;
    local_1f0 = 0x12;
    local_1d0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1d8,&local_1f8,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    pauVar10 = (undefined1 (*) [16])
               FUN_1800afd50(&local_1e8,*(char *)(lVar7 + 0x38) != '\0',
                             *(undefined4 *)(lVar7 + 0x3c),*(undefined4 *)(param_3 + 0x40));
    local_248 = *pauVar10;
    (*pauVar10)[0] = 0;
    *(undefined8 *)(*pauVar10 + 8) = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0xa;
    local_238 = (undefined1  [8])"triggerbot";
    local_1f0 = *(undefined8 *)param_2[1];
    local_208[0] = pauVar10;
    FUN_1800afbf0(param_1,&local_1f8,local_238,local_248);
    FUN_1801409d0(*pauVar10 + 8,(*pauVar10)[0]);
    local_1f8 = (undefined1 (*) [16])
                (((double)*(float *)(lVar7 + 0x48) + (double)*(float *)(lVar7 + 0x44) +
                  (double)*(float *)(lVar7 + 0x4c) + (double)*(float *)(lVar7 + 0x50)) * dVar27);
    local_1d8 = (undefined1 (*) [16])0x408f400000000000;
    local_208[0] = pauVar12;
    ppauVar15 = local_208;
    if ((double)pauVar12 <= (double)local_1f8) {
      ppauVar15 = &local_1f8;
    }
    ppauVar11 = (undefined1 (**) [16])&local_1d8;
    if ((double)local_1f8 <= 1000.0) {
      ppauVar11 = ppauVar15;
    }
    iVar4 = FUN_18060eb10(*ppauVar11);
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])(longlong)iVar4;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._8_8_ = (longlong)iVar4;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1d8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1d8 = *(undefined1 (**) [16])*param_2;
    }
    local_1f8 = (undefined1 (*) [16])0x1806bc570;
    local_1f0 = 0xd;
    local_1d0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1d8,&local_1f8,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    if (*(int *)(lVar7 + 300) == 0) {
      iVar4 = 0;
    }
    else {
      local_1f8 = (undefined1 (*) [16])(double)*(float *)(lVar7 + 0x130);
      local_1d8 = pauVar9;
      local_208[0] = pauVar12;
      ppauVar15 = local_208;
      if ((double)pauVar12 <= (double)local_1f8) {
        ppauVar15 = &local_1f8;
      }
      ppauVar11 = (undefined1 (**) [16])&local_1d8;
      if ((double)local_1f8 <= (double)pauVar9) {
        ppauVar11 = ppauVar15;
      }
      iVar4 = FUN_18060eb10(*ppauVar11);
    }
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    local_248._8_8_ = SEXT48(iVar4);
    uStack_230 = (undefined1 (**) [16])local_248._8_8_;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1d8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1d8 = *(undefined1 (**) [16])*param_2;
    }
    local_1f8 = (undefined1 (*) [16])0x1806bc580;
    local_1f0 = 0x11;
    local_1d0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1d8,&local_1f8,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(char *)(lVar8 + 0x180) != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc598;
    uStack_230 = (undefined1 (**) [16])0x11;
    local_1f0 = *(undefined8 *)param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,&local_1f8,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(int *)(lVar7 + 300) != 0,2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc5b0;
    uStack_230 = (undefined1 (**) [16])0x11;
    local_1f0 = *(undefined8 *)param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,&local_1f8,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(char *)(lVar7 + 0x16d) != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0x8;
    local_238 = (undefined1  [8])"autowall";
    local_1f0 = *(undefined8 *)param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,&local_1f8,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    if (fVar28 < *(float *)(lVar7 + 0x54)) {
      uVar5 = FUN_1800b01e0((double)*(float *)(lVar7 + 0x54),1,0x82);
      local_218[0] = (undefined1 (*) [16])CONCAT44(local_218[0]._4_4_,uVar5);
    }
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    local_248._8_8_ = SEXT48((int)local_218[0]);
    uStack_230 = (undefined1 (**) [16])local_248._8_8_;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bbf80;
    local_218[1] = (undefined1 (*) [16])0xa;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    if ((pauVar6[7][3] == '\0') || (*(char *)(param_3 + 0x127) == '\0')) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    pauVar6 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,uVar13,2,0);
    local_248 = *pauVar6;
    (*pauVar6)[0] = 0;
    *(undefined8 *)(*pauVar6 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc5d8;
    uStack_230 = (undefined1 (**) [16])0xd;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar6;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
    pauVar6 = (undefined1 (*) [16])FUN_1800b0250(&local_1e8,param_3 + 200);
    local_248 = *pauVar6;
    (*pauVar6)[0] = 0;
    *(undefined8 *)(*pauVar6 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0x9;
    local_238 = (undefined1  [8])"fov color";
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar6;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
  }
  else {
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,pauVar6[0x19][4] != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc5f4;
    uStack_230 = (undefined1 (**) [16])0x6;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,pauVar6[0x19][0xc] != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc600;
    uStack_230 = (undefined1 (**) [16])0x9;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,pauVar6[0x19][0xd] != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bbf60;
    uStack_230 = (undefined1 (**) [16])0x9;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(char *)(lVar8 + 0x181) != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc610;
    uStack_230 = (undefined1 (**) [16])0xb;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(char *)(lVar8 + 0x182) != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc620;
    uStack_230 = (undefined1 (**) [16])0x11;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    pauVar12 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,*(char *)(lVar8 + 0x183) != '\0',2,0);
    local_248 = *pauVar12;
    (*pauVar12)[0] = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    uStack_230 = (undefined1 (**) [16])0x14;
    local_238 = (undefined1  [8])"force shot on ground";
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar12;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar12 + 8,(*pauVar12)[0]);
    local_1f8 = (undefined1 (*) [16])CONCAT44(local_1f8._4_4_,0x43340000);
    auVar24 = ZEXT864(0);
    local_218[0] = (undefined1 (*) [16])((ulonglong)local_218[0] & 0xffffffff00000000);
    fVar1 = *(float *)pauVar6[1];
    _local_238 = ZEXT816(0);
    pauVar12 = (undefined1 (*) [16])local_218;
    if (0.0 <= fVar1) {
      pauVar12 = pauVar6 + 1;
    }
    pauVar6 = (undefined1 (*) [16])&local_1f8;
    if (fVar1 <= 180.0) {
      pauVar6 = pauVar12;
    }
    auVar25 = ZEXT464(*(uint *)*pauVar6);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 7;
    auVar22._0_8_ = (double)auVar25._0_4_;
    auVar22._8_8_ = auVar25._8_8_;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248 = vunpcklpd_avx(_local_238,auVar22);
    local_238 = (undefined1  [8])(local_248._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc650;
    local_218[1] = (undefined1 (*) [16])0x7;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    if (*(int *)(lVar7 + 300) == 0) {
      iVar4 = 0;
    }
    else {
      local_218[0] = (undefined1 (*) [16])(double)*(float *)(lVar7 + 0x130);
      local_1f8 = (undefined1 (*) [16])0x4059000000000000;
      local_208[0] = (undefined1 (*) [16])0x0;
      ppauVar15 = local_208;
      if (0.0 <= (double)local_218[0]) {
        ppauVar15 = local_218;
      }
      ppauVar11 = &local_1f8;
      if ((double)local_218[0] <= 100.0) {
        ppauVar11 = ppauVar15;
      }
      iVar4 = FUN_18060eb10(*ppauVar11);
    }
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])(longlong)iVar4;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._8_8_ = (longlong)iVar4;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc658;
    local_218[1] = (undefined1 (*) [16])0xa;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    if (auVar24._0_4_ < *(float *)(lVar7 + 0x54)) {
      iVar4 = FUN_1800b01e0((double)*(float *)(lVar7 + 0x54),1,0x82);
    }
    else {
      iVar4 = 100;
    }
    _local_238 = ZEXT816(0);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 5;
    uStack_230 = (undefined1 (**) [16])(longlong)iVar4;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248._8_8_ = (longlong)iVar4;
    local_248._0_8_ = local_238;
    local_238 = (undefined1  [8])(local_238._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bbf80;
    local_218[1] = (undefined1 (*) [16])0xa;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    local_1f8 = (undefined1 (*) [16])CONCAT44(local_1f8._4_4_,0x42c80000);
    local_218[0] = (undefined1 (*) [16])CONCAT44(local_218[0]._4_4_,auVar24._0_4_);
    fVar1 = *(float *)(lVar8 + 400);
    _local_238 = ZEXT816(0);
    ppauVar15 = local_218;
    if (auVar24._0_4_ <= fVar1) {
      ppauVar15 = (undefined1 (**) [16])(lVar8 + 400);
    }
    ppauVar11 = &local_1f8;
    if (fVar1 <= 100.0) {
      ppauVar11 = ppauVar15;
    }
    auVar25 = ZEXT464((uint)*(float *)ppauVar11);
    FUN_1801409d0(&uStack_230,0);
    local_238[0] = 7;
    auVar23._0_8_ = (double)auVar25._0_4_;
    auVar23._8_8_ = auVar25._8_8_;
    local_208[0] = (undefined1 (*) [16])local_238;
    local_248 = vunpcklpd_avx(_local_238,auVar23);
    local_238 = (undefined1  [8])(local_248._1_8_ << 8);
    uStack_230 = (undefined1 (**) [16])0x0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc668;
    local_218[1] = (undefined1 (*) [16])0xb;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_248);
    FUN_1801409d0(&uStack_230,local_238[0]);
    pauVar6 = (undefined1 (*) [16])FUN_1800afd50(&local_1e8,0,2,0);
    local_248 = *pauVar6;
    (*pauVar6)[0] = 0;
    *(undefined8 *)(*pauVar6 + 8) = 0;
    local_218[0] = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_218[0] = *(undefined1 (**) [16])*param_2;
    }
    local_238 = (undefined1  [8])0x1806bc678;
    uStack_230 = (undefined1 (**) [16])0x13;
    local_218[1] = *(undefined1 (**) [16])param_2[1];
    local_208[0] = pauVar6;
    FUN_1800afbf0(param_1,local_218,local_238,local_248);
    FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
    if ((*(char *)(lVar8 + 0x61) == '\0') && (*(char *)(lVar8 + 0x62) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    local_1c8 = ZEXT816(0);
    FUN_1801409d0(local_1c8 + 8,0);
    local_1c8[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,uVar16);
    local_1c8._8_8_ = local_208[0];
    local_1b8 = 0;
    cVar2 = *(char *)(lVar8 + 99);
    local_1b0 = ZEXT816(0);
    FUN_1801409d0(local_1b0 + 8,0);
    local_1b0[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_1b0._8_8_ = local_208[0];
    local_1a0 = 0;
    cVar2 = *(char *)(lVar8 + 100);
    local_198 = ZEXT816(0);
    FUN_1801409d0(local_198 + 8,0);
    local_198[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_198._8_8_ = local_208[0];
    local_188 = 0;
    if ((*(char *)(lVar8 + 0x65) == '\0') && (*(char *)(lVar8 + 0x66) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    local_180 = ZEXT816(0);
    FUN_1801409d0(local_180 + 8,0);
    local_180[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,uVar16);
    local_180._8_8_ = local_208[0];
    local_170 = 0;
    cVar2 = *(char *)(lVar8 + 0x67);
    local_168 = ZEXT816(0);
    FUN_1801409d0(local_168 + 8,0);
    local_168[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_168._8_8_ = local_208[0];
    local_158 = 0;
    cVar2 = *(char *)(lVar8 + 0x68);
    local_150 = ZEXT816(0);
    FUN_1801409d0(local_150 + 8,0);
    local_150[0] = 4;
    local_208[0] = (undefined1 (*) [16])CONCAT71(local_208[0]._1_7_,cVar2 != '\0');
    local_150._8_8_ = local_208[0];
    local_140 = 0;
    local_238 = (undefined1  [8])local_1c8;
    uStack_230 = &local_138;
    FUN_1800f4e90(local_248,local_238,0,2);
    uVar18 = 0x40;
    local_1d8 = (undefined1 (*) [16])CONCAT44(local_1d8._4_4_,0x40);
    local_208[0] = &local_248;
    _local_238 = local_248;
    local_248._0_8_ = local_248._1_8_ << 8;
    local_248._8_8_ = 0;
    local_1f8 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_1f8 = *(undefined1 (**) [16])*param_2;
    }
    local_218[0] = (undefined1 (*) [16])0x1806bc4d8;
    local_218[1] = (undefined1 (*) [16])0x8;
    local_1f0 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_1f8,local_218,local_238);
    FUN_1801409d0(local_248 + 8,local_248[0]);
    _eh_vector_destructor_iterator_(local_1c8,0x18,6,FUN_1800aab30);
    local_1f8 = (undefined1 (*) [16])((ulonglong)local_1f8 & 0xffffffff00000000);
    lVar8 = 0;
    iVar4 = 1;
    local_218[0] = (undefined1 (*) [16])CONCAT44(local_218[0]._4_4_,1);
    auVar25 = ZEXT1664(_DAT_18086d450);
    do {
      auVar23 = auVar24._0_16_;
      auVar22 = auVar25._0_16_;
      if (lVar8 == 0) {
        auStack_108 = auVar22;
        local_118._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar3[0xf] = 0;
        auVar3._0_15_ = local_118._1_15_;
        local_118 = auVar3 << 8;
        plVar14 = (longlong *)local_118;
        uVar17 = uVar18 | 1;
      }
      else {
        uVar13 = FUN_18015bea0(local_d8,iVar4);
        local_1d8 = (undefined1 (*) [16])(CONCAT44(local_1d8._4_4_,uVar18) | 2);
        pauVar6 = (undefined1 (*) [16])FUN_180141490(uVar13,0," preset ",8);
        auVar23 = auVar24._0_16_;
        auVar22 = auVar25._0_16_;
        _local_238 = *pauVar6;
        uStack_228 = *(undefined8 *)pauVar6[1];
        uStack_220 = *(undefined8 *)(pauVar6[1] + 8);
        (*pauVar6)[0] = 0;
        *(undefined8 *)pauVar6[1] = 0;
        *(undefined8 *)(pauVar6[1] + 8) = 0xf;
        plVar14 = (longlong *)local_238;
        uVar17 = uVar18 | 0x26;
      }
      local_b8 = (undefined8 *****)*plVar14;
      lStack_b0 = plVar14[1];
      lStack_a8 = plVar14[2];
      uStack_a0 = plVar14[3];
      *(undefined1 *)plVar14 = 0;
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      local_98 = local_b8;
      lStack_90 = lStack_b0;
      lStack_88 = lStack_a8;
      uStack_80 = uStack_a0;
      if ((uVar17 & 4) != 0) {
        uVar17 = uVar17 & 0xfffffffb;
        auVar24 = ZEXT1664(auVar22);
        auVar25 = ZEXT1664(auVar23);
        FUN_18015c010(local_238);
        auVar23 = auVar25._0_16_;
        auVar22 = auVar24._0_16_;
      }
      if ((uVar17 & 2) != 0) {
        uVar17 = uVar17 & 0xfffffffd;
        auVar24 = ZEXT1664(auVar22);
        auVar25 = ZEXT1664(auVar23);
        FUN_18015c010(local_d8);
        auVar23 = auVar25._0_16_;
        auVar22 = auVar24._0_16_;
      }
      if ((uVar17 & 1) != 0) {
        uVar17 = uVar17 & 0xfffffffe;
        auVar24 = ZEXT1664(auVar22);
        auVar25 = ZEXT1664(auVar23);
        FUN_18015c010(local_118);
        auVar23 = auVar25._0_16_;
        auVar22 = auVar24._0_16_;
      }
      local_208[0] = &local_e8;
      auVar24 = ZEXT1664(auVar22);
      auVar26 = ZEXT1664(auVar23);
      pauVar6 = (undefined1 (*) [16])
                FUN_1800afd50(local_e8,*(char *)(lVar8 + 0x144 + lVar7) != '\0',
                              *(undefined4 *)(lVar7 + 0x154 + lVar8 * 4),
                              *(undefined4 *)(lVar7 + 0x160 + lVar8 * 4));
      local_1d8 = pauVar6;
      if (0x7fffffffffffffffU - lStack_a8 < 0x13) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_260 = &local_98;
      if (0xf < uStack_80) {
        local_260 = local_98;
      }
      local_268 = 0x13;
      auVar25 = ZEXT1664(auVar24._0_16_);
      auVar24 = ZEXT1664(auVar26._0_16_);
      local_258 = lStack_a8;
      FUN_18015a9c0(local_118);
      local_f8 = local_118;
      if (0xf < (ulonglong)auStack_108._8_8_) {
        local_f8 = (undefined1 *)local_118._0_8_;
      }
      _local_238 = *pauVar6;
      (*pauVar6)[0] = 0;
      *(undefined8 *)(*pauVar6 + 8) = 0;
      local_138 = param_2;
      if (0xf < *(ulonglong *)(param_2[1] + 8)) {
        local_138 = *(undefined1 (**) [16])*param_2;
      }
      local_f0 = auStack_108._0_8_;
      local_130 = *(undefined8 *)param_2[1];
      FUN_1800afbf0(param_1,&local_138,&local_f8,local_238);
      FUN_1801409d0(*pauVar6 + 8,(*pauVar6)[0]);
      FUN_18015c010(local_118);
      local_208[0] = &local_248;
      fVar1 = *(float *)(lVar7 + 0x148 + lVar8 * 4);
      if (auVar24._0_4_ < fVar1) {
        iVar4 = FUN_1800b01e0((double)fVar1,1,0x82);
      }
      else {
        iVar4 = 100;
      }
      local_248 = ZEXT816(0);
      FUN_1801409d0(local_248 + 8,0);
      local_248[0] = 5;
      local_248._8_8_ = (longlong)iVar4;
      local_238 = (undefined1  [8])local_248;
      if (0x7fffffffffffffffU - lStack_88 < 0x19) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_260 = &local_98;
      if (0xf < uStack_80) {
        local_260 = local_98;
      }
      local_258 = lStack_88;
      local_268 = 0x19;
      FUN_18015a9c0(local_118);
      uVar18 = uVar17 | 0x18;
      local_1d8 = (undefined1 (*) [16])(CONCAT44(local_1d8._4_4_,uVar17) | 0x18);
      local_128 = local_118;
      if (0xf < (ulonglong)auStack_108._8_8_) {
        local_128 = (char *)local_118._0_8_;
      }
      local_208[0] = (undefined1 (*) [16])local_248._0_8_;
      local_208[1] = (undefined1 (*) [16])local_248._8_8_;
      local_248._0_8_ = local_248._1_8_ << 8;
      local_248._8_8_ = 0;
      local_1e8 = param_2;
      if (0xf < *(ulonglong *)(param_2[1] + 8)) {
        local_1e8 = *(undefined1 (**) [16])*param_2;
      }
      local_120 = auStack_108._0_8_;
      lStack_1e0 = *(longlong *)param_2[1];
      FUN_1800afbf0(param_1,&local_1e8,&local_128,local_208);
      FUN_1801409d0(local_248 + 8,local_248[0]);
      FUN_18015c010(local_118);
      iVar4 = (int)local_218[0];
      iVar20 = (int)local_1f8;
      if (*(char *)(lVar8 + 0x144 + lVar7) != '\0') {
        iVar20 = (int)local_218[0];
      }
      local_1f8 = (undefined1 (*) [16])CONCAT44(local_1f8._4_4_,iVar20);
      FUN_18015c010(&local_98);
      iVar4 = iVar4 + 1;
      local_218[0] = (undefined1 (*) [16])CONCAT44(local_218[0]._4_4_,iVar4);
      lVar8 = lVar8 + 1;
    } while (lVar8 < 3);
    local_248 = ZEXT816(0);
    FUN_1801409d0(local_248 + 8,0);
    local_248[0] = 5;
    lStack_1e0 = (longlong)iVar20;
    local_248._8_8_ = lStack_1e0;
    local_1e8 = (undefined1 (*) [16])local_248._0_8_;
    local_248._0_8_ = local_248._1_8_ << 8;
    local_248._8_8_ = 0;
    local_138 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_138 = *(undefined1 (**) [16])*param_2;
    }
    local_128 = "damage preset count";
    local_120 = 0x13;
    local_130 = *(undefined8 *)param_2[1];
    local_238 = (undefined1  [8])local_248;
    FUN_1800afbf0(param_1,&local_138,&local_128,&local_1e8);
    FUN_1801409d0(local_248 + 8,local_248[0]);
    local_248 = ZEXT816(0);
    FUN_1801409d0(local_248 + 8,0);
    auVar22 = local_248;
    local_248[0] = 5;
    local_238 = (undefined1  [8])local_248;
    local_1e8 = (undefined1 (*) [16])local_248._0_8_;
    lStack_1e0 = 0;
    local_248 = ZEXT716(auVar22._1_7_) << 8;
    local_138 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      local_138 = *(undefined1 (**) [16])*param_2;
    }
    local_128 = "hitchance preset count";
    local_120 = 0x16;
    local_130 = *(undefined8 *)param_2[1];
    FUN_1800afbf0(param_1,&local_138,&local_128,&local_1e8);
    FUN_1801409d0(local_248 + 8,local_248[0]);
  }
}




// FUN_180232f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180232f50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180232f50(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  float *param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  float *pfVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auStack_2558 [32];
  float local_2538 [2];
  undefined8 local_2530;
  int local_2520 [5];
  float local_250c [3];
  int local_2500 [3];
  float local_24f4;
  longlong local_24f0;
  undefined8 local_24e8;
  float local_24e0;
  float local_24dc;
  float fStack_24d8;
  float local_24d4;
  undefined8 local_24d0;
  undefined4 local_24c8;
  undefined8 local_24c4;
  undefined4 local_24bc;
  undefined4 local_24b8;
  float local_24b4;
  float local_24b0;
  undefined1 local_24a8 [8];
  longlong local_24a0;
  undefined1 local_2460 [804];
  int local_213c;
  float local_2138 [1024];
  undefined1 local_1138 [4];
  undefined1 auStack_1134 [4092];
  undefined8 local_138;
  float local_130;
  undefined8 local_120;
  float local_118;
  undefined4 local_fc;
  float local_f8;
  int local_f4;
  char local_f0;
  undefined1 local_ed;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2558;
  local_24f0 = param_2;
  if (((DAT_180cad2e0 != 1) || (DAT_180cad430 == '\0')) || (DAT_180c64060 == 0)) goto LAB_180233bde;
  iVar16 = 0;
  local_24a0 = 0;
  FUN_18063ab10(local_2460,0,800);
  FUN_180233c60(local_2460);
  FUN_18063ab10(local_2138,0,0x1000);
  lVar15 = 8;
  pfVar7 = local_2138 + 1;
  lVar13 = 8;
  do {
    pfVar7[-1] = 0.0;
    pfVar7[0] = 0.0;
    pfVar7[1] = 0.0;
    pfVar7[2] = 0.0;
    pfVar7[3] = 0.0;
    pfVar7[4] = 0.0;
    pfVar7[5] = 0.0;
    pfVar7[6] = 1.0;
    pfVar7[7] = 0.0;
    pfVar7[8] = 0.0;
    pfVar7[9] = 0.0;
    pfVar7[10] = 0.0;
    pfVar7[0xb] = 0.0;
    pfVar7[0xc] = 0.0;
    pfVar7[0xd] = 0.0;
    pfVar7[0xe] = 1.0;
    pfVar7[0xf] = 0.0;
    pfVar7[0x10] = 0.0;
    pfVar7[0x11] = 0.0;
    pfVar7[0x12] = 0.0;
    pfVar7[0x13] = 0.0;
    pfVar7[0x14] = 0.0;
    pfVar7[0x15] = 0.0;
    pfVar7[0x16] = 1.0;
    pfVar7[0x17] = 0.0;
    pfVar7[0x18] = 0.0;
    pfVar7[0x19] = 0.0;
    pfVar7[0x1a] = 0.0;
    pfVar7[0x1b] = 0.0;
    pfVar7[0x1c] = 0.0;
    pfVar7[0x1d] = 0.0;
    pfVar7[0x1e] = 1.0;
    pfVar7[0x1f] = 0.0;
    pfVar7[0x20] = 0.0;
    pfVar7[0x21] = 0.0;
    pfVar7[0x22] = 0.0;
    pfVar7[0x23] = 0.0;
    pfVar7[0x24] = 0.0;
    pfVar7[0x25] = 0.0;
    pfVar7[0x26] = 1.0;
    pfVar7[0x27] = 0.0;
    pfVar7[0x28] = 0.0;
    pfVar7[0x29] = 0.0;
    pfVar7[0x2a] = 0.0;
    pfVar7[0x2b] = 0.0;
    pfVar7[0x2c] = 0.0;
    pfVar7[0x2d] = 0.0;
    pfVar7[0x2e] = 1.0;
    pfVar7[0x2f] = 0.0;
    pfVar7[0x30] = 0.0;
    pfVar7[0x31] = 0.0;
    pfVar7[0x32] = 0.0;
    pfVar7[0x33] = 0.0;
    pfVar7[0x34] = 0.0;
    pfVar7[0x35] = 0.0;
    pfVar7[0x36] = 1.0;
    pfVar7[0x37] = 0.0;
    pfVar7[0x38] = 0.0;
    pfVar7[0x39] = 0.0;
    pfVar7[0x3a] = 0.0;
    pfVar7[0x3b] = 0.0;
    pfVar7[0x3c] = 0.0;
    pfVar7[0x3d] = 0.0;
    pfVar7[0x3e] = 1.0;
    pfVar7[0x3f] = 0.0;
    pfVar7[0x40] = 0.0;
    pfVar7[0x41] = 0.0;
    pfVar7[0x42] = 0.0;
    pfVar7[0x43] = 0.0;
    pfVar7[0x44] = 0.0;
    pfVar7[0x45] = 0.0;
    pfVar7[0x46] = 1.0;
    pfVar7[0x47] = 0.0;
    pfVar7[0x48] = 0.0;
    pfVar7[0x49] = 0.0;
    pfVar7[0x4a] = 0.0;
    pfVar7[0x4b] = 0.0;
    pfVar7[0x4c] = 0.0;
    pfVar7[0x4d] = 0.0;
    pfVar7[0x4e] = 1.0;
    pfVar7[0x4f] = 0.0;
    pfVar7[0x50] = 0.0;
    pfVar7[0x51] = 0.0;
    pfVar7[0x52] = 0.0;
    pfVar7[0x53] = 0.0;
    pfVar7[0x54] = 0.0;
    pfVar7[0x55] = 0.0;
    pfVar7[0x56] = 1.0;
    pfVar7[0x57] = 0.0;
    pfVar7[0x58] = 0.0;
    pfVar7[0x59] = 0.0;
    pfVar7[0x5a] = 0.0;
    pfVar7[0x5b] = 0.0;
    pfVar7[0x5c] = 0.0;
    pfVar7[0x5d] = 0.0;
    pfVar7[0x5e] = 1.0;
    pfVar7[0x5f] = 0.0;
    pfVar7[0x60] = 0.0;
    pfVar7[0x61] = 0.0;
    pfVar7[0x62] = 0.0;
    pfVar7[99] = 0.0;
    pfVar7[100] = 0.0;
    pfVar7[0x65] = 0.0;
    pfVar7[0x66] = 1.0;
    pfVar7[0x67] = 0.0;
    pfVar7[0x68] = 0.0;
    pfVar7[0x69] = 0.0;
    pfVar7[0x6a] = 0.0;
    pfVar7[0x6b] = 0.0;
    pfVar7[0x6c] = 0.0;
    pfVar7[0x6d] = 0.0;
    pfVar7[0x6e] = 1.0;
    pfVar7[0x6f] = 0.0;
    pfVar7[0x70] = 0.0;
    pfVar7[0x71] = 0.0;
    pfVar7[0x72] = 0.0;
    pfVar7[0x73] = 0.0;
    pfVar7[0x74] = 0.0;
    pfVar7[0x75] = 0.0;
    pfVar7[0x76] = 1.0;
    pfVar7[0x77] = 0.0;
    pfVar7[0x78] = 0.0;
    pfVar7[0x79] = 0.0;
    pfVar7[0x7a] = 0.0;
    pfVar7[0x7b] = 0.0;
    pfVar7[0x7c] = 0.0;
    pfVar7[0x7d] = 0.0;
    pfVar7[0x7e] = 1.0;
    pfVar7 = pfVar7 + 0x80;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  FUN_18063ab10(local_1138,0,0x1000);
  puVar8 = auStack_1134;
  do {
    *(undefined8 *)(puVar8 + -4) = 0;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined4 *)(puVar8 + 0x14) = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    *(undefined8 *)(puVar8 + 0x30) = 0;
    *(undefined8 *)(puVar8 + 0x38) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x40) = 0;
    *(undefined8 *)(puVar8 + 0x48) = 0;
    *(undefined8 *)(puVar8 + 0x50) = 0;
    *(undefined8 *)(puVar8 + 0x58) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x60) = 0;
    *(undefined8 *)(puVar8 + 0x68) = 0;
    *(undefined8 *)(puVar8 + 0x70) = 0;
    *(undefined8 *)(puVar8 + 0x78) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x80) = 0;
    *(undefined8 *)(puVar8 + 0x88) = 0;
    *(undefined8 *)(puVar8 + 0x90) = 0;
    *(undefined8 *)(puVar8 + 0x98) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xa0) = 0;
    *(undefined8 *)(puVar8 + 0xa8) = 0;
    *(undefined8 *)(puVar8 + 0xb0) = 0;
    *(undefined8 *)(puVar8 + 0xb8) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xc0) = 0;
    *(undefined8 *)(puVar8 + 200) = 0;
    *(undefined8 *)(puVar8 + 0xd0) = 0;
    *(undefined8 *)(puVar8 + 0xd8) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xe0) = 0;
    *(undefined8 *)(puVar8 + 0xe8) = 0;
    *(undefined8 *)(puVar8 + 0xf0) = 0;
    *(undefined8 *)(puVar8 + 0xf8) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x100) = 0;
    *(undefined8 *)(puVar8 + 0x108) = 0;
    *(undefined8 *)(puVar8 + 0x110) = 0;
    *(undefined8 *)(puVar8 + 0x118) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x120) = 0;
    *(undefined8 *)(puVar8 + 0x128) = 0;
    *(undefined8 *)(puVar8 + 0x130) = 0;
    *(undefined8 *)(puVar8 + 0x138) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x140) = 0;
    *(undefined8 *)(puVar8 + 0x148) = 0;
    *(undefined8 *)(puVar8 + 0x150) = 0;
    *(undefined8 *)(puVar8 + 0x158) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x160) = 0;
    *(undefined8 *)(puVar8 + 0x168) = 0;
    *(undefined8 *)(puVar8 + 0x170) = 0;
    *(undefined8 *)(puVar8 + 0x178) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x180) = 0;
    *(undefined8 *)(puVar8 + 0x188) = 0;
    *(undefined8 *)(puVar8 + 400) = 0;
    *(undefined8 *)(puVar8 + 0x198) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x1a0) = 0;
    *(undefined8 *)(puVar8 + 0x1a8) = 0;
    *(undefined8 *)(puVar8 + 0x1b0) = 0;
    *(undefined8 *)(puVar8 + 0x1b8) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x1c0) = 0;
    *(undefined8 *)(puVar8 + 0x1c8) = 0;
    *(undefined8 *)(puVar8 + 0x1d0) = 0;
    *(undefined8 *)(puVar8 + 0x1d8) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x1e0) = 0;
    *(undefined8 *)(puVar8 + 0x1e8) = 0;
    *(undefined8 *)(puVar8 + 0x1f0) = 0;
    *(undefined4 *)(puVar8 + 0x1f8) = 0x3f800000;
    puVar8 = puVar8 + 0x200;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  auVar28 = ZEXT864(0);
  auVar31 = ZEXT864(0);
  auVar32 = ZEXT864(0);
  local_120 = 0;
  local_118 = 0.0;
  local_f8 = 0.0;
  local_f0 = '\0';
  fVar22 = 0.0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x40));
  local_2530 = 0;
  FUN_1801aad00(param_1,&local_2530,param_3);
  if ((local_2530 == *(longlong *)(param_1 + 8)) || (*(ulonglong *)(local_2530 + 0x38) == 0)) {
LAB_180233bc9:
    *(undefined1 *)(param_2 + 0x23c0) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x40));
  }
  uVar17 = *(longlong *)(local_2530 + 0x28) - 1;
  lVar13 = *(longlong *)
            (*(longlong *)(local_2530 + 0x20) + (uVar17 & *(ulonglong *)(local_2530 + 0x30)) * 8);
  if ((*(float *)(lVar13 + 0x23b0) != *(float *)(param_3 + 0x476)) ||
     (*(longlong *)(lVar13 + 8) != param_3[1])) goto LAB_180233bc9;
  cVar5 = '\0';
  if (1 < *(ulonglong *)(local_2530 + 0x38)) {
    FUN_18063aed0(local_24a8,
                  *(undefined8 *)
                   (*(longlong *)(local_2530 + 0x20) +
                   (*(ulonglong *)(local_2530 + 0x30) + 1 & uVar17) * 8),0x23c0);
    auVar32 = ZEXT464((uint)local_f8);
    auVar31 = ZEXT464(local_120._4_4_);
    auVar28 = ZEXT464((uint)local_120);
    cVar5 = local_f0;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x40));
  if (*(char *)(param_3 + 0x477) == '\0') goto LAB_180233bde;
  auVar24 = ZEXT464(*(uint *)(param_3 + 0x476));
  cVar4 = FUN_180232a20(param_5,*(uint *)(param_3 + 0x476));
  iVar1 = DAT_180cad498;
  if (cVar4 == '\0') goto LAB_180233bde;
  fVar21 = *param_5;
  local_2520[2] = DAT_180cad498;
  sVar6 = thunk_FUN_180624430(fVar21);
  if ((0 < sVar6) || (sVar6 = thunk_FUN_180624430(auVar24._0_8_), 0 < sVar6)) goto LAB_180233bde;
  local_2520[4] = 0x10;
  local_250c[1] = fVar21 - auVar24._0_4_;
  local_2520[0] = 1;
  local_250c[2] = 0.4;
  local_2500[0] = 0;
  piVar14 = local_2520;
  if (0 < iVar1) {
    piVar14 = local_2520 + 2;
  }
  local_250c[0] = fVar22;
  piVar9 = local_2520 + 4;
  if (iVar1 < 0x11) {
    piVar9 = piVar14;
  }
  pfVar7 = local_250c;
  if (fVar22 <= local_250c[1]) {
    pfVar7 = local_250c + 1;
  }
  local_2500[2] = *piVar9;
  pfVar11 = local_250c + 2;
  if (local_250c[1] <= 0.4) {
    pfVar11 = pfVar7;
  }
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*pfVar11 * 64.0 + 0.0001)),1);
  local_2500[1] = (int)auVar2._0_4_;
  piVar14 = local_2500;
  if (-1 < local_2500[1]) {
    piVar14 = local_2500 + 1;
  }
  piVar10 = local_2500 + 2;
  if (local_2500[1] <= *piVar9) {
    piVar10 = piVar14;
  }
  iVar1 = *piVar10;
  if (iVar1 == 0) goto LAB_180233bde;
  uVar27 = param_3[0x471];
  fVar21 = *(float *)(param_3 + 0x472);
  local_2530 = uVar27;
  sVar6 = thunk_FUN_180624430(uVar27);
  if (0 < sVar6) goto LAB_180233bde;
  auVar29 = ZEXT464(local_2530._4_4_);
  sVar6 = thunk_FUN_180624430(local_2530._4_4_);
  if ((0 < sVar6) || (sVar6 = thunk_FUN_180624430(fVar21), 0 < sVar6)) goto LAB_180233bde;
  fVar19 = auVar29._0_4_ * auVar29._0_4_ + (float)uVar27 * (float)uVar27;
  if (fVar19 < 0.0) {
    fVar19 = (float)FUN_18061e150();
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if ((fVar19 < 0.1) && (ABS(fVar21) < 0.1)) goto LAB_180233bde;
  local_2538[0] = 0.0;
  if (((float)uVar27 != fVar22) || (auVar29._0_4_ != fVar22)) {
    local_2538[0] = (float)FUN_180636c80(auVar29._0_8_,uVar27);
    local_2538[0] = local_2538[0] * 57.295776;
  }
  fStack_24d8 = auVar29._0_4_;
  fVar23 = (float)uVar27;
  fVar22 = 180.0;
  fVar25 = -360.0;
  fVar19 = -180.0;
  fVar26 = 360.0;
  if (cVar5 == '\0') {
LAB_180233898:
    fVar30 = 0.0;
    local_24b0 = local_2538[0];
  }
  else {
    cVar5 = FUN_180232a20(param_5,auVar32._0_8_);
    fStack_24d8 = auVar29._0_4_;
    if ((((cVar5 == '\0') || (local_24a0 != param_3[1])) ||
        (fVar30 = auVar24._0_4_ - auVar32._0_4_, fVar30 <= 0.0)) ||
       ((0.2 < fVar30 ||
        (auVar31._0_4_ * auVar31._0_4_ + auVar28._0_4_ * auVar28._0_4_ + local_118 * local_118 <=
         0.01)))) goto LAB_180233898;
    fVar20 = (float)FUN_180636c80(auVar31._0_8_,auVar28._0_8_);
    local_24b0 = local_2538[0];
    fStack_24d8 = auVar29._0_4_;
    for (local_2538[0] = local_2538[0] - fVar20 * 57.295776; fVar22 < local_2538[0];
        local_2538[0] = local_2538[0] + fVar25) {
    }
    for (; local_2538[0] < fVar19; local_2538[0] = local_2538[0] + fVar26) {
    }
    local_24f4 = (local_2538[0] / fVar30) * 0.015625;
    pfVar7 = local_2538;
    if (-6.0 <= local_24f4) {
      pfVar7 = &local_24f4;
    }
    local_2530 = CONCAT44(local_2530._4_4_,0x40c00000);
    pfVar11 = (float *)&local_2530;
    if (local_24f4 <= 6.0) {
      pfVar11 = pfVar7;
    }
    local_2538[0] = -6.0;
    fVar30 = *pfVar11;
  }
  fVar20 = 0.015625;
  local_24c8 = *(undefined4 *)((longlong)param_3 + 0x239c);
  local_24e0 = *(float *)(param_3 + 0x46f);
  local_24b8 = *(undefined4 *)((longlong)param_3 + 0x23ac);
  local_24bc = *(undefined4 *)(param_3 + 0x475);
  iVar18 = 0;
  local_24d0 = *(undefined8 *)((longlong)param_3 + 0x2394);
  local_24e8 = param_3[0x46e];
  local_24c4 = param_3[0x474];
  local_24b4 = auVar24._0_4_;
  local_24dc = fVar23;
  local_24d4 = fVar21;
  if (0 < iVar1) {
    fVar21 = 0.017453292;
    do {
      plVar12 = (longlong *)FUN_18017bf40(&local_2530);
      if (param_4 <= *plVar12) goto LAB_180233bde;
      local_24b0 = local_24b0 + fVar30;
      if (fVar22 < local_24b0) {
        do {
          local_24b0 = local_24b0 + fVar25;
        } while (fVar22 < local_24b0);
      }
      if (local_24b0 < fVar19) {
        do {
          local_24b0 = local_24b0 + fVar26;
        } while (local_24b0 < fVar19);
      }
      auVar28 = ZEXT464((uint)(local_24b0 * fVar21));
      fVar23 = fStack_24d8 * fStack_24d8 + local_24dc * local_24dc;
      if (fVar23 < 0.0) {
        fVar23 = (float)FUN_18061e150(fVar23);
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      local_24dc = (float)FUN_180637540(auVar28._0_8_);
      local_24dc = local_24dc * fVar23;
      fStack_24d8 = (float)FUN_180638e00(auVar28._0_8_);
      fStack_24d8 = fStack_24d8 * fVar23;
      local_24b4 = fVar20 + local_24b4;
      cVar5 = FUN_180232a80(local_24b4,&local_24e8,*param_3);
      if (cVar5 == '\0') goto LAB_180233bde;
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar1);
    auVar24 = ZEXT464((uint)local_24b4);
  }
  uVar3 = local_24b8;
  fVar26 = local_24e0;
  fVar21 = (float)local_24e8 - *(float *)(param_3 + 0x46e);
  fVar19 = local_24e8._4_4_ - *(float *)((longlong)param_3 + 0x2374);
  fVar25 = local_24e0 - *(float *)(param_3 + 0x46f);
  fVar22 = fVar19 * fVar19 + fVar21 * fVar21 + fVar25 * fVar25;
  uVar27 = local_24e8;
  sVar6 = thunk_FUN_180624430(fVar22);
  if ((sVar6 < 1) && (0.01 <= fVar22)) {
    FUN_18063aed0(local_24a8,param_3,0x23c0);
    fVar22 = *param_5;
    fVar23 = fVar22 - auVar24._0_4_;
    if (*(char *)(param_5 + 2) != '\0') {
      local_138 = uVar27;
      local_130 = fVar26;
      sVar6 = thunk_FUN_180624430(auVar24._0_8_);
      lVar13 = local_24f0;
      if ((((sVar6 < 1) && (-0.0078125 <= fVar23)) && (fVar23 <= param_5[1])) &&
         (local_f8 = auVar24._0_4_, local_f8 <= fVar22)) {
        local_f4 = (int)(local_f8 * 64.0 + 0.5);
        local_120 = CONCAT44(fStack_24d8,local_24dc);
        local_118 = local_24d4;
        local_ed = 1;
        if (0 < local_213c) {
          lVar15 = 0;
          pfVar7 = local_2138 + 1;
          do {
            if (0x7f < lVar15) break;
            pfVar7[-1] = fVar21 + pfVar7[-1];
            pfVar7[1] = fVar25 + pfVar7[1];
            *pfVar7 = fVar19 + *pfVar7;
            pfVar7 = pfVar7 + 8;
            iVar16 = iVar16 + 1;
            lVar15 = lVar15 + 1;
          } while (iVar16 < local_213c);
        }
        local_fc = uVar3;
        FUN_18063aed0(local_24f0,local_24a8,0x23c0);
        *(undefined1 *)(lVar13 + 0x23c0) = 1;
      }
    }
  }
LAB_180233bde:
  *(undefined1 *)(local_24f0 + 0x23c0) = 0;
}




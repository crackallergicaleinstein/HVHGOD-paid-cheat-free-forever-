// FUN_1800b3290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b3290 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b3290(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_a6d8 [32];
  undefined1 local_a6b8 [8];
  undefined8 uStack_a6b0;
  char *local_a6a8;
  undefined8 **ppuStack_a6a0;
  undefined1 local_a698 [16];
  float local_a688 [4];
  undefined8 local_a678;
  undefined8 local_a670;
  undefined4 local_a668;
  char local_a660 [24];
  undefined1 local_a648 [16];
  undefined8 local_a638;
  char local_a630 [24];
  undefined1 local_a618 [16];
  undefined8 local_a608;
  char local_a600 [24];
  undefined1 local_a5e8 [16];
  undefined8 local_a5d8;
  undefined8 *local_a5d0;
  char local_a5c8 [24];
  undefined1 local_a5b0 [16];
  undefined8 local_a5a0;
  char local_a598 [32];
  longlong lStack_a578;
  undefined8 local_a570;
  char local_a568 [16];
  undefined8 local_a558;
  undefined1 local_a550 [16];
  undefined8 local_a540;
  undefined1 local_a538 [16];
  undefined8 local_a528;
  undefined1 local_a520 [8];
  char local_a518 [16];
  undefined8 local_a508;
  undefined1 local_a500 [16];
  undefined8 local_a4f0;
  undefined1 local_a4e8 [16];
  undefined8 local_a4d8;
  undefined1 local_a4d0 [8];
  char local_a4c8 [24];
  undefined1 local_a4b0 [24];
  char local_a498 [8];
  longlong lStack_a490;
  undefined4 local_a488;
  undefined4 local_a484;
  undefined1 local_a480 [172];
  char local_a3d4;
  char local_a3d3 [3];
  undefined4 local_a3d0;
  undefined4 local_a3cc;
  float local_a3c8;
  float local_a3c4 [16];
  char local_a384 [20848];
  undefined4 local_5214;
  undefined4 local_5210;
  float local_520c;
  float local_5208 [16];
  char local_51c8 [12];
  char local_51bc [142];
  char local_512e;
  int local_512c [3];
  char local_5120;
  char local_511f;
  float local_511c;
  int local_5118;
  float local_5114;
  int local_510c;
  char local_5108;
  int local_50e8;
  int local_50e4;
  float local_50e0 [5110];
  float local_108;
  float local_104;
  undefined1 local_100 [124];
  char local_84;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_a6d8;
  local_a668 = 0;
  local_a6a8 = (char *)*param_2;
  ppuStack_a6a0 = (undefined8 **)param_2[1];
  local_a5d0 = param_1;
  FUN_1800aee80(&local_a488,&local_a6a8);
  if (local_84 == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    lVar2 = FUN_1800aa200();
    FUN_1800f4a50(local_a498,lVar2 + 0x18);
    if ((local_a498[0] == '\x01') && (*(longlong *)(lStack_a490 + 8) != 0)) {
      FUN_1800b22d0(local_a498,local_a480,0);
      FUN_1800b22d0(local_a498,local_a384 + 0x50c0,1);
      local_a678 = (char *)CONCAT44(local_a678._4_4_,1);
      local_a688[0] = 0.0;
      local_a698 = ZEXT816(0);
      pfVar6 = local_a688;
      if (-1 < (int)local_108) {
        pfVar6 = &local_108;
      }
      pfVar7 = (float *)&local_a678;
      if ((int)local_108 < 2) {
        pfVar7 = pfVar6;
      }
      fVar16 = *pfVar7;
      FUN_1801409d0(local_a698 + 8,0);
      local_a698[0] = 5;
      local_a698._8_8_ = (longlong)(int)fVar16;
      local_a6b8 = (undefined1  [8])0x1806bc840;
      uStack_a6b0 = 6.42285339593621e-323;
      local_a678 = "combat";
      local_a670 = 6;
      FUN_1800afbf0(local_a498,&local_a678,local_a6b8,local_a698);
      local_a688[0] = 3.57331e-43;
      local_a678 = (char *)((ulonglong)local_a678 & 0xffffffff00000000);
      local_a698 = ZEXT816(0);
      pfVar6 = (float *)&local_a678;
      if (-1 < (int)local_104) {
        pfVar6 = &local_104;
      }
      pfVar7 = local_a688;
      if ((int)local_104 < 0x100) {
        pfVar7 = pfVar6;
      }
      fVar16 = *pfVar7;
      FUN_1801409d0(local_a698 + 8,0);
      local_a698[0] = 5;
      local_a6b8 = (undefined1  [8])0x1806bc858;
      uStack_a6b0 = 6.91691904177745e-323;
      local_a678 = "combat";
      local_a670 = 6;
      local_a698._8_8_ = (longlong)(int)fVar16;
      FUN_1800afbf0(local_a498,&local_a678,local_a6b8,local_a698);
      if (local_108 == 0.0) {
        puVar13 = &local_a3cc;
        puVar14 = &local_a3d0;
        pcVar11 = local_a3d3;
        pfVar6 = &local_a3c8;
        pfVar7 = local_a3c4;
        pcVar12 = local_a384;
        local_a698._0_8_ = local_a384 + 0xc;
        local_a384[0x516c] = local_a3d4;
        local_5214 = local_a3d0;
        local_5210 = local_a3cc;
      }
      else {
        puVar13 = &local_5210;
        puVar14 = &local_5214;
        pcVar11 = local_a384 + 0x516d;
        pfVar6 = &local_520c;
        pfVar7 = local_5208;
        pcVar12 = local_51c8;
        local_a698._0_8_ = local_51bc;
      }
      uVar3 = FUN_1800afd50(&local_a6a8,local_a384[0x516c] != '\0',local_5214,local_5210);
      local_a6b8 = (undefined1  [8])0x1806bc868;
      uStack_a6b0 = 3.95252516672997e-323;
      local_a678 = "other \'bots\'";
      local_a670 = 0xc;
      FUN_1800afbf0(local_a498,&local_a678,local_a6b8,uVar3);
      uVar3 = FUN_1800afd50(&local_a6a8,*pcVar11 != '\0',*puVar14,*puVar13);
      uStack_a6b0 = 3.45845952088873e-323;
      local_a6b8 = (undefined1  [8])"zeusbot";
      local_a678 = "other \'bots\'";
      local_a670 = 0xc;
      FUN_1800afbf0(local_a498,&local_a678,local_a6b8,uVar3);
      fVar17 = 180.0;
      local_a688[0] = 180.0;
      fVar16 = 0.0;
      local_a678 = (char *)((ulonglong)local_a678 & 0xffffffff00000000);
      _local_a6b8 = ZEXT816(0);
      pfVar5 = (float *)&local_a678;
      if (0.0 <= *pfVar6) {
        pfVar5 = pfVar6;
      }
      pfVar4 = local_a688;
      if (*pfVar6 <= 180.0) {
        pfVar4 = pfVar5;
      }
      fVar15 = *pfVar4;
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 7;
      uStack_a6b0 = (double)fVar15;
      local_a678 = "max fov";
      local_a670 = 7;
      local_a6a8 = "knifebot";
      ppuStack_a6a0 = (undefined8 **)0x8;
      FUN_1800afbf0(local_a498,&local_a6a8,&local_a678,local_a6b8);
      local_a688[0] = fVar17;
      local_a678 = (char *)CONCAT44(local_a678._4_4_,fVar16);
      _local_a6b8 = ZEXT816(0);
      pfVar6 = (float *)&local_a678;
      if (fVar16 <= *pfVar7) {
        pfVar6 = pfVar7;
      }
      pfVar5 = local_a688;
      if (*pfVar7 <= fVar17) {
        pfVar5 = pfVar6;
      }
      fVar15 = *pfVar5;
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 7;
      local_a6a8 = "max fov";
      ppuStack_a6a0 = (undefined8 **)0x7;
      local_a678 = "zeusbot";
      local_a670 = 7;
      uStack_a6b0 = (double)fVar15;
      FUN_1800afbf0(local_a498,&local_a678,&local_a6a8,local_a6b8);
      uVar3 = FUN_1800afd50(&local_a678,*pcVar12 != '\0',2,0);
      local_a6a8 = "crosshair overlay";
      ppuStack_a6a0 = (undefined8 **)0x11;
      local_a6b8 = (undefined1  [8])0x1806bc8a8;
      uStack_a6b0 = 4.44659081257122e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800b0250(&local_a678,local_a698._0_8_);
      local_a6a8 = "color";
      ppuStack_a6a0 = (undefined8 **)0x5;
      local_a6b8 = (undefined1  [8])0x1806bc8a8;
      uStack_a6b0 = 4.44659081257122e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_5120 != '\0',2,0);
      local_a6a8 = "anti aim";
      ppuStack_a6a0 = (undefined8 **)0x8;
      uStack_a6b0 = 3.95252516672997e-323;
      local_a6b8 = (undefined1  [8])"anti aim";
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      local_a688[0] = 4.2039e-45;
      local_a678 = (char *)((ulonglong)local_a678 & 0xffffffff00000000);
      _local_a6b8 = ZEXT816(0);
      pfVar6 = (float *)&local_a678;
      if (-1 < (int)local_511c) {
        pfVar6 = &local_511c;
      }
      pfVar7 = local_a688;
      if ((int)local_511c < 4) {
        pfVar7 = pfVar6;
      }
      fVar15 = *pfVar7;
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 5;
      uStack_a6b0 = (double)(longlong)(int)fVar15;
      local_a6a8 = "pitch";
      ppuStack_a6a0 = (undefined8 **)0x5;
      local_a698._0_8_ = "anti aim";
      local_a698._8_8_ = 8;
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      _local_a6b8 = ZEXT816(0);
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 7;
      uStack_a6b0 = 0.0;
      local_a6a8 = "custom pitch";
      ppuStack_a6a0 = (undefined8 **)0xc;
      local_a698._0_8_ = "anti aim";
      local_a698._8_8_ = 8;
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      _local_a6b8 = ZEXT816(0);
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 5;
      uStack_a6b0._0_1_ = local_50e8 != 1;
      uStack_a6b0._1_7_ = 0;
      local_a6a8 = "yaw mode";
      ppuStack_a6a0 = (undefined8 **)0x8;
      local_a698._8_8_ = 8;
      local_a698._0_8_ = "anti aim";
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      uVar3 = FUN_1800afd50(local_a698,local_5118 == 4,2,0);
      local_a6a8 = "spinbot";
      ppuStack_a6a0 = (undefined8 **)0x7;
      uStack_a6b0 = 3.95252516672997e-323;
      local_a6b8 = (undefined1  [8])"anti aim";
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      local_a698._0_4_ = 0x40a00000;
      local_a678._0_4_ = -5.0;
      local_a688[0] = local_5114 / 360.0;
      _local_a6b8 = ZEXT816(0);
      pfVar6 = (float *)&local_a678;
      if (-5.0 <= local_a688[0]) {
        pfVar6 = local_a688;
      }
      pfVar7 = (float *)local_a698;
      if (local_a688[0] <= 5.0) {
        pfVar7 = pfVar6;
      }
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 7;
      local_a6a8 = "spin speed rev/s";
      ppuStack_a6a0 = (undefined8 **)0x10;
      local_a698._8_8_ = 8;
      local_a698._0_8_ = "anti aim";
      uStack_a6b0 = (double)*pfVar7;
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      uVar3 = FUN_1800afd50(local_a698,local_50e4 != 0,2,0);
      local_a6a8 = "jitter";
      ppuStack_a6a0 = (undefined8 **)0x6;
      uStack_a6b0 = 3.95252516672997e-323;
      local_a6b8 = (undefined1  [8])"anti aim";
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      local_a678._0_4_ = fVar17;
      local_a698._0_4_ = fVar16;
      _local_a6b8 = ZEXT816(0);
      pfVar6 = (float *)local_a698;
      if (fVar16 <= local_50e0[0]) {
        pfVar6 = local_50e0;
      }
      pfVar7 = (float *)&local_a678;
      if (local_50e0[0] <= fVar17) {
        pfVar7 = pfVar6;
      }
      fVar16 = *pfVar7;
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 7;
      local_a6a8 = "jitter amount";
      ppuStack_a6a0 = (undefined8 **)0xd;
      local_a698._8_8_ = 8;
      local_a698._0_8_ = "anti aim";
      uStack_a6b0 = (double)fVar16;
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      uVar3 = FUN_1800afd50(local_a698,local_511f != '\0',2,0);
      local_a6a8 = "hide onshot";
      ppuStack_a6a0 = (undefined8 **)0xb;
      local_a6b8 = (undefined1  [8])0x1806bc8c0;
      uStack_a6b0 = 3.95252516672997e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_510c == 2,2,0);
      local_a6a8 = "force left";
      ppuStack_a6a0 = (undefined8 **)0xa;
      local_a6b8 = (undefined1  [8])0x1806bc8c0;
      uStack_a6b0 = 3.95252516672997e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_510c == 3,2,0);
      local_a6a8 = "force right";
      ppuStack_a6a0 = (undefined8 **)0xb;
      local_a6b8 = (undefined1  [8])0x1806bc8c0;
      uStack_a6b0 = 3.95252516672997e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_5108 != '\0',2,0);
      local_a6a8 = "auto revolver";
      ppuStack_a6a0 = (undefined8 **)0xd;
      local_a6b8 = (undefined1  [8])0x1806bc970;
      uStack_a6b0 = 2.47032822920623e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_a384[0x5120] != '\0',2,0);
      local_a6a8 = "auto scope";
      ppuStack_a6a0 = (undefined8 **)0xa;
      local_a6b8 = (undefined1  [8])0x1806bc970;
      uStack_a6b0 = 2.47032822920623e-323;
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      uVar3 = FUN_1800afd50(local_a698,local_512e != '\0',2,0);
      local_a6a8 = "extrapolation";
      ppuStack_a6a0 = (undefined8 **)0xd;
      uStack_a6b0 = 3.45845952088873e-323;
      local_a6b8 = (undefined1  [8])"ragebot";
      FUN_1800afbf0(local_a498,local_a6b8,&local_a6a8,uVar3);
      local_a678 = (char *)CONCAT44(local_a678._4_4_,0x10);
      local_a698._0_4_ = 1;
      _local_a6b8 = ZEXT816(0);
      piVar10 = (int *)local_a698;
      if (0 < local_512c[0]) {
        piVar10 = local_512c;
      }
      piVar8 = (int *)&local_a678;
      if (local_512c[0] < 0x11) {
        piVar8 = piVar10;
      }
      iVar1 = *piVar8;
      FUN_1801409d0(&uStack_a6b0,0);
      local_a6b8[0] = 5;
      uStack_a6b0 = (double)(longlong)iVar1;
      local_a6a8 = "max extrapolate ticks";
      ppuStack_a6a0 = (undefined8 **)0x15;
      local_a698._8_8_ = 7;
      local_a698._0_8_ = "ragebot";
      FUN_1800afbf0(local_a498,local_a698,&local_a6a8,local_a6b8);
      FUN_1800b2db0(local_a498,local_100);
      FUN_1800e60e0(local_a600,"version");
      local_a5e8 = ZEXT816(0);
      FUN_1801409d0(local_a5e8 + 8,0);
      local_a5e8[0] = 5;
      local_a5e8._8_8_ = 0xc;
      local_a5d8 = 0;
      local_a6a8 = local_a600;
      ppuStack_a6a0 = &local_a5d0;
      FUN_1800f4e90(local_a568,&local_a6a8,1,2);
      local_a558 = 0;
      FUN_1800e60e0(local_a598,"fields");
      lStack_a578 = lStack_a490;
      local_a498[0] = '\0';
      lStack_a490 = 0;
      local_a570 = 0;
      local_a6a8 = local_a598;
      ppuStack_a6a0 = (undefined8 **)local_a568;
      FUN_1800f4e90(local_a550,&local_a6a8,1,2);
      local_a540 = 0;
      FUN_1800e60e0(local_a5c8,"migration");
      FUN_1800e60e0(local_a4c8,"format");
      FUN_1800e60e0(local_a4b0,&DAT_1806bc9c4);
      local_a6a8 = local_a4c8;
      ppuStack_a6a0 = (undefined8 **)local_a498;
      FUN_1800f4e90(local_a518,&local_a6a8,1,2);
      local_a508 = 0;
      FUN_1800e60e0(local_a630,"version");
      local_a618 = ZEXT816(0);
      FUN_1801409d0(local_a618 + 8,0);
      local_a618[0] = 6;
      local_a618._8_4_ = local_a488;
      local_a618._12_4_ = 0;
      local_a608 = 0;
      local_a6a8 = local_a630;
      ppuStack_a6a0 = (undefined8 **)local_a600;
      FUN_1800f4e90(local_a500,&local_a6a8,1,2);
      local_a4f0 = 0;
      FUN_1800e60e0(local_a660,"repaired_flags");
      local_a648 = ZEXT816(0);
      FUN_1801409d0(local_a648 + 8,0);
      local_a648[0] = 6;
      local_a648._8_4_ = local_a484;
      local_a648._12_4_ = 0;
      local_a638 = 0;
      local_a6a8 = local_a660;
      ppuStack_a6a0 = (undefined8 **)local_a630;
      FUN_1800f4e90(local_a4e8,&local_a6a8,1,2);
      local_a4d8 = 0;
      local_a6a8 = local_a518;
      ppuStack_a6a0 = (undefined8 **)local_a4d0;
      FUN_1800f4e90(local_a5b0,&local_a6a8,1,2);
      local_a5a0 = 0;
      local_a6a8 = local_a5c8;
      ppuStack_a6a0 = (undefined8 **)local_a598;
      FUN_1800f4e90(local_a538,&local_a6a8,1,2);
      local_a528 = 0;
      local_a6a8 = local_a568;
      ppuStack_a6a0 = (undefined8 **)local_a520;
      puVar9 = (undefined8 *)FUN_1800f4e90(local_a6b8,&local_a6a8,1,2);
      uVar3 = puVar9[1];
      *param_1 = *puVar9;
      param_1[1] = uVar3;
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      local_a668 = 1;
      FUN_1801409d0(&uStack_a6b0,local_a6b8[0]);
      _eh_vector_destructor_iterator_(local_a568,0x18,3,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a5c8,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a518,0x18,3,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a660,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a630,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a4c8,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a598,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_a600,0x18,2,FUN_1800aab30);
      FUN_1801409d0(&lStack_a490,local_a498[0]);
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      local_a668 = 1;
      FUN_1801409d0(&lStack_a490);
    }
  }
}




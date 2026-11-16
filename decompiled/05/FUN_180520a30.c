// FUN_180520a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180520a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180520a30(char param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  longlong *plVar8;
  uint *puVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  char *pcVar18;
  char *pcVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_a8;
  int local_a0 [2];
  undefined8 local_98;
  char *local_90;
  int local_88 [2];
  char *local_80;
  char *local_78;
  char *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_88[1] = 2;
  local_88[0] = 0;
  lVar17 = *(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8);
  piVar20 = (int *)(lVar17 + 0x2e8);
  piVar13 = local_88;
  if (-1 < *piVar20) {
    piVar13 = piVar20;
  }
  piVar7 = local_88 + 1;
  if (*piVar20 < 3) {
    piVar7 = piVar13;
  }
  local_a0[0] = *piVar7;
  if (local_a0[0] == 0) {
    local_80 = &DAT_180cb00f8;
    local_78 = &DAT_180cb0478;
    pcVar18 = &DAT_180cb2b28;
  }
  else {
    local_80 = &DAT_180cb07f8;
    if (local_a0[0] != 1) {
      local_80 = &DAT_180cb0ef8;
    }
    pcVar18 = &DAT_180cb2c28;
    local_78 = &DAT_180cb0b78;
    if (local_a0[0] != 1) {
      local_78 = &DAT_180cb1278;
      pcVar18 = &DAT_180cb2d28;
    }
  }
  fVar21 = 255.0;
  lVar16 = (longlong)local_a0[0] * 0xbe0;
  pcVar19 = &DAT_180cadd58 + lVar16;
  local_70 = &DAT_180cb20a0;
  if (local_a0[0] != 1) {
    local_70 = &DAT_180cb1998;
  }
  local_90 = &DAT_180cb1d20;
  if (local_a0[0] != 1) {
    local_90 = &DAT_180cb15f8;
  }
  local_98 = pcVar18;
  local_58 = lVar16;
  if (param_1 == '\0') {
    cVar2 = *(char *)(lVar17 + 0x3850);
    if (DAT_180cadce0 != cVar2) {
      DAT_180cadce0 = cVar2;
      DAT_180cadcf0 = cVar2;
    }
    puVar9 = (uint *)FUN_1805206f0(&local_98,lVar17 + 0x3854);
    fVar22 = 0.2;
    DAT_180cadd48 = *puVar9;
    fVar1 = *(float *)(lVar17 + 0x3864);
    local_98 = (char *)CONCAT44(local_98._4_4_,0x40c00000);
    pfVar14 = (float *)&local_a8;
    if (0.2 <= fVar1) {
      pfVar14 = (float *)(lVar17 + 0x3864);
    }
    local_a8 = (char *)CONCAT44(local_a8._4_4_,0x3e4ccccd);
    pfVar10 = (float *)&local_98;
    if (fVar1 <= 6.0) {
      pfVar10 = pfVar14;
    }
    DAT_180cadd4c = *pfVar10;
    fVar1 = *(float *)(lVar17 + 0x3868);
    local_a8._0_4_ = 200.0;
    pfVar14 = (float *)&local_98;
    if (4.0 <= fVar1) {
      pfVar14 = (float *)(lVar17 + 0x3868);
    }
    local_98._0_4_ = 4.0;
    pfVar10 = (float *)&local_a8;
    if (fVar1 <= 200.0) {
      pfVar10 = pfVar14;
    }
    DAT_180cadd50 = *pfVar10;
    DAT_180cadd54 = *(undefined1 *)(lVar17 + 0x386c);
    cVar2 = *(char *)(lVar17 + 0x37f0);
    if (*pcVar19 != cVar2) {
      *pcVar19 = cVar2;
      (&DAT_180cadd68)[lVar16] = cVar2;
    }
    cVar2 = *(char *)(lVar17 + 0x37f4);
    if ((&DAT_180cae828)[lVar16] != cVar2) {
      (&DAT_180cae828)[lVar16] = cVar2;
      (&DAT_180cae838)[lVar16] = cVar2;
    }
    puVar12 = (undefined4 *)FUN_1805206f0(&local_98,lVar17 + 0x37f8);
    uVar4 = *puVar12;
    *(undefined4 *)(&DAT_180cae92c + lVar16) = uVar4;
    *(undefined4 *)(&DAT_180cae928 + lVar16) = uVar4;
    cVar2 = *(char *)(lVar17 + 0x39a8);
    if (*pcVar18 != cVar2) {
      *pcVar18 = cVar2;
      pcVar18[0x10] = cVar2;
    }
    puVar12 = (undefined4 *)FUN_1805206f0(&local_98,lVar17 + 0x39b0);
    local_a8 = (char *)CONCAT44(local_a8._4_4_,0x40000000);
    *(undefined4 *)(pcVar18 + 0x68) = *puVar12;
    DAT_180cb1d1c = *(undefined1 *)(lVar17 + 0x39c0);
    fVar1 = *(float *)(lVar17 + 0x39c4);
    local_98 = (char *)CONCAT44(local_98._4_4_,fVar22);
    pfVar14 = (float *)&local_98;
    if (fVar22 <= fVar1) {
      pfVar14 = (float *)(lVar17 + 0x39c4);
    }
    pfVar10 = (float *)&local_a8;
    if (fVar1 <= 2.0) {
      pfVar10 = pfVar14;
    }
    DAT_180cb1d18 = *pfVar10;
  }
  else {
    local_a8 = (char *)(lVar17 + 0x39a4);
    *local_a8 = *local_80;
    *(char *)(lVar17 + 0x39a7) = *local_78;
    *(char *)(lVar17 + 0x39a5) = *local_70;
    *(char *)(lVar17 + 0x39a6) = *local_90;
    *(char *)(lVar17 + 0x39a8) = *pcVar18;
    plVar8 = (longlong *)FUN_18056cec0(local_78,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = local_80;
    local_a8 = (char *)(lVar17 + 0x39a7);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = local_78;
    local_a8 = (char *)(lVar17 + 0x39a5);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = local_70;
    local_a8 = (char *)(lVar17 + 0x39a6);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = local_90;
    local_a8 = (char *)(lVar17 + 0x39a8);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = local_98;
    *(undefined1 *)(lVar17 + 0x39c0) = DAT_180cb1d1c;
    *(float *)(lVar17 + 0x39c4) = DAT_180cb1d18;
    local_a8 = (char *)(lVar17 + 0x37f0);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = pcVar19;
    local_a8 = (char *)(lVar17 + 0x3850);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    lVar15 = *plVar8;
    *(char **)(lVar15 + 0x18) = &DAT_180cadce0;
    local_a8 = (undefined1 *)(lVar17 + 0x37f4);
    plVar8 = (longlong *)FUN_18056cec0(lVar15,local_68,&local_a8);
    *(undefined1 **)(*plVar8 + 0x18) = &DAT_180cae828 + lVar16;
    *(char *)(lVar17 + 0x3850) = DAT_180cadce0;
    uVar3 = DAT_180cadd48;
    *(float *)(lVar17 + 0x3854) = (float)(DAT_180cadd48 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3858) = (float)(uVar3 >> 8 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x385c) = (float)(uVar3 >> 0x10 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3860) = (float)(uVar3 >> 0x18) / fVar21;
    *(float *)(lVar17 + 0x3864) = DAT_180cadd4c;
    *(float *)(lVar17 + 0x3868) = DAT_180cadd50;
    *(undefined1 *)(lVar17 + 0x386c) = DAT_180cadd54;
    *(char *)(lVar17 + 0x37f0) = *pcVar19;
    *(undefined1 *)(lVar17 + 0x37f4) = (&DAT_180cae828)[lVar16];
    uVar3 = *(uint *)(&DAT_180cae928 + lVar16);
    *(float *)(lVar17 + 0x37f8) = (float)(uVar3 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x37fc) = (float)(uVar3 >> 8 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3800) = (float)(uVar3 >> 0x10 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3804) = (float)(uVar3 >> 0x18) / fVar21;
    uVar3 = *(uint *)(local_98 + 0x68);
    *(float *)(lVar17 + 0x39b0) = (float)(uVar3 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x39b4) = (float)(uVar3 >> 8 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x39b8) = (float)(uVar3 >> 0x10 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x39bc) = (float)(uVar3 >> 0x18) / fVar21;
  }
  piVar13 = (int *)(lVar17 + 0x3808);
  if (param_1 == '\0') {
    local_98 = (char *)((ulonglong)local_98 & 0xffffffff00000000);
    local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
    piVar7 = (int *)&local_98;
    if (-1 < *piVar13) {
      piVar7 = piVar13;
    }
    piVar11 = (int *)&local_a8;
    if (*piVar13 < 3) {
      piVar11 = piVar7;
    }
    *(int *)(&DAT_180cae90c + lVar16) = *piVar11;
    *(undefined4 *)(&DAT_180cae8f8 + lVar16) = *(undefined4 *)(lVar17 + 0x380c);
    *(undefined4 *)(&DAT_180cae8fc + lVar16) = *(undefined4 *)(lVar17 + 0x3810);
    *(undefined4 *)(&DAT_180cae900 + lVar16) = *(undefined4 *)(lVar17 + 0x3814);
    *(undefined4 *)(&DAT_180cae904 + lVar16) = *(undefined4 *)(lVar17 + 0x3818);
    *(undefined4 *)(&DAT_180cae914 + lVar16) = *(undefined4 *)(lVar17 + 0x381c);
    (&DAT_180cae910)[lVar16] = *(undefined1 *)(lVar17 + 0x3820);
    puVar12 = (undefined4 *)FUN_1805206f0(&local_98,lVar17 + 0x3830);
    *(undefined4 *)(&DAT_180cae920 + lVar16) = *puVar12;
    cVar2 = *(char *)(lVar17 + 0x3821);
    if ((&DAT_180cae890)[lVar16] != cVar2) {
      (&DAT_180cae890)[lVar16] = cVar2;
      (&DAT_180cae8a0)[lVar16] = cVar2;
    }
    *(undefined4 *)(&DAT_180cae908 + lVar16) = *(undefined4 *)(lVar17 + 0x3824);
    (&DAT_180cae911)[lVar16] = *(undefined1 *)(lVar17 + 0x3822);
    *(undefined4 *)(&DAT_180cae918 + lVar16) = *(undefined4 *)(lVar17 + 0x3828);
    *(undefined4 *)(&DAT_180cae91c + lVar16) = *(undefined4 *)(lVar17 + 0x382c);
    (&DAT_180cae912)[lVar16] = *(undefined1 *)(lVar17 + 0x3823);
    puVar12 = (undefined4 *)FUN_1805206f0(&local_98,lVar17 + 0x3840);
    *(undefined4 *)(&DAT_180cae924 + lVar16) = *puVar12;
  }
  else {
    *piVar13 = *(int *)(&DAT_180cae90c + lVar16);
    *(undefined4 *)(lVar17 + 0x380c) = *(undefined4 *)(&DAT_180cae8f8 + lVar16);
    *(undefined4 *)(lVar17 + 0x3810) = *(undefined4 *)(&DAT_180cae8fc + lVar16);
    *(undefined4 *)(lVar17 + 0x3814) = *(undefined4 *)(&DAT_180cae900 + lVar16);
    *(undefined4 *)(lVar17 + 0x3818) = *(undefined4 *)(&DAT_180cae904 + lVar16);
    *(undefined4 *)(lVar17 + 0x381c) = *(undefined4 *)(&DAT_180cae914 + lVar16);
    *(undefined *)(lVar17 + 0x3820) = (&DAT_180cae910)[lVar16];
    uVar3 = *(uint *)(&DAT_180cae920 + lVar16);
    *(float *)(lVar17 + 0x3830) = (float)(uVar3 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3834) = (float)(uVar3 >> 8 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3838) = (float)(uVar3 >> 0x10 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x383c) = (float)(uVar3 >> 0x18) / fVar21;
    *(undefined *)(lVar17 + 0x3821) = (&DAT_180cae890)[lVar16];
    *(undefined4 *)(lVar17 + 0x3824) = *(undefined4 *)(&DAT_180cae908 + lVar16);
    *(undefined *)(lVar17 + 0x3822) = (&DAT_180cae911)[lVar16];
    *(undefined4 *)(lVar17 + 0x3828) = *(undefined4 *)(&DAT_180cae918 + lVar16);
    *(undefined4 *)(lVar17 + 0x382c) = *(undefined4 *)(&DAT_180cae91c + lVar16);
    *(undefined *)(lVar17 + 0x3823) = (&DAT_180cae912)[lVar16];
    uVar3 = *(uint *)(&DAT_180cae924 + lVar16);
    *(float *)(lVar17 + 0x3840) = (float)(uVar3 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3844) = (float)(uVar3 >> 8 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x3848) = (float)(uVar3 >> 0x10 & 0xff) / fVar21;
    *(float *)(lVar17 + 0x384c) = (float)(uVar3 >> 0x18) / fVar21;
  }
  pcVar18 = local_80;
  local_b8 = 0;
  FUN_1805207a0(lVar17 + 0x3870);
  local_b8 = 1;
  FUN_1805207a0(lVar17 + 0x389c);
  pcVar19 = local_78;
  local_b8 = 0;
  FUN_1805207a0(lVar17 + 0x394c);
  local_b8 = 1;
  FUN_1805207a0(lVar17 + 0x3978);
  pcVar6 = local_70;
  iVar5 = local_a0[0];
  lVar15 = (longlong)local_a0[0];
  if (local_a0[0] == 0) {
    local_b8 = local_a0[0];
    FUN_1805207a0(lVar17 + 0x38c8);
    local_b8 = iVar5;
    FUN_1805207a0(lVar17 + 0x38f4);
    local_b8 = 1;
    FUN_1805207a0(lVar17 + 0x3920);
  }
  if (param_1 == '\0') {
    pcVar18[0x278] = '\0';
    pcVar19[0x278] = '\0';
    cVar2 = *(char *)(lVar17 + 0x39a4);
    if (*pcVar18 != cVar2) {
      *pcVar18 = cVar2;
      pcVar18[0x10] = cVar2;
    }
    cVar2 = *(char *)(lVar17 + 0x39a7);
    if (*pcVar19 != cVar2) {
      *pcVar19 = cVar2;
      pcVar19[0x10] = cVar2;
    }
    if (iVar5 == 0) {
      local_90[0x278] = '\0';
      pcVar6[0x278] = '\0';
      pcVar6[0x170] = '\0';
      cVar2 = *(char *)(lVar17 + 0x39a5);
      if (*pcVar6 != cVar2) {
        *pcVar6 = cVar2;
        pcVar6[0x10] = cVar2;
      }
      cVar2 = *(char *)(lVar17 + 0x39a6);
      if (*local_90 != cVar2) {
        *local_90 = cVar2;
        local_90[0x10] = cVar2;
      }
    }
    lVar17 = lVar15 * 0x11ac;
    (&DAT_180caddc0)[lVar16] = (char)piVar20[lVar15 * 0x46b + 1];
    (&DAT_180cae730)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0x28];
    (&DAT_180cae000)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0x76];
    (&DAT_180cae460)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0x9d];
    (&DAT_180cae230)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0x41e];
    (&DAT_180cadf18)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0xc4];
    (&DAT_180cae7a8)[lVar16] = (char)piVar20[lVar15 * 0x46b + 0x334];
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,piVar20 + lVar15 * 0x46b + 0x2b);
    *(undefined4 *)(&DAT_180cae798 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0x1e4 + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae210 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0x21c + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae214 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0x1084 + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae440 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0x10bc + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae444 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0x280 + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae670 + lVar16) = *puVar12;
    puVar12 = (undefined4 *)FUN_1805206f0(local_a0,lVar17 + 0xcdc + (longlong)piVar20);
    *(undefined4 *)(&DAT_180cae81c + lVar16) = *puVar12;
    (&DAT_180cae6f8)[lVar16] = *(undefined1 *)(lVar17 + 0xafc + (longlong)piVar20);
    (&DAT_180cae6f9)[local_58] = *(undefined1 *)(lVar17 + 0x3ac + (longlong)piVar20);
    (&DAT_180cae6fa)[local_58] = *(undefined1 *)(lVar17 + 0x448 + (longlong)piVar20);
    (&DAT_180cae6fb)[local_58] = *(undefined1 *)(lVar17 + 0x580 + (longlong)piVar20);
    (&DAT_180cae6fc)[local_58] = *(undefined1 *)(lVar17 + 0x9c4 + (longlong)piVar20);
    (&DAT_180cae6fd)[local_58] = *(undefined1 *)(lVar17 + 0x4e4 + (longlong)piVar20);
    (&DAT_180cae6fe)[local_58] = *(undefined1 *)(lVar17 + 0x1114 + (longlong)piVar20);
    (&DAT_180cae6ff)[local_58] = *(undefined1 *)(lVar17 + 0x13c + (longlong)piVar20);
    (&DAT_180cae700)[local_58] = *(undefined1 *)(lVar17 + 0x6b8 + (longlong)piVar20);
    (&DAT_180cae690)[lVar16] = 1;
  }
}




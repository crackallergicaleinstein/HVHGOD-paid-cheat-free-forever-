// FUN_1804f7030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7030 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f7030(ulonglong param_1,float param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_80 [12];
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  ulonglong local_60;
  
  lVar7 = DAT_180bb8ae8;
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar17 = *(longlong *)(lVar7 + 0x14d0);
  local_80._0_8_ = lVar17;
  if (*(char *)(lVar17 + 0xd1) != '\0') {
  }
  if ((param_1 & 2) != 0) {
    fStack_6c = *(float *)(lVar17 + 0x11c);
    local_70 = *(float *)(lVar17 + 0x118);
    fStack_64 = fStack_6c + *(float *)(lVar17 + 0x144);
    fStack_68 = local_70 + param_2;
    uVar20 = 0;
    local_98._4_4_ = 0;
    local_98._0_4_ = param_2;
    FUN_1804c6420(local_98,0xbf800000);
    lVar18 = DAT_180bb8ae8;
    uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    uVar3 = *(uint *)(DAT_180bb8ae8 + 0x1e8c);
    *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = 0;
    *(ulonglong *)(lVar18 + 0x1ecc) = CONCAT44(fStack_6c,local_70);
    *(ulonglong *)(lVar18 + 0x1ed4) = CONCAT44(fStack_64,fStack_68);
    *(uint *)(lVar18 + 0x1ec4) = uVar2 | uVar3;
    lVar5 = *(longlong *)(lVar18 + 0x14d0);
    *(ulonglong *)(lVar18 + 0x1edc) = CONCAT44(fStack_6c,local_70);
    *(ulonglong *)(lVar18 + 0x1ee4) = CONCAT44(fStack_64,fStack_68);
    *(undefined4 *)(lVar18 + 0x1ec8) = 0;
    *(undefined8 *)(lVar18 + 0x1e88) = 0;
    if ((((fStack_64 <= *(float *)(lVar5 + 0x26c)) || (*(float *)(lVar5 + 0x274) <= fStack_6c)) ||
        (fStack_68 <= *(float *)(lVar5 + 0x268))) || (*(float *)(lVar5 + 0x270) <= local_70)) {
      if (*(char *)(lVar18 + 0x154e) == '\0') {
      }
      uVar10 = 1;
    }
    else {
      *(undefined4 *)(lVar18 + 0x1ec8) = 0x100;
      uVar10 = 0x101;
    }
    cVar9 = FUN_1804c3600(&local_70,&fStack_68,1);
    if (cVar9 != '\0') {
      *(undefined4 *)(lVar18 + 0x1ec8) = uVar10;
    }
    auVar1 = *(undefined1 (*) [16])(lVar18 + 0xf88);
    auVar8 = vshufps_avx(auVar1,auVar1,0xff);
    local_80 = auVar1._0_12_;
    fStack_74 = auVar8._0_4_ * *(float *)(lVar18 + 0xc84);
    uVar10 = FUN_1804b1120(local_80);
    local_a0 = 0;
    local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar20);
    FUN_1804df870(*(undefined8 *)(lVar17 + 0x2c8),&local_70,&fStack_68,uVar10);
    if (*(char *)(lVar7 + 0x2840) == '\0') {
    }
    FUN_1804cda40(&DAT_18085bc94);
  }
  if ((param_1 & 1) == 0) {
  }
  local_70 = *(float *)(lVar17 + 0x118);
  fVar22 = *(float *)(lVar17 + 0x250);
  if ((param_1 & 4) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = *(longlong *)(lVar17 + 0x1c8);
    if (local_88 != 0) {
      auVar21 = ZEXT464((uint)(*(float *)(lVar17 + 0x28) + *(float *)(lVar17 + 0x15c)));
      fVar22 = *(float *)(lVar17 + 0x28) + *(float *)(lVar17 + 0x30);
      FUN_1804f38c0();
      local_70 = auVar21._0_4_;
    }
  }
  fStack_6c = *(float *)(lVar17 + 0x11c);
  fStack_64 = fStack_6c + param_2;
  uVar20 = 0;
  auVar1._4_8_ = local_98._8_8_;
  auVar1._0_4_ = param_2;
  auVar1._12_4_ = 0;
  local_98 = auVar1 << 0x20;
  fStack_68 = fVar22;
  FUN_1804c6420(local_98,0xbf800000);
  lVar18 = DAT_180bb8ae8;
  uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
  uVar3 = *(uint *)(DAT_180bb8ae8 + 0x1e8c);
  *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = 0;
  *(ulonglong *)(lVar18 + 0x1ecc) = CONCAT44(fStack_6c,local_70);
  *(ulonglong *)(lVar18 + 0x1ed4) = CONCAT44(fStack_64,fStack_68);
  *(uint *)(lVar18 + 0x1ec4) = uVar2 | uVar3;
  lVar5 = *(longlong *)(lVar18 + 0x14d0);
  *(ulonglong *)(lVar18 + 0x1edc) = CONCAT44(fStack_6c,local_70);
  *(ulonglong *)(lVar18 + 0x1ee4) = CONCAT44(fStack_64,fStack_68);
  *(undefined4 *)(lVar18 + 0x1ec8) = 0;
  *(undefined8 *)(lVar18 + 0x1e88) = 0;
  if (((fStack_64 <= *(float *)(lVar5 + 0x26c)) || (*(float *)(lVar5 + 0x274) <= fStack_6c)) ||
     ((fStack_68 <= *(float *)(lVar5 + 0x268) || (*(float *)(lVar5 + 0x270) <= local_70)))) {
    if (*(char *)(lVar18 + 0x154e) == '\0') goto LAB_1804f75de;
    uVar10 = 1;
  }
  else {
    *(undefined4 *)(lVar18 + 0x1ec8) = 0x100;
    uVar10 = 0x101;
  }
  cVar9 = FUN_1804c3600(&local_70,&fStack_68,1);
  if (cVar9 != '\0') {
    *(undefined4 *)(lVar18 + 0x1ec8) = uVar10;
  }
  auVar1 = *(undefined1 (*) [16])(lVar18 + 0xf88);
  auVar8 = vshufps_avx(auVar1,auVar1,0xff);
  local_98._0_12_ = auVar1._0_12_;
  local_98._12_4_ = auVar8._0_4_ * *(float *)(lVar18 + 0xc84);
  uVar10 = FUN_1804b1120(local_98);
  local_a0 = 0;
  local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar20);
  FUN_1804df870(*(undefined8 *)(lVar17 + 0x2c8),&local_70,&fStack_68,uVar10);
  lVar5 = DAT_180bb8ae8;
  if (*(char *)(lVar7 + 0x2840) != '\0') {
    pcVar19 = "--------------------------------\n";
    uVar6 = *(undefined8 *)(DAT_180bb8ae8 + 0x14d0);
    lVar17 = *(longlong *)(DAT_180bb8ae8 + 0x2868);
    lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x2870);
    *(undefined8 *)(DAT_180bb8ae8 + 0x2870) = 0;
    *(undefined8 *)(lVar5 + 0x2868) = 0;
    local_98._0_8_ = uVar6;
    pcVar15 = "--------------------------------\n";
    do {
      if ((*pcVar15 == '\0') || ((pcVar16 = pcVar15 + 1, *pcVar15 == '#' && (*pcVar16 == '#'))))
      break;
      pcVar15 = pcVar16;
    } while (pcVar16 != (char *)0xffffffffffffffff);
    auVar1 = vmaxss_avx(ZEXT416(*(uint *)(lVar5 + 0xcc8)),ZEXT416(*(uint *)(lVar5 + 0xcd8)));
    fVar22 = *(float *)(lVar5 + 0x2878);
    *(float *)(lVar5 + 0x2878) = fStack_6c;
    if (auVar1._0_4_ + fVar22 + 1.0 < fStack_6c) {
      FUN_1804cda40(&DAT_18085b098);
      *(undefined1 *)(lVar5 + 0x2841) = 1;
    }
    lVar18 = -1;
    if (lVar17 != 0) {
      lVar11 = -1;
      do {
        pcVar16 = (char *)(lVar17 + 1 + lVar11);
        lVar11 = lVar11 + 1;
      } while (*pcVar16 != '\0');
      FUN_1804cda80(&local_70,lVar17,lVar17 + lVar11);
    }
    iVar4 = *(int *)(local_98._0_8_ + 0x1a0);
    iVar13 = *(int *)(lVar5 + 0x287c);
    if (iVar4 < *(int *)(lVar5 + 0x287c)) {
      *(int *)(lVar5 + 0x287c) = iVar4;
      iVar13 = iVar4;
    }
    iVar4 = *(int *)(local_98._0_8_ + 0x1a0);
    while( true ) {
      pcVar12 = (char *)FUN_18063b630(pcVar19,10,(longlong)pcVar15 - (longlong)pcVar19);
      pcVar16 = pcVar15;
      if (pcVar12 != (char *)0x0) {
        pcVar16 = pcVar12;
      }
      if ((pcVar19 == pcVar16) && (pcVar16 == pcVar15)) break;
      iVar14 = (iVar4 - iVar13) * 4;
      if (*(char *)(lVar5 + 0x2841) == '\0') {
        iVar14 = 1;
      }
      local_a8 = pcVar19;
      FUN_1804cda40("%*s%.*s",iVar14,&PTR_180700558,(int)pcVar16 - (int)pcVar19);
      *(undefined1 *)(lVar5 + 0x2841) = 0;
      if (*pcVar16 == '\n') {
        FUN_1804cda40(&DAT_18085b098);
        *(undefined1 *)(lVar5 + 0x2841) = 1;
      }
      if (pcVar16 == pcVar15) break;
      pcVar19 = pcVar16 + 1;
    }
    lVar17 = local_80._0_8_;
    if (lVar7 != 0) {
      do {
        pcVar19 = (char *)(lVar7 + 1 + lVar18);
        lVar18 = lVar18 + 1;
      } while (*pcVar19 != '\0');
      FUN_1804cda80(&local_70,lVar7,lVar7 + lVar18);
    }
  }
LAB_1804f75de:
  lVar7 = local_88;
  if (local_88 != 0) {
    FUN_1804f3980();
    *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar17 + 0x11c);
  }
}




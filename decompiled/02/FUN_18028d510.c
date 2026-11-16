// FUN_18028d510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028d510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18028d510(undefined8 param_1,longlong param_2,int param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auStack_168 [32];
  ulonglong local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  byte local_f8 [8];
  undefined1 local_f0 [16];
  ulonglong *local_e0;
  ulonglong *local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  undefined8 *local_c0;
  undefined **local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  undefined *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_f0 = ZEXT816(0x1807d0d80);
  local_98 = param_4;
  FUN_18017bf40(local_f0 + 8);
  DVar7 = GetCurrentThreadId();
  if (DAT_180c65e3c != 0) {
    uVar17 = 0;
    do {
      if (((&DAT_180c660c0)[uVar17] == DVar7) &&
         ((param_2 == 0 || (*(longlong *)(&DAT_180c65e40 + (ulonglong)uVar17 * 8) == param_2))))
      goto LAB_18028dcc1;
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x40);
  }
  if ((param_3 != -0x78331fc2) && (param_3 != 0x48cb9c08)) {
    FUN_18028bea0(&local_90,param_2,param_3);
    if ((char)lStack_80 != '\0') {
      local_60 = param_8;
      local_70 = param_7;
      local_a8 = param_6;
      local_98 = param_5;
      local_a0 = (undefined *)0x0;
      local_68 = param_4;
      if ((((char)local_90 != '\0') || (-1 < (int)lStack_88)) && (param_6 != 0)) {
        local_e0 = &local_98;
        local_d8 = &local_a8;
        local_d0 = &local_70;
        local_c0 = &local_60;
        local_b8 = &local_a0;
        local_b0 = &local_90;
        local_c8 = &local_68;
        FUN_18028baa0(&local_e0);
      }
      goto LAB_18028dcc1;
    }
  }
  local_e0 = (ulonglong *)&DAT_180cc9690;
  local_d8 = &param_5;
  local_d0 = &param_6;
  local_c8 = &param_7;
  local_c0 = &param_8;
  if (param_3 != -0x78331fc2) {
    if ((param_3 != 0x48cb9c08) && (lVar10 = FUN_18028cb60(param_2,param_3), lVar10 != 0)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_90 = _DAT_180bb8890;
      lStack_88 = lRam0000000180bb8898;
      lStack_80 = lRam0000000180bb88a0;
      uStack_78 = uRam0000000180bb88a8;
      auVar23 = ZEXT1664(_DAT_180bb88b0);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      lVar13 = lStack_80;
      lVar15 = lStack_88;
      auVar22 = auVar23._0_16_;
      if ((lStack_88 != 0) || (lStack_80 != 0)) {
        iVar8 = DAT_180c65e38;
        if (DAT_180c65e38 == 0) {
          auVar23 = ZEXT1664(auVar22);
          UVar11 = GetTickCount64();
          auVar22 = auVar23._0_16_;
          if (UVar11 < DAT_180c65e30) {
            iVar8 = 0;
          }
          else {
            local_a0 = &DAT_1808f3650;
            iVar8 = FUN_1805f68d0(&DAT_1808f3650);
            if (iVar8 != 0) goto LAB_18028dec4;
            if (DAT_1808f369c == 0x7fffffff) {
              DAT_1808f369c = 0x7ffffffe;
              goto LAB_18028deb9;
            }
            if ((DAT_180c65e38 == 0) && (DAT_180c65e30 <= UVar11)) {
              DAT_180c65e38 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
              if (DAT_180c65e38 == 0) {
                DAT_180c65e30 = UVar11 + 1000;
              }
              else {
                DAT_180c65e30 = 0xffffffffffffffff;
              }
            }
            iVar8 = DAT_180c65e38;
            FUN_1805f68fc(&DAT_1808f3650);
            auVar22 = auVar23._0_16_;
          }
          param_4 = local_98;
        }
        auVar23 = ZEXT1664(auVar22);
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        bVar2 = false;
        if (iVar8 + lVar10 != 0) {
          local_a8 = local_a8 & 0xffffffff00000000;
          cVar6 = FUN_1804514f0(&local_a8,iVar8 + lVar10,4);
          if (cVar6 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        iVar8 = (int)local_a8;
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        iVar9 = 0;
        if (bVar2) {
          iVar9 = iVar8;
        }
        if (auVar23[8] != '\0') {
          lVar13 = lVar15;
        }
        if ((lVar10 != lVar13) && (lVar10 != lVar15)) {
          if ((auVar23[9] == '\0') || (auVar23._4_4_ != iVar9)) {
            bVar2 = true;
            cVar6 = DAT_180cb2428;
          }
          else {
            bVar2 = false;
            cVar6 = DAT_180cb27a8;
          }
          pcVar19 = &DAT_180cb2428;
          if (!bVar2) {
            pcVar19 = &DAT_180cb27a8;
          }
          if ((cVar6 != '\0') &&
             (((pcVar19[0x68] != '\0' || (pcVar19[0x170] != '\0')) || (pcVar19[0x278] != '\0')))) {
            local_148 = CONCAT44(local_148._4_4_,0x3f800000);
            FUN_18028ded0(&local_e0,pcVar19,param_4);
          }
        }
      }
    }
    goto LAB_18028dcc1;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_90 = _DAT_180bb8890;
  lStack_88 = lRam0000000180bb8898;
  lStack_80 = lRam0000000180bb88a0;
  uStack_78 = uRam0000000180bb88a8;
  auVar23 = ZEXT1664(_DAT_180bb88b0);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar15 = lStack_80;
  lVar10 = lStack_88;
  iVar8 = DAT_180c6561c;
  auVar22 = auVar23._0_16_;
  if ((lStack_88 == 0) && (lStack_80 == 0)) goto LAB_18028dcc1;
  uVar21 = 0xffffffffffffffff;
  if (DAT_180c6561c == 0) {
    auVar23 = ZEXT1664(auVar22);
    UVar11 = GetTickCount64();
    auVar22 = auVar23._0_16_;
    if (DAT_180c65620 <= UVar11) {
      local_a0 = &DAT_1808f36a0;
      iVar8 = FUN_1805f68d0(&DAT_1808f36a0);
      if (iVar8 != 0) goto LAB_18028dec4;
      if (DAT_1808f36ec == 0x7fffffff) {
        DAT_1808f36ec = 0x7ffffffe;
        goto LAB_18028deb9;
      }
      if ((DAT_180c6561c == 0) && (DAT_180c65620 <= UVar11)) {
        DAT_180c6561c = FUN_1804174b0("C_BaseEntity");
        if (DAT_180c6561c == 0) {
          DAT_180c65620 = UVar11 + 1000;
        }
        else {
          DAT_180c65620 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c6561c;
      FUN_1805f68fc(&DAT_1808f36a0);
      auVar22 = auVar23._0_16_;
    }
  }
  iVar9 = DAT_180c65618;
  if (DAT_180c65618 == 0) {
    auVar23 = ZEXT1664(auVar22);
    UVar11 = GetTickCount64();
    auVar22 = auVar23._0_16_;
    if (DAT_180c65610 <= UVar11) {
      local_a0 = &DAT_1808f3600;
      iVar9 = FUN_1805f68d0(&DAT_1808f3600);
      if (iVar9 != 0) {
LAB_18028dec4:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f364c == 0x7fffffff) {
        DAT_1808f364c = 0x7ffffffe;
LAB_18028deb9:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c65618 == 0) && (DAT_180c65610 <= UVar11)) {
        DAT_180c65618 = FUN_1804174b0("C_BaseEntity");
        if (DAT_180c65618 == 0) {
          uVar21 = UVar11 + 1000;
        }
        DAT_180c65610 = uVar21;
      }
      iVar9 = DAT_180c65618;
      FUN_1805f68fc(&DAT_1808f3600);
      auVar22 = auVar23._0_16_;
    }
  }
  if ((iVar8 == 0) || (iVar9 == 0)) goto LAB_18028dcc1;
  auVar23 = ZEXT1664(auVar22);
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (iVar8 + param_2 == 0) {
    bVar2 = false;
  }
  else {
    local_a8 = local_a8 & 0xffffffff00000000;
    cVar6 = FUN_1804514f0(&local_a8,iVar8 + param_2,4);
    if (cVar6 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  iVar8 = (int)local_a8;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  bVar3 = false;
  if (iVar9 + param_2 != 0) {
    local_a8 = local_a8 & 0xffffffff00000000;
    cVar6 = FUN_1804514f0(&local_a8,iVar9 + param_2,4);
    if (cVar6 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  iVar9 = (int)local_a8;
  lVar13 = FUN_18017ea70();
  uVar21 = local_98;
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((!bVar2) || (!bVar3)) goto LAB_18028dcc1;
  if ((auVar23[9] == '\0') || (auVar23._4_4_ != iVar8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (auVar23[8] != '\0') {
    lVar15 = lVar10;
  }
  if ((param_2 == lVar15) || (param_2 == lVar10)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (iVar9 < 1) {
    if (!bVar3) {
      pcVar19 = &DAT_180cb0478;
      pcVar14 = &DAT_180cb0b78;
      goto LAB_18028dbd3;
    }
    pcVar19 = &DAT_180cb1278;
  }
  else if (!bVar3) {
    pcVar19 = &DAT_180cb00f8;
    pcVar14 = &DAT_180cb07f8;
LAB_18028dbd3:
    if (!bVar2) {
      pcVar19 = pcVar14;
    }
  }
  else {
    pcVar19 = &DAT_180cb0ef8;
    if ((param_2 == lVar10) && (DAT_180b8f9e8 != '\0')) goto LAB_18028dcc1;
  }
  if ((*pcVar19 != '\0') &&
     (((pcVar19[0x68] != '\0' || (pcVar19[0x170] != '\0')) || (pcVar19[0x278] != '\0')))) {
    if ((!bVar3) && (param_2 != lVar10)) {
      lVar10 = local_98 + 0x78;
      lVar15 = FUN_18017ea70();
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
      if (lVar10 == 0) {
        bVar2 = false;
      }
      else {
        local_f8[0] = 0;
        cVar6 = FUN_1804514f0(local_f8,lVar10,1);
        if (cVar6 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      bVar4 = local_f8[0];
      lVar15 = FUN_18017ea70();
      if (*(int *)(lVar15 + 4) != 0) {
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
      }
      if ((bVar2) && (local_f8[0] = bVar4 & 0xf7, lVar10 != 0)) {
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        FUN_1801ad7b0(lVar10,local_f8);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
      }
    }
    local_148 = CONCAT44(local_148._4_4_,0x3f800000);
    FUN_18028ded0(&local_e0,pcVar19,uVar21);
  }
LAB_18028dcc1:
  FUN_18017bf40(&local_a0);
  puVar5 = local_a0;
  uVar20 = (longlong)local_a0 - local_f0._8_8_;
  puVar16 = (ulonglong *)FUN_1802990b0();
  local_148 = *puVar16 + 1;
  *puVar16 = local_148;
  uVar21 = puVar16[1];
  puVar16[1] = uVar21 + uVar20;
  local_118 = puVar16[3] + (ulonglong)(999999 < uVar20);
  puVar16[3] = local_118;
  local_110 = puVar16[4] + (ulonglong)(4999999 < uVar20);
  puVar16[4] = local_110;
  local_108 = puVar16[5] + (ulonglong)(15999999 < uVar20);
  puVar16[5] = local_108;
  uVar18 = puVar16[2];
  if (puVar16[2] < uVar20) {
    puVar16[2] = uVar20;
    uVar18 = uVar20;
  }
  if ((puVar5 == (undefined *)puVar16[7]) || ((longlong)puVar16[7] <= (longlong)puVar5)) {
    local_128 = (double)(longlong)((longlong)puVar5 - puVar16[6]) / 1000000.0;
    dVar1 = (double)(uVar21 + uVar20);
    local_120 = 0.0;
    if (0.0 < local_128) {
      local_120 = (dVar1 / 1000.0) / local_128;
    }
    local_130 = dVar1 / 1000000.0;
    local_138 = (double)uVar18 / 1000.0;
    local_140 = (dVar1 / (double)local_148) / 1000.0;
    FUN_1801af8a0(dVar1 / (double)local_148,local_140,local_f0._0_8_);
    puVar16[2] = 0;
    puVar16[1] = 0;
    *puVar16 = 0;
    puVar16[5] = 0;
    puVar16[4] = 0;
    puVar16[3] = 0;
    puVar16[6] = (ulonglong)puVar5;
    puVar16[7] = (ulonglong)(puVar5 + 5000000000);
  }
}




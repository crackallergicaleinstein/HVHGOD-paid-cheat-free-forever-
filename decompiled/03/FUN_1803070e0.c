// FUN_1803070e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803070e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1803070e0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined *local_res8;
  float local_res10 [2];
  undefined8 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  fVar13 = 1.0;
  local_res8 = param_1;
  if (DAT_180cc9372 == '\0') {
LAB_18030713b:
    auVar17 = ZEXT464(0x437a0000);
  }
  else {
    auVar17 = ZEXT464(DAT_180cc9368);
    sVar3 = thunk_FUN_180624430(DAT_180cc9368);
    if ((0 < sVar3) || (auVar17._0_4_ <= fVar13)) goto LAB_18030713b;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  auVar17 = ZEXT1664(auVar17._0_16_);
  uVar20 = _DAT_180bb8890;
  lVar7 = lRam0000000180bb8898;
  uVar22 = uRam0000000180bb88a0;
  uVar23 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  auVar16 = auVar17._0_16_;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = ZEXT812(0);
  auVar19 = auVar19 << 0x20;
  if (lVar7 != 0) {
    uVar12 = 0xffffffffffffffff;
    iVar4 = DAT_180c6f358;
    lVar21 = lVar7;
    if (DAT_180c6f358 == 0) {
      auVar17 = ZEXT1664(auVar16);
      auVar18 = ZEXT1264(ZEXT812(0)) << 0x20;
      UVar5 = GetTickCount64();
      auVar19 = auVar18._0_16_;
      auVar16 = auVar17._0_16_;
      if (UVar5 < DAT_180c6f350) {
        iVar4 = 0;
      }
      else {
        local_res8 = &DAT_1808ff7e0;
        iVar4 = FUN_1805f68d0(&DAT_1808ff7e0);
        if (iVar4 != 0) goto LAB_1803074a5;
        if (DAT_1808ff82c == 0x7fffffff) {
          DAT_1808ff82c = 0x7ffffffe;
          goto LAB_18030749a;
        }
        if ((DAT_180c6f358 == 0) && (DAT_180c6f350 <= UVar5)) {
          DAT_180c6f358 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
          if (DAT_180c6f358 == 0) {
            DAT_180c6f350 = UVar5 + 1000;
          }
          else {
            DAT_180c6f350 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6f358;
        FUN_1805f68fc(&DAT_1808ff7e0);
        auVar19 = auVar18._0_16_;
        auVar16 = auVar17._0_16_;
      }
    }
    auVar17 = ZEXT1664(auVar16);
    auVar18 = ZEXT1664(auVar19);
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (iVar4 + lVar7 != 0) {
      local_res8 = (undefined *)0x0;
      cVar2 = FUN_1804514f0(&local_res8,iVar4 + lVar7,8,param_4,uVar20,lVar21,uVar22,uVar23);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar11 = local_res8;
    lVar7 = FUN_18017ea70();
    auVar16 = auVar17._0_16_;
    auVar19 = auVar18._0_16_;
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((bVar1) && (puVar11 != (undefined *)0x0)) {
      iVar4 = DAT_180c6f34c;
      if (DAT_180c6f34c == 0) {
        UVar5 = GetTickCount64();
        if (UVar5 < DAT_180c6f360) {
          iVar4 = 0;
        }
        else {
          local_res8 = &DAT_1808ff830;
          iVar4 = FUN_1805f68d0(&DAT_1808ff830);
          if (iVar4 != 0) {
LAB_1803074a5:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ff87c == 0x7fffffff) {
            DAT_1808ff87c = 0x7ffffffe;
LAB_18030749a:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f34c == 0) && (DAT_180c6f360 <= UVar5)) {
            DAT_180c6f34c = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
            if (DAT_180c6f34c == 0) {
              uVar12 = UVar5 + 1000;
            }
            DAT_180c6f360 = uVar12;
          }
          iVar4 = DAT_180c6f34c;
          FUN_1805f68fc(&DAT_1808ff830);
        }
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      puVar11 = puVar11 + iVar4;
      uVar10 = 0;
      if (puVar11 != (undefined *)0x0) {
        local_res8 = (undefined *)CONCAT44(local_res8._4_4_,auVar18._0_4_);
        cVar2 = FUN_1804514f0(&local_res8,puVar11,4);
        if (cVar2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
      }
      auVar15 = ZEXT464((uint)local_res8);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      auVar16 = vpcmpeqd_avx(ZEXT416(uVar10),SUB6416(ZEXT464(0),0));
      auVar16 = vblendvps_avx(auVar15._0_16_,auVar18._0_16_,auVar16);
      auVar15 = ZEXT1664(auVar16);
      sVar3 = thunk_FUN_180624430(auVar16._0_8_);
      auVar16 = auVar17._0_16_;
      auVar19 = auVar18._0_16_;
      if ((sVar3 < 1) && (fVar13 < auVar15._0_4_)) {
        auVar16 = vminss_avx(auVar15._0_16_,auVar16);
      }
    }
  }
  local_res10[0] = fVar13;
  local_res8 = (undefined *)CONCAT44(local_res8._4_4_,auVar19._0_4_);
  ppuVar9 = &local_res8;
  if (auVar19._0_4_ <= DAT_180b8e198) {
    ppuVar9 = (undefined **)&DAT_180b8e198;
  }
  ppuVar8 = (undefined **)local_res10;
  if (DAT_180b8e198 <= fVar13) {
    ppuVar8 = ppuVar9;
  }
  auVar17 = ZEXT464(*(uint *)ppuVar8);
  auVar18 = ZEXT1664(auVar16);
  auVar15 = ZEXT1664(auVar19);
  sVar3 = thunk_FUN_180624430();
  auVar16 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
  auVar16 = vblendvps_avx(auVar17._0_16_,auVar15._0_16_,auVar16);
  fVar13 = fVar13 - auVar16._0_4_ * 0.65999997;
  fVar14 = fVar13 * auVar18._0_4_;
  if ((DAT_180b0dfd8 & 0x10000) != 0) {
    fVar14 = fVar14 * 0.52;
  }
  fVar13 = (float)FUN_180306ed0(fVar13);
  return fVar13 * fVar14;
}




// FUN_1802d0a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d0a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d0a50(undefined8 param_1,longlong param_2,uint *param_3,char param_4)

{
  float fVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [16];
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong lStack_b0;
  ULONGLONG UStack_a8;
  undefined8 uStack_a0;
  
  if (param_3 == (uint *)0x0) goto LAB_1802d0eba;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_b8 = _DAT_180bb8890;
  lStack_b0 = lRam0000000180bb8898;
  UStack_a8 = URam0000000180bb88a0;
  uStack_a0 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar10 = lStack_b0;
  if (lStack_b0 == 0) {
    return;
  }
  iVar7 = DAT_180c6eaf0;
  if (DAT_180c6eaf0 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6eaf8) {
      iVar7 = 0;
    }
    else {
      local_c8._0_8_ = &DAT_1808fd090;
      iVar7 = FUN_1805f68d0(&DAT_1808fd090);
      if (iVar7 != 0) goto LAB_1802d0f0b;
      if (DAT_1808fd0dc == 0x7fffffff) {
        DAT_1808fd0dc = 0x7ffffffe;
        goto LAB_1802d0f00;
      }
      if ((DAT_180c6eaf0 == 0) && (DAT_180c6eaf8 <= UVar8)) {
        DAT_180c6eaf0 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c6eaf0 == 0) {
          DAT_180c6eaf8 = UVar8 + 1000;
        }
        else {
          DAT_180c6eaf8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c6eaf0;
      FUN_1805f68fc(&DAT_1808fd090);
    }
  }
  if ((*(longlong *)(iVar7 + lVar10) == 0) || (param_2 != *(longlong *)(iVar7 + lVar10)))
  goto LAB_1802d0eba;
  uVar16 = param_3[2];
  auVar18 = ZEXT464(*param_3);
  auVar13 = ZEXT464(param_3[1]);
  cVar5 = FUN_1802c9280();
  if (cVar5 == '\0') goto LAB_1802d0eba;
  local_c8 = ZEXT816(0x180cc9b08);
  iVar7 = FUN_1805f68d0(&DAT_180cc9b08);
  if (iVar7 != 0) {
LAB_1802d0f0b:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d0f00:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_c8[8] = 1;
  UVar8 = GetTickCount64();
  puVar3 = DAT_180cc9a98;
  auVar15 = auVar13._0_16_;
  auVar12 = auVar18._0_16_;
  DAT_180cc9b6c._0_4_ = auVar18._0_4_;
  DAT_180cc9b6c._4_4_ = auVar13._0_4_;
  DAT_180cc9bad = 1;
  DAT_180cc9b74 = uVar16;
  DAT_180cc9b80 = UVar8;
  if (param_4 == '\0') {
    if (DAT_180cc9bae != '\0') {
      if (DAT_180cc9b88 != 0) {
        if (UVar8 - DAT_180cc9b88 < 0x33) goto LAB_1802d0c72;
      }
    }
  }
  else {
LAB_1802d0c72:
    if (DAT_180cc9bae != '\0') {
      local_b8 = CONCAT44(DAT_180cc9b6c._4_4_,(undefined4)DAT_180cc9b6c);
      lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar16);
      UStack_a8 = UVar8;
      if (DAT_180cc9a98 == DAT_180cc9aa0) {
        FUN_180231380(&DAT_180cc9a90,DAT_180cc9a98,&local_b8);
      }
      else {
        *DAT_180cc9a98 = local_b8;
        puVar3[1] = lStack_b0;
        puVar3[2] = UVar8;
        DAT_180cc9a98 = DAT_180cc9a98 + 3;
      }
      auVar15 = auVar13._0_16_;
      auVar12 = auVar18._0_16_;
      if (0x20 < (ulonglong)(((longlong)DAT_180cc9a98 - DAT_180cc9a90) / 0x18)) {
        FUN_18063aed0(DAT_180cc9a90,DAT_180cc9a90 + 0x18,
                      (longlong)DAT_180cc9a98 - (DAT_180cc9a90 + 0x18));
        auVar15 = auVar13._0_16_;
        auVar12 = auVar18._0_16_;
        DAT_180cc9a98 = DAT_180cc9a98 + -3;
      }
    }
    lVar10 = DAT_180bb8958;
    auVar12 = vunpcklps_avx(auVar12,auVar15);
    auVar18 = ZEXT1664(auVar12);
    _DAT_180cc9b60 = auVar12._0_8_;
    DAT_180cc9bac = 1;
    DAT_180cc9bae = '\0';
    _DAT_180cc9b68 = uVar16;
    _DAT_180cc9b78 = UVar8;
    if (param_4 != '\0') {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      if (lVar10 == 0) {
        bVar2 = false;
      }
      else {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_c8._8_8_;
        local_c8 = auVar12 << 0x40;
        cVar5 = FUN_1804514f0(local_c8,lVar10,8);
        if (cVar5 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      uVar4 = local_c8._0_8_;
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if ((!bVar2) || (uVar4 == 0)) {
        auVar13 = ZEXT464(0xbf800000);
      }
      else {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        lVar10 = uVar4 + 0x30;
        uVar11 = 0;
        if (lVar10 != 0) {
          auVar15._12_4_ = 0;
          auVar15._0_12_ = local_c8._4_12_;
          local_c8 = auVar15 << 0x20;
          cVar5 = FUN_1804514f0(local_c8,lVar10,4);
          if (cVar5 == '\0') {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
        }
        auVar13 = ZEXT464((uint)local_c8._0_4_);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        auVar12 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
        auVar12 = vblendvps_avx(auVar13._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar12);
        auVar13 = ZEXT1664(auVar12);
      }
      lVar10 = DAT_180cc9a10;
      if (DAT_180cc9a08 != DAT_180cc9a10) {
        fVar17 = -0.05;
        fVar14 = 0.25;
        lVar9 = DAT_180cc9a08;
        do {
          if ((((*(char *)(lVar9 + 0x13a7) == '\0') && (*(char *)(lVar9 + 0x13b8) == '\0')) &&
              (*(char *)(lVar9 + 0x13a9) == '\0')) &&
             (((sVar6 = thunk_FUN_180624430(auVar13._0_8_), sVar6 < 1 &&
               (fVar1 = auVar13._0_4_ - *(float *)(lVar9 + 0x68), fVar17 <= fVar1)) &&
              (fVar1 <= fVar14)))) {
            *(longlong *)(lVar9 + 0x13ac) = auVar18._0_8_;
            *(uint *)(lVar9 + 0x13b4) = uVar16;
            *(undefined1 *)(lVar9 + 0x13b8) = 1;
            *(undefined1 *)(lVar9 + 0x50) = 1;
            break;
          }
          lVar9 = lVar9 + 0x13d0;
        } while (lVar9 != lVar10);
      }
    }
  }
  FUN_1805f68fc(&DAT_180cc9b08);
LAB_1802d0eba:
  return;
}




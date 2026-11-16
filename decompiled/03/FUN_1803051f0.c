// FUN_1803051f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803051f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803051f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  undefined4 *local_f0;
  undefined8 *local_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  if ((((DAT_180cc8a98 != '\0') && (DAT_180b8fc30 == '\0')) && (DAT_180b900c0 == '\0')) &&
     (DAT_180b8fe80 == '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_e8 = _DAT_180bb8890;
    lStack_e0 = lRam0000000180bb8898;
    uStack_d8 = uRam0000000180bb88a0;
    uStack_d0 = uRam0000000180bb88a8;
    local_108 = (undefined8 *)_DAT_180bb88b0;
    plStack_100 = (longlong *)uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar6 = lStack_e0;
    iVar4 = DAT_180c6f2dc;
    if (lStack_e0 == 0) {
    }
    if ((DAT_180b8e114 & 1) == 0) {
    }
    uVar8 = 0xffffffffffffffff;
    if ((DAT_180c6f2dc == 0) && (UVar5 = GetTickCount64(), DAT_180c6f2f0 <= UVar5)) {
      local_c8 = &DAT_1808ff5b0;
      iVar4 = FUN_1805f68d0(&DAT_1808ff5b0);
      if (iVar4 != 0) goto LAB_1803058b7;
      if (DAT_1808ff5fc == 0x7fffffff) {
        DAT_1808ff5fc = 0x7ffffffe;
        goto LAB_1803058cc;
      }
      if ((DAT_180c6f2dc == 0) && (DAT_180c6f2f0 <= UVar5)) {
        DAT_180c6f2dc = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        if (DAT_180c6f2dc == 0) {
          DAT_180c6f2f0 = UVar5 + 1000;
        }
        else {
          DAT_180c6f2f0 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6f2dc;
      FUN_1805f68fc(&DAT_1808ff5b0);
    }
    if (*(char *)(iVar4 + lVar6) == '\t') {
    }
    if (*(char *)(iVar4 + lVar6) == '\a') {
    }
    local_a0 = DAT_180b8e120;
    local_a8 = DAT_180b8e118;
    uVar2 = local_a8;
    local_a8._4_4_ = (float)((ulonglong)DAT_180b8e118 >> 0x20);
    fVar9 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + local_a8._4_4_ * local_a8._4_4_;
    auVar16._12_4_ = 0;
    auVar16._0_12_ = ZEXT812(0);
    auVar16 = auVar16 << 0x20;
    if (fVar9 == 0.0) {
    }
    local_a8 = uVar2;
    if (fVar9 < 0.0) {
      auVar17 = ZEXT1264(ZEXT812(0)) << 0x20;
      fVar9 = (float)FUN_18061e150();
      auVar16 = auVar17._0_16_;
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    iVar4 = DAT_180c6f2e8;
    if (fVar9 < 1.0) {
    }
    if (DAT_180c6f2e8 == 0) {
      auVar17 = ZEXT1664(auVar16);
      UVar5 = GetTickCount64();
      auVar16 = auVar17._0_16_;
      if (DAT_180c6f2e0 <= UVar5) {
        local_c8 = &DAT_1808ff510;
        iVar4 = FUN_1805f68d0(&DAT_1808ff510);
        if (iVar4 != 0) goto LAB_1803058b7;
        if (DAT_1808ff55c == 0x7fffffff) {
          DAT_1808ff55c = 0x7ffffffe;
          goto LAB_1803058cc;
        }
        if ((DAT_180c6f2e8 == 0) && (DAT_180c6f2e0 <= UVar5)) {
          DAT_180c6f2e8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c6f2e8 == 0) {
            DAT_180c6f2e0 = UVar5 + 1000;
          }
          else {
            DAT_180c6f2e0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6f2e8;
        FUN_1805f68fc(&DAT_1808ff510);
        auVar16 = auVar17._0_16_;
      }
    }
    iVar7 = DAT_180c6f2c8;
    lVar1 = *(longlong *)(iVar4 + lVar6);
    if (lVar1 == 0) {
    }
    if (DAT_180c6f2c8 == 0) {
      auVar17 = ZEXT1664(auVar16);
      UVar5 = GetTickCount64();
      auVar16 = auVar17._0_16_;
      if (DAT_180c6f2c0 <= UVar5) {
        local_c8 = &DAT_1808ff4c0;
        iVar4 = FUN_1805f68d0(&DAT_1808ff4c0);
        if (iVar4 != 0) goto LAB_1803058b7;
        if (DAT_1808ff50c == 0x7fffffff) {
          DAT_1808ff50c = 0x7ffffffe;
          goto LAB_1803058cc;
        }
        if ((DAT_180c6f2c8 == 0) && (DAT_180c6f2c0 <= UVar5)) {
          DAT_180c6f2c8 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c6f2c8 == 0) {
            DAT_180c6f2c0 = UVar5 + 1000;
          }
          else {
            DAT_180c6f2c0 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c6f2c8;
        FUN_1805f68fc(&DAT_1808ff4c0);
        auVar16 = auVar17._0_16_;
      }
    }
    iVar4 = DAT_180c6f2d8;
    local_98 = *(undefined8 *)(iVar7 + lVar1);
    local_90 = *(undefined4 *)((longlong)iVar7 + 8 + lVar1);
    if (DAT_180c6f2d8 == 0) {
      auVar17 = ZEXT1664(auVar16);
      UVar5 = GetTickCount64();
      auVar16 = auVar17._0_16_;
      if (DAT_180c6f2d0 <= UVar5) {
        local_c8 = &DAT_1808ff560;
        iVar4 = FUN_1805f68d0(&DAT_1808ff560);
        if (iVar4 != 0) {
LAB_1803058b7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff5ac == 0x7fffffff) {
          DAT_1808ff5ac = 0x7ffffffe;
LAB_1803058cc:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f2d8 == 0) && (DAT_180c6f2d0 <= UVar5)) {
          DAT_180c6f2d8 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
          if (DAT_180c6f2d8 == 0) {
            uVar8 = UVar5 + 1000;
          }
          DAT_180c6f2d0 = uVar8;
        }
        iVar4 = DAT_180c6f2d8;
        FUN_1805f68fc(&DAT_1808ff560);
        auVar16 = auVar17._0_16_;
      }
    }
    local_b8 = *(longlong *)(iVar4 + lVar6);
    if (local_b8 != 0) {
      auVar17 = ZEXT1664(auVar16);
      lVar6 = FUN_1803032c0(lVar6);
      if ((*(char *)(lVar6 + 0x48) != '\0') && (cVar3 = FUN_180303860(0x18), cVar3 != '\0')) {
        local_88 = *(undefined8 *)(lVar6 + 0x18);
        local_80 = *(undefined4 *)(lVar6 + 0x20);
        local_78 = *(undefined8 *)(lVar6 + 0x24);
        local_70 = *(undefined4 *)(lVar6 + 0x2c);
        if ((DAT_180cd3f60 & 1) == 0) {
          DAT_180cd3f60 = DAT_180cd3f60 | 1;
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x2bf43f77);
          local_c0 = 0;
          local_e8 = &local_c8;
          lStack_e0 = 1;
          FUN_18044c9c0(DAT_180c64058,&local_e8);
          DAT_180cd3f68 = local_c0;
        }
        local_b0[0] = *(undefined4 *)(DAT_180cd3f68 + 0x58);
        local_128 = &local_98;
        local_120 = &local_a8;
        local_118 = &local_88;
        local_110 = &local_78;
        plStack_100 = &local_b8;
        local_f8 = (longlong *)local_b0;
        local_108 = (undefined8 *)(lVar6 + 0x30);
        cVar3 = FUN_1803058e0(&local_128,0);
        if ((cVar3 != '\0') &&
           ((((cVar3 = FUN_1803058e0(&local_128,1), cVar3 == '\0' ||
              (cVar3 = FUN_1803058e0(&local_128,2), cVar3 == '\0')) ||
             (cVar3 = FUN_1803058e0(&local_128,3), cVar3 == '\0')) ||
            ((cVar3 = FUN_1803058e0(&local_128,4), cVar3 == '\0' ||
             (cVar3 = FUN_1803058e0(&local_128,5), cVar3 == '\0')))))) {
          auVar13 = ZEXT464((uint)(float)local_a8);
          auVar16 = ZEXT416((uint)(float)local_a8);
          auVar14 = ZEXT464((uint)local_a8._4_4_);
          auVar10 = ZEXT416((uint)local_a8._4_4_);
          fVar9 = (float)local_a8 * (float)local_a8 + local_a8._4_4_ * local_a8._4_4_;
          fVar15 = auVar17._0_4_;
          if (fVar9 == fVar15) {
            local_c8 = (undefined *)CONCAT44(fVar15,fVar15);
          }
          else {
            if (fVar9 < 0.0) {
              fVar9 = (float)FUN_18061e150(fVar9);
              auVar16 = auVar13._0_16_;
              auVar10 = auVar14._0_16_;
              fVar15 = auVar17._0_4_;
            }
            else {
              fVar9 = SQRT(fVar9);
            }
            local_c8 = (undefined *)CONCAT44(fVar15,fVar15);
            if (0.01 <= fVar9) {
              auVar11._0_8_ = CONCAT44(auVar10._4_4_,-auVar10._0_4_) ^ 0x8000000000000000;
              auVar11._8_4_ = auVar10._8_4_ ^ 0x80000000;
              auVar11._12_4_ = auVar10._12_4_ ^ 0x80000000;
              auVar12._0_4_ = -auVar10._0_4_ / fVar9;
              auVar12._4_12_ = auVar11._4_12_;
              auVar10._0_4_ = auVar16._0_4_ / fVar9;
              auVar10._4_12_ = auVar16._4_12_;
              auVar16 = vunpcklps_avx(auVar12,auVar10);
              local_c8 = auVar16._0_8_;
            }
          }
          local_128 = &local_98;
          local_120 = &local_a8;
          local_118 = &local_c8;
          local_110 = &local_88;
          local_108 = &local_78;
          local_f8 = &local_b8;
          local_f0 = local_b0;
          plStack_100 = (longlong *)(lVar6 + 0x30);
          cVar3 = FUN_180305a10(&local_128,1);
          if ((cVar3 == '\0') && (cVar3 = FUN_180305a10(&local_128,2), cVar3 == '\0')) {
            *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 2;
            *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 2;
          }
        }
      }
    }
  }
}




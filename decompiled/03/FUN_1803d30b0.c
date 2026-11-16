// FUN_1803d30b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d30b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d30b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  float fVar29;
  undefined1 auStack_198 [32];
  float local_178;
  undefined8 local_170;
  float local_168 [2];
  undefined8 local_160;
  undefined4 local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float local_f8 [2];
  undefined1 local_f0 [8];
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  uVar13 = 0xffffffffffffffff;
  iVar7 = DAT_180c71e70;
  if (DAT_180c71e70 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c71e78) {
      iVar7 = 0;
    }
    else {
      local_170 = &DAT_1809ba280;
      iVar7 = FUN_1805f68d0(&DAT_1809ba280);
      if (iVar7 != 0) goto LAB_1803d38ce;
      if (DAT_1809ba2cc == 0x7fffffff) {
        DAT_1809ba2cc = 0x7ffffffe;
        goto LAB_1803d38c3;
      }
      if ((DAT_180c71e70 == 0) && (DAT_180c71e78 <= UVar8)) {
        DAT_180c71e70 = FUN_1804174b0("C_BaseEntity",0xc1e3aaa1);
        if (DAT_180c71e70 == 0) {
          DAT_180c71e78 = UVar8 + 1000;
        }
        else {
          DAT_180c71e78 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c71e70;
      FUN_1805f68fc(&DAT_1809ba280);
    }
  }
  lVar2 = *(longlong *)(iVar7 + param_3);
  iVar7 = DAT_180c71e88;
  if (DAT_180c71e88 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c71e80) {
      iVar7 = 0;
    }
    else {
      local_170 = &DAT_1809ba230;
      iVar7 = FUN_1805f68d0(&DAT_1809ba230);
      if (iVar7 != 0) goto LAB_1803d38ce;
      if (DAT_1809ba27c == 0x7fffffff) {
        DAT_1809ba27c = 0x7ffffffe;
        goto LAB_1803d38c3;
      }
      if ((DAT_180c71e88 == 0) && (DAT_180c71e80 <= UVar8)) {
        DAT_180c71e88 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c71e88 == 0) {
          DAT_180c71e80 = UVar8 + 1000;
        }
        else {
          DAT_180c71e80 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c71e88;
      FUN_1805f68fc(&DAT_1809ba230);
    }
  }
  lVar3 = *(longlong *)(iVar7 + param_3);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar7 = DAT_180c71e4c;
    if (DAT_180c71e4c == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c71e50) {
        iVar7 = 0;
      }
      else {
        local_170 = &DAT_1809ba190;
        iVar7 = FUN_1805f68d0(&DAT_1809ba190);
        if (iVar7 != 0) goto LAB_1803d38ce;
        if (DAT_1809ba1dc == 0x7fffffff) {
          DAT_1809ba1dc = 0x7ffffffe;
          goto LAB_1803d38c3;
        }
        if ((DAT_180c71e4c == 0) && (DAT_180c71e50 <= UVar8)) {
          DAT_180c71e4c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c71e4c == 0) {
            DAT_180c71e50 = UVar8 + 1000;
          }
          else {
            DAT_180c71e50 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c71e4c;
        FUN_1805f68fc(&DAT_1809ba190);
      }
    }
    local_160 = *(ulonglong *)(iVar7 + lVar3);
    fVar29 = *(float *)((longlong)iVar7 + 8 + lVar3);
    iVar7 = DAT_180c71e48;
    if (DAT_180c71e48 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c71e68) {
        iVar7 = 0;
      }
      else {
        local_170 = &DAT_1809ba1e0;
        iVar7 = FUN_1805f68d0(&DAT_1809ba1e0);
        if (iVar7 != 0) goto LAB_1803d38ce;
        if (DAT_1809ba22c == 0x7fffffff) {
          DAT_1809ba22c = 0x7ffffffe;
          goto LAB_1803d38c3;
        }
        if ((DAT_180c71e48 == 0) && (DAT_180c71e68 <= UVar8)) {
          DAT_180c71e48 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
          if (DAT_180c71e48 == 0) {
            DAT_180c71e68 = UVar8 + 1000;
          }
          else {
            DAT_180c71e68 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c71e48;
        FUN_1805f68fc(&DAT_1809ba1e0);
      }
    }
    uVar1 = *(ulonglong *)(iVar7 + lVar2);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar1;
    local_144 = fVar29 + *(float *)((longlong)iVar7 + 8 + lVar2);
    auVar14 = vshufps_avx(auVar14,auVar14,0x55);
    local_148 = auVar14._0_4_ + local_160._4_4_;
    local_14c = (float)uVar1 + (float)local_160;
    iVar7 = DAT_180c71e58;
    fVar23 = (float)local_160;
    fVar20 = local_160._4_4_;
    if (DAT_180c71e58 == 0) {
      local_160 = uVar1;
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c71e60) {
        iVar7 = 0;
      }
      else {
        local_170 = &DAT_1809ba140;
        iVar7 = FUN_1805f68d0(&DAT_1809ba140);
        if (iVar7 != 0) goto LAB_1803d38ce;
        if (DAT_1809ba18c == 0x7fffffff) {
          DAT_1809ba18c = 0x7ffffffe;
          goto LAB_1803d38c3;
        }
        if ((DAT_180c71e58 == 0) && (DAT_180c71e60 <= UVar8)) {
          DAT_180c71e58 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
          if (DAT_180c71e58 == 0) {
            uVar13 = UVar8 + 1000;
          }
          DAT_180c71e60 = uVar13;
        }
        iVar7 = DAT_180c71e58;
        FUN_1805f68fc(&DAT_1809ba140);
      }
    }
    local_160 = *(ulonglong *)(iVar7 + lVar2);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_160;
    local_150 = (float)local_160 + fVar23;
    auVar14 = vshufps_avx(auVar15,auVar15,0x55);
    local_13c = auVar14._0_4_ + fVar20;
    auVar22 = ZEXT464((uint)local_13c);
    local_178 = *(float *)((longlong)iVar7 + 8 + lVar2) + fVar29;
    auVar19 = ZEXT464((uint)local_178);
    _local_f0 = (undefined1  [16])0x0;
    local_e0 = 0;
    local_f8[0] = 1.4013e-45;
    if (((DAT_180bbab78 != 0) &&
        ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_f8,local_f0),
        local_f8[0] == 0.0)) || ((float)uStack_e8 <= 0.0)) {
      iVar7 = 0;
      iVar11 = 0;
    }
    else {
      iVar7 = (int)(float)uStack_e8;
      iVar11 = (int)uStack_e8._4_4_;
    }
    fVar29 = (float)iVar7;
    local_140 = (float)iVar11;
    uStack_e8 = 0xff7fffffff7fffff;
    local_f0 = (undefined1  [8])0x7f7fffff7f7fffff;
    bVar5 = false;
    if (DAT_180b8e2b0 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
    }
    iVar7 = FUN_1805f68d0(&DAT_180b8e260);
    if (iVar7 != 0) {
LAB_1803d38ce:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e2ac == 0x7fffffff) {
      DAT_180b8e2ac = 0x7ffffffe;
LAB_1803d38c3:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_138 = _DAT_180b8e220;
    uStack_130 = uRam0000000180b8e228;
    uStack_128 = uRam0000000180b8e230;
    uStack_120 = uRam0000000180b8e238;
    local_118 = _DAT_180b8e240;
    uStack_110 = uRam0000000180b8e248;
    uStack_108 = uRam0000000180b8e250;
    uStack_100 = uRam0000000180b8e258;
    auVar19 = ZEXT1664(auVar19._0_16_);
    auVar22 = ZEXT1664(auVar22._0_16_);
    FUN_1805f68fc(&DAT_180b8e260);
    uVar13 = 0;
    uStack_e8 = 0xff7fffffff7fffff;
    local_f0 = (undefined1  [8])0x7f7fffff7f7fffff;
    fVar23 = 57005.0;
    fVar28 = 384.0;
    fVar20 = -384.0;
    auVar24 = ZEXT464(0xff7fffff);
    auVar26 = ZEXT464(0xff7fffff);
    auVar25 = ZEXT464(0x7f7fffff);
    auVar27 = ZEXT464(0x7f7fffff);
    do {
      auVar16._0_8_ = -(ulonglong)((uVar13 & 1) == 0);
      auVar16._8_8_ = 0xffffffffffffffff;
      auVar14 = vblendvps_avx(ZEXT416((uint)local_150),ZEXT416((uint)local_14c),auVar16);
      auVar17._0_8_ = -(ulonglong)((uVar13 & 2) == 0);
      auVar17._8_8_ = 0xffffffffffffffff;
      auVar15 = vblendvps_avx(auVar22._0_16_,ZEXT416((uint)local_148),auVar17);
      local_160 = CONCAT44(auVar15._0_4_,auVar14._0_4_);
      auVar18._0_8_ = -(ulonglong)((uVar13 & 4) == 0);
      auVar18._8_8_ = 0xffffffffffffffff;
      auVar14 = vblendvps_avx(auVar19._0_16_,ZEXT416((uint)local_144),auVar18);
      local_158 = auVar14._0_4_;
      FUN_180419d90(auVar14._0_8_,&local_170,&local_160,&local_138);
      if ((float)local_170 != fVar23) {
        auVar19 = ZEXT464((uint)local_170._4_4_);
        if (local_170._4_4_ != fVar23) {
          fVar21 = (float)local_170;
          sVar6 = thunk_FUN_180624430((ulonglong)local_170 & 0xffffffff);
          if ((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(auVar19._0_8_), sVar6 < 1)) {
            local_168[0] = fVar29 + fVar28;
            local_f8[0] = fVar20;
            pfVar12 = local_f8;
            if (fVar20 <= fVar21) {
              pfVar12 = (float *)&local_170;
            }
            pfVar9 = local_168;
            if (fVar21 <= fVar29 + fVar28) {
              pfVar9 = pfVar12;
            }
            local_f8[0] = fVar28 + local_140;
            local_168[0] = fVar20;
            pfVar12 = local_168;
            if (fVar20 <= auVar19._0_4_) {
              pfVar12 = (float *)((longlong)&local_170 + 4);
            }
            pfVar10 = local_f8;
            if (auVar19._0_4_ <= fVar28 + local_140) {
              pfVar10 = pfVar12;
            }
            auVar14 = vminss_avx(ZEXT416((uint)*pfVar9),auVar27._0_16_);
            auVar27 = ZEXT1664(auVar14);
            auVar14 = vminss_avx(ZEXT416((uint)*pfVar10),auVar25._0_16_);
            auVar25 = ZEXT1664(auVar14);
            auVar14 = vmaxss_avx(ZEXT416((uint)*pfVar9),auVar26._0_16_);
            auVar26 = ZEXT1664(auVar14);
            auVar14 = vmaxss_avx(ZEXT416((uint)*pfVar10),auVar24._0_16_);
            auVar24 = ZEXT1664(auVar14);
            bVar5 = true;
          }
        }
        auVar19 = ZEXT464((uint)local_178);
      }
      uVar13 = uVar13 + 1;
      auVar22 = ZEXT464((uint)local_13c);
    } while (uVar13 < 8);
    fVar29 = auVar24._0_4_;
    uStack_e8._4_4_ = fVar29;
    auVar4._4_8_ = uStack_e8;
    auVar4._0_4_ = auVar25._0_4_;
    local_f0 = (undefined1  [8])(auVar4._0_8_ << 0x20);
    uStack_e8._0_4_ = auVar26._0_4_;
    auVar14 = _local_f0;
    local_f0._0_4_ = auVar27._0_4_;
    if (((bVar5) && (auVar27._0_4_ < auVar26._0_4_)) && (auVar25._0_4_ < fVar29)) {
      local_e0 = CONCAT71(local_e0._1_7_,1);
      uStack_e8 = auVar14._8_8_;
      *param_2 = local_f0;
      param_2[1] = uStack_e8;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_e0;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
}




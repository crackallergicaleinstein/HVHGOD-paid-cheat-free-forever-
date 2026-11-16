// FUN_180386b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180386b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180386b00(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  ULONGLONG UVar10;
  ULONGLONG UVar11;
  ulonglong *puVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong local_f8 [2];
  undefined1 local_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  
  if (param_1 == 0x203) {
    param_1 = 0x201;
  }
  if ((param_1 != 0x201) && ((param_1 - 0x200U & 0xfffffffd) != 0)) {
    return false;
  }
  if (DAT_180c63119 == '\0') {
    return false;
  }
  if (DAT_1808e6c00 == '\0') {
    return false;
  }
  UVar10 = GetTickCount64();
  uVar5 = DAT_180c63120;
  if ((((DAT_180c63119 == '\0') || (DAT_1808e6c00 == '\0')) ||
      (UVar11 = GetTickCount64(), uVar5 <= UVar11)) || (DAT_180c63128 <= UVar10)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  uVar1 = DAT_180c63100 & 1;
  uVar2 = DAT_180c63100 & 1;
  uVar3 = DAT_180c63100 & 1;
  if ((param_1 == 0x202) && ((DAT_180c63100 & 1) == 0)) {
    return false;
  }
  iVar17 = (int)(short)param_2;
  sVar8 = (short)((ulonglong)param_2 >> 0x10);
  iVar15 = (int)sVar8;
  cVar16 = '\0';
  cVar7 = '\0';
  if (bVar6) {
    iVar9 = FUN_1805f68d0(&DAT_1808e6bb0);
    if (iVar9 != 0) goto LAB_180387204;
    if (DAT_1808e6bfc == 0x7fffffff) {
      DAT_1808e6bfc = 0x7ffffffe;
      goto LAB_1803871f9;
    }
    cVar7 = cVar16;
    if (((DAT_180c63108 <= iVar17) && (iVar17 < DAT_180c63110)) &&
       ((DAT_180c6310c <= iVar15 && (iVar15 < DAT_180c63114)))) {
      cVar7 = '\x01';
    }
    DAT_180c64048 = iVar17;
    DAT_180c6404c = iVar15;
    FUN_1805f68fc(&DAT_1808e6bb0);
  }
  lVar4 = DAT_180c630f0;
  LOCK();
  UNLOCK();
  bVar14 = 0;
  bVar13 = 0;
  DAT_180c63118 = cVar7;
  iVar15 = FUN_1805f68d0(&DAT_1808e6b40);
  if (iVar15 != 0) {
LAB_180387204:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e6b8c == 0x7fffffff) {
    DAT_1808e6b8c = 0x7ffffffe;
LAB_1803871f9:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (param_1 == 0x201) {
    if ((cVar7 == '\0') || (uVar1 != 0)) goto LAB_180387182;
    if ((lVar4 == 0) || (DAT_180c630e8 != lVar4)) {
LAB_180386e9c:
      bVar14 = 0;
      FUN_1805f68fc(&DAT_1808e6b40);
    }
    else {
      auVar25 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)iVar17));
      auVar23 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)sVar8));
      if ((((DAT_1808e6990 != lVar4) || (DAT_1808e69a0 <= UVar10)) ||
          (cVar7 = FUN_180218f00(&DAT_1808e6990), cVar7 == '\0')) ||
         (cVar7 = FUN_1803867d0(extraout_XMM0_Qa,auVar25._0_8_,auVar23._0_8_), cVar7 == '\0'))
      goto LAB_180386e9c;
      DAT_1808e6a50 = DAT_1808e6990;
      DAT_1808e6a58 = DAT_1808e6998;
      _DAT_1808e6a60 = DAT_1808e69a0;
      uRam00000001808e6a68 = uRam00000001808e69a8;
      uRam00000001808e6a78 = CONCAT44(DAT_1808e69bc,uRam00000001808e69b8);
      _DAT_1808e6a70 = _DAT_1808e69b0;
      _DAT_1808e6a80 = CONCAT44(DAT_1808e69c4,DAT_1808e69c0);
      uRam00000001808e6a88 = uRam00000001808e69c8;
      uRam00000001808e6a98 = CONCAT44(DAT_1808e69dc,DAT_1808e69d8);
      _DAT_1808e6a90 = _DAT_1808e69d0;
      _DAT_1808e6aa0 = CONCAT44(uRam00000001808e69e4,DAT_1808e69e0);
      uRam00000001808e6aa8 = uRam00000001808e69e8;
      DAT_1808e6ab0 = _DAT_1808e69f0;
      uRam00000001808e6ab8 = uRam00000001808e69f8;
      _DAT_1808e6ac0 = _DAT_1808e6a00;
      uRam00000001808e6ac8 = uRam00000001808e6a08;
      _DAT_1808e6ad0 = _DAT_1808e6a10;
      uRam00000001808e6ad8 = uRam00000001808e6a18;
      _DAT_1808e6ae0 = _DAT_1808e6a20;
      _DAT_1808e6ae8 = uRam00000001808e6a28;
      _DAT_1808e6af0 = _DAT_1808e6a30;
      uRam00000001808e6af8 = _DAT_1808e6a38;
      _DAT_1808e6b00 = CONCAT44((undefined4)DAT_1808e6a44,_DAT_1808e6a40);
      _DAT_1808e6b08 = CONCAT44(DAT_1808e6a4c,DAT_1808e6a44._4_4_);
      _DAT_1808e6b10 = CONCAT44(DAT_1808e6a44._4_4_,(undefined4)DAT_1808e6a44);
      DAT_1808e6b18 = DAT_1808e6a4c;
      DAT_1808e6b1c = auVar25._0_4_;
      DAT_1808e6b20 = auVar23._0_4_;
      DAT_1808e6b30 = 0;
      puVar12 = (ulonglong *)FUN_180386560(&DAT_1808e6a7c,&local_c8);
      local_f8[0] = *puVar12;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = local_f8[0];
      auVar21 = vshufps_avx(auVar21,auVar21,0x55);
      DAT_1808e6b24 =
           (DAT_1808e69dc - DAT_1808e69c0) * auVar21._0_4_ +
           (DAT_1808e69d8 - DAT_1808e69bc) * (float)local_f8[0] +
           (DAT_1808e69e0 - DAT_1808e69c4) * *(float *)(puVar12 + 1);
      if ((DAT_1808e6b24 <= 0.01) || (sVar8 = thunk_FUN_180624430(), 0 < sVar8)) {
        bVar14 = 0;
        DAT_1808e6b28 = '\0';
        FUN_1805f68fc(&DAT_1808e6b40);
      }
      else {
        bVar14 = 1;
        DAT_1808e6b28 = '\x01';
        FUN_1805f68fc(&DAT_1808e6b40);
      }
    }
  }
  else {
    if (param_1 == 0x200) {
      if (uVar2 == 0) goto LAB_180387182;
      if (DAT_1808e6b28 != '\0') {
        if (cVar7 != '\0') {
          fVar24 = DAT_1808e6b24;
          puVar12 = (ulonglong *)FUN_1803866b0(&DAT_1808e6a50,local_f8,DAT_1808e6b1c,DAT_1808e6b20);
          auVar18._0_4_ = (float)iVar17;
          auVar18._4_12_ = SUB1612(ZEXT816(0),4);
          auVar23 = ZEXT864(*puVar12);
          fVar29 = *(float *)(puVar12 + 1);
          auVar20._0_4_ = (float)(int)sVar8;
          auVar20._4_12_ = SUB1612(ZEXT816(0),4);
          puVar12 = (ulonglong *)FUN_1803866b0(&DAT_1808e6a50,local_e8,auVar18._0_8_,auVar20._0_8_);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *puVar12;
          fVar27 = ((float)*puVar12 - auVar23._0_4_) * fVar24;
          auVar21 = vshufps_avx(auVar19,auVar19,0x55);
          auVar18 = vshufps_avx(auVar23._0_16_,auVar23._0_16_,0x55);
          fVar22 = 1.0 / DAT_1808e6acc;
          fVar26 = (auVar21._0_4_ - auVar18._0_4_) * fVar24;
          fVar24 = (*(float *)(puVar12 + 1) - fVar29) * fVar24;
          FUN_180386560(0x1808e6ab4,&local_c8);
          fVar29 = (fVar27 * local_c8 + fVar26 * local_c4 + fVar24 * local_c0) * fVar22;
          fVar28 = (fVar27 * local_bc + fVar26 * local_b8 + fVar24 * local_b4) * fVar22;
          fVar22 = (fVar27 * local_b0 + fVar26 * local_ac + fVar24 * local_a8) * fVar22;
          FUN_180386560(&DAT_1808e6ad0,&local_c8);
          fVar27 = (fVar28 * local_bc + fVar29 * local_c8 + fVar22 * local_b0) * DAT_1808e6ae8;
          auVar25 = ZEXT464((uint)((fVar28 * local_b8 + fVar29 * local_c4 + fVar22 * local_ac) *
                                  DAT_1808e6ae8));
          auVar23 = ZEXT464((uint)((fVar28 * local_b4 + fVar29 * local_c0 + fVar22 * local_a8) *
                                  DAT_1808e6ae8));
          sVar8 = thunk_FUN_180624430(fVar27);
          if (((sVar8 < 1) && (sVar8 = thunk_FUN_180624430(auVar25._0_8_), sVar8 < 1)) &&
             (sVar8 = thunk_FUN_180624430(auVar23._0_8_), sVar8 < 1)) {
            DAT_1808e6b18 = auVar23._0_4_ + DAT_1808e6b0c;
            _DAT_1808e6b10 = CONCAT44(auVar25._0_4_ + DAT_1808e6b08,fVar27 + DAT_1808e6b04);
          }
        }
        bVar14 = 1;
      }
      FUN_1805f68fc(&DAT_1808e6b40);
    }
    else {
      if (param_1 == 0x202) {
        bVar13 = bVar14;
        if (DAT_1808e6b28 != '\0') {
          DAT_1808e6b28 = '\0';
          if (cVar7 != '\0') {
            DAT_1808e6b30 = UVar10 + 0x4b;
            bVar13 = 1;
            FUN_1805f68fc(&DAT_1808e6b40);
            goto LAB_18038719a;
          }
          DAT_1808e6b30 = 0;
          bVar13 = 1;
        }
        FUN_1805f68fc(&DAT_1808e6b40);
        goto LAB_18038719a;
      }
LAB_180387182:
      FUN_1805f68fc(&DAT_1808e6b40);
      if (param_1 == 0x202) {
LAB_18038719a:
        LOCK();
        UNLOCK();
        DAT_180c630d0 = UVar10 + 0x4b;
        if (cVar7 == '\0') {
          DAT_180c630d0 = 0;
        }
        LOCK();
        UNLOCK();
        if (cVar7 == '\0') {
          LOCK();
          DAT_180c630d8 = 0;
          UNLOCK();
        }
        DAT_180c63100 = 0;
        return (bool)(bVar13 ^ 1);
      }
    }
    if (cVar7 == '\0') {
      return false;
    }
    if (param_1 != 0x201) goto LAB_18038712b;
    if (uVar3 != 0) {
      return false;
    }
  }
  LOCK();
  DAT_180c64040 = DAT_180c64040 + 1;
  UNLOCK();
  LOCK();
  DAT_180c63100 = 1;
  UNLOCK();
  LOCK();
  DAT_180c630d0 = 0;
  UNLOCK();
  LOCK();
  DAT_180c630d8 = 1;
  UNLOCK();
  LOCK();
  DAT_180c630f8 = lVar4;
  UNLOCK();
LAB_18038712b:
  return bVar14 == 0;
}




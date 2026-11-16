// FUN_1802401a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802401a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802401a0(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4)

{
  undefined1 auVar1 [32];
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  float local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int local_c8 [2];
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  uStack_b0 = 0;
  local_c8[0] = 1;
  local_c0 = 0;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  if (((DAT_180bbab78 == 0) ||
      ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_c8,&local_c0),
      local_c8[0] != 0)) && (fVar7 = 0.0, 0.0 < fStack_b8)) {
    iVar4 = (int)fStack_b8;
    iVar5 = (int)fStack_b4;
    if ((2 < iVar4) && (2 < iVar5)) {
      iVar3 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180b8e2ac == 0x7fffffff) {
        DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_c0 = _DAT_180b8e220;
      fStack_b8 = (float)uRam0000000180b8e228;
      fStack_b4 = (float)((ulonglong)uRam0000000180b8e228 >> 0x20);
      uStack_b0 = uRam0000000180b8e230;
      uStack_a8 = uRam0000000180b8e238;
      local_e8 = _DAT_180b8e240;
      uStack_e0 = uRam0000000180b8e248;
      uStack_d8 = uRam0000000180b8e250;
      uStack_d0 = uRam0000000180b8e258;
      FUN_1805f68fc(&DAT_180b8e260);
      auVar10._8_4_ = fStack_b8;
      auVar10._0_8_ = local_c0;
      auVar10._12_4_ = fStack_b4;
      vshufps_avx(auVar10,auVar10,0xaa);
      vshufps_avx(auVar10,auVar10,0x55);
      uVar8 = FUN_1806052cc();
      auVar1._8_8_ = uStack_e0;
      auVar1._0_8_ = local_e8;
      auVar1._16_8_ = uStack_d8;
      auVar1._24_8_ = uStack_d0;
      auVar10 = auVar1._16_16_;
      vshufps_avx(auVar10,auVar10,0xaa);
      vshufps_avx(auVar10,auVar10,0x55);
      uVar9 = FUN_1806052cc();
      sVar2 = thunk_FUN_180624430(uVar8);
      fVar17 = (float)uVar8;
      if ((sVar2 < 1) && (fVar7 < fVar17)) {
        sVar2 = thunk_FUN_180624430(uVar9);
        fVar11 = (float)uVar9;
        if ((sVar2 < 1) && (fVar7 < fVar11)) {
          fVar16 = (float)iVar5;
          auVar14 = ZEXT464((uint)(fVar16 * 0.5));
          fVar15 = (float)iVar4;
          auVar13 = ZEXT464((uint)(fVar15 * 0.5));
          fVar6 = (float)FUN_180639470(param_3 * 0.017453292);
          fVar17 = ((fVar6 * fVar17) / fVar11) * auVar13._0_4_;
          auVar12 = ZEXT464((uint)fVar17);
          sVar2 = thunk_FUN_180624430(fVar17);
          if ((sVar2 < 1) && (fVar7 < auVar12._0_4_)) {
            fVar7 = (float)FUN_180636420(auVar13._0_8_,auVar14._0_8_);
            if (auVar12._0_4_ < fVar7) {
              local_f8 = 0x40;
              local_100 = 0x3f800000;
              local_108 = (float)param_4;
              FUN_180433240(param_2,auVar13._0_8_,auVar14._0_8_,auVar12._0_8_);
            }
            else {
              local_108 = fVar16 - 2.0;
              local_f8 = 0x3f800000;
              local_100 = param_4;
              FUN_180433010(param_2,0x3f800000,0x3f800000,fVar15 - 2.0);
            }
          }
        }
      }
    }
  }
}




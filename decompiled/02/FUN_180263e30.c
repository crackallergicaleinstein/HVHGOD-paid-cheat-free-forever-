// FUN_180263e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180263e30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180263e30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [15];
  char cVar3;
  short sVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  char cVar12;
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e0;
  undefined4 local_d8;
  float local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  float local_98;
  float local_94;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  cVar3 = DAT_180b8e660;
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if (DAT_180cadbf0 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    uStack_88 = uRam0000000180bb8898;
    local_90 = (undefined1  [8])_DAT_180bb8890;
    uStack_80 = uRam0000000180bb88a0;
    uStack_78 = uRam0000000180bb88a8;
    cVar12 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (((cVar3 != '\0') && (cVar12 != '\0')) && (DAT_180bb88c9 == '\0')) {
      puVar9 = (undefined4 *)&DAT_180cadc64;
      puVar10 = (undefined4 *)&DAT_180cadc60;
      local_94 = 1.4013e-45;
      if (cVar3 != '\x02') {
        puVar10 = &DAT_180cadc68;
        puVar9 = &DAT_180cadc6c;
      }
      uStack_80 = 0;
      _local_90 = (undefined1  [16])0x0;
      fVar13 = 0.0;
      if (((DAT_180bbab78 != 0) &&
          ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,&local_94,local_90),
          local_94 == 0.0)) || ((float)uStack_88 <= fVar13)) {
        iVar5 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = (int)uStack_88._4_4_;
        iVar5 = (int)(float)uStack_88;
      }
      fVar11 = 0.5;
      auVar14 = ZEXT464(DAT_180cadc58);
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)iVar5 * 0.5)),1);
      auVar15 = ZEXT1664(auVar1);
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)iVar7 * 0.5)),1);
      auVar16 = ZEXT1664(auVar1);
      sVar4 = thunk_FUN_180624430(DAT_180cadc58,(float)iVar7 * 0.5);
      if (sVar4 < 1) {
        puVar8 = (uint *)&local_94;
        if (fVar11 <= auVar14._0_4_) {
          puVar8 = &DAT_180cadc58;
        }
        local_98 = 10.0;
        pfVar6 = &local_98;
        if (auVar14._0_4_ <= 10.0) {
          pfVar6 = (float *)puVar8;
        }
        local_94 = fVar11;
        fVar11 = *pfVar6;
      }
      else {
        fVar11 = 3.0;
      }
      auVar14 = ZEXT464(DAT_180cadc5c);
      sVar4 = thunk_FUN_180624430(DAT_180cadc5c);
      auVar1 = _local_90;
      if (sVar4 < 1) {
        puVar8 = (uint *)&local_98;
        if (fVar13 <= auVar14._0_4_) {
          puVar8 = &DAT_180cadc5c;
        }
        local_94 = 4.0;
        pfVar6 = &local_94;
        if (auVar14._0_4_ <= 4.0) {
          pfVar6 = (float *)puVar8;
        }
        local_98 = fVar13;
        local_d0 = *pfVar6;
      }
      else {
        local_d0 = 1.0;
      }
      local_b0 = local_90;
      local_c0 = *puVar10;
      local_a8 = 0x3f800000;
      auVar2._1_14_ = stack0xffffffffffffff72;
      auVar2[0] = DAT_180cadc70;
      local_90._0_4_ = auVar2._0_4_ << 8;
      local_b8 = *puVar9;
      local_c8 = 0;
      local_d8 = 0x3f800000;
      local_90._4_4_ = fVar13;
      uStack_88._4_4_ = auVar1._12_4_;
      uStack_88._0_4_ = (float)DAT_180cadcd8;
      auVar1[0xf] = 0;
      auVar1._0_15_ = stack0xffffffffffffff71;
      _local_90 = auVar1 << 8;
      local_e8 = fVar11;
      local_e0 = fVar13;
      FUN_180253a60(param_2,auVar15._0_8_,auVar16._0_8_,0);
    }
  }
}




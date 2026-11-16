// FUN_1802da4e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802da4e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802da4e0(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_148 [32];
  float local_128;
  uint local_120;
  uint local_118;
  uint local_110;
  uint local_108;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined1 local_e8 [12];
  float fStack_dc;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  if ((DAT_180b0c218 != '\0') && (auVar17 = ZEXT864(0), 0.0 < DAT_180cc9b5c)) {
    param_3 = param_3 - DAT_180cc9b5c;
    auVar16 = ZEXT464((uint)param_3);
    if (param_3 <= DAT_180b0c284) {
      auVar18 = ZEXT464(0x3f800000);
      auVar13 = vminss_avx(auVar18._0_16_,ZEXT416((uint)(param_3 * 15.0)));
      fVar11 = DAT_180b0c284;
      fVar10 = (float)FUN_180637bd0(1.0 - auVar13._0_4_,0x40400000);
      fVar10 = auVar18._0_4_ - fVar10;
      auVar13._0_4_ = auVar16._0_4_ / fVar11;
      auVar13._4_12_ = auVar16._4_12_;
      fVar11 = (float)FUN_180637bd0(auVar13._0_8_,0x3f19999a);
      iVar9 = 0;
      local_d8 = 0;
      local_f0 = 1;
      fVar10 = fVar10 * (auVar18._0_4_ - fVar11) * (DAT_180b0c288 / 100.0);
      _local_e8 = (undefined1  [16])0x0;
      local_f4 = fVar10;
      if (((DAT_180bbab78 != 0) &&
          ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,&local_f0,local_e8),
          local_f0 == 0)) || ((float)local_e8._8_4_ <= auVar17._0_4_)) {
        iVar7 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = (int)fStack_dc;
        iVar7 = (int)(float)local_e8._8_4_;
      }
      uVar3 = DAT_180b0c282;
      uVar2 = DAT_180b0c281;
      uVar1 = DAT_180b0c280;
      fVar19 = 31.0;
      fVar20 = 0.35;
      fVar21 = 0.01;
      auVar22 = ZEXT464(0x40200000);
      auVar16 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)iVar7));
      fVar11 = (float)iVar8;
      do {
        fVar15 = ((float)iVar9 / fVar19) * fVar20 + fVar21;
        fVar12 = (float)FUN_180637bd0(auVar18._0_4_ - (float)iVar9 / fVar19,auVar22._0_8_);
        auVar13 = vminss_avx(SUB6416(ZEXT464(0x437f0000),0),ZEXT416((uint)(fVar12 * fVar10 * 280.0))
                            );
        cVar6 = (char)(int)auVar13._0_4_;
        if (cVar6 != '\0') {
          fVar10 = fVar15 * auVar16._0_4_;
          auVar14 = ZEXT464((uint)fVar10);
          local_f8 = CONCAT13(cVar6,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
          uVar4 = local_f8;
          local_108 = local_f8;
          local_f0 = (uint)CONCAT12(uVar3,CONCAT11(uVar2,uVar1));
          uVar5 = local_f0;
          local_110 = local_f0;
          local_118 = local_f0;
          local_120 = local_f8;
          fVar15 = fVar15 * fVar11;
          local_128 = fVar11;
          FUN_180430a80(param_2,auVar17._0_8_,auVar17._0_8_,fVar10);
          local_108 = uVar5;
          local_110 = uVar4;
          local_118 = uVar4;
          local_120 = uVar5;
          local_128 = fVar11;
          FUN_180430a80(param_2,auVar16._0_4_ - auVar14._0_4_,auVar17._0_8_,auVar14._0_8_);
          local_108 = uVar5;
          local_110 = uVar5;
          local_118 = uVar4;
          local_120 = uVar4;
          local_128 = fVar15;
          FUN_180430a80(param_2,auVar17._0_8_,auVar17._0_8_,auVar16._0_8_);
          local_108 = uVar4;
          local_110 = uVar4;
          local_118 = uVar5;
          local_120 = uVar5;
          local_128 = fVar15;
          FUN_180430a80(param_2,auVar17._0_8_,fVar11 - fVar15,auVar16._0_8_);
          fVar10 = local_f4;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x20);
    }
    else {
      DAT_180cc9b5c = 0.0;
    }
  }
}




// FUN_180373460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180373460 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180373460(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auStack_118 [32];
  float local_f8 [4];
  undefined *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  if (((DAT_180cc8c68 != '\0') && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar1 = DAT_1808da460;
    if (DAT_180901620 == DAT_1808da460) {
      pcVar7 = (code *)DAT_180c6fa08;
    }
    else {
      local_e8 = &DAT_1809015d0;
      iVar3 = FUN_1805f68d0(&DAT_1809015d0);
      if (iVar3 != 0) goto LAB_180373958;
      if (DAT_18090161c == 0x7fffffff) {
        DAT_18090161c = 0x7ffffffe;
        goto LAB_18037396d;
      }
      if (DAT_180901620 != lVar1) {
        DAT_180c6fa08 = FUN_1803730e0();
        DAT_180901620 = lVar1;
      }
      pcVar7 = (code *)DAT_180c6fa08;
      FUN_1805f68fc(&DAT_1809015d0);
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar1 = DAT_1808da460;
    if (DAT_180901680 == DAT_1808da460) {
      pcVar6 = (code *)DAT_180c6fa10;
    }
    else {
      local_e8 = &DAT_180901630;
      iVar3 = FUN_1805f68d0(&DAT_180901630);
      if (iVar3 != 0) {
LAB_180373958:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_18090167c == 0x7fffffff) {
        DAT_18090167c = 0x7ffffffe;
LAB_18037396d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180901680 != lVar1) {
        DAT_180c6fa10 = FUN_1803732a0();
        DAT_180901680 = lVar1;
      }
      pcVar6 = (code *)DAT_180c6fa10;
      FUN_1805f68fc(&DAT_180901630);
    }
    if ((pcVar7 != (code *)0x0) && (pcVar6 != (code *)0x0)) {
      fVar10 = 1.0;
      local_e8._0_4_ = 1.0;
      fVar9 = 0.0;
      local_f8[0] = 0.0;
      auVar11 = ZEXT464(DAT_180cc8cd4);
      local_f8[2] = (float)DAT_180cc8cd4;
      sVar2 = thunk_FUN_180624430(DAT_180cc8cd4);
      if (sVar2 < 1) {
        pfVar5 = local_f8;
        if (fVar9 <= auVar11._0_4_) {
          pfVar5 = local_f8 + 2;
        }
        pfVar4 = local_f8 + 4;
        if (auVar11._0_4_ <= fVar10) {
          pfVar4 = pfVar5;
        }
        fVar15 = *pfVar4;
      }
      else {
        fVar15 = 0.15;
      }
      fVar13 = 5000.0;
      local_f8[0] = 5000.0;
      auVar11 = ZEXT464(DAT_180cc8ce0);
      local_f8[2] = (float)DAT_180cc8ce0;
      local_e8._0_4_ = fVar9;
      sVar2 = thunk_FUN_180624430(DAT_180cc8ce0);
      auVar14 = ZEXT464(0x43000000);
      if (sVar2 < 1) {
        pfVar5 = local_f8 + 4;
        if (fVar9 <= auVar11._0_4_) {
          pfVar5 = local_f8 + 2;
        }
        pfVar4 = local_f8;
        if (auVar11._0_4_ <= fVar13) {
          pfVar4 = pfVar5;
        }
        auVar11 = ZEXT464((uint)*pfVar4);
      }
      else {
        auVar11 = ZEXT1664(auVar14._0_16_);
      }
      fVar13 = 20000.0;
      local_f8[0] = 20000.0;
      local_e8._0_4_ = 128.0;
      auVar12 = ZEXT464(DAT_180cc8cd8);
      local_f8[2] = (float)DAT_180cc8cd8;
      sVar2 = thunk_FUN_180624430(DAT_180cc8cd8);
      if (sVar2 < 1) {
        pfVar5 = local_f8 + 4;
        if (auVar14._0_4_ <= auVar12._0_4_) {
          pfVar5 = local_f8 + 2;
        }
        pfVar4 = local_f8;
        if (auVar12._0_4_ <= fVar13) {
          pfVar4 = pfVar5;
        }
        auVar8 = ZEXT416((uint)*pfVar4);
      }
      else {
        auVar8 = SUB6416(ZEXT464(0x45228000),0);
      }
      auVar8 = vmaxss_avx(auVar8,ZEXT416((uint)(auVar11._0_4_ + fVar10)));
      auVar12 = ZEXT1664(auVar8);
      fVar13 = 3.0;
      local_f8[0] = 3.0;
      auVar14 = ZEXT464(DAT_180cc8ce4);
      local_f8[2] = (float)DAT_180cc8ce4;
      local_e8._0_4_ = fVar9;
      sVar2 = thunk_FUN_180624430(DAT_180cc8ce4);
      if (sVar2 < 1) {
        pfVar5 = local_f8 + 4;
        if (fVar9 <= auVar14._0_4_) {
          pfVar5 = local_f8 + 2;
        }
        pfVar4 = local_f8;
        if (auVar14._0_4_ <= fVar13) {
          pfVar4 = pfVar5;
        }
        fVar13 = *pfVar4;
      }
      else {
        fVar13 = fVar10;
      }
      auVar8 = vinsertps_avx(ZEXT416(0),auVar11._0_16_,0);
      local_d8 = vinsertps_avx(auVar8,auVar12._0_16_,0x10);
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,fVar9);
      auVar11 = ZEXT464(DAT_180cc8cd0);
      local_f8[2] = (float)DAT_180cc8cd0;
      local_f8[0] = fVar10;
      sVar2 = thunk_FUN_180624430(DAT_180cc8cd0);
      if (sVar2 < 1) {
        pfVar5 = local_f8 + 4;
        if (fVar9 <= auVar11._0_4_) {
          pfVar5 = local_f8 + 2;
        }
        pfVar4 = local_f8;
        if (auVar11._0_4_ <= fVar10) {
          pfVar4 = pfVar5;
        }
        auVar8 = ZEXT416((uint)*pfVar4);
      }
      else {
        auVar8 = SUB6416(ZEXT464(0x3f266666),0);
      }
      auVar8 = vinsertps_avx(ZEXT816(0),auVar8,0);
      local_c8 = vinsertps_avx(auVar8,ZEXT416((uint)(fVar15 * 8.0 + 0.5)),0x10);
      auVar8 = vinsertps_avx(ZEXT416(0),ZEXT416((uint)(((float)DAT_180cc8cdc / 255.0) * fVar13)),0);
      auVar8 = vinsertps_avx(auVar8,ZEXT416((uint)(((float)DAT_180cc8cdd / 255.0) * fVar13)),0x10);
      local_b8 = vinsertps_avx(auVar8,ZEXT416((uint)(((float)DAT_180cc8cde / 255.0) * fVar13)),0x20)
      ;
      (*pcVar7)(param_2,0x4b01ff63,local_d8);
      (*pcVar7)(param_2,0xaa49c2a,local_c8);
      (*pcVar7)(param_2,0xfbf6448d,local_b8);
      (*pcVar6)(param_2 + 0x110,0x6e0fad7e,1);
      *param_3 = 0;
    }
  }
}




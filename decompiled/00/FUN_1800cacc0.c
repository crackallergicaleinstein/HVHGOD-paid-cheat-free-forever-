// FUN_1800cacc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cacc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800cacc0(undefined1 (*param_1) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  short sVar3;
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  int **ppiVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94 [3];
  ulonglong uStack_88;
  undefined4 uStack_7c;
  int *local_78 [2];
  undefined1 (*local_68) [16];
  int *local_60 [9];
  
  local_60[0] = (int *)(DAT_1808d5f00 ^ (ulonglong)auStack_b8);
  fVar12 = 128.0;
  fVar13 = -128.0;
  local_94[0] = 1.401298e-39;
  local_98 = 0.0;
  pauVar7 = (undefined1 (*) [16])&local_98;
  if (-1 < *(int *)*param_1) {
    pauVar7 = param_1;
  }
  ppiVar8 = local_78;
  pfVar1 = (float *)(*param_1 + 4);
  auVar11 = ZEXT864(0);
  pauVar4 = (undefined1 (*) [16])local_94;
  if (*(int *)*param_1 < 0xf4241) {
    pauVar4 = pauVar7;
  }
  *(undefined4 *)*param_1 = *(undefined4 *)*pauVar4;
  local_98 = 1.4013e-40;
  local_94[0] = 0.0;
  pfVar6 = local_94;
  if (-1 < (int)*pfVar1) {
    pfVar6 = pfVar1;
  }
  pfVar5 = &local_98;
  if ((int)*pfVar1 < 0x186a1) {
    pfVar5 = pfVar6;
  }
  *pfVar1 = *pfVar5;
  local_78[0] = (int *)(*param_1 + 8);
  local_78[1] = (int *)(*param_1 + 0xc);
  local_68 = param_1 + 1;
  do {
    pfVar1 = (float *)*ppiVar8;
    fVar10 = *pfVar1;
    sVar3 = thunk_FUN_180624430(fVar10);
    fVar9 = auVar11._0_4_;
    if (sVar3 < 1) {
      pfVar6 = local_94;
      if (fVar13 <= fVar10) {
        pfVar6 = pfVar1;
      }
      local_98 = fVar12;
      pfVar5 = &local_98;
      if (fVar10 <= fVar12) {
        pfVar5 = pfVar6;
      }
      local_94[0] = fVar13;
      fVar9 = *pfVar5;
    }
    ppiVar8 = ppiVar8 + 1;
    *pfVar1 = fVar9;
  } while (ppiVar8 != local_60);
  if (*(int *)*param_1 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_88;
    auVar2 = vinsertps_avx(auVar2 << 0x40,auVar11._0_16_,0x20);
    auVar2 = vinsertps_avx(auVar2,auVar11._0_16_,0x30);
    *param_1 = auVar2;
    *(ulonglong *)param_1[1] = CONCAT44(uStack_7c,auVar11._0_4_) & 0xffffff00ffffffff;
  }
}




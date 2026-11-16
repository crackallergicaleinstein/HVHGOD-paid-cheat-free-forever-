// FUN_180291c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180291c60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180291c60(longlong *param_1,longlong param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1908 [32];
  float local_18e8 [2];
  longlong local_18e0;
  undefined1 local_18d8 [4];
  float local_18d4 [1535];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1908;
  lVar6 = *param_1;
  if (((lVar6 != 0) && (param_2 != 0)) && ((int)param_3 - 1U < 0x80)) {
    lVar5 = FUN_18017ea70();
    lVar9 = 0;
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    lVar6 = lVar6 + 0xd0;
    if (lVar6 == 0) {
      bVar1 = false;
    }
    else {
      local_18e8[0] = 0.0;
      cVar3 = FUN_1804514f0(local_18e8,lVar6,4);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    fVar11 = local_18e8[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    lVar6 = *param_1;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    bVar2 = false;
    if (lVar6 + 0xd8 != 0) {
      local_18e0 = 0;
      cVar3 = FUN_1804514f0(&local_18e0,lVar6 + 0xd8,8);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    lVar6 = local_18e0;
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (((bVar1) && (bVar2)) && ((lVar6 != 0 && (fVar11 == param_3)))) {
      FUN_18063ab10(local_18d8,0,0x1800);
      if (0 < (int)param_3) {
        pfVar8 = local_18d4;
        pfVar7 = (float *)(param_2 + 0x18);
        do {
          fVar12 = 1.25;
          fVar11 = pfVar7[-2];
          fVar15 = pfVar7[-1];
          fVar14 = *pfVar7;
          fVar13 = pfVar7[1];
          fVar18 = fVar15 * fVar15 + fVar11 * fVar11;
          local_18e0 = CONCAT44(local_18e0._4_4_,fVar11 * fVar11);
          fVar19 = fVar14 * fVar14;
          auVar10 = ZEXT464((uint)(fVar19 + fVar18 + fVar13 * fVar13));
          local_18e8[0] = pfVar7[-6];
          sVar4 = thunk_FUN_180624430();
          if (0 < sVar4) {
          }
          fVar17 = pfVar7[-5];
          sVar4 = thunk_FUN_180624430(fVar17);
          if (0 < sVar4) {
          }
          fVar16 = pfVar7[-4];
          sVar4 = thunk_FUN_180624430(fVar16);
          if (0 < sVar4) {
          }
          sVar4 = thunk_FUN_180624430(auVar10._0_8_);
          if (0 < sVar4) {
          }
          if (auVar10._0_4_ < 0.75) {
          }
          if (fVar12 < auVar10._0_4_) {
          }
          fVar12 = fVar19 + fVar15 * fVar15;
          pfVar8[-1] = 1.0 - (fVar12 + fVar12);
          fVar12 = fVar15 * fVar11 - fVar14 * fVar13;
          *pfVar8 = fVar12 + fVar12;
          fVar12 = fVar15 * fVar13 + fVar11 * fVar14;
          pfVar8[1] = fVar12 + fVar12;
          pfVar8[2] = local_18e8[0];
          fVar12 = fVar14 * fVar13 + fVar15 * fVar11;
          pfVar8[3] = fVar12 + fVar12;
          pfVar8[4] = 1.0 - (fVar19 + (float)local_18e0 + fVar19 + (float)local_18e0);
          fVar19 = fVar15 * fVar14 - fVar11 * fVar13;
          pfVar8[5] = fVar19 + fVar19;
          pfVar8[6] = fVar17;
          fVar19 = fVar11 * fVar14 - fVar15 * fVar13;
          pfVar8[7] = fVar19 + fVar19;
          fVar11 = fVar11 * fVar13 + fVar15 * fVar14;
          pfVar8[8] = fVar11 + fVar11;
          pfVar8[9] = 1.0 - (fVar18 + fVar18);
          pfVar8[10] = fVar16;
          pfVar8 = pfVar8 + 0xc;
          lVar9 = lVar9 + 1;
          pfVar7 = pfVar7 + 8;
        } while (lVar9 < (int)param_3);
      }
      lVar5 = (longlong)(int)param_3 * 0x30;
      if (lVar5 != 0) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        FUN_1804514c0(lVar6,local_18d8,lVar5);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
      }
    }
  }
}




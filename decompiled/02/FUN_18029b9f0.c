// FUN_18029b9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b9f0 */

float * FUN_18029b9f0(float *param_1,float *param_2,undefined8 param_3,float param_4,int param_5,
                     float param_6,longlong param_7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  short sVar12;
  int *piVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  undefined1 in_ZMM2 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  int local_68 [24];
  
  lVar10 = param_7;
  uVar18 = 0;
  local_68[2] = param_5;
  local_68[4] = 3;
  local_68[0] = 0;
  piVar19 = local_68;
  if (-1 < param_5) {
    piVar19 = local_68 + 2;
  }
  piVar13 = local_68 + 4;
  if (param_5 < 4) {
    piVar13 = piVar19;
  }
  auVar25 = ZEXT1664(in_ZMM2._0_16_);
  iVar4 = *piVar13;
  fVar24 = param_6;
  sVar12 = thunk_FUN_180624430(param_6);
  auVar23 = ZEXT464(0x3f000000);
  if (sVar12 < 1) {
    puVar16 = (uint *)(local_68 + 5);
    if (0.0 <= fVar24) {
      puVar16 = (uint *)&param_6;
    }
    local_68[6] = 0x3f800000;
    puVar14 = (uint *)(local_68 + 6);
    if (fVar24 <= 1.0) {
      puVar14 = puVar16;
    }
    local_68[5] = 0;
    auVar22 = ZEXT464(*puVar14);
  }
  else {
    auVar22 = ZEXT1664(auVar23._0_16_);
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = auVar25._0_4_;
  param_1[3] = param_4;
  cVar11 = FUN_18029b970(iVar4);
  fVar24 = auVar25._0_4_;
  if (cVar11 == '\0') {
    auVar6 = vcmpss_avx(ZEXT416((uint)param_2[2]),auVar25._0_16_,1);
    auVar6 = vblendvps_avx(auVar22._0_16_,auVar23._0_16_,auVar6);
    *param_1 = auVar6._0_4_ * (param_2[2] - fVar24) + *param_2;
    if (iVar4 == 1) {
      fVar20 = (param_2[1] - 2.0) - param_4;
    }
    else {
      fVar20 = param_2[3] + param_2[1] + 2.0;
    }
    param_1[1] = fVar20;
  }
  else {
    if (iVar4 == 0) {
      fVar20 = (*param_2 - 2.0) - fVar24;
    }
    else {
      fVar20 = param_2[2] + *param_2 + 2.0;
    }
    fVar2 = param_2[3];
    *param_1 = fVar20;
    param_1[1] = (fVar2 - param_4) * auVar22._0_4_ + param_2[1];
  }
  uVar5 = *(uint *)(lVar10 + 0x210);
  while (bVar9 = false, uVar5 != 0) {
    pfVar15 = (float *)(lVar10 + 0x18);
    uVar17 = (ulonglong)uVar5;
    do {
      fVar20 = pfVar15[-2];
      if ((fVar20 < *param_1 + fVar24 + 2.0) && (fVar2 = fVar20 + *pfVar15 + 2.0, *param_1 < fVar2))
      {
        fVar3 = pfVar15[-1];
        if ((fVar3 < param_1[1] + param_4 + 2.0) &&
           (fVar21 = fVar3 + pfVar15[1] + 2.0, param_1[1] < fVar21)) {
          bVar9 = true;
          if (iVar4 == 0) {
            *param_1 = (fVar20 - 2.0) - fVar24;
          }
          else if (iVar4 == 3) {
            *param_1 = fVar2;
          }
          else {
            if (iVar4 == 1) {
              fVar21 = (fVar3 - 2.0) - param_4;
            }
            param_1[1] = fVar21;
          }
        }
      }
      pfVar15 = pfVar15 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if ((!bVar9) || (uVar18 = uVar18 + 1, 0x1f < uVar18)) break;
  }
  if (uVar5 < 0x20) {
    uVar7 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 2);
    *(uint *)(lVar10 + 0x210) = uVar5 + 1;
    puVar1 = (undefined8 *)(lVar10 + ((ulonglong)uVar5 + 1) * 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
  }
  return param_1;
}




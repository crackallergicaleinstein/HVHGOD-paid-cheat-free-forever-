// FUN_1804316e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804316e0 */

undefined1 * FUN_1804316e0(undefined8 *param_1,undefined1 *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float local_48 [16];
  
  pbVar15 = (byte *)param_1[5];
  pbVar16 = (byte *)param_1[6];
  pbVar17 = (byte *)param_1[7];
  local_48[1] = (param_3 - *(float *)*param_1) * *(float *)param_1[1];
  local_48[0] = 0.0;
  local_48[2] = 1.0;
  pfVar22 = local_48;
  if (0.0 <= local_48[1]) {
    pfVar22 = local_48 + 1;
  }
  pfVar21 = local_48 + 2;
  if (local_48[1] <= 1.0) {
    pfVar21 = pfVar22;
  }
  fVar1 = *pfVar21;
  fVar19 = 1.0 - fVar1;
  local_48[2] = 0.0;
  local_48[0] = 1.0;
  local_48[1] = (param_4 - *(float *)param_1[2]) * *(float *)param_1[3];
  pfVar22 = local_48 + 2;
  if (0.0 <= local_48[1]) {
    pfVar22 = local_48 + 1;
  }
  pfVar21 = local_48;
  if (local_48[1] <= 1.0) {
    pfVar21 = pfVar22;
  }
  pbVar18 = (byte *)param_1[4];
  fVar2 = *pfVar21;
  bVar3 = pbVar15[1];
  bVar4 = pbVar18[1];
  bVar5 = pbVar16[1];
  fVar20 = 1.0 - fVar2;
  bVar6 = pbVar17[1];
  bVar7 = pbVar15[2];
  bVar8 = pbVar18[2];
  bVar9 = pbVar16[2];
  bVar10 = pbVar17[2];
  bVar11 = pbVar15[3];
  bVar12 = pbVar18[3];
  bVar13 = pbVar16[3];
  bVar14 = pbVar17[3];
  *param_2 = (char)(int)((float)*pbVar18 * fVar19 * fVar20 + (float)*pbVar15 * fVar1 * fVar20 +
                         (float)*pbVar16 * fVar19 * fVar2 + (float)*pbVar17 * fVar1 * fVar2);
  param_2[1] = (char)(int)((float)bVar3 * fVar1 * fVar20 + (float)bVar4 * fVar19 * fVar20 +
                           (float)bVar5 * fVar19 * fVar2 + (float)bVar6 * fVar1 * fVar2);
  param_2[2] = (char)(int)((float)bVar7 * fVar1 * fVar20 + (float)bVar8 * fVar19 * fVar20 +
                           (float)bVar9 * fVar19 * fVar2 + (float)bVar10 * fVar1 * fVar2);
  param_2[3] = (char)(int)((float)bVar11 * fVar1 * fVar20 + (float)bVar12 * fVar19 * fVar20 +
                           (float)bVar13 * fVar19 * fVar2 + (float)bVar14 * fVar1 * fVar2);
  return param_2;
}




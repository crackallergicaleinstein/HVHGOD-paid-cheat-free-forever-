// FUN_1802ee230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ee230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ee230(undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  undefined1 local_288 [80];
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  longlong lStack_1d0;
  float local_154;
  float fStack_150;
  float local_14c;
  float local_12c;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  uVar3 = *param_2;
  local_230 = *(float *)(param_2 + 1);
  iVar16 = 0;
  auVar25 = ZEXT464(0x2edbe6ff);
  fVar24 = 1.0;
  auVar23 = ZEXT464(0x40600000);
  local_238._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  local_238._0_4_ = (float)uVar3;
  fVar20 = local_238._4_4_;
  fVar19 = (float)local_238;
  local_238 = uVar3;
  do {
    fVar19 = *param_3 - fVar19;
    fVar20 = param_3[1] - fVar20;
    fVar21 = param_3[2] - local_230;
    fVar17 = fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21;
    auVar18 = ZEXT464((uint)fVar17);
    if (fVar17 < auVar25._0_4_) {
LAB_1802ee4f4:
      *param_1 = *(undefined8 *)param_3;
      *(float *)(param_1 + 1) = param_3[2];
      goto LAB_1802ee502;
    }
    if ((param_6 == 0) || (0x11 < param_7)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    lVar15 = 0;
    if (bVar10) {
      lVar15 = param_6;
    }
    puVar11 = (undefined8 *)FUN_180419410(fVar19 * fVar19,local_288,lVar15);
    local_228 = *puVar11;
    uStack_220 = puVar11[1];
    uStack_218 = puVar11[2];
    uStack_210 = puVar11[3];
    local_208 = puVar11[4];
    uStack_200 = puVar11[5];
    uStack_1f8 = puVar11[6];
    uStack_1f0 = puVar11[7];
    local_1e8 = puVar11[8];
    local_298 = &local_228;
    local_2a0 = param_5;
    auVar18 = ZEXT1664(auVar18._0_16_);
    auVar23 = ZEXT1664(auVar23._0_16_);
    auVar25 = ZEXT1664(auVar25._0_16_);
    local_2a8 = param_4;
    FUN_180418370();
    if (fVar24 <= local_12c) goto LAB_1802ee4f4;
    if ((lStack_1d0 == 0) || (pcVar12 = (char *)FUN_1803d3fa0(), pcVar12 == (char *)0x0)) {
LAB_1802ee475:
      *param_1 = CONCAT44(fStack_150,local_154);
      *(float *)(param_1 + 1) = local_14c;
      lVar15 = 2;
      puVar11 = &local_1d8;
      puVar13 = param_1 + 2;
      do {
        puVar1 = puVar13 + 0x10;
        uVar7 = puVar11[1];
        uVar8 = puVar11[2];
        uVar9 = puVar11[3];
        uVar3 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar2 = puVar11 + 0x10;
        *puVar13 = *puVar11;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        uVar7 = puVar11[5];
        uVar8 = puVar11[6];
        uVar9 = puVar11[7];
        puVar13[4] = puVar11[4];
        puVar13[5] = uVar7;
        puVar13[6] = uVar8;
        puVar13[7] = uVar9;
        uVar7 = puVar11[9];
        uVar8 = puVar11[10];
        uVar9 = puVar11[0xb];
        puVar13[8] = puVar11[8];
        puVar13[9] = uVar7;
        puVar13[10] = uVar8;
        puVar13[0xb] = uVar9;
        uVar7 = puVar11[0xd];
        puVar13[0xc] = puVar11[0xc];
        puVar13[0xd] = uVar7;
        puVar13[0xe] = uVar3;
        puVar13[0xf] = uVar6;
        lVar15 = lVar15 + -1;
        puVar11 = puVar2;
        puVar13 = puVar1;
      } while (lVar15 != 0);
      *puVar1 = *puVar2;
      *(undefined1 *)(param_1 + 0x23) = 1;
    }
    cVar4 = *pcVar12;
    uVar14 = 0x811c9dc5;
    if (cVar4 == '\0') goto LAB_1802ee475;
    do {
      pcVar12 = pcVar12 + 1;
      uVar14 = ((int)cVar4 ^ uVar14) * 0x1000193;
      cVar4 = *pcVar12;
    } while (cVar4 != '\0');
    if (uVar14 != 0x87cce03e) goto LAB_1802ee475;
    if (auVar18._0_4_ < 0.0) {
      fVar17 = (float)FUN_18061e150(auVar18._0_8_);
    }
    else {
      fVar17 = SQRT(auVar18._0_4_);
    }
    fVar17 = fVar24 / fVar17;
    fVar22 = auVar23._0_4_;
    fVar19 = fVar17 * fVar19 * fVar22 + local_154;
    fVar20 = fVar17 * fVar20 * fVar22 + fStack_150;
    local_230 = fVar17 * fVar21 * fVar22 + local_14c;
    iVar16 = iVar16 + 1;
    local_238 = CONCAT44(fVar20,fVar19);
  } while (iVar16 < 0x10);
  auVar5 = vunpcklps_avx(ZEXT416((uint)fVar19),ZEXT416((uint)fVar20));
  *param_1 = auVar5._0_8_;
  *(float *)(param_1 + 1) = local_230;
LAB_1802ee502:
  *(undefined1 *)(param_1 + 0x23) = 0;
}




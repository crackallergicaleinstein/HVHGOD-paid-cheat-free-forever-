// FUN_18030d8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030d8f0 */

undefined1 *
FUN_18030d8f0(undefined1 *param_1,longlong param_2,char *param_3,char *param_4,undefined8 param_5,
             undefined4 param_6)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char local_278 [4];
  float fStack_274;
  undefined4 uStack_270;
  undefined1 local_158 [336];
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*param_3 == '\0') || (*param_4 == '\0')) {
    *param_1 = 0;
    param_1[1] = ~param_4[0x1c] & 1;
  }
  else {
    fVar15 = *(float *)(param_4 + 0x18);
    bVar3 = param_4[0x1c];
    fVar14 = *(float *)(param_4 + 0x14);
    *(float *)(param_1 + 0xc) = *(float *)(param_4 + 0xc) - *(float *)(param_3 + 0xc);
    fVar1 = *(float *)(param_4 + 0x10);
    fVar16 = fVar15 - *(float *)(param_3 + 0x18);
    *(float *)(param_1 + 0x10) = fVar15;
    *param_1 = 1;
    fVar15 = fVar14 * fVar14 + fVar1 * fVar1;
    fVar14 = 0.0;
    *(float *)(param_1 + 0x14) = fVar16;
    param_1[1] = ~bVar3 & 1;
    if (fVar15 == 0.0) {
      fVar15 = 0.0;
    }
    else if (fVar15 < 0.0) {
      fVar15 = (float)FUN_18061e150(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar1 = *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14) +
            *(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10);
    if (fVar1 != fVar14) {
      if (fVar1 < 0.0) {
        fVar14 = (float)FUN_18061e150(fVar1);
      }
      else {
        fVar14 = SQRT(fVar1);
      }
    }
    fVar1 = *(float *)(param_2 + 0x54);
    fVar2 = *(float *)(param_2 + 0x50);
    *(float *)(param_1 + 0x18) = fVar15 - fVar14;
    param_1[3] = 0.3 - fVar1 * fVar2 < fVar16;
    puVar10 = (undefined8 *)FUN_18030c180(local_158,param_2,param_4 + 4,param_5,param_6);
    lVar13 = 2;
    pcVar9 = local_278;
    do {
      pcVar12 = pcVar9;
      puVar11 = puVar10;
      uVar6 = puVar11[1];
      uVar7 = puVar11[2];
      uVar8 = puVar11[3];
      uVar4 = puVar11[0xe];
      uVar5 = puVar11[0xf];
      *(undefined8 *)pcVar12 = *puVar11;
      *(undefined8 *)(pcVar12 + 8) = uVar6;
      *(undefined8 *)(pcVar12 + 0x10) = uVar7;
      *(undefined8 *)(pcVar12 + 0x18) = uVar8;
      uVar6 = puVar11[5];
      uVar7 = puVar11[6];
      uVar8 = puVar11[7];
      *(undefined8 *)(pcVar12 + 0x20) = puVar11[4];
      *(undefined8 *)(pcVar12 + 0x28) = uVar6;
      *(undefined8 *)(pcVar12 + 0x30) = uVar7;
      *(undefined8 *)(pcVar12 + 0x38) = uVar8;
      uVar6 = puVar11[9];
      uVar7 = puVar11[10];
      uVar8 = puVar11[0xb];
      *(undefined8 *)(pcVar12 + 0x40) = puVar11[8];
      *(undefined8 *)(pcVar12 + 0x48) = uVar6;
      *(undefined8 *)(pcVar12 + 0x50) = uVar7;
      *(undefined8 *)(pcVar12 + 0x58) = uVar8;
      uVar6 = puVar11[0xd];
      *(undefined8 *)(pcVar12 + 0x60) = puVar11[0xc];
      *(undefined8 *)(pcVar12 + 0x68) = uVar6;
      *(undefined8 *)(pcVar12 + 0x70) = uVar4;
      *(undefined8 *)(pcVar12 + 0x78) = uVar5;
      lVar13 = lVar13 + -1;
      puVar10 = puVar11 + 0x10;
      pcVar9 = pcVar12 + 0x80;
    } while (lVar13 != 0);
    uVar5 = puVar11[0x11];
    uVar4 = puVar11[0x12];
    *(undefined8 *)(pcVar12 + 0x80) = puVar11[0x10];
    *(undefined8 *)(pcVar12 + 0x88) = uVar5;
    *(undefined8 *)(pcVar12 + 0x90) = uVar4;
    if (local_278[0] != '\0') {
      *(float *)(param_1 + 4) = fStack_274;
      *(undefined4 *)(param_1 + 8) = uStack_270;
      if (fStack_274 <= 0.125) {
        param_1[2] = 1;
        return param_1;
      }
    }
    param_1[2] = 0;
  }
  return param_1;
}




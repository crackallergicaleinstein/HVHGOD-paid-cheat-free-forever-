// FUN_180370a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180370a40 */

uint FUN_180370a40(uint param_1,uint param_2,undefined8 param_3)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78 [6];
  int local_60 [18];
  
  fVar8 = 1.0;
  fVar9 = 0.0;
  local_78[0] = 0.0;
  local_78[4] = 1.0;
  local_78[2] = (float)param_3;
  sVar1 = thunk_FUN_180624430(param_3);
  if (sVar1 < 1) {
    pfVar3 = local_78;
    if (fVar9 <= (float)param_3) {
      pfVar3 = local_78 + 2;
    }
    pfVar2 = local_78 + 4;
    if ((float)param_3 <= fVar8) {
      pfVar2 = pfVar3;
    }
    fVar9 = *pfVar2;
  }
  else {
    fVar9 = fVar8;
  }
  fVar10 = 255.0;
  local_60[2] = 0xff;
  uVar7 = param_1 & 0xff000000;
  uVar6 = 0;
  local_60[0] = 0;
  fVar8 = fVar8 - fVar9;
  do {
    local_60[1] = FUN_18060eb80((((float)(param_2 >> (uVar6 & 0x1f) & 0xff) * fVar9) / fVar10 +
                                fVar8) * (float)(param_1 >> (uVar6 & 0x1f) & 0xff));
    piVar5 = local_60;
    if (-1 < local_60[1]) {
      piVar5 = local_60 + 1;
    }
    piVar4 = local_60 + 2;
    if (local_60[1] < 0x100) {
      piVar4 = piVar5;
    }
    uVar7 = uVar7 | *piVar4 << (uVar6 & 0x1f);
    uVar6 = uVar6 + 8;
  } while (uVar6 < 0x18);
  return uVar7;
}




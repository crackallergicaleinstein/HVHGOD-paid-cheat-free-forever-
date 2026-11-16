// FUN_1802b02f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b02f0 */

uint * FUN_1802b02f0(uint *param_1,uint param_2,longlong param_3,char param_4)

{
  uint uVar1;
  short sVar2;
  ULONGLONG UVar3;
  float *pfVar4;
  float *pfVar5;
  double dVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 uStackX_13;
  float local_78 [24];
  
  if ((param_4 == '\0') || (*(char *)(param_3 + 0xe8) == '\0')) {
    *param_1 = param_2;
  }
  else {
    local_78[2] = *(float *)(param_3 + 0x1bc);
    auVar8 = ZEXT464((uint)local_78[2]);
    UVar3 = GetTickCount64();
    dVar6 = (double)UVar3 * 0.001;
    sVar2 = thunk_FUN_1806243d0(dVar6);
    fVar9 = 0.0;
    if ((sVar2 < 1) && (fVar9 = 0.0, sVar2 = thunk_FUN_180624430(auVar8._0_8_), sVar2 < 1)) {
      local_78[0] = 0.5;
      local_78[4] = 2.0;
      pfVar5 = local_78;
      if (0.5 <= auVar8._0_4_) {
        pfVar5 = local_78 + 2;
      }
      pfVar4 = local_78 + 4;
      if (auVar8._0_4_ <= 2.0) {
        pfVar4 = pfVar5;
      }
      dVar6 = (double)FUN_18061c350((double)*pfVar4 * dVar6 * 6.283185307179586);
      fVar7 = (float)(0.5 - dVar6 * 0.5);
    }
    else {
      fVar7 = 0.0;
    }
    uVar1 = *(uint *)(param_3 + 0x1b8);
    fVar7 = ((float)*(byte *)(param_3 + 0x1bb) * fVar7) / 255.0;
    local_78[2] = ((float)(uVar1 & 0xff) - (float)(param_2 & 0xff)) * fVar7 +
                  (float)(param_2 & 0xff);
    local_78[6] = (float)(param_2 >> 8 & 0xff);
    local_78[6] = ((float)(uVar1 >> 8 & 0xff) - local_78[6]) * fVar7 + local_78[6];
    local_78[0] = 255.0;
    local_78[4] = fVar9;
    local_78[7] = 255.0;
    local_78[5] = fVar9;
    local_78[9] = (float)(param_2 >> 0x10 & 0xff);
    pfVar5 = local_78 + 4;
    if (fVar9 <= local_78[2]) {
      pfVar5 = local_78 + 2;
    }
    pfVar4 = local_78;
    if (local_78[2] <= 255.0) {
      pfVar4 = pfVar5;
    }
    local_78[10] = 255.0;
    local_78[8] = fVar9;
    *(char *)param_1 = (char)(int)*pfVar4;
    pfVar5 = local_78 + 5;
    if (fVar9 <= local_78[6]) {
      pfVar5 = local_78 + 6;
    }
    pfVar4 = local_78 + 7;
    if (local_78[6] <= 255.0) {
      pfVar4 = pfVar5;
    }
    local_78[9] = ((float)(uVar1 >> 0x10 & 0xff) - local_78[9]) * fVar7 + local_78[9];
    *(char *)((longlong)param_1 + 1) = (char)(int)*pfVar4;
    pfVar5 = local_78 + 8;
    if (fVar9 <= local_78[9]) {
      pfVar5 = local_78 + 9;
    }
    pfVar4 = local_78 + 10;
    if (local_78[9] <= 255.0) {
      pfVar4 = pfVar5;
    }
    *(char *)((longlong)param_1 + 2) = (char)(int)*pfVar4;
    uStackX_13 = (undefined1)(param_2 >> 0x18);
    *(undefined1 *)((longlong)param_1 + 3) = uStackX_13;
  }
  return param_1;
}




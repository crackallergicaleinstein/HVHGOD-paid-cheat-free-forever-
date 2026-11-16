// FUN_1800c0a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c0a10 */

void FUN_1800c0a10(float *param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float local_78;
  float local_74;
  float local_70;
  float local_6c [17];
  
  pfVar5 = &local_78;
  if (-1 < (int)*param_1) {
    pfVar5 = param_1;
  }
  local_74 = 2.8026e-45;
  local_78 = 0.0;
  pfVar6 = param_1 + 1;
  pfVar2 = &local_74;
  if ((int)*param_1 < 3) {
    pfVar2 = pfVar5;
  }
  *param_1 = *pfVar2;
  local_78 = 8.40779e-45;
  local_74 = 0.0;
  pfVar5 = &local_74;
  if (-1 < (int)*pfVar6) {
    pfVar5 = pfVar6;
  }
  pfVar2 = &local_78;
  if ((int)*pfVar6 < 7) {
    pfVar2 = pfVar5;
  }
  *pfVar6 = *pfVar2;
  pfVar5 = param_1 + 2;
  local_78 = 6.02558e-44;
  local_74 = 0.0;
  pfVar6 = &local_74;
  if (-1 < (int)*pfVar5) {
    pfVar6 = pfVar5;
  }
  pfVar2 = &local_78;
  if ((int)*pfVar5 < 0x2c) {
    pfVar2 = pfVar6;
  }
  *pfVar5 = *pfVar2;
  FUN_1800c0390(param_1 + 4);
  for (pfVar5 = param_1 + 0x98; pfVar5 != param_1 + 0x4a4; pfVar5 = pfVar5 + 0x94) {
    FUN_1800c0390(pfVar5);
  }
  for (pfVar5 = param_1 + 0x4a4; pfVar5 != param_1 + 0x1e14; pfVar5 = pfVar5 + 0x94) {
    FUN_1800c0390(pfVar5);
  }
  pfVar6 = param_1 + 0x1e14;
  local_78 = 2.8026e-45;
  pfVar5 = param_1 + 0x1e15;
  local_74 = 0.0;
  pfVar2 = &local_74;
  if (-1 < (int)*pfVar6) {
    pfVar2 = pfVar6;
  }
  pfVar4 = &local_78;
  if ((int)*pfVar6 < 3) {
    pfVar4 = pfVar2;
  }
  *pfVar6 = *pfVar4;
  local_78 = 8.40779e-45;
  pfVar6 = &local_74;
  if (-1 < (int)*pfVar5) {
    pfVar6 = pfVar5;
  }
  local_74 = 0.0;
  pfVar2 = &local_78;
  if ((int)*pfVar5 < 7) {
    pfVar2 = pfVar6;
  }
  *pfVar5 = *pfVar2;
  pfVar5 = param_1 + 0x1e16;
  local_78 = 6.02558e-44;
  local_74 = 0.0;
  pfVar6 = &local_74;
  if (-1 < (int)*pfVar5) {
    pfVar6 = pfVar5;
  }
  pfVar2 = &local_78;
  if ((int)*pfVar5 < 0x2c) {
    pfVar2 = pfVar6;
  }
  *pfVar5 = *pfVar2;
  FUN_1800c0620(param_1 + 0x1e18);
  for (pfVar5 = param_1 + 0x1e36; pfVar5 != param_1 + 0x1f08; pfVar5 = pfVar5 + 0x1e) {
    FUN_1800c0620(pfVar5);
  }
  pfVar5 = param_1 + 0x1f08;
  if (pfVar5 != param_1 + 0x2430) {
    fVar8 = 200.0;
    fVar9 = 1.0;
    auVar10 = ZEXT464(0x42c80000);
    local_6c[0] = 1.4013e-45;
    pfVar6 = param_1 + 0x1f23;
    local_70 = 0.0;
    do {
      pfVar2 = pfVar6 + 1;
      fVar7 = *pfVar2;
      sVar1 = thunk_FUN_180624430(fVar7);
      if (sVar1 < 1) {
        pfVar4 = &local_74;
        if (fVar9 <= fVar7) {
          pfVar4 = pfVar2;
        }
        local_78 = fVar8;
        pfVar3 = &local_78;
        if (fVar7 <= fVar8) {
          pfVar3 = pfVar4;
        }
        local_74 = fVar9;
        fVar7 = *pfVar3;
      }
      else {
        fVar7 = auVar10._0_4_;
      }
      *pfVar2 = fVar7;
      pfVar2 = &local_70;
      if (-1 < (int)*pfVar6) {
        pfVar2 = pfVar6;
      }
      pfVar4 = local_6c;
      if ((int)*pfVar6 < 2) {
        pfVar4 = pfVar2;
      }
      pfVar5 = pfVar5 + 0x1e;
      *pfVar6 = *pfVar4;
      pfVar6 = pfVar6 + 0x1e;
    } while (pfVar5 != param_1 + 0x2430);
  }
  FUN_180111410(param_1 + 0x2430);
  FUN_1800c08b0(param_1 + 0x2434);
  for (pfVar5 = param_1 + 0x24d6; pfVar5 != param_1 + 0x2944; pfVar5 = pfVar5 + 0xa2) {
    FUN_1800c08b0(pfVar5);
  }
  for (pfVar5 = param_1 + 0x2944; pfVar5 != param_1 + 0x451c; pfVar5 = pfVar5 + 0xa2) {
    FUN_1800c08b0(pfVar5);
  }
  return;
}




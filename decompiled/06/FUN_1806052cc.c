// FUN_1806052cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806052cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1806052cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  uint uVar3;
  undefined8 uVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  
  uVar7 = (uint)DAT_18086dba0;
  fVar4 = (float)((uint)param_2 & uVar7);
  fVar6 = (float)((uint)param_3 & uVar7);
  fVar1 = INFINITY;
  uVar3 = 0;
  fVar8 = (float)((uint)param_1 & uVar7);
  if (((fVar8 != INFINITY) && (fVar4 != INFINITY)) && (fVar6 != INFINITY)) {
    fVar5 = fVar4;
    uVar3 = (uint)((ulonglong)param_1 >> 0x20);
    if (fVar8 < fVar4) {
      fVar5 = fVar8;
      fVar8 = fVar4;
      uVar3 = (uint)((ulonglong)param_2 >> 0x20);
    }
    fVar4 = fVar6;
    fVar1 = fVar8;
    if (fVar8 < fVar6) {
      fVar4 = fVar8;
      fVar1 = fVar6;
      uVar3 = (uint)((ulonglong)param_3 >> 0x20);
    }
    uVar3 = uVar3 & DAT_18086dba0._4_4_;
    if ((fVar1 * 1.1920929e-07 < fVar5) || (fVar1 * 1.1920929e-07 < fVar4)) {
      uVar2 = FUN_18061e150((fVar5 / fVar1) * (fVar5 / fVar1) + 1.0 +
                            (fVar4 / fVar1) * (fVar4 / fVar1));
      uVar3 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar1 = (float)uVar2 * fVar1;
    }
  }
  return CONCAT44(uVar3,fVar1);
}




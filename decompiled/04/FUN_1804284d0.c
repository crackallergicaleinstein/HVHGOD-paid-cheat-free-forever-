// FUN_1804284d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804284d0 */

void FUN_1804284d0(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,int param_10
                  ,undefined4 param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  
  auVar12 = in_ZMM1._0_16_;
  auVar13 = in_ZMM2._0_16_;
  if (param_10 < 0xb) {
    fVar16 = 0.5;
    do {
      fVar2 = (auVar12._0_4_ + param_4) * fVar16;
      fVar3 = (auVar13._0_4_ + param_5) * fVar16;
      fVar4 = (param_4 + param_6) * fVar16;
      fVar5 = (param_5 + param_7) * fVar16;
      fVar6 = (param_6 + param_8) * fVar16;
      fVar7 = (fVar4 + fVar2) * fVar16;
      fVar8 = (param_7 + param_9) * fVar16;
      fVar9 = (fVar3 + fVar5) * fVar16;
      fVar10 = param_9 - auVar13._0_4_;
      fVar11 = param_8 - auVar12._0_4_;
      fVar1 = ABS((param_4 - param_8) * fVar10 - (param_5 - param_9) * fVar11) +
              ABS((param_6 - param_8) * fVar10 - (param_7 - param_9) * fVar11);
      if (fVar1 * fVar1 < (fVar10 * fVar10 + fVar11 * fVar11) * *(float *)(param_1 + 8)) {
        FUN_1804282c0(param_1,param_8,param_9,param_11);
        return;
      }
      param_10 = param_10 + 1;
      param_5 = (fVar8 + fVar5) * fVar16;
      param_4 = (fVar6 + fVar4) * fVar16;
      fVar1 = (param_4 + fVar7) * fVar16;
      auVar15 = ZEXT464((uint)fVar1);
      fVar4 = (param_5 + fVar9) * fVar16;
      auVar14 = ZEXT464((uint)fVar4);
      param_6 = fVar6;
      FUN_1804284d0(param_1,auVar12._0_8_,auVar13._0_8_,fVar2,fVar3,fVar7,fVar9,fVar1,fVar4,param_10
                    ,0);
      auVar13 = auVar14._0_16_;
      auVar12 = auVar15._0_16_;
      param_7 = fVar8;
    } while (param_10 < 0xb);
  }
  return;
}




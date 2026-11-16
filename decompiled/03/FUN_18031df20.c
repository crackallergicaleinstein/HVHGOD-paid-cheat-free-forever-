// FUN_18031df20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031df20 */

undefined8 FUN_18031df20(float param_1,float *param_2,float param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  
  auVar6 = ZEXT464((uint)(param_3 * 0.017453292));
  auVar7 = ZEXT464((uint)(param_1 * 0.017453292));
  fVar2 = (float)FUN_180638e00(param_3 * 0.017453292);
  fVar3 = (float)FUN_180637540(auVar6._0_8_);
  fVar4 = (float)FUN_180638e00(auVar7._0_8_);
  auVar6 = ZEXT464((uint)(fVar4 * fVar3 - fVar2 * param_2[1]));
  fVar4 = (float)FUN_180637540(auVar7._0_8_,fVar2 * param_2[1],fVar4 * fVar3);
  fVar2 = (float)FUN_180636c80(auVar6._0_8_,fVar4 * fVar3 - fVar2 * *param_2);
  auVar6 = ZEXT464((uint)(fVar2 * 57.295776));
  sVar1 = thunk_FUN_180624430(fVar2 * 57.295776);
  if (sVar1 < 1) {
    uVar5 = FUN_180615070(auVar6._0_8_,0x43b40000);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}




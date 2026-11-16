// FUN_180247530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180247530 */

longlong FUN_180247530(longlong param_1,float param_2,float param_3,float param_4,uint param_5,
                      uint param_6)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  float fVar8;
  
  FUN_18063ab10(param_1,0,0x188);
  auVar6 = ZEXT464(param_6);
  auVar7 = ZEXT464(param_5);
  fVar8 = 48.0;
  uVar1 = 0;
  do {
    auVar4 = SUB1612(ZEXT816(0),4);
    if ((longlong)uVar1 < 0) {
      auVar4 = (undefined1  [12])0x0;
    }
    auVar5._0_4_ = (float)uVar1 / fVar8;
    auVar5._4_12_ = auVar4;
    uVar3 = FUN_180242260(auVar7._0_8_,auVar6._0_8_,auVar5._0_8_);
    fVar2 = (float)FUN_180637540();
    *(float *)(param_1 + uVar1 * 8) = fVar2 * param_4 + param_2;
    fVar2 = (float)FUN_180638e00(uVar3);
    *(float *)(param_1 + 4 + uVar1 * 8) = fVar2 * param_4 + param_3;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x31);
  return param_1;
}




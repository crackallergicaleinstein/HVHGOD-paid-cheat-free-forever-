// FUN_180430a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430a80 */

void FUN_180430a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  
  uVar2 = 0;
  if ((0.0 < param_4) && (0.0 < param_5)) {
    FUN_1804353e0(param_1,0);
    uVar1 = FUN_1804354e0(param_1,param_2,param_3,0,uVar2,param_6);
    auVar7 = ZEXT464(0x3f800000);
    param_4 = (float)param_2 + param_4;
    auVar6 = ZEXT464((uint)param_4);
    uVar2 = FUN_1804354e0(param_1,param_4,param_3,auVar7._0_8_,uVar2,param_7);
    param_5 = (float)param_3 + param_5;
    auVar5 = ZEXT464((uint)param_5);
    uVar3 = FUN_1804354e0(param_1,auVar6._0_8_,param_5,auVar7._0_8_,auVar7._0_4_,param_8);
    uVar4 = FUN_1804354e0(param_1,param_2,auVar5._0_8_,0,auVar7._0_4_,param_9);
    FUN_180435650(param_1,uVar1,uVar2,uVar3,uVar4);
  }
  return;
}




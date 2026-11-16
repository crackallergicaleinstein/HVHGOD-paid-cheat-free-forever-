// FUN_180435220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435220 */

void FUN_180435220(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,longlong param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  
  if ((((param_6 != 0) && (0.0 < param_4)) && (0.0 < param_5)) &&
     ((char)((uint)param_11 >> 0x18) != '\0')) {
    FUN_1804353e0();
    uVar1 = FUN_1804354e0(param_1,param_2,param_3,param_7,param_8,param_11);
    param_4 = (float)param_2 + param_4;
    auVar6 = ZEXT464((uint)param_4);
    uVar2 = FUN_1804354e0(param_1,param_4,param_3,param_9,param_8,param_11);
    param_5 = (float)param_3 + param_5;
    auVar5 = ZEXT464((uint)param_5);
    uVar3 = FUN_1804354e0(param_1,auVar6._0_8_,param_5,param_9,param_10,param_11);
    uVar4 = FUN_1804354e0(param_1,param_2,auVar5._0_8_,param_7,param_10,param_11);
    FUN_180435650(param_1,uVar1,uVar2,uVar3,uVar4);
  }
  return;
}




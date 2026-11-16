// FUN_180244e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244e40 */

undefined8
FUN_180244e40(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6,char param_7,float param_8,char param_9)

{
  short sVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  
  if (param_9 == '\0') {
    auVar4 = ZEXT864(0);
    if (param_2 < 0) {
      fVar2 = (float)FUN_1800b4f90(param_2,param_3);
    }
    else if (param_2 < 1) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)FUN_1800b4f90(param_2,param_4);
    }
    if (param_7 == '\0') {
      param_6 = -param_6;
    }
    param_8 = fVar2 + (float)param_1 + param_5 + param_6 + param_8;
    auVar5 = ZEXT464((uint)param_8);
    sVar1 = thunk_FUN_180624430(param_8);
    uVar3 = auVar4._0_8_;
    if (sVar1 < 1) {
      uVar3 = FUN_180615070(auVar5._0_8_,0x43b40000);
    }
    return uVar3;
  }
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    uVar3 = FUN_180615070(param_1,0x43b40000);
    return uVar3;
  }
  return 0;
}




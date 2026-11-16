// FUN_1801bc970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bc970 */

void FUN_1801bc970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = FUN_180114040(param_2,param_1);
  if ((cVar8 < '\0') && (param_2 != param_1)) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  cVar8 = FUN_180114040(param_3,param_2);
  if (cVar8 < '\0') {
    if (param_3 != param_2) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *param_3 = *param_2;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
    }
    cVar8 = FUN_180114040(param_2,param_1);
    if ((cVar8 < '\0') && (param_2 != param_1)) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
    }
  }
  return;
}




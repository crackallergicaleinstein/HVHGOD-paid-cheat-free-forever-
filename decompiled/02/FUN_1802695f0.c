// FUN_1802695f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802695f0 */

void FUN_1802695f0(float *param_1,float *param_2,float *param_3,longlong param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    fVar2 = *param_2;
    while (*param_1 <= fVar2) {
      param_1 = param_1 + 4;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    while (pfVar3 = param_3, param_3 = pfVar3 + -4, param_2 != param_3) {
      if (*param_3 < param_2[-4]) {
        if (param_4 == 1) {
          uVar4 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 2);
          FUN_18063aed0(param_1,fVar2,(longlong)pfVar3 - (longlong)param_2);
          puVar1 = (undefined8 *)(((longlong)pfVar3 - (longlong)param_2) + (longlong)param_1);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          return;
        }
        FUN_18026a360(param_1,fVar2,pfVar3);
        return;
      }
    }
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 2);
    FUN_18063aed0((longlong)pfVar3 - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  return;
}




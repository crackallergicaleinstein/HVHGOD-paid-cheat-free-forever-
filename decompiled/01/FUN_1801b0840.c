// FUN_1801b0840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b0840 */

void FUN_1801b0840(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)plVar6) / 0x50) < param_3) {
    FUN_1801b86c0(param_1,param_3);
    uVar2 = FUN_1801b6410(param_2,param_3,*param_1,param_1);
    param_1[1] = uVar2;
  }
  else {
    plVar3 = (longlong *)param_1[1];
    uVar1 = ((longlong)plVar3 - (longlong)plVar6) / 0x50;
    if (uVar1 < param_3) {
      if (plVar6 != plVar3) {
        plVar5 = plVar6 + 4;
        do {
          if (plVar6 != param_2) {
            plVar3 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              plVar3 = (longlong *)*param_2;
            }
            FUN_180113930(plVar6,plVar3,param_2[2]);
          }
          plVar3 = param_2 + 4;
          if (plVar5 != plVar3) {
            if (7 < (ulonglong)param_2[7]) {
              plVar3 = (longlong *)*plVar3;
            }
            FUN_1800f5190(plVar5,plVar3,param_2[6]);
          }
          *(int *)(plVar5 + 4) = (int)param_2[8];
          *(undefined4 *)((longlong)plVar5 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x44);
          plVar5[5] = param_2[9];
          plVar6 = plVar6 + 10;
          plVar5 = plVar5 + 10;
          param_2 = param_2 + 10;
          plVar3 = (longlong *)param_1[1];
        } while (plVar6 != plVar3);
      }
      uVar2 = FUN_1801b6410(param_2,param_3 - uVar1,plVar3,param_1);
      param_1[1] = uVar2;
    }
    else {
      plVar3 = plVar6 + param_3 * 10;
      if (param_3 != 0) {
        plVar5 = plVar6 + 4;
        param_2 = param_2 + 2;
        do {
          plVar4 = param_2 + -2;
          if (plVar6 != plVar4) {
            if (0xf < (ulonglong)param_2[1]) {
              plVar4 = (longlong *)*plVar4;
            }
            FUN_180113930(plVar6,plVar4,*param_2);
          }
          plVar4 = param_2 + 2;
          if (plVar5 != plVar4) {
            if (7 < (ulonglong)param_2[5]) {
              plVar4 = (longlong *)*plVar4;
            }
            FUN_1800f5190(plVar5,plVar4,param_2[4]);
          }
          *(int *)(plVar5 + 4) = (int)param_2[6];
          *(undefined4 *)((longlong)plVar5 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x34);
          plVar5[5] = param_2[7];
          plVar6 = plVar6 + 10;
          plVar5 = plVar5 + 10;
          param_2 = param_2 + 10;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      plVar6 = (longlong *)param_1[1];
      for (plVar5 = plVar3; plVar5 != plVar6; plVar5 = plVar5 + 10) {
        FUN_18015b930(plVar5 + 4);
        FUN_18015c010(plVar5);
      }
      param_1[1] = plVar3;
    }
  }
  return;
}




// FUN_18056d1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056d1f0 */

void FUN_18056d1f0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar5) / 0x28) < param_3) {
    FUN_1802c2850(param_1,param_3);
    lVar2 = FUN_18056f490(param_2,param_3,*param_1,param_1);
    param_1[1] = lVar2;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    uVar1 = ((longlong)puVar3 - (longlong)puVar5) / 0x28;
    if (uVar1 < param_3) {
      if (puVar5 != puVar3) {
        do {
          if (puVar5 != param_2) {
            puVar3 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar3 = (undefined8 *)*param_2;
            }
            FUN_180113930(puVar5,puVar3,param_2[2]);
          }
          puVar5[4] = param_2[4];
          puVar5 = puVar5 + 5;
          param_2 = param_2 + 5;
          puVar3 = (undefined8 *)param_1[1];
        } while (puVar5 != puVar3);
      }
      lVar2 = FUN_18056f490(param_2,param_3 - uVar1,puVar3,param_1);
      param_1[1] = lVar2;
    }
    else {
      puVar3 = puVar5 + param_3 * 5;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar5 != param_2) {
          puVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar4 = (undefined8 *)*param_2;
          }
          FUN_180113930(puVar5,puVar4,param_2[2]);
        }
        puVar5[4] = param_2[4];
        puVar5 = puVar5 + 5;
        param_2 = param_2 + 5;
      }
      puVar5 = (undefined8 *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar5; puVar4 = puVar4 + 5) {
        FUN_18015c010(puVar4);
      }
      param_1[1] = (longlong)puVar3;
    }
  }
  return;
}




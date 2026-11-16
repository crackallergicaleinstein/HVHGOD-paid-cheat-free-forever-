// FUN_1802c1b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c1b60 */

void FUN_1802c1b60(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar5) / 0x28) < param_3) {
    FUN_1802c2850(param_1,param_3);
    lVar4 = *param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      FUN_18015b360(lVar4,param_2);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_2 + 4);
      lVar4 = lVar4 + 0x28;
      param_2 = param_2 + 5;
    }
    param_1[1] = lVar4;
  }
  else {
    puVar2 = (undefined8 *)param_1[1];
    uVar1 = ((longlong)puVar2 - (longlong)puVar5) / 0x28;
    if (uVar1 < param_3) {
      if (puVar5 != puVar2) {
        do {
          if (puVar5 != param_2) {
            puVar2 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar2 = (undefined8 *)*param_2;
            }
            FUN_180113930(puVar5,puVar2,param_2[2]);
          }
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 4);
          puVar5 = puVar5 + 5;
          param_2 = param_2 + 5;
          puVar2 = (undefined8 *)param_1[1];
        } while (puVar5 != puVar2);
      }
      for (lVar4 = param_3 - uVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
        FUN_18015b360(puVar2,param_2);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
        puVar2 = puVar2 + 5;
        param_2 = param_2 + 5;
      }
    }
    else {
      puVar2 = puVar5 + param_3 * 5;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar5 != param_2) {
          puVar3 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar3 = (undefined8 *)*param_2;
          }
          FUN_180113930(puVar5,puVar3,param_2[2]);
        }
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 4);
        puVar5 = puVar5 + 5;
        param_2 = param_2 + 5;
      }
      puVar5 = (undefined8 *)param_1[1];
      for (puVar3 = puVar2; puVar3 != puVar5; puVar3 = puVar3 + 5) {
        FUN_18015c010(puVar3);
      }
    }
    param_1[1] = (longlong)puVar2;
  }
  return;
}




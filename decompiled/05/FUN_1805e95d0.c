// FUN_1805e95d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e95d0 */

void FUN_1805e95d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)((longlong)param_1 + param_3);
  if ((param_3 < 8) || (-8 < (longlong)param_1 - (longlong)param_2)) {
    for (; param_1 < puVar1; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
      uVar2 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
  }
  else {
    if ((param_1 <= puVar1 + -4) && ((longlong)param_1 - (longlong)param_2 < -0x10)) {
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      if (0x10 < param_3 + -0x20) {
        puVar5 = param_1 + 2;
        puVar4 = param_2 + 2;
        do {
          uVar3 = puVar4[1];
          *puVar5 = *puVar4;
          puVar5[1] = uVar3;
          uVar3 = puVar4[3];
          puVar5[2] = puVar4[2];
          puVar5[3] = uVar3;
          puVar5 = puVar5 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar5 < (undefined8 *)(param_3 + -0x20 + (longlong)param_1));
      }
      param_2 = (undefined8 *)((longlong)param_2 + param_3 + -0x20);
      param_1 = puVar1 + -4;
    }
    if (param_1 < puVar1) {
      lVar6 = (longlong)param_2 - (longlong)param_1;
      do {
        *(undefined1 *)param_1 = *(undefined1 *)(lVar6 + (longlong)param_1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      } while (param_1 < puVar1);
      return;
    }
  }
  return;
}




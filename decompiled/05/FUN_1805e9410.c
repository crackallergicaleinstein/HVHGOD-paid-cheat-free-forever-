// FUN_1805e9410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9410 */

void FUN_1805e9410(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  int param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  puVar1 = (undefined8 *)((longlong)param_1 + param_4);
  uVar8 = (longlong)param_1 - (longlong)param_3;
  if (param_4 < 8) {
    if (param_1 < puVar1) {
      lVar6 = (longlong)param_3 - (longlong)param_1;
      do {
        *(undefined1 *)param_1 = *(undefined1 *)(lVar6 + (longlong)param_1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      } while (param_1 < puVar1);
      return;
    }
  }
  else {
    if (param_5 == 1) {
      if (uVar8 < 8) {
        *(undefined1 *)param_1 = *(undefined1 *)param_3;
        *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_3 + 1);
        *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_3 + 2);
        *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)((longlong)param_3 + 3);
        uVar3 = *(uint *)(&DAT_1806886d8 + uVar8 * 4);
        *(undefined4 *)((longlong)param_1 + 4) =
             *(undefined4 *)((longlong)param_3 + (ulonglong)uVar3);
        param_3 = (undefined8 *)
                  ((longlong)((longlong)param_3 + (ulonglong)uVar3) -
                  (longlong)*(int *)(&DAT_1806886f8 + uVar8 * 4));
      }
      else {
        *param_1 = *param_3;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
      param_4 = param_4 + -8;
    }
    if (param_2 < puVar1) {
      if (param_1 <= param_2) {
        lVar6 = (longlong)param_2 - (longlong)param_1;
        if ((param_5 == 1) && ((longlong)param_1 - (longlong)param_3 < 0x10)) {
          lVar7 = (longlong)param_3 - (longlong)param_1;
          do {
            *param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
            param_1 = param_1 + 1;
          } while (param_1 < param_2);
        }
        else {
          uVar4 = param_3[1];
          *param_1 = *param_3;
          param_1[1] = uVar4;
          if (0x10 < lVar6) {
            param_1 = param_1 + 2;
            puVar5 = param_3 + 2;
            do {
              uVar4 = puVar5[1];
              *param_1 = *puVar5;
              param_1[1] = uVar4;
              uVar4 = puVar5[3];
              param_1[2] = puVar5[2];
              param_1[3] = uVar4;
              param_1 = param_1 + 4;
              puVar5 = puVar5 + 4;
            } while (param_1 < param_2);
          }
        }
        param_3 = (undefined8 *)((longlong)param_3 + lVar6);
        param_1 = param_2;
      }
      for (; param_1 < puVar1; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
        uVar2 = *(undefined1 *)param_3;
        param_3 = (undefined8 *)((longlong)param_3 + 1);
        *(undefined1 *)param_1 = uVar2;
      }
    }
    else {
      puVar1 = (undefined8 *)((longlong)param_1 + param_4);
      if ((param_5 == 1) && ((longlong)param_1 - (longlong)param_3 < 0x10)) {
        lVar6 = (longlong)param_3 - (longlong)param_1;
        do {
          *param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
          param_1 = param_1 + 1;
        } while (param_1 < puVar1);
        return;
      }
      uVar4 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      if (0x10 < param_4) {
        param_1 = param_1 + 2;
        puVar5 = param_3 + 2;
        do {
          uVar4 = puVar5[1];
          *param_1 = *puVar5;
          param_1[1] = uVar4;
          uVar4 = puVar5[3];
          param_1[2] = puVar5[2];
          param_1[3] = uVar4;
          param_1 = param_1 + 4;
          puVar5 = puVar5 + 4;
        } while (param_1 < puVar1);
        return;
      }
    }
  }
  return;
}




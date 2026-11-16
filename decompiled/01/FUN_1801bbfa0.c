// FUN_1801bbfa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bbfa0 */

void FUN_1801bbfa0(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *local_48;
  ulonglong *local_40;
  
  uVar2 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar2 & 0xfffffffffffffff8) < 0x101) {
      puVar4 = param_1;
      if (param_1 != param_2) {
        while (puVar1 = puVar4 + 1, puVar1 != param_2) {
          uVar2 = *puVar1;
          if (uVar2 < *param_1) {
            FUN_18063aed0(param_1 + 1,param_1);
            *param_1 = uVar2;
            puVar4 = puVar1;
          }
          else {
            uVar7 = *puVar4;
            puVar4 = puVar1;
            while (uVar2 < uVar7) {
              *puVar4 = uVar7;
              uVar7 = puVar4[-2];
              puVar4 = puVar4 + -1;
            }
            *puVar4 = uVar2;
            puVar4 = puVar1;
          }
        }
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_1801bca00(&local_48,param_1,param_2,param_4);
    puVar1 = local_40;
    puVar4 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_48 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)local_40 & 0xfffffffffffffff8U)) {
      FUN_1801bbfa0(param_1,local_48,param_3,param_4);
      puVar4 = param_2;
      param_1 = puVar1;
    }
    else {
      FUN_1801bbfa0(local_40,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar4 - (longlong)param_1;
    param_2 = puVar4;
  }
  uVar2 = (longlong)param_2 - (longlong)param_1 >> 3;
  lVar5 = (longlong)param_2 - (longlong)param_1 >> 4;
  if (0 < lVar5) {
    lVar8 = (longlong)(uVar2 - 1) >> 1;
    do {
      uVar7 = param_1[lVar5 + -1];
      lVar5 = lVar5 + -1;
      lVar6 = lVar5;
      while (lVar6 < lVar8) {
        lVar3 = lVar6 * 2 + (2 - (ulonglong)(param_1[lVar6 * 2 + 2] < param_1[lVar6 * 2 + 1]));
        param_1[lVar6] = param_1[lVar3];
        lVar6 = lVar3;
      }
      if ((lVar6 == lVar8) && ((uVar2 & 1) == 0)) {
        param_1[lVar6] = param_1[uVar2 - 1];
        lVar6 = uVar2 - 1;
      }
      while (lVar5 < lVar6) {
        lVar3 = lVar6 + -1 >> 1;
        if (uVar7 <= param_1[lVar3]) break;
        param_1[lVar6] = param_1[lVar3];
        lVar6 = lVar3;
      }
      param_1[lVar6] = uVar7;
    } while (0 < lVar5);
  }
  if ((longlong)uVar2 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  do {
    uVar2 = *param_2;
    uVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
    lVar5 = 0;
    *param_2 = *param_1;
    lVar6 = (longlong)(uVar7 - 1) >> 1;
    lVar8 = lVar5;
    if (0 < lVar6) {
      do {
        lVar5 = lVar8 * 2 + (2 - (ulonglong)(param_1[lVar8 * 2 + 2] < param_1[lVar8 * 2 + 1]));
        param_1[lVar8] = param_1[lVar5];
        lVar8 = lVar5;
      } while (lVar5 < lVar6);
    }
    if ((lVar5 == lVar6) && ((uVar7 & 1) == 0)) {
      param_1[lVar5] = param_1[uVar7 - 1];
      lVar5 = uVar7 - 1;
    }
    while (0 < lVar5) {
      lVar8 = lVar5 + -1 >> 1;
      if (uVar2 <= param_1[lVar8]) break;
      param_1[lVar5] = param_1[lVar8];
      lVar5 = lVar8;
    }
    param_2 = param_2 + -1;
    param_1[lVar5] = uVar2;
    if ((longlong)((longlong)param_2 + (8 - (longlong)param_1) & 0xfffffffffffffff8U) < 0x10) {
      return;
    }
  } while( true );
}




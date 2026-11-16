// FUN_18036f690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036f690 */

void FUN_18036f690(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  int param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_48;
  
  uVar2 = ((longlong)(param_3 - param_2) >> 7) * 0x40 + param_2;
  lVar8 = (longlong)((param_3 - 0x40) - param_2) >> 6;
  if (lVar8 < 0x29) {
    lVar8 = param_3 - 0x40;
    uVar5 = param_2;
  }
  else {
    lVar9 = lVar8 + 1 >> 3;
    uVar5 = lVar9 * 0x40 + param_2;
    FUN_180370330(param_2,uVar5,lVar9 * 0x80 + param_2,param_4,param_5);
    FUN_180370330(uVar2 + lVar9 * -0x40,uVar2,lVar9 * 0x40 + uVar2,param_4,param_5);
    lVar8 = (param_3 - 0x40) + lVar9 * -0x40;
    FUN_180370330((param_3 - 0x40) + lVar9 * -0x80,lVar8,param_3 - 0x40,param_4,param_5);
  }
  FUN_180370330(uVar5,uVar2,lVar8,param_4,param_5);
  uVar5 = uVar2 + 0x40;
  if (param_2 < uVar2) {
    lVar8 = (longlong)param_5 + uVar2;
    do {
      cVar1 = FUN_180114040(lVar8 + -0x40,lVar8);
      if (cVar1 < '\0') break;
      cVar1 = FUN_180114040(lVar8,lVar8 + -0x40);
      if (cVar1 < '\0') break;
      uVar2 = uVar2 - 0x40;
      lVar8 = lVar8 + -0x40;
    } while (param_2 < uVar2);
  }
  if (uVar5 < param_3) {
    lVar8 = (longlong)param_5 + uVar2;
    lVar9 = (longlong)param_5 + uVar5;
    do {
      cVar1 = FUN_180114040(lVar9,lVar8);
      if (cVar1 < '\0') break;
      cVar1 = FUN_180114040(lVar8,lVar9);
      if (cVar1 < '\0') break;
      uVar5 = uVar5 + 0x40;
      lVar9 = lVar9 + 0x40;
    } while (uVar5 < param_3);
  }
  uVar3 = uVar2;
  uVar6 = uVar5;
  local_48 = uVar5;
LAB_18036f7f6:
  do {
    uVar7 = uVar6;
    if (uVar6 < param_3) {
      lVar8 = (longlong)param_5 + uVar3;
      do {
        lVar9 = (longlong)param_5 + uVar6;
        cVar1 = FUN_180114040(lVar8,lVar9);
        if (-1 < cVar1) {
          cVar1 = FUN_180114040(lVar9,lVar8);
          if (cVar1 < '\0') break;
          if (uVar5 != uVar6) {
            FUN_180370220(uVar5,uVar6);
          }
          uVar5 = uVar5 + 0x40;
        }
        uVar6 = uVar6 + 0x40;
      } while (uVar6 < param_3);
      uVar7 = uVar6;
      local_48 = uVar6;
    }
    uVar6 = uVar7;
    if (param_2 < uVar2) {
      uVar6 = uVar2;
      do {
        uVar6 = uVar6 - 0x40;
        lVar8 = uVar3 + (longlong)param_5;
        lVar9 = uVar6 + (longlong)param_5;
        cVar1 = FUN_180114040(lVar9,lVar8);
        if (-1 < cVar1) {
          cVar1 = FUN_180114040(lVar8,lVar9);
          if (cVar1 < '\0') break;
          uVar3 = uVar3 - 0x40;
          if (uVar3 != uVar6) {
            FUN_180370220(uVar3,uVar6);
          }
        }
        uVar2 = uVar2 - 0x40;
      } while (param_2 < uVar2);
      uVar6 = local_48;
    }
    if (uVar2 == param_2) {
      if (uVar6 == param_3) {
        *param_1 = uVar3;
        param_1[1] = uVar5;
        return;
      }
      if (uVar5 != uVar6) {
        FUN_180370220(uVar3,uVar5);
      }
      uVar5 = uVar5 + 0x40;
      uVar4 = uVar3 + 0x40;
LAB_18036f951:
      uVar6 = uVar6 + 0x40;
      FUN_180370220(uVar3,uVar7);
      uVar3 = uVar4;
      local_48 = uVar6;
      goto LAB_18036f7f6;
    }
    uVar2 = uVar2 - 0x40;
    if (uVar6 != param_3) {
      uVar4 = uVar3;
      uVar3 = uVar7;
      uVar7 = uVar2;
      goto LAB_18036f951;
    }
    uVar3 = uVar3 - 0x40;
    if (uVar2 != uVar3) {
      FUN_180370220(uVar2,uVar3);
    }
    uVar5 = uVar5 - 0x40;
    FUN_180370220(uVar3,uVar5);
  } while( true );
}




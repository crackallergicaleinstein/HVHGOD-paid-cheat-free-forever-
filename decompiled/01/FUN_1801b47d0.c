// FUN_1801b47d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b47d0 */

void FUN_1801b47d0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  int param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_48;
  
  lVar2 = (param_3 - 0x50) - param_2;
  uVar4 = ((longlong)(param_3 - param_2) / 0x50 >> 1) * 0x50 + param_2;
  if (lVar2 < 0xcd0) {
    lVar2 = param_3 - 0x50;
    uVar7 = param_2;
  }
  else {
    lVar3 = lVar2 / 0x50 + 1 >> 3;
    uVar7 = lVar3 * 0x50 + param_2;
    FUN_1801bbd60(param_2,uVar7,lVar3 * 0xa0 + param_2,param_3 - param_2,param_5);
    FUN_1801bbd60(uVar4 + lVar3 * -0x50,uVar4,lVar3 * 0x50 + uVar4);
    lVar2 = (param_3 - 0x50) + lVar3 * -0x50;
    FUN_1801bbd60((param_3 - 0x50) + lVar3 * -0xa0,lVar2,param_3 - 0x50);
  }
  FUN_1801bbd60(uVar7,uVar4,lVar2);
  uVar7 = uVar4 + 0x50;
  if (param_2 < uVar4) {
    lVar2 = (longlong)param_5 + uVar4;
    do {
      cVar1 = FUN_180114040(lVar2 + -0x50,lVar2);
      if (cVar1 < '\0') break;
      cVar1 = FUN_180114040(lVar2,lVar2 + -0x50);
      if (cVar1 < '\0') break;
      uVar4 = uVar4 - 0x50;
      lVar2 = lVar2 + -0x50;
    } while (param_2 < uVar4);
  }
  if (uVar7 < param_3) {
    lVar2 = (longlong)param_5 + uVar4;
    lVar3 = (longlong)param_5 + uVar7;
    do {
      cVar1 = FUN_180114040(lVar3,lVar2);
      if (cVar1 < '\0') break;
      cVar1 = FUN_180114040(lVar2,lVar3);
      if (cVar1 < '\0') break;
      uVar7 = uVar7 + 0x50;
      lVar3 = lVar3 + 0x50;
    } while (uVar7 < param_3);
  }
  uVar5 = uVar4;
  uVar8 = uVar7;
  local_48 = uVar7;
LAB_1801b4976:
  do {
    uVar9 = uVar8;
    if (uVar8 < param_3) {
      lVar2 = (longlong)param_5 + uVar5;
      do {
        lVar3 = (longlong)param_5 + uVar8;
        cVar1 = FUN_180114040(lVar2,lVar3);
        if (-1 < cVar1) {
          cVar1 = FUN_180114040(lVar3,lVar2);
          if (cVar1 < '\0') break;
          if (uVar7 != uVar8) {
            FUN_1801bba90(uVar7,uVar8);
          }
          uVar7 = uVar7 + 0x50;
        }
        uVar8 = uVar8 + 0x50;
      } while (uVar8 < param_3);
      uVar9 = uVar8;
      local_48 = uVar8;
    }
    uVar8 = uVar9;
    if (param_2 < uVar4) {
      uVar8 = uVar4;
      do {
        uVar8 = uVar8 - 0x50;
        lVar2 = uVar5 + (longlong)param_5;
        lVar3 = uVar8 + (longlong)param_5;
        cVar1 = FUN_180114040(lVar3,lVar2);
        if (-1 < cVar1) {
          cVar1 = FUN_180114040(lVar2,lVar3);
          if (cVar1 < '\0') break;
          uVar5 = uVar5 - 0x50;
          if (uVar5 != uVar8) {
            FUN_1801bba90(uVar5,uVar8);
          }
        }
        uVar4 = uVar4 - 0x50;
      } while (param_2 < uVar4);
      uVar8 = local_48;
    }
    if (uVar4 == param_2) {
      if (uVar8 == param_3) {
        *param_1 = uVar5;
        param_1[1] = uVar7;
        return;
      }
      if (uVar7 != uVar8) {
        FUN_1801bba90(uVar5,uVar7);
      }
      uVar7 = uVar7 + 0x50;
      uVar6 = uVar5 + 0x50;
LAB_1801b4ad1:
      uVar8 = uVar8 + 0x50;
      FUN_1801bba90(uVar5,uVar9);
      uVar5 = uVar6;
      local_48 = uVar8;
      goto LAB_1801b4976;
    }
    uVar4 = uVar4 - 0x50;
    if (uVar8 != param_3) {
      uVar6 = uVar5;
      uVar5 = uVar9;
      uVar9 = uVar4;
      goto LAB_1801b4ad1;
    }
    uVar5 = uVar5 - 0x50;
    if (uVar4 != uVar5) {
      FUN_1801bba90(uVar4,uVar5);
    }
    uVar7 = uVar7 - 0x50;
    FUN_1801bba90(uVar5,uVar7);
  } while( true );
}




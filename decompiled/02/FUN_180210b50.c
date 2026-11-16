// FUN_180210b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180210b50 */

void FUN_180210b50(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
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
  longlong lVar10;
  ulonglong local_48;
  
  lVar10 = param_3 - param_2;
  lVar3 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar10),8) + lVar10;
  lVar2 = (param_3 - 200) - param_2;
  uVar4 = ((lVar3 >> 7) - (lVar3 >> 0x3f) >> 1) * 200 + param_2;
  if (lVar2 < 0x2008) {
    lVar2 = param_3 - 200;
    uVar7 = param_2;
  }
  else {
    lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8) + lVar2;
    lVar3 = ((lVar2 >> 7) + 1) - (lVar2 >> 0x3f) >> 3;
    uVar7 = lVar3 * 200 + param_2;
    FUN_180212bb0(param_2,uVar7,lVar3 * 400 + param_2,lVar10,param_5);
    FUN_180212bb0(uVar4 + lVar3 * -200,uVar4,lVar3 * 200 + uVar4);
    lVar2 = (param_3 - 200) + lVar3 * -200;
    FUN_180212bb0((param_3 - 200) + lVar3 * -400,lVar2,param_3 - 200);
  }
  FUN_180212bb0(uVar7,uVar4,lVar2);
  uVar7 = uVar4 + 200;
  if (param_2 < uVar4) {
    lVar2 = (longlong)param_5 + uVar4;
    do {
      cVar1 = FUN_180114040(lVar2 + -200,lVar2);
      if (cVar1 < '\0') break;
      cVar1 = FUN_180114040(lVar2,lVar2 + -200);
      if (cVar1 < '\0') break;
      uVar4 = uVar4 - 200;
      lVar2 = lVar2 + -200;
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
      uVar7 = uVar7 + 200;
      lVar3 = lVar3 + 200;
    } while (uVar7 < param_3);
  }
  uVar5 = uVar4;
  uVar8 = uVar7;
  local_48 = uVar7;
LAB_180210d20:
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
            FUN_180212b00(uVar7,uVar8);
          }
          uVar7 = uVar7 + 200;
        }
        uVar8 = uVar8 + 200;
      } while (uVar8 < param_3);
      uVar9 = uVar8;
      local_48 = uVar8;
    }
    uVar8 = uVar9;
    if (param_2 < uVar4) {
      uVar8 = uVar4;
      do {
        uVar8 = uVar8 - 200;
        lVar2 = uVar5 + (longlong)param_5;
        lVar3 = uVar8 + (longlong)param_5;
        cVar1 = FUN_180114040(lVar3,lVar2);
        if (-1 < cVar1) {
          cVar1 = FUN_180114040(lVar2,lVar3);
          if (cVar1 < '\0') break;
          uVar5 = uVar5 - 200;
          if (uVar5 != uVar8) {
            FUN_180212b00(uVar5,uVar8);
          }
        }
        uVar4 = uVar4 - 200;
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
        FUN_180212b00(uVar5,uVar7);
      }
      uVar7 = uVar7 + 200;
      uVar6 = uVar5 + 200;
LAB_180210e99:
      uVar8 = uVar8 + 200;
      FUN_180212b00(uVar5,uVar9);
      uVar5 = uVar6;
      local_48 = uVar8;
      goto LAB_180210d20;
    }
    uVar4 = uVar4 - 200;
    if (uVar8 != param_3) {
      uVar6 = uVar5;
      uVar5 = uVar9;
      uVar9 = uVar4;
      goto LAB_180210e99;
    }
    uVar5 = uVar5 - 200;
    if (uVar4 != uVar5) {
      FUN_180212b00(uVar4,uVar5);
    }
    uVar7 = uVar7 - 200;
    FUN_180212b00(uVar5,uVar7);
  } while( true );
}




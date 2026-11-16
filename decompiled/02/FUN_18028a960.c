// FUN_18028a960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a960 */

void FUN_18028a960(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_5 < param_4) {
    lVar7 = param_5 >> 1;
    lVar5 = param_2 + lVar7 * 0x28;
    uVar2 = (param_2 - param_1) / 0x28;
    lVar3 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar4 = uVar2 >> 1;
        lVar6 = lVar3 + uVar4 * 0x28;
        cVar1 = FUN_180114040(lVar5,lVar6);
        if (-1 < cVar1) {
          lVar3 = lVar6 + 0x28;
          uVar4 = uVar2 + (-1 - uVar4);
        }
        uVar2 = uVar4;
      } while (0 < (longlong)uVar4);
    }
    lVar6 = (lVar3 - param_1) / 0x28;
  }
  else {
    lVar6 = param_4 >> 1;
    lVar3 = lVar6 * 0x28 + param_1;
    uVar2 = (param_3 - param_2) / 0x28;
    lVar5 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar4 = uVar2 >> 1;
        lVar7 = lVar5 + uVar4 * 0x28;
        cVar1 = FUN_180114040(lVar7,lVar3);
        if (cVar1 < '\0') {
          lVar5 = lVar7 + 0x28;
          uVar4 = uVar2 + (-1 - uVar4);
        }
        uVar2 = uVar4;
      } while (0 < (longlong)uVar4);
    }
    lVar7 = (lVar5 - param_2) / 0x28;
  }
  FUN_18028ab70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3,lVar5,lVar6,
                lVar7);
  return;
}




// FUN_1801d5cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5cd0 */

void FUN_1801d5cd0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)param_5 < (longlong)param_4) {
    lVar7 = (longlong)param_5 >> 1;
    lVar5 = lVar7 * 0x168 + param_2;
    uVar2 = param_5;
    lVar4 = param_1;
    if (0 < (longlong)param_5) {
      do {
        uVar3 = uVar2 >> 1;
        cVar1 = FUN_1801d5040();
        if (cVar1 == '\0') {
          lVar4 = uVar3 * 0x168 + lVar4 + 0x168;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar6 = (lVar4 - param_1) / 0x168;
  }
  else {
    lVar6 = (longlong)param_4 >> 1;
    lVar4 = lVar6 * 0x168 + param_1;
    uVar2 = param_4;
    lVar5 = param_2;
    if (0 < (longlong)param_4) {
      do {
        uVar3 = uVar2 >> 1;
        cVar1 = FUN_1801d5040();
        if (cVar1 != '\0') {
          lVar5 = uVar3 * 0x168 + lVar5 + 0x168;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar7 = (lVar5 - param_2) / 0x168;
  }
  FUN_1801d5f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar4,lVar5,
                lVar6,lVar7);
  return;
}




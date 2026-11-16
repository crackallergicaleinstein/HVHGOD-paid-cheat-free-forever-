// FUN_180492cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180492cb0 */

void FUN_180492cb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1;
  if (0x20 < param_3) {
    lVar4 = (param_3 - 0x21U >> 5) + 1;
    do {
      lVar1 = FUN_180492580(lVar1,lVar1 + 0x80,param_5);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_180492580(lVar1,param_2,param_5);
  if (0x20 < param_3) {
    lVar1 = param_1;
    lVar4 = param_3;
    lVar3 = param_4;
    do {
      lVar4 = lVar4 + -0x20;
      lVar2 = 0x20;
      if (lVar4 < 0x20) {
        lVar2 = lVar4;
      }
      lVar4 = lVar4 - lVar2;
      lVar2 = lVar1 + 0x80 + lVar2 * 4;
      lVar3 = FUN_180493390(lVar1,lVar1 + 0x80,lVar2,lVar3,param_5);
      lVar1 = lVar2;
    } while (0x20 < lVar4);
    FUN_18063aed0(lVar3,lVar2,param_2 - lVar2);
    lVar4 = 0x40;
    lVar1 = param_4 + param_3 * 4;
    FUN_1804931c0(param_4,lVar1,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1804931c0(param_1,param_2,param_4,lVar4 * 2,param_3,param_5);
        lVar4 = lVar4 * 4;
        FUN_1804931c0(param_4,lVar1,param_1,lVar4,param_3,param_5);
      } while (lVar4 <= (param_3 + -1) / 2);
    }
  }
  return;
}




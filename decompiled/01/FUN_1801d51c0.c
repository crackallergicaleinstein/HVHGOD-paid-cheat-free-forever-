// FUN_1801d51c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d51c0 */

void FUN_1801d51c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1;
  if (0x20 < param_3) {
    lVar2 = (param_3 - 0x21U >> 5) + 1;
    do {
      lVar1 = FUN_1801d4b60(lVar1,lVar1 + 0x2d00,param_5);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  FUN_1801d4b60(lVar1,param_2,param_5);
  if (0x20 < param_3) {
    FUN_1801d5850(param_1,param_2,param_4,param_3,param_5);
    lVar2 = param_3 * 0x168 + param_4;
    lVar1 = 0x40;
    FUN_1801d5a00(param_4,lVar2,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1801d5a00(param_1,param_2,param_4,lVar1 * 2,param_3,param_5);
        lVar1 = lVar1 * 4;
        FUN_1801d5a00(param_4,lVar2,param_1,lVar1,param_3,param_5);
      } while (lVar1 <= (param_3 + -1) / 2);
    }
    for (; param_4 != lVar2; param_4 = param_4 + 0x168) {
      FUN_180152210(param_4);
    }
  }
  return;
}




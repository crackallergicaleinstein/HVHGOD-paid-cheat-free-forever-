// FUN_18061a49c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a49c */

undefined8 FUN_18061a49c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (DAT_180bb1d80 == 0) {
    lVar2 = FUN_18062b828();
    if (lVar2 == 0) {
      FUN_180621380(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_18061a620(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180bb1d80 = lVar3;
        DAT_180bb1d88 = lVar3;
      }
      FUN_180621380(0);
      FUN_180621380(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




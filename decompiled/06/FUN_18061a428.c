// FUN_18061a428 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a428 */

undefined8 FUN_18061a428(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (DAT_180bb1d78 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_18062b718();
    if (lVar2 == 0) {
      FUN_180621380(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_18061a50c(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_180bb1d78 = lVar3;
        DAT_180bb1d90 = lVar3;
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




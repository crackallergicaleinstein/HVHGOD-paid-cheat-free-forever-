// FUN_180495a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180495a80 */

void FUN_180495a80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined **ppuVar3;
  
  lVar1 = *param_1;
  FUN_180488c60();
  lVar1 = lVar1 + 0x21;
  ppuVar3 = &PTR_s_Early_1807b7a60;
  lVar2 = 4;
  do {
    FUN_18048d5d0(*ppuVar3,lVar1,1);
    lVar1 = lVar1 + 1;
    ppuVar3 = ppuVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180488f10();
  return;
}




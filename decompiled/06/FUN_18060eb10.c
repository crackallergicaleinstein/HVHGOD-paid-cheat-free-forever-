// FUN_18060eb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060eb10 */

int FUN_18060eb10(undefined4 param_1)

{
  short sVar1;
  double dVar2;
  
  sVar1 = FUN_1806243d0();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      dVar2 = (double)FUN_1806189e0(param_1);
      if ((-2147483648.0 <= dVar2) && (dVar2 <= 2147483647.0)) {
        return (int)dVar2;
      }
    }
    FUN_180624800(1);
  }
  return 0;
}




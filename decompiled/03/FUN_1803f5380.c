// FUN_1803f5380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f5380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f5380(undefined8 param_1,undefined8 *param_2)

{
  ULONGLONG UVar1;
  
  if (param_2 != &DAT_180ccf448) {
    FUN_1801d9af0();
    DAT_180ccf448 = *param_2;
    DAT_180ccf450 = param_2[1];
    _DAT_180ccf458 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  UVar1 = GetTickCount64();
  DAT_180ccf668 = UVar1 + 0xfa;
  FUN_1801d9af0(param_2);
  return;
}




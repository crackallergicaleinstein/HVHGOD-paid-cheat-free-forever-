// FUN_18014fba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18014fba0 */

longlong FUN_18014fba0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18015b360(param_3,param_1);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 0x20;
  }
  return param_3;
}




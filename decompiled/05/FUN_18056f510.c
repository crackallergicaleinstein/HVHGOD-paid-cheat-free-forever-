// FUN_18056f510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f510 */

longlong FUN_18056f510(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18015b360(param_3,param_1);
    FUN_18015b360(param_3 + 0x20,param_1 + 0x20);
    param_3 = param_3 + 0x40;
    param_1 = param_1 + 0x40;
  }
  return param_3;
}




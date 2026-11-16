// FUN_18056f490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f490 */

longlong FUN_18056f490(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18015b360(param_3,param_1);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    param_3 = param_3 + 0x28;
    param_1 = param_1 + 0x28;
  }
  return param_3;
}




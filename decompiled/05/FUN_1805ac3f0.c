// FUN_1805ac3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac3f0 */

undefined8 FUN_1805ac3f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1805ac480();
  if (lVar1 == 0) {
    return 6;
  }
  if (*(char *)(lVar1 + 8) == '\0') {
    *param_3 = 2;
    param_3[2] = *(undefined4 *)(lVar1 + 0x10);
    return 0;
  }
  *param_3 = 1;
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar1 + 0x10);
  return 0;
}




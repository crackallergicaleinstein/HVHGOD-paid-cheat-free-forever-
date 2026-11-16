// FUN_1805edcf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805edcf0 */

ulonglong FUN_1805edcf0(undefined8 *param_1,int *param_2,ulonglong param_3)

{
  if (param_3 < 5) {
    return 5;
  }
  if (*param_2 == -0x2d04adb) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint *)(param_1 + 1) = (*(byte *)(param_2 + 1) & 0xf) + 0xb;
    return -(ulonglong)((*(byte *)(param_2 + 1) & 0xf0) != 0) & 0xfffffffffffffff2;
  }
  return 0xfffffffffffffff6;
}




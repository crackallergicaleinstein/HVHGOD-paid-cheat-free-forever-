// FUN_1800e6f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6f90 */

undefined1 (*) [16] FUN_1800e6f90(undefined1 (*param_1) [16],longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_180159e60();
  return param_1;
}




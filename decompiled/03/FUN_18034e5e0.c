// FUN_18034e5e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e5e0 */

void FUN_18034e5e0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




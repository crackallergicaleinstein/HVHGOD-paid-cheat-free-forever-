// FUN_1801590e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801590e0 */

undefined1 * FUN_1801590e0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1805fc3cc(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}




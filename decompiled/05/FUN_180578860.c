// FUN_180578860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578860 */

void FUN_180578860(longlong param_1,longlong *param_2)

{
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    *param_2 = 0;
    return;
  }
  if (*param_2 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))();
  }
  *param_2 = 0;
  return;
}




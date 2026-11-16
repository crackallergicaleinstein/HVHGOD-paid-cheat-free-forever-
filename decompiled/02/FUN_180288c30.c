// FUN_180288c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180288c30 */

void FUN_180288c30(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1802893e0(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_180289de0();
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_1800f9880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_res8);
  }
  return;
}




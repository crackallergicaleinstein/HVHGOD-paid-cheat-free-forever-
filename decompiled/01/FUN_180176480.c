// FUN_180176480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176480 */

void FUN_180176480(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1801782e0(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_18013ef30();
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_1800f9880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_res8);
  }
  return;
}




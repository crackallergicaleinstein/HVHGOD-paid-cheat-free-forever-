// FUN_1803dcda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dcda0 */

void FUN_1803dcda0(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1803dda00(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_1801b6b60();
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8[0] = *(undefined8 *)(param_1 + 8);
    FUN_1800f9880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_res8);
  }
  return;
}




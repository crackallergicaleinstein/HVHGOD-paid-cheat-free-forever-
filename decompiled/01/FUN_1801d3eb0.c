// FUN_1801d3eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d3eb0 */

undefined1 FUN_1801d3eb0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_28 = &DAT_1808da938;
  if (0xf < DAT_1808da950) {
    local_28 = DAT_1808da938;
  }
  local_18 = (undefined8 *)(param_2 + 0x20);
  if (0xf < *(ulonglong *)(param_2 + 0x38)) {
    local_18 = *(undefined8 **)(param_2 + 0x20);
  }
  local_10 = *(undefined8 *)(param_2 + 0x30);
  local_20 = DAT_1808da948;
  cVar1 = FUN_1801ce0e0(&local_18,&local_28);
  if (cVar1 == '\0') {
    local_28 = (undefined8 *)(param_2 + 0x80);
    local_18 = &DAT_1808da938;
    if (0xf < DAT_1808da950) {
      local_18 = DAT_1808da938;
    }
    if (0xf < *(ulonglong *)(param_2 + 0x98)) {
      local_28 = *(undefined8 **)(param_2 + 0x80);
    }
    local_20 = *(undefined8 *)(param_2 + 0x90);
    local_10 = DAT_1808da948;
    cVar1 = FUN_1801ce0e0(&local_28,&local_18);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}




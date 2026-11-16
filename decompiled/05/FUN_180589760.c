// FUN_180589760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589760 */

undefined8
FUN_180589760(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  if (*(undefined4 **)(param_1 + 0x408) == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x408);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 8);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18);
      return 0;
    }
  }
  return 0;
}




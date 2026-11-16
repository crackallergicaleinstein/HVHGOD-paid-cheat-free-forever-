// FUN_18043b560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b560 */

undefined8 * FUN_18043b560(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180439770();
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x478) != *(longlong *)(lVar1 + 0x480)) {
    lVar2 = *(longlong *)(lVar1 + 0x480) + -0x78;
  }
  if (lVar2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)(lVar2 + 0x34);
  return param_1;
}




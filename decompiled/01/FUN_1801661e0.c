// FUN_1801661e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801661e0 */

void FUN_1801661e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 1);
    }
  }
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}




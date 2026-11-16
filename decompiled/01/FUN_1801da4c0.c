// FUN_1801da4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da4c0 */

void FUN_1801da4c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if ((ulonglong)puVar1[3] < 0x10) {
      puVar3 = puVar1;
      puVar2 = puVar1;
    }
    else {
      puVar3 = (undefined8 *)*puVar1;
      puVar2 = (undefined8 *)*puVar1;
    }
    FUN_180141490(puVar1,(longlong)puVar2 + (puVar1[2] - (longlong)puVar3),param_1 + 0x28,0x100);
    *(undefined8 **)(param_1 + 0x20) = puVar1;
  }
  return;
}




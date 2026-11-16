// FUN_1801ace10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ace10 */

undefined4 * FUN_1801ace10(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_1801acd50();
    *param_1 = *param_2;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = uVar1;
  }
  return param_1;
}




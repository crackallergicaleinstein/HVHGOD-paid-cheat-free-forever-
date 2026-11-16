// FUN_180492b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180492b80 */

undefined8 * FUN_180492b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    FUN_180113930(param_1,puVar2,param_2[2]);
  }
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_1[7] = param_2[7];
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  return param_1;
}




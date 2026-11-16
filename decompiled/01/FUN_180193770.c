// FUN_180193770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180193770 */

undefined1 (*) [16] FUN_180193770(undefined1 (*param_1) [16])

{
  longlong *plVar1;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  param_1[2] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0xf;
  param_1[2][0] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined1 (*) [16])(param_1[4] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[6] = 7;
  *(undefined2 *)(param_1[4] + 8) = 0;
  *(undefined8 *)(param_1[6] + 8) = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  *(undefined8 *)param_1[8] = 0;
  plVar1 = (longlong *)(param_1[8] + 8);
  *plVar1 = (longlong)&DAT_1807c5ab8;
  *(undefined **)(param_1[9] + 8) = &DAT_1806feba8;
  *(undefined8 *)(param_1[0x14] + 8) = 0;
  *(undefined8 *)param_1[0x15] = 0;
  *(undefined4 *)(param_1[0x15] + 8) = 0;
  *(undefined8 *)param_1[0x16] = 0;
  *(undefined8 *)(param_1[0x16] + 8) = 0;
  *(undefined8 *)param_1[0x17] = 0;
  *(undefined8 *)(param_1[0x17] + 8) = 0;
  *(undefined8 *)param_1[0x18] = 0;
  *(undefined ***)param_1[0x14] = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *(undefined8 *)(param_1[0x18] + 8) = 0;
  *(undefined8 *)param_1[0x19] = 0;
  param_1[0x19][8] = 0;
  FUN_1801b3e50(plVar1,param_1 + 10,0);
  *(undefined ***)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -4 + (longlong)plVar1) = *(int *)(*plVar1 + 4) + -0xb8;
  FUN_180141650(param_1 + 10);
  return param_1;
}




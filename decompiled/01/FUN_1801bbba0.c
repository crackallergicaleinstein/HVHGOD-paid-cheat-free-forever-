// FUN_1801bbba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bbba0 */

undefined1 (*) [16] FUN_1801bbba0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar2;
  *(undefined8 *)param_1[1] = uVar3;
  *(undefined8 *)(param_1[1] + 8) = uVar4;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_1[2] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined8 *)param_1[2] = param_2[4];
  *(undefined8 *)(param_1[2] + 8) = uVar2;
  *(undefined8 *)param_1[3] = uVar3;
  *(undefined8 *)(param_1[3] + 8) = uVar4;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(undefined8 *)param_1[4] = param_2[8];
  *(undefined1 (*) [16])(param_1[4] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[6] = 0;
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  *(undefined8 *)(param_1[4] + 8) = param_2[9];
  *(undefined8 *)param_1[5] = uVar2;
  *(undefined8 *)(param_1[5] + 8) = uVar3;
  *(undefined8 *)param_1[6] = uVar4;
  *(undefined2 *)(param_2 + 9) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 7;
  *(undefined8 *)(param_1[6] + 8) = param_2[0xd];
  *(undefined8 *)param_1[7] = param_2[0xe];
  *(undefined8 *)(param_1[7] + 8) = param_2[0xf];
  *(undefined8 *)param_1[8] = param_2[0x10];
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
  FUN_1801bb8d0(plVar1,param_2 + 0x11);
  return param_1;
}




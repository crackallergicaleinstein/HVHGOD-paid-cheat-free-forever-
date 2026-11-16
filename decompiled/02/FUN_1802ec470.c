// FUN_1802ec470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ec470 */

undefined1 (*) [16] FUN_1802ec470(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 8) = uVar3;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_1[2] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined8 *)param_1[2] = param_2[4];
  *(undefined8 *)(param_1[2] + 8) = uVar1;
  *(undefined8 *)param_1[3] = uVar2;
  *(undefined8 *)(param_1[3] + 8) = uVar3;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_1[4] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined8 *)param_1[4] = param_2[8];
  *(undefined8 *)(param_1[4] + 8) = uVar1;
  *(undefined8 *)param_1[5] = uVar2;
  *(undefined8 *)(param_1[5] + 8) = uVar3;
  param_2[0xb] = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  param_1[6] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined8 *)param_1[6] = param_2[0xc];
  *(undefined8 *)(param_1[6] + 8) = uVar1;
  *(undefined8 *)param_1[7] = uVar2;
  *(undefined8 *)(param_1[7] + 8) = uVar3;
  param_2[0xf] = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0;
  param_1[8] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[9] = 0;
  *(undefined8 *)(param_1[9] + 8) = 0;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(undefined8 *)param_1[8] = param_2[0x10];
  *(undefined8 *)(param_1[8] + 8) = uVar1;
  *(undefined8 *)param_1[9] = uVar2;
  *(undefined8 *)(param_1[9] + 8) = uVar3;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0xf;
  _eh_vector_copy_constructor_iterator_
            (param_1 + 10,param_2 + 0x14,0x20,2,FUN_18015b330,thunk_FUN_18015c010);
  _eh_vector_copy_constructor_iterator_
            (param_1 + 0xe,param_2 + 0x1c,0x18,2,FUN_1801ab880,thunk_FUN_1801b3620);
  *(undefined4 *)param_1[0x11] = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1[0x11] + 4) = *(undefined4 *)((longlong)param_2 + 0x114);
  *(undefined4 *)(param_1[0x11] + 8) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)(param_1[0x11] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_1[0x12][0] = *(undefined1 *)(param_2 + 0x24);
  *(undefined8 *)(param_1[0x12] + 8) = param_2[0x25];
  *(undefined4 *)param_1[0x13] = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1[0x13] + 4) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1[0x13] + 8) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)(param_1[0x13] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar1 = param_2[0x29];
  *(undefined8 *)param_1[0x14] = param_2[0x28];
  *(undefined8 *)(param_1[0x14] + 8) = uVar1;
  *(undefined4 *)param_1[0x15] = *(undefined4 *)(param_2 + 0x2a);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x15c);
  *(undefined8 *)(param_1[0x15] + 4) = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)(param_1[0x15] + 0xc) = uVar1;
  *(undefined8 *)(param_1[0x16] + 4) = *(undefined8 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1[0x16] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_1[0x17][0] = *(undefined1 *)(param_2 + 0x2e);
  param_1[0x17][1] = *(undefined1 *)((longlong)param_2 + 0x171);
  param_1[0x17][2] = *(undefined1 *)((longlong)param_2 + 0x172);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x17c);
  *(undefined8 *)(param_1[0x17] + 4) = *(undefined8 *)((longlong)param_2 + 0x174);
  *(undefined8 *)(param_1[0x17] + 0xc) = uVar1;
  *(undefined4 *)(param_1[0x18] + 4) = *(undefined4 *)((longlong)param_2 + 0x184);
  param_1[0x18][8] = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)(param_1[0x18] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x18c);
  return param_1;
}




// FUN_18014fda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18014fda0 */

undefined1 (*) [16]
FUN_18014fda0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  FUN_1800f5540(0,param_5[2] + 0x20 + param_3[2],param_3,param_4,1);
  FUN_18015b2a0(param_1,"invalid UTF-8 byte at index ",0x1c);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_18015b2a0(param_1,param_3,*puVar1);
  FUN_18015b2a0(param_1,&DAT_1806dd504,4);
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_18015b2a0(param_1,param_5,*puVar1);
  return param_1;
}




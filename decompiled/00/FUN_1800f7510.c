// FUN_1800f7510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f7510 */

undefined1 (*) [16]
FUN_1800f7510(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  FUN_1800f5540(0,param_3[2] + 0x10,param_3,param_4,1);
  FUN_18015b2a0(param_1,"key \'",5);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_18015b2a0(param_1,param_3,*puVar1);
  FUN_18015b2a0(param_1,"\' not found",0xb);
  return param_1;
}




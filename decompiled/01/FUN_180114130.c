// FUN_180114130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180114130 */

undefined1 (*) [16]
FUN_180114130(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
             )

{
  undefined8 *puVar1;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  FUN_1800f5540(0,param_2[2] + param_4[2] + param_3[2],param_3,param_4,1);
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18015b2a0(param_1,param_2,*puVar1);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_18015b2a0(param_1,param_3,*puVar1);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_18015b2a0(param_1,param_4,*puVar1);
  return param_1;
}




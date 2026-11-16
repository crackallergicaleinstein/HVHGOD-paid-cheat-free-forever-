// FUN_180336870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180336870 */

undefined8 *
FUN_180336870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = *param_2;
  *param_1 = 0xb000000000000000;
  param_1[1] = 8;
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  uVar1 = param_3[2];
  param_1[4] = puVar2;
  param_1[5] = uVar1;
  param_1[1] = param_1[1] & 0xfffffffffffffff;
  param_1[1] = param_1[1] | 0xc000000000000000;
  param_1[2] = 0x18;
  puVar2 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar2 = (undefined8 *)*param_4;
  }
  uVar1 = param_4[2];
  param_1[6] = puVar2;
  param_1[7] = uVar1;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0xc000000000000000;
  return param_1;
}




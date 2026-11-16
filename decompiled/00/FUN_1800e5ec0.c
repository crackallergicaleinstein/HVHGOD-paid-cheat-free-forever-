// FUN_1800e5ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5ec0 */

undefined1 (*) [16] FUN_1800e5ec0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  puVar4 = (undefined8 *)FUN_18015b2a0(param_2,param_3,*puVar4);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined8 *)*param_1 = *puVar4;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 8) = uVar3;
  *(undefined1 *)puVar4 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  return param_1;
}




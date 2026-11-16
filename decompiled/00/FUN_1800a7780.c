// FUN_1800a7780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7780 */

undefined1 (*) [16]
FUN_1800a7780(undefined1 (*param_1) [16],undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 local_38 [32];
  
  puVar2 = (undefined8 *)FUN_18015bea0(local_38,param_3 & 0xffffffff,param_3,param_4,0,param_1);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar3 = 2;
  FUN_1800f5540(param_1,param_2[2] + 0x13 + puVar2[2]);
  FUN_18015b2a0(param_1,"[json.exception.",0x10,param_4,uVar3);
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18015b2a0(param_1,param_2,*puVar1,param_4,uVar3);
  FUN_18015af80(param_1,0x2e);
  puVar1 = puVar2 + 2;
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_18015b2a0(param_1,puVar2,*puVar1,param_4,uVar3);
  FUN_18015b2a0(param_1,&DAT_1806bb9e4,2);
  FUN_18015c010(local_38);
  return param_1;
}




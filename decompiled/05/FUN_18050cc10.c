// FUN_18050cc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050cc10 */

undefined1 (*) [16] FUN_18050cc10(undefined1 (*param_1) [16],byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar5 = param_2;
  }
  else {
    pbVar5 = *(byte **)param_2;
  }
  pbVar6 = pbVar5 + *(longlong *)(param_2 + 0x10);
  for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 1) {
    iVar4 = tolower((uint)*pbVar5);
    *pbVar5 = (byte)iVar4;
    if ((byte)iVar4 == 0x5f) {
      *pbVar5 = 0x20;
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)*param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 8) = uVar3;
  *param_2 = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0xf;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  FUN_18015c010(param_2);
  return param_1;
}




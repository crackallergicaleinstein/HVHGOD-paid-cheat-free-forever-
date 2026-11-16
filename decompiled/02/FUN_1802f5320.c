// FUN_1802f5320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f5320 */

undefined1 (*) [16]
FUN_1802f5320(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_2;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar1 = param_2[1];
  uVar2 = uVar1;
  if (0x20 < uVar1) {
    uVar2 = 0x20;
  }
  FUN_1800f5540(0,uVar2,param_3,param_4,1,param_1);
  pbVar4 = pbVar3 + uVar1;
  while ((pbVar3 != pbVar4 && (*(ulonglong *)param_1[1] < 0x20))) {
    if ((0x1f < *pbVar3) && (*pbVar3 != 0x3b)) {
      FUN_18015af80(param_1);
    }
    pbVar3 = pbVar3 + 1;
  }
  return param_1;
}




// FUN_18050cb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050cb60 */

undefined1 (*) [16] FUN_18050cb60(undefined1 (*param_1) [16],byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint _C;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  bVar7 = true;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar5 = param_2;
  }
  else {
    pbVar5 = *(byte **)param_2;
  }
  pbVar6 = pbVar5 + *(longlong *)(param_2 + 0x10);
  for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 1) {
    bVar1 = *pbVar5;
    _C = (uint)bVar1;
    if ((bVar1 == 0x5f) || (bVar1 == 0x2d)) {
      *pbVar5 = 0x20;
      _C = 0x20;
    }
    if (bVar7) {
      _C = toupper(_C);
      *pbVar5 = (byte)_C;
    }
    bVar7 = (char)_C == ' ';
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)*param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(*param_1 + 8) = uVar2;
  *(undefined8 *)param_1[1] = uVar3;
  *(undefined8 *)(param_1[1] + 8) = uVar4;
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




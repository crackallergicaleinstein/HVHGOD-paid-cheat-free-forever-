// FUN_1801e4b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e4b30 */

undefined8 *
FUN_1801e4b30(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             int param_5,int param_6)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 in_ZMM3 [64];
  undefined1 local_28 [16];
  
  fVar3 = in_ZMM3._0_4_;
  uVar6 = (uint)fVar3 >> 0x1f;
  if (in_ZMM3[3] < '\0') {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    fVar3 = ABS(fVar3);
  }
  if (((uint)fVar3 & 0x7f800000) == 0x7f800000) {
    uVar6 = (uint)fVar3 & 0x7fffff;
    if (uVar6 == 0) {
      pcVar4 = "inf";
      lVar5 = 3;
    }
    else if ((in_ZMM3[3] < '\0') && (uVar6 == 0x400000)) {
      pcVar4 = "nan(ind)";
      lVar5 = 8;
    }
    else if (uVar6 >> 0x16 == 0) {
      pcVar4 = "nan(snan)";
      lVar5 = 9;
    }
    else {
      pcVar4 = "nan";
      lVar5 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < lVar5) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_18063aed0(param_2,pcVar4,lVar5);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = param_2 + lVar5;
    return param_1;
  }
  if (param_5 == 1) {
    if (param_6 < 1000000000) {
      iVar1 = 6;
      if (-1 < param_6) {
        iVar1 = param_6;
      }
      FUN_1801e3e40(param_1,param_2,param_3,(double)fVar3,iVar1);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) {
        FUN_1801e4690(param_1,param_2,param_3,uVar6,param_6);
        return param_1;
      }
      FUN_1801e4980();
      return param_1;
    }
    if (param_6 < 1000000000) {
      iVar1 = 6;
      if (-1 < param_6) {
        iVar1 = param_6;
      }
      puVar2 = (undefined8 *)FUN_1801e35f0(local_28,param_2,param_3,(double)fVar3,iVar1);
      *param_1 = *puVar2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x84;
  *param_1 = param_3;
  return param_1;
}




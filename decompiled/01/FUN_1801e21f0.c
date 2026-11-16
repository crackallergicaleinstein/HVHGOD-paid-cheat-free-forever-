// FUN_1801e21f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e21f0 */

undefined8 *
FUN_1801e21f0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             int param_5,int param_6)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_28 [16];
  
  uVar6 = param_4 >> 0x3f;
  uVar3 = param_4;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar3 = param_4 & 0x7fffffffffffffff;
  }
  if ((~uVar3 & 0x7ff0000000000000) == 0) {
    if ((uVar3 & 0xfffffffffffff) == 0) {
      pcVar4 = "inf";
      lVar5 = 3;
    }
    else if (((longlong)param_4 < 0) && ((uVar3 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar4 = "nan(ind)";
      lVar5 = 8;
    }
    else if ((uVar3 & 0x8000000000000) == 0) {
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
      FUN_1801e3e40(param_1,param_2,param_3,uVar6,iVar1);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) {
        FUN_1801e1cf0(param_1,param_2,param_3,uVar6,param_6);
        return param_1;
      }
      FUN_1801e2020();
      return param_1;
    }
    if (param_6 < 1000000000) {
      iVar1 = 6;
      if (-1 < param_6) {
        iVar1 = param_6;
      }
      puVar2 = (undefined8 *)FUN_1801e35f0(local_28,param_2,param_3,uVar6,iVar1);
      *param_1 = *puVar2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0x84;
  *param_1 = param_3;
  return param_1;
}




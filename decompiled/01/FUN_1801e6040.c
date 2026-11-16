// FUN_1801e6040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e6040 */

undefined8 * FUN_1801e6040(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 *local_28;
  undefined4 local_20;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *(undefined4 *)(param_1 + 1) = 0x84;
      *param_1 = param_3;
      return param_1;
    }
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar2 = param_4 & 0x7fffffff;
  }
  if ((uVar2 & 0x7f800000) != 0x7f800000) {
    if (uVar2 == 0) {
      if (param_2 == param_3) {
        local_20 = 0x84;
      }
      else {
        *param_2 = 0x30;
        param_3 = param_2 + 1;
        local_20 = 0;
      }
    }
    else {
      uVar1 = FUN_1801e5140(uVar2 & 0x7fffff,uVar2 >> 0x17);
      FUN_1801e5af0(&local_28,param_2,param_3,uVar1,0,uVar2 & 0x7fffff,uVar2 >> 0x17);
      param_3 = local_28;
    }
    *(undefined4 *)(param_1 + 1) = local_20;
    *param_1 = param_3;
    return param_1;
  }
  uVar2 = uVar2 & 0x7fffff;
  if (uVar2 == 0) {
    pcVar3 = "inf";
    lVar4 = 3;
  }
  else if (((int)param_4 < 0) && (uVar2 == 0x400000)) {
    pcVar3 = "nan(ind)";
    lVar4 = 8;
  }
  else if (uVar2 >> 0x16 == 0) {
    pcVar3 = "nan(snan)";
    lVar4 = 9;
  }
  else {
    pcVar3 = "nan";
    lVar4 = 3;
  }
  if ((longlong)param_3 - (longlong)param_2 < lVar4) {
    *(undefined4 *)(param_1 + 1) = 0x84;
    *param_1 = param_3;
    return param_1;
  }
  FUN_18063aed0(param_2,pcVar3,lVar4);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = param_2 + lVar4;
  return param_1;
}




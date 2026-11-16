// FUN_1801e34b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e34b0 */

undefined8 *
FUN_1801e34b0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 local_28 [16];
  
  uVar2 = param_4;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar2 = param_4 & 0x7fffffffffffffff;
  }
  if ((~uVar2 & 0x7ff0000000000000) != 0) {
    puVar1 = (undefined8 *)FUN_1801e32d0(local_28,param_2,param_3,0x7ff0000000000000,0);
    *param_1 = *puVar1;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar1 + 1);
    return param_1;
  }
  if ((uVar2 & 0xfffffffffffff) == 0) {
    pcVar3 = "inf";
    lVar4 = 3;
  }
  else if (((longlong)param_4 < 0) && ((uVar2 & 0xfffffffffffff) == 0x8000000000000)) {
    pcVar3 = "nan(ind)";
    lVar4 = 8;
  }
  else if ((uVar2 & 0x8000000000000) == 0) {
    pcVar3 = "nan(snan)";
    lVar4 = 9;
  }
  else {
    pcVar3 = "nan";
    lVar4 = 3;
  }
  if ((longlong)param_3 - (longlong)param_2 < lVar4) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  FUN_18063aed0(param_2,pcVar3,lVar4);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = param_2 + lVar4;
  return param_1;
}




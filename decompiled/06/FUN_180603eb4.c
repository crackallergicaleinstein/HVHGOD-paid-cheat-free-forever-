// FUN_180603eb4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603eb4 */

longlong * FUN_180603eb4(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((((byte)*(undefined4 *)(param_1 + 0x70) & 0x22) == 2) ||
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 == 0)) {
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      return param_2;
    }
    if (**(longlong **)(param_1 + 0x38) == 0) {
      return param_2;
    }
    lVar4 = **(longlong **)(param_1 + 0x18);
    lVar3 = (**(int **)(param_1 + 0x50) - lVar4) + **(longlong **)(param_1 + 0x38);
    param_2[1] = lVar3;
    param_2[2] = lVar3;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x20);
    uVar2 = uVar1;
    if (uVar1 < *(ulonglong *)(param_1 + 0x68)) {
      uVar2 = *(ulonglong *)(param_1 + 0x68);
    }
    param_2[1] = uVar2 - lVar4;
    param_2[2] = (**(int **)(param_1 + 0x58) - lVar4) + uVar1;
  }
  *param_2 = lVar4;
  return param_2;
}




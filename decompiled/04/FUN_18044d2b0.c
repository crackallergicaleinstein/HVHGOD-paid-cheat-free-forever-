// FUN_18044d2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044d2b0 */

void FUN_18044d2b0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  lVar2 = *param_1;
  uVar1 = lVar3 - lVar2 >> 4;
  if (param_2 < uVar1) {
    param_1[1] = param_2 * 0x10 + lVar2;
    return;
  }
  if (uVar1 < param_2) {
    if ((ulonglong)(param_1[2] - lVar2 >> 4) < param_2) {
      FUN_18044d360(param_1,param_2);
      return;
    }
    if (param_2 - uVar1 != 0) {
      lVar2 = (param_2 - uVar1) * 0x10;
      FUN_18063ab10(lVar3,0,lVar2);
      lVar3 = lVar3 + lVar2;
    }
    param_1[1] = lVar3;
  }
  return;
}




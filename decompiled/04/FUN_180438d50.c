// FUN_180438d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180438d50 */

longlong * FUN_180438d50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    lVar1 = *param_2;
    uVar3 = param_2[1] - lVar1;
    if ((ulonglong)(param_1[2] - lVar2) < uVar3) {
      FUN_1803f9450(param_1,uVar3);
      lVar2 = *param_1;
      FUN_18063aed0(lVar2,lVar1,uVar3);
      lVar2 = lVar2 + uVar3;
    }
    else {
      uVar4 = param_1[1] - lVar2;
      if (uVar4 < uVar3) {
        FUN_18063aed0(lVar2,lVar1,uVar4);
        lVar2 = param_1[1];
        FUN_18063aed0(lVar2,uVar4 + lVar1,uVar3 - uVar4);
        lVar2 = (uVar3 - uVar4) + lVar2;
      }
      else {
        FUN_18063aed0(lVar2,lVar1,uVar3);
        lVar2 = lVar2 + uVar3;
      }
    }
    param_1[1] = lVar2;
  }
  return param_1;
}




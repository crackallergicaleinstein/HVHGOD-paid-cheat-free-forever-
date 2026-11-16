// FUN_1804928b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804928b0 */

void FUN_1804928b0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = (param_1[2] - lVar1) / 0x68;
  if (uVar4 < param_3) {
    if (0x276276276276276 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0x276276276276276 - (uVar4 >> 1) < uVar4) {
      uVar4 = 0x276276276276276;
    }
    else {
      uVar4 = uVar4 + (uVar4 >> 1);
      if (uVar4 < param_3) {
        uVar4 = param_3;
      }
    }
    if (lVar1 != 0) {
      lVar3 = param_1[1];
      for (; lVar1 != lVar3; lVar1 = lVar1 + 0x68) {
        FUN_18015c010(lVar1);
      }
      lVar1 = *param_1;
      lVar3 = lVar1;
      if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x68) * 0x68)) &&
         (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x276276276276276 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar4 * 0x68);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = uVar4 * 0x68 + lVar1;
    lVar1 = FUN_1804930e0(param_2,param_3,lVar1,param_1);
    param_1[1] = lVar1;
  }
  else {
    lVar3 = param_1[1];
    uVar4 = (lVar3 - lVar1) / 0x68;
    if (uVar4 < param_3) {
      if (lVar1 != lVar3) {
        do {
          FUN_180492b80(lVar1,param_2);
          lVar1 = lVar1 + 0x68;
          param_2 = param_2 + 0x68;
          lVar3 = param_1[1];
        } while (lVar1 != lVar3);
      }
      lVar1 = FUN_1804930e0(param_2,param_3 - uVar4,lVar3,param_1);
      param_1[1] = lVar1;
    }
    else {
      lVar3 = param_3 * 0x68 + lVar1;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_180492b80(lVar1,param_2);
        lVar1 = lVar1 + 0x68;
        param_2 = param_2 + 0x68;
      }
      lVar1 = param_1[1];
      for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
        FUN_18015c010(lVar2);
      }
      param_1[1] = lVar3;
    }
  }
  return;
}




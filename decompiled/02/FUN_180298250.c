// FUN_180298250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180298250 */

void FUN_180298250(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *param_1;
  uVar3 = (param_1[2] - lVar4) / 0x1020;
  if (uVar3 < param_3) {
    if (0xfe03f80fe03f8 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0xfe03f80fe03f8 - (uVar3 >> 1) < uVar3) {
      uVar5 = 0xfe03f80fe03f8;
    }
    else {
      uVar5 = uVar3 + (uVar3 >> 1);
      if (uVar5 < param_3) {
        uVar5 = param_3;
      }
    }
    if (lVar4 != 0) {
      lVar1 = lVar4;
      if ((0xfff < uVar3 * 0x1020) &&
         (lVar1 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xfe03f80fe03f8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar5 * 0x1020);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + uVar5 * 0x1020;
    lVar4 = *param_2;
    uVar3 = param_2[1];
    if (param_3 != 0) {
      do {
        FUN_18063aed0(lVar1,*(undefined8 *)
                             (*(longlong *)(lVar4 + 8) +
                             (*(longlong *)(lVar4 + 0x10) - 1U & uVar3) * 8),0x1020);
        lVar1 = lVar1 + 0x1020;
        uVar3 = uVar3 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      param_1[1] = lVar1;
      return;
    }
  }
  else {
    lVar1 = param_1[1];
    lVar2 = (lVar1 - lVar4) / 0x102 + (lVar1 - lVar4 >> 0x3f);
    uVar3 = (lVar2 >> 4) - (lVar2 >> 0x3f);
    if (param_3 <= uVar3) {
      lVar2 = param_3 * 0x1020 + lVar4;
      lVar1 = *param_2;
      uVar3 = param_2[1];
      if (param_3 != 0) {
        do {
          FUN_18063aed0(lVar4,*(undefined8 *)
                               (*(longlong *)(lVar1 + 8) +
                               (*(longlong *)(lVar1 + 0x10) - 1U & uVar3) * 8),0x1020);
          lVar4 = lVar4 + 0x1020;
          uVar3 = uVar3 + 1;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      param_1[1] = lVar2;
      return;
    }
    if (lVar4 != lVar1) {
      lVar2 = *param_2;
      uVar5 = param_2[1];
      do {
        FUN_18063aed0(lVar4,*(undefined8 *)
                             (*(longlong *)(lVar2 + 8) +
                             (*(longlong *)(lVar2 + 0x10) - 1U & uVar5) * 8),0x1020);
        lVar4 = lVar4 + 0x1020;
        uVar5 = uVar5 + 1;
        lVar1 = param_1[1];
      } while (lVar4 != lVar1);
      param_2[1] = uVar5;
    }
    lVar4 = *param_2;
    uVar5 = param_2[1];
    lVar2 = param_3 - uVar3;
    if (lVar2 != 0) {
      do {
        FUN_18063aed0(lVar1,*(undefined8 *)
                             (*(longlong *)(lVar4 + 8) +
                             (*(longlong *)(lVar4 + 0x10) - 1U & uVar5) * 8),0x1020);
        lVar1 = lVar1 + 0x1020;
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  param_1[1] = lVar1;
  return;
}




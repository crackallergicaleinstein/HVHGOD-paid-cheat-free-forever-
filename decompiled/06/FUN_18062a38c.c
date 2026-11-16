// FUN_18062a38c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062a38c */

undefined8 FUN_18062a38c(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(param_1 + lVar3) != '\0');
  uVar5 = lVar4 + 2;
  if (~param_3 < uVar5) {
    return 0xc;
  }
  uVar2 = _calloc_base(param_3 + 1 + uVar5);
  if (((param_3 != 0) && (iVar1 = FUN_1806157a0(), iVar1 != 0)) ||
     (iVar1 = FUN_1806157a0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVar3 = _calloc_base(4,8);
      *param_4 = lVar3;
      FUN_180621380(0);
      lVar3 = *param_4;
      if (lVar3 != 0) {
        param_4[1] = lVar3;
        param_4[2] = lVar3 + 0x20;
        goto LAB_18062a4e2;
      }
    }
    else {
      uVar5 = param_4[2] - *param_4 >> 3;
      if (uVar5 < 0x8000000000000000) {
        lVar3 = _recalloc_base(*param_4,uVar5 * 2,8);
        if (lVar3 != 0) {
          *param_4 = lVar3;
          param_4[1] = lVar3 + uVar5 * 8;
          param_4[2] = lVar3 + uVar5 * 0x10;
          FUN_180621380(0);
          goto LAB_18062a4e2;
        }
        FUN_180621380(0);
      }
    }
    uVar6 = 0xc;
    FUN_180621380(uVar2);
  }
  else {
LAB_18062a4e2:
    *(undefined8 *)param_4[1] = uVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_180621380(0);
  return uVar6;
}




// FUN_18062c160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c160 */

ulonglong thunk_FUN_18062bc1c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar12;
  longlong lVar11;
  
  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_18060fe00();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  lVar6 = FUN_18063639c(param_1,0x3d);
  if ((lVar6 == 0) || (lVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_18060fe00();
    *puVar5 = 0x16;
    FUN_180621380(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(lVar6 + 2);
  if (DAT_180bb1d80 == DAT_180bb1d88) {
    DAT_180bb1d80 = (longlong *)FUN_18062c068(DAT_180bb1d80);
  }
  if (DAT_180bb1d80 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_180bb1d78 == 0)) {
      if (sVar2 == 0) goto LAB_18062be30;
      if (DAT_180bb1d78 == 0) {
        DAT_180bb1d78 = _calloc_base(1,8);
        FUN_180621380(0);
        if (DAT_180bb1d78 == 0) goto LAB_18062bcd0;
        if (DAT_180bb1d80 != (longlong *)0x0) goto LAB_18062bd78;
      }
      DAT_180bb1d80 = (longlong *)_calloc_base(1,8);
      FUN_180621380(0);
      if (DAT_180bb1d80 != (longlong *)0x0) goto LAB_18062bd6f;
    }
    else {
      lVar7 = FUN_18061a994();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_18060fe00();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_180bb1d80 == DAT_180bb1d88) {
          DAT_180bb1d80 = (longlong *)FUN_18062c068(DAT_180bb1d80);
        }
LAB_18062bd6f:
        if (DAT_180bb1d80 != (longlong *)0x0) goto LAB_18062bd78;
      }
    }
  }
  else {
LAB_18062bd78:
    plVar8 = DAT_180bb1d80;
    lVar7 = lVar6 - param_1 >> 1;
    lVar6 = *DAT_180bb1d80;
    plVar9 = DAT_180bb1d80;
    while (lVar6 != 0) {
      iVar3 = FUN_180629c10(param_1,lVar6,lVar7);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar7 * 2) == 0x3d || (*(short *)(*plVar9 + lVar7 * 2) == 0)))) {
        lVar6 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_18062bdc4;
      }
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
    }
    lVar6 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_18062bdc4:
    if ((-1 < lVar6) && (*plVar8 != 0)) {
      FUN_180621380(plVar8[lVar6]);
      if (sVar2 == 0) {
        for (; plVar8[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar8[lVar6] = plVar8[lVar6 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar6,8);
        FUN_180621380(0);
        lVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_180bb1d80 = plVar8;
        }
      }
      else {
        plVar8[lVar6] = param_1;
LAB_18062be8b:
        lVar6 = 0;
      }
      if (param_2 == 0) {
LAB_18062bf2b:
        FUN_180621380(lVar6);
        return 0;
      }
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar11 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_180621380(0);
      }
      else {
        iVar3 = FUN_1806160a0();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar7] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar7 + 1)));
        if (BVar4 != 0) {
          FUN_180621380(lpName);
          goto LAB_18062bf2b;
        }
        puVar5 = (undefined4 *)FUN_18060fe00();
        *puVar5 = 0x2a;
        FUN_180621380(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_180621380(lVar6);
      return uVar10;
    }
    if (sVar2 == 0) {
LAB_18062be30:
      uVar10 = 0;
      goto LAB_18062bcd4;
    }
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_180621380(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar6] = param_1;
        plVar8[1 - lVar6] = 0;
        DAT_180bb1d80 = plVar8;
        goto LAB_18062be8b;
      }
    }
  }
LAB_18062bcd0:
  uVar10 = 0xffffffffffffffff;
LAB_18062bcd4:
  FUN_180621380(param_1);
  return uVar10 & 0xffffffff;
}




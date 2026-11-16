// FUN_180620654 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180620654 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180620654(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  size_t _MaxCount;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_248;
  if (param_2 != 0) {
    if (param_3 == (wchar_t *)0x0) {
    }
    FUN_1806208ec();
  }
  bVar3 = true;
  iVar9 = 0;
  if (param_3 != (wchar_t *)0x0) {
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar5 = (short *)FUN_18062fb70(param_3,&DAT_1806b03a0);
        if (psVar5 == (short *)0x0) {
        }
        _MaxCount = (longlong)psVar5 - (longlong)param_3 >> 1;
        if (_MaxCount == 0) {
        }
        if (*psVar5 == 0x3b) {
        }
        iVar10 = 1;
        ppuVar12 = &PTR_u_LC_COLLATE_1806b02a8;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar12,param_3,_MaxCount);
          if (iVar4 == 0) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(short *)(*ppuVar12 + sVar6 * 2) != 0);
            if (_MaxCount == sVar6) break;
          }
          iVar10 = iVar10 + 1;
          ppuVar12 = ppuVar12 + 3;
        } while ((longlong)ppuVar12 < 0x1806b0309);
        psVar5 = psVar5 + 1;
        lVar7 = FUN_18062fb10(psVar5,&DAT_1806b03a8);
        if ((lVar7 == 0) && (*psVar5 != 0x3b)) {
        }
        if (iVar10 < 6) {
          iVar4 = FUN_18062f9c0();
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar7 * 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f5e50();
          }
          local_208[lVar7] = 0;
          lVar8 = FUN_1806208ec(param_1,iVar10,local_208);
          if (lVar8 != 0) {
            iVar9 = iVar9 + 1;
          }
        }
      } while ((psVar5[lVar7] != 0) && (param_3 = psVar5 + lVar7 + 1, *param_3 != L'\0'));
    }
    else {
      lVar7 = FUN_18061fed8(param_3,local_208,0x83,local_f8);
      if (lVar7 == 0) {
      }
      iVar10 = 0;
      plVar11 = (longlong *)(param_1 + 0x28);
      do {
        if (iVar10 != 0) {
          psVar5 = local_208;
          lVar7 = *plVar11 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar7);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) || (lVar7 = FUN_1806208ec(param_1,iVar10,local_208), lVar7 != 0)) {
            iVar9 = iVar9 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar10 = iVar10 + 1;
        plVar11 = plVar11 + 4;
      } while (iVar10 < 6);
      if (bVar3) goto LAB_1806207f7;
    }
    if (iVar9 == 0) {
    }
  }
LAB_1806207f7:
  FUN_180620468(param_1);
}




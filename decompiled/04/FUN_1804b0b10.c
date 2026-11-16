// FUN_1804b0b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0b10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b0b10(LPCSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int cchWideChar;
  LPWSTR pWVar4;
  short sVar5;
  int *piVar6;
  WCHAR *lpWideCharStr;
  undefined1 auStackY_298 [32];
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_298;
  iVar3 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  pWVar4 = (LPWSTR)0x0;
  if (0x104 < cchWideChar + iVar3) {
    pWVar4 = (LPWSTR)FUN_1804b8110((longlong)(cchWideChar + iVar3) * 2);
  }
  lpWideCharStr = local_258;
  if (pWVar4 != (LPWSTR)0x0) {
    lpWideCharStr = pWVar4;
  }
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar3);
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr + iVar3,cchWideChar);
  FUN_180618bd8(lpWideCharStr,lpWideCharStr + iVar3);
  lVar2 = DAT_180bb8ae8;
  if (pWVar4 != (LPWSTR)0x0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar3 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar5 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
        piVar6 = (int *)(lVar2 + ((longlong)sVar5 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(pWVar4);
  }
}




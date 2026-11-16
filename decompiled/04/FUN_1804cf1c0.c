// FUN_1804cf1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf1c0 */

bool FUN_1804cf1c0(undefined8 param_1,LPCSTR param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  HINSTANCE pHVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPCWSTR)0x0;
  if (0 < iVar3) {
    iVar7 = iVar3;
    if (iVar3 < 8) {
      iVar7 = 8;
    }
    if (0 < iVar7) {
      lpWideCharStr = (LPCWSTR)FUN_1804b8110((longlong)iVar7 * 2);
    }
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,iVar3);
  pHVar4 = ShellExecuteW((HWND)0x0,L"open",lpWideCharStr,(LPCWSTR)0x0,(LPCWSTR)0x0,10);
  lVar2 = DAT_180bb8ae8;
  if (lpWideCharStr != (LPCWSTR)0x0) {
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
    thunk_FUN_180621380(lpWideCharStr);
  }
  return 0x20 < (longlong)pHVar4;
}




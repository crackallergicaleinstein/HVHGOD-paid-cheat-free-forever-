// FUN_18062b638 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062b638 */

void FUN_18062b638(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPCSTR param_7,LPBOOL param_8)

{
  int iVar1;
  DWORD dwFlags;
  LPBOOL lpUsedDefaultChar;
  bool bVar2;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar2 = param_1 == 0xc431;
          goto LAB_18062b6ce;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_18062b6c9;
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))))) {
    iVar1 = param_1 - 65000;
LAB_18062b6c9:
    if (iVar1 != 0) {
      bVar2 = iVar1 == 1;
LAB_18062b6ce:
      if (!bVar2) {
        dwFlags = param_2 & 0xffffff7f;
        goto LAB_18062b6d8;
      }
    }
  }
  dwFlags = 0;
LAB_18062b6d8:
  lpUsedDefaultChar = param_8;
  if (param_1 - 65000 < 2) {
    lpUsedDefaultChar = (LPBOOL)0x0;
    param_7 = (LPCSTR)0x0;
    if (param_8 != (LPBOOL)0x0) {
      *param_8 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018062b70f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,param_7,lpUsedDefaultChar);
  return;
}




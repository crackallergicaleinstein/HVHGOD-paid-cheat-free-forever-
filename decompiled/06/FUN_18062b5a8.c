// FUN_18062b5a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062b5a8 */

void FUN_18062b5a8(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_18062b5f5:
          if (!bVar1) goto LAB_18062b5f9;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_18062b633;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_18062b5f5;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_18062b5f9;
LAB_18062b633:
    param_2 = param_2 & 8;
    goto LAB_18062b5f9;
  }
  param_2 = 0;
LAB_18062b5f9:
                    /* WARNING: Could not recover jumptable at 0x00018062b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




// FUN_180618be4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180618be4 */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
  }
  else {
    FUN_180627424(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_180628bc0(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_180611590(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}




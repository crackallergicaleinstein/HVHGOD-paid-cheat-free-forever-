// FUN_18015a180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015a180(longlong *param_1)

{
  undefined1 auStack_38 [32];
  _Lockit local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  if (*param_1 != 0) {
  }
  std::_Lockit::_Lockit(local_18,0);
  if (*param_1 == 0) {
    DAT_180bb1890 = DAT_180bb1890 + 1;
    *param_1 = (longlong)DAT_180bb1890;
  }
  std::_Lockit::~_Lockit(local_18);
}




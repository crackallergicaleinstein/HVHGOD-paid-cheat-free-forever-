// FUN_1805fbf84 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbf84 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Locimp * FUN_1805fbf84(char param_1)

{
  _Locimp *p_Var1;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  p_Var1 = DAT_180bb18e8;
  if (DAT_180bb18e8 == (_Locimp *)0x0) {
    p_Var1 = std::locale::_Locimp::_New_Locimp(false);
    FUN_1805fc194(p_Var1);
    *(undefined4 *)(p_Var1 + 0x20) = 0x3f;
    FUN_1805fbe64(p_Var1 + 0x28,&DAT_180859f64);
    (**(code **)(*(longlong *)p_Var1 + 8))(p_Var1);
    _DAT_180bb1898 = p_Var1;
    DAT_180bb18c8 = p_Var1;
  }
  if (param_1 != '\0') {
    (**(code **)(*(longlong *)p_Var1 + 8))(p_Var1);
  }
  std::_Lockit::~_Lockit(local_res8);
  return p_Var1;
}




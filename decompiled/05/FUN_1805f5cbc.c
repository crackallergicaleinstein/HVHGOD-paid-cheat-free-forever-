// FUN_1805f5cbc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5cbc */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180bacda0 == -1) {
    iVar1 = FUN_18061ad5c();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180bacda0);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}




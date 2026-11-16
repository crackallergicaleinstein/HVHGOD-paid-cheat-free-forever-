// FUN_1801647a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801647a0 */

/* Library Function - Single Match
    public: virtual char const * __ptr64 __cdecl std::future_error::what(void)const __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __thiscall std::future_error::what(future_error *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 1) {
    return "broken promise";
  }
  if (iVar1 == 2) {
    return "future already retrieved";
  }
  if (iVar1 == 3) {
    return "promise already satisfied";
  }
  if (iVar1 == 4) {
    return "no state";
  }
  return (char *)0x0;
}




// FUN_1805fbdb8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbdb8 */

/* Library Function - Single Match
    public: __cdecl std::_Lockit::_Lockit(int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 == 0) {
    _lock_locales();
  }
  else if (param_1 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1750 + (longlong)param_1 * 0x28));
  }
  return this;
}




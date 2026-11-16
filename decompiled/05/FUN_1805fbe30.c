// FUN_1805fbe30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbe30 */

/* Library Function - Single Match
    public: __cdecl std::_Lockit::~_Lockit(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall std::_Lockit::~_Lockit(_Lockit *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    FUN_18061b830();
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1750 + (longlong)iVar1 * 0x28));
  }
  return;
}




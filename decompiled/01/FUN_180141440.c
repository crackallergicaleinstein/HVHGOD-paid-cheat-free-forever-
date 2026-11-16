// FUN_180141440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180141440 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_ostream<char,struct std::char_traits<char>
   >::_Sentry_base::~_Sentry_base(void) __ptr64
    public: __cdecl std::basic_ostream<unsigned short,struct std::char_traits<unsigned short>
   >::_Sentry_base::~_Sentry_base(void) __ptr64
    public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::_Sentry_base::~_Sentry_base(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~_Sentry_base(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




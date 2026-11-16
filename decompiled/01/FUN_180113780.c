// FUN_180113780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113780 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_ostream<char,struct std::char_traits<char> >::sentry::~sentry(void)
   __ptr64
    public: __cdecl std::basic_ostream<unsigned short,struct std::char_traits<unsigned short>
   >::sentry::~sentry(void) __ptr64
    public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::sentry::~sentry(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~sentry(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_1801416e0(*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




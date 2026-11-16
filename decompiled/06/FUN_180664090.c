// FUN_180664090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180664090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl _Init_atexit::~_Init_atexit(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)

{
  longlong lVar1;
  code *pcVar2;
  
  while (DAT_1808d70c8 < 10) {
    lVar1 = DAT_1808d70c8 * 8;
    DAT_1808d70c8 = DAT_1808d70c8 + 1;
    pcVar2 = DecodePointer(*(PVOID *)(&DAT_180bb19f0 + lVar1));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}




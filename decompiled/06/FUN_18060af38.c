// FUN_18060af38 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060af38 */

/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl common_end_thread(uint param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18061f6f8();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      FUN_180621c78();
    }
    if ((longlong)*(HANDLE *)(lVar1 + 0x10) - 1U < 0xfffffffffffffffe) {
      CloseHandle(*(HANDLE *)(lVar1 + 0x10));
    }
    if ((undefined1 *)((longlong)&(*(HMODULE *)(lVar1 + 0x18))[-1].unused + 3U) <
        (undefined1 *)0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(*(HMODULE *)(lVar1 + 0x18),param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}




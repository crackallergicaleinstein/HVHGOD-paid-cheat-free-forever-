// FUN_1806114e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806114e0 */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_1806270cc();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_180bb1c48));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_180bb1c48) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_180621380(DAT_180bb1c48);
  DAT_180bb1c48 = 0;
  return;
}




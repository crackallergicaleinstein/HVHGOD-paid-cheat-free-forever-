// FUN_180606da8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606da8 */

/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2019 Release */

undefined1 __vcrt_initialize(void)

{
  char cVar1;
  
  cVar1 = __vcrt_initialize_locks();
  if (cVar1 != '\0') {
    cVar1 = __vcrt_initialize_ptd();
    if (cVar1 != '\0') {
      return 1;
    }
    __vcrt_uninitialize_locks();
  }
  return 0;
}




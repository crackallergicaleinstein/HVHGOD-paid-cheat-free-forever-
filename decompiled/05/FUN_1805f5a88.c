// FUN_1805f5a88 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5a88 */

/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180606dd0();
  if (cVar1 != '\0') {
    cVar1 = FUN_18061af80();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180606de4();
  }
  return 0;
}




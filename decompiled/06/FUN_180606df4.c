// FUN_180606df4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606df4 */

/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined1 __vcrt_uninitialize(char param_1)

{
  if (param_1 == '\0') {
    FUN_180607068();
    __vcrt_uninitialize_locks();
  }
  return 1;
}




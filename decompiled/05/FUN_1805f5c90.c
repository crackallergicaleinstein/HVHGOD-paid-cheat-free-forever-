// FUN_1805f5c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5c90 */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined1 param_1,char param_2)

{
  if ((DAT_180bacd98 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize();
    __vcrt_uninitialize(param_1);
  }
  return 1;
}




// FUN_180606e64 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606e64 */

/* Library Function - Single Match
    __uncaught_exceptions
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __uncaught_exceptions(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = __vcrt_getptd_noinit();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x30);
  }
  return uVar1;
}




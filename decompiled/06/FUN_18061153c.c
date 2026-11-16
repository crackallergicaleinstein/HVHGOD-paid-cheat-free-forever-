// FUN_18061153c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061153c */

/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
_get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
    uVar2 = 0x16;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (longlong *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVar2 = 0;
  }
  return uVar2;
}




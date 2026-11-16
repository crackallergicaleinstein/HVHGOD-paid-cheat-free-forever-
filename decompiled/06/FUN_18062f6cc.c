// FUN_18062f6cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062f6cc */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18062f358(param_1,7);
    FUN_18062f358(param_1 + 0x38,7);
    FUN_18062f358(param_1 + 0x70,0xc);
    FUN_18062f358(param_1 + 0xd0,0xc);
    FUN_18062f358(param_1 + 0x130,2);
    FUN_180621380(*(undefined8 *)(param_1 + 0x140));
    FUN_180621380(*(undefined8 *)(param_1 + 0x148));
    FUN_180621380(*(undefined8 *)(param_1 + 0x150));
    FUN_18062f358(param_1 + 0x160,7);
    FUN_18062f358(param_1 + 0x198,7);
    FUN_18062f358(param_1 + 0x1d0,0xc);
    FUN_18062f358(param_1 + 0x230,0xc);
    FUN_18062f358(param_1 + 0x290,2);
    FUN_180621380(*(undefined8 *)(param_1 + 0x2a0));
    FUN_180621380(*(undefined8 *)(param_1 + 0x2a8));
    FUN_180621380(*(undefined8 *)(param_1 + 0x2b0));
    FUN_180621380(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}




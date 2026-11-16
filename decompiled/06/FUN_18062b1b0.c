// FUN_18062b1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062b1b0 */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_180bb266c == '\0') {
    DAT_180bb2658 = &DAT_1808d7ac0;
    DAT_180bb2660 = &DAT_1808d7780;
    DAT_180bb2650 = &DAT_1808d79b0;
    uVar1 = FUN_18061f6b4();
    FUN_18062ae7c(0xfffffffd,1,uVar1,&DAT_180bb2660);
    DAT_180bb266c = '\x01';
  }
  return 1;
}




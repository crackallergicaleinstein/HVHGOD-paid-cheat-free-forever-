// FUN_180634e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180634e60 */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000180634e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_180bb26a0,0,param_1);
  return uVar2;
}




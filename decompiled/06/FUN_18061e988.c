// FUN_18061e988 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061e988 */

/* Library Function - Single Match
    rand_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 rand_s(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_18060fe00();
    *puVar3 = 0x16;
    FUN_18060aad4();
    uVar2 = 0x16;
  }
  else {
    *param_1 = 0;
    cVar1 = FUN_180621cbc(param_1,4);
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_18060fe00();
      *puVar3 = 0xc;
      puVar3 = (undefined4 *)FUN_18060fe00();
      uVar2 = *puVar3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}




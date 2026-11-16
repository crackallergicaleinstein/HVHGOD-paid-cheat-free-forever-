// FUN_18060b404 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b404 */

/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x16;
    FUN_18060aad4();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_1806227ac();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}




// FUN_18060aed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060aed0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18060aed0(undefined8 *param_1)

{
  DWORD dwExitCode;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
    ExitThread(dwExitCode);
  }
  lVar3 = FUN_18061f698();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_180621fa4();
  if (iVar1 == 2) {
    iVar1 = FUN_180621c28(1);
    *(bool *)(param_1 + 4) = iVar1 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_18060b0e0(uVar2);
  FUN_18061a074(uVar2);
  return;
}




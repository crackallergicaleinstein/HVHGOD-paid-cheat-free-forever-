// FUN_1805f6a84 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6a84 */

undefined8 FUN_1805f6a84(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),0xffffffff,0);
  if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return 0;
}




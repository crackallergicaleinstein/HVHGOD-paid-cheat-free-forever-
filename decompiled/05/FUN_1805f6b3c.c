// FUN_1805f6b3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6b3c */

undefined8 FUN_1805f6b3c(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  ULONGLONG UVar3;
  ULONGLONG UVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  UVar3 = 0;
  if (param_4 != '\0') {
    UVar3 = GetTickCount64();
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),param_3,0);
  if (BVar1 == 0) {
    if (param_4 != '\0') {
      UVar4 = GetTickCount64();
      if (UVar4 - UVar3 < (ulonglong)param_3) goto LAB_1805f6bac;
    }
    uVar5 = 2;
  }
LAB_1805f6bac:
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return uVar5;
}




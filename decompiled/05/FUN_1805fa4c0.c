// FUN_1805fa4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa4c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_1805fa4c0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,DWORD param_6)

{
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  ulonglong uVar4;
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  RTL_CONDITION_VARIABLE local_20;
  
  uVar4 = param_1 >> 0x10 ^ param_1;
  lVar3 = (ulonglong)(byte)((byte)(uVar4 >> 8) ^ (byte)uVar4) * 0x40;
  SRWLock = (PSRWLOCK)(&DAT_180bad380 + lVar3);
  AcquireSRWLockExclusive(SRWLock);
  local_30 = lVar3 + 0x180bad388;
  if (*(longlong *)(&DAT_180bad390 + lVar3) == 0) {
    *(longlong *)(&DAT_180bad390 + lVar3) = local_30;
    *(longlong *)(&DAT_180bad398 + lVar3) = local_30;
  }
  local_28 = *(longlong *)(&DAT_180bad398 + lVar3);
  local_20.Ptr = (PVOID)0x0;
  *(ulonglong **)(local_28 + 8) = &local_38;
  *(ulonglong **)(&DAT_180bad398 + lVar3) = &local_38;
  local_38 = param_1;
  do {
    cVar1 = (*param_5)(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      *(longlong *)(local_30 + 0x10) = local_28;
      *(longlong *)(local_28 + 8) = local_30;
      goto LAB_1805fa5a0;
    }
    BVar2 = SleepConditionVariableSRW(&local_20,SRWLock,param_6,0);
    if (BVar2 == 0) {
      *(longlong *)(local_30 + 0x10) = local_28;
      *(longlong *)(local_28 + 8) = local_30;
      ReleaseSRWLockExclusive(SRWLock);
      return 0;
    }
  } while (param_6 == 0xffffffff);
  *(longlong *)(local_30 + 0x10) = local_28;
  *(longlong *)(local_28 + 8) = local_30;
LAB_1805fa5a0:
  ReleaseSRWLockExclusive(SRWLock);
  return 1;
}




// FUN_1800a9c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a9c30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a9c30(longlong param_1,LPCVOID param_2,uint param_3,char param_4)

{
  BOOLEAN BVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  ULONGLONG UVar5;
  longlong *plVar6;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStackY_78;
  if (0xfffff < param_3 - 1) {
  }
  if (*(char *)((ulonglong)(param_3 - 1) + (longlong)param_2) != '\n') {
  }
  uVar3 = thunk_FUN_1805f77d0(param_2,(longlong)param_2 + (ulonglong)param_3,10);
  if (1000 < uVar3) {
  }
  plVar6 = &DAT_180bb2750 + param_1 * 0x86;
  if (param_4 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(&DAT_180bb2758 + param_1 * 0x430));
  }
  else {
    BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)(&DAT_180bb2758 + param_1 * 0x430));
    if (BVar1 == '\0') {
    }
  }
  UVar5 = GetTickCount64();
  if (*plVar6 == 0) {
    if ((((&DAT_180bb2760)[param_1 * 0x218] != 0) &&
        ((ulonglong)(&DAT_180bb2b78)[param_1 * 0x86] <= UVar5)) &&
       (cVar2 = FUN_1800a9a50(plVar6), cVar2 == '\0')) {
      (&DAT_180bb2b78)[param_1 * 0x86] = UVar5 + 1000;
    }
    if (*plVar6 == 0) goto LAB_1800a9d7f;
  }
  if (((1000 < (&DAT_180bb2b70)[param_1 * 0x10c] + uVar3) ||
      (0x100000 < (&DAT_180bb2b74)[param_1 * 0x10c] + param_3)) &&
     (((ulonglong)(&DAT_180bb2b78)[param_1 * 0x86] <= UVar5 &&
      ((uint)(&DAT_180bb2b70)[param_1 * 0x10c] < 0x3e9)))) {
    BVar4 = MoveFileExW(&DAT_180bb2760 + param_1 * 0x218,&DAT_180bb2968 + param_1 * 0x218,1);
    if (BVar4 != 0) {
      CloseHandle((HANDLE)*plVar6);
      *plVar6 = 0;
      cVar2 = FUN_1800a9a50(plVar6);
      if (cVar2 != '\0') goto LAB_1800a9d7f;
    }
    (&DAT_180bb2b78)[param_1 * 0x86] = UVar5 + 1000;
  }
LAB_1800a9d7f:
  if ((((HANDLE)*plVar6 != (HANDLE)0x0) && ((&DAT_180bb2b70)[param_1 * 0x10c] + uVar3 < 0x3e9)) &&
     ((&DAT_180bb2b74)[param_1 * 0x10c] + param_3 < 0x100001)) {
    local_48[0] = 0;
    BVar4 = WriteFile((HANDLE)*plVar6,param_2,param_3,local_48,(LPOVERLAPPED)0x0);
    if ((BVar4 == 0) || (local_48[0] != param_3)) {
      CloseHandle((HANDLE)*plVar6);
      *plVar6 = 0;
      (&DAT_180bb2b78)[param_1 * 0x86] = UVar5 + 1000;
    }
    else {
      (&DAT_180bb2b70)[param_1 * 0x10c] = (&DAT_180bb2b70)[param_1 * 0x10c] + uVar3;
      (&DAT_180bb2b74)[param_1 * 0x10c] = (&DAT_180bb2b74)[param_1 * 0x10c] + local_48[0];
    }
    if ((param_4 != '\0') && ((HANDLE)*plVar6 != (HANDLE)0x0)) {
      FlushFileBuffers((HANDLE)*plVar6);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(&DAT_180bb2758 + param_1 * 0x430));
}




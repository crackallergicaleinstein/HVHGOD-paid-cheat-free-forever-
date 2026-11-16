// FUN_180420290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180420290 */

undefined8 HvhgodUnloadRuntimeV1(void)

{
  char cVar1;
  BOOLEAN BVar2;
  DWORD DVar3;
  int iVar4;
  ULONG UVar5;
  undefined8 uVar6;
  
                    /* 0x420290  1  HvhgodUnloadRuntimeV1 */
  iVar4 = DAT_180c7d888;
  LOCK();
  DAT_180c7d888 = 1;
  UNLOCK();
  if (iVar4 == 0) {
    FUN_18041f290();
    if ((DAT_180c62b88 == (HANDLE)0x0) ||
       (DVar3 = WaitForSingleObject(DAT_180c62b88,15000), DVar3 == 0)) {
      cVar1 = FUN_180174dc0(&DAT_180bb8af0);
      if (cVar1 == '\0') {
        DAT_180c7d888 = 0;
        uVar6 = 0xaa;
      }
      else if (((DAT_180bb8ad0 & 0x10) == 0) && (cVar1 = FUN_18041f3b0(), cVar1 == '\0')) {
        DAT_180c7d888 = 0;
        uVar6 = 0xaa;
      }
      else {
        if (DAT_180c62b88 != (HANDLE)0x0) {
          CloseHandle(DAT_180c62b88);
          DAT_180c62b88 = (HANDLE)0x0;
        }
        if (DAT_180c62b80 != (HANDLE)0x0) {
          CloseHandle(DAT_180c62b80);
          DAT_180c62b80 = (HANDLE)0x0;
        }
        FUN_18041fb10();
        if (DAT_180c62ba8 != (PVOID)0x0) {
          RemoveVectoredExceptionHandler(DAT_180c62ba8);
          DAT_180c62ba8 = (PVOID)0x0;
        }
        FUN_1800e47e0();
        FUN_180001480();
        FUN_18041bd90();
        FUN_18041a290();
        uVar6 = DAT_180c62b90;
        DAT_180bbec8d = 0;
        if (DAT_180c62b98 != (HANDLE)0x0) {
          CloseHandle(DAT_180c62b98);
          DAT_180c62b98 = (HANDLE)0x0;
        }
        iVar4 = thunk_FUN_1805f61a8(uVar6,0,0);
        if (iVar4 == 0) {
          uVar6 = 0x45a;
        }
        else if (((DAT_180c7d890 == (PVOID)0x0) ||
                 (UVar5 = RemoveVectoredExceptionHandler(DAT_180c7d890), UVar5 != 0)) &&
                ((DAT_180c7d890 = (PVOID)0x0, DAT_180c7d8a0 == (PRUNTIME_FUNCTION)0x0 ||
                 (BVar2 = RtlDeleteFunctionTable(DAT_180c7d8a0), BVar2 != '\0')))) {
          DAT_180c7d8a0 = (PRUNTIME_FUNCTION)0x0;
          DAT_180c7d8a8 = 0;
          DAT_180c7d898 = 0;
          DAT_180c7d8b0 = 0;
          uVar6 = 0x48564731;
        }
        else {
          uVar6 = 0xd;
        }
      }
    }
    else {
      DAT_180c7d888 = 0;
      uVar6 = 0x102;
    }
  }
  else {
    uVar6 = 0xaa;
  }
  return uVar6;
}




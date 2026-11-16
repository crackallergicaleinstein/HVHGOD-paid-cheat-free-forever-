// FUN_18041fbb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041fbb0 */

undefined8 FUN_18041fbb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ULONG UVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_180001480();
  FUN_18041b730();
  DAT_180c7dcf0 = 0;
  if ((DAT_180c7d890 != (PVOID)0x0) &&
     (UVar2 = RemoveVectoredExceptionHandler(DAT_180c7d890), UVar2 == 0)) {
    return 0;
  }
  DAT_180c7d890 = (PVOID)0x0;
  if ((DAT_180c7d8a8 != 0) && (cVar1 = FUN_18044ec30(param_1,DAT_180c7d8a8), cVar1 == '\0')) {
    return 0;
  }
  FUN_18041a290();
  iVar3 = thunk_FUN_1805f61a8(param_1,0,0);
  if ((iVar3 == 0) || (cVar1 = FUN_18041d110(), cVar1 == '\0')) {
    return 0;
  }
  DAT_180c62b90 = 0;
  FUN_18041fb10();
  if (DAT_180c62b80 != (HANDLE)0x0) {
    CloseHandle(DAT_180c62b80);
    DAT_180c62b80 = (HANDLE)0x0;
  }
  CloseHandle(DAT_180c62b98);
  DAT_180c62b98 = (HANDLE)0x0;
  DAT_180bbec8d = 0;
  uVar4 = FUN_18041fa90(param_1,param_2);
  return uVar4;
}




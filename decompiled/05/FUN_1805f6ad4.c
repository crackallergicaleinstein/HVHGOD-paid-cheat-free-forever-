// FUN_1805f6ad4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6ad4 */

byte FUN_1805f6ad4(undefined8 *param_1,DWORD *param_2)

{
  HANDLE hHandle;
  byte bVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD local_res8 [2];
  
  hHandle = (HANDLE)*param_1;
  DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar2 == 0xffffffff) {
LAB_1805f6b29:
    bVar1 = 4;
  }
  else {
    if (param_2 != (DWORD *)0x0) {
      BVar3 = GetExitCodeThread(hHandle,local_res8);
      if (BVar3 == 0) goto LAB_1805f6b29;
      *param_2 = local_res8[0];
    }
    BVar3 = CloseHandle(hHandle);
    bVar1 = ~-(BVar3 != 0) & 4;
  }
  return bVar1;
}




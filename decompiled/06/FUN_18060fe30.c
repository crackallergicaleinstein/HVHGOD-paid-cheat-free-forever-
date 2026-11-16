// FUN_18060fe30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060fe30 */

void thunk_FUN_180621380(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180bb26a0,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_18060fcc0(DVar3);
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = uVar4;
  }
  return;
}




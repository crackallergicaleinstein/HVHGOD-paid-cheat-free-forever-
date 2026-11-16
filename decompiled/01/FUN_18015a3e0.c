// FUN_18015a3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a3e0 */

void FUN_18015a3e0(undefined1 (*param_1) [16])

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(1);
  }
  DVar1 = *(DWORD *)(*param_1 + 8);
  DVar2 = GetCurrentThreadId();
  if (DVar1 == DVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  local_18 = *(undefined8 *)*param_1;
  uStack_10 = *(undefined8 *)(*param_1 + 8);
  iVar3 = FUN_1805f6ad4(&local_18,0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(2);
  }
  *param_1 = (undefined1  [16])0x0;
  return;
}




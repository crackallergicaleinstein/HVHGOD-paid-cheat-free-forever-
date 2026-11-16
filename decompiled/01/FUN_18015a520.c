// FUN_18015a520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18015a520(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *local_18;
  undefined8 local_10;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar4 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 2;
    UNLOCK();
    if ((uVar2 & 0xfffffffe) == 2) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_18 = "tier0.dll:g_pMemAlloc";
          local_10 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
      }
    }
  }
  return;
}




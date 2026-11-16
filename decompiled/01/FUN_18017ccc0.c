// FUN_18017ccc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017ccc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_18017ccc0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *local_18;
  undefined8 local_10;
  
  if (param_1 != param_2) {
    FUN_18015a450();
    if (*(int *)(*param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18060ab3c();
    }
    uVar4 = *(undefined8 *)(*param_2 + 8);
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(*param_1 + 8) = uVar4;
    uVar4 = *(undefined8 *)param_2[1];
    *(undefined8 *)param_2[1] = 0;
    piVar5 = *(int **)param_1[1];
    *(undefined8 *)param_1[1] = uVar4;
    if (piVar5 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar5 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 2;
      UNLOCK();
      if ((uVar2 & 0xfffffffe) == 2) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_18 = "tier0.dll:g_pMemAlloc";
            local_10 = 0x15;
            DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar5);
        }
      }
    }
  }
  return param_1;
}




// FUN_1801f2650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f2650 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_1801f2650(undefined1 (*param_1) [16],undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  char *local_48;
  undefined8 local_40;
  int *local_38;
  undefined1 (*local_30) [16];
  
  *param_1 = (undefined1  [16])0x0;
  local_30 = param_1;
  FUN_18017cbd0(param_1 + 1);
  piVar6 = *(int **)param_1[1];
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_38 = piVar6;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  local_48 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28)
  ;
  if (local_48 == (char *)0x0) {
    local_48 = (char *)0x0;
  }
  else {
    local_38 = (int *)0x0;
    *(int **)local_48 = piVar6;
    *(undefined1 (*) [16])(local_48 + 8) = (undefined1  [16])0x0;
    local_48[0x18] = '\0';
    local_48[0x19] = '\0';
    local_48[0x1a] = '\0';
    local_48[0x1b] = '\0';
    local_48[0x1c] = '\0';
    local_48[0x1d] = '\0';
    local_48[0x1e] = '\0';
    local_48[0x1f] = '\0';
    local_48[0x20] = '\0';
    local_48[0x21] = '\0';
    local_48[0x22] = '\0';
    local_48[0x23] = '\0';
    local_48[0x24] = '\0';
    local_48[0x25] = '\0';
    local_48[0x26] = '\0';
    local_48[0x27] = '\0';
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined8 *)(local_48 + 8) = *param_2;
    *(undefined8 *)(local_48 + 0x10) = uVar2;
    *(undefined8 *)(local_48 + 0x18) = uVar3;
    *(undefined8 *)(local_48 + 0x20) = uVar4;
    *(undefined2 *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 7;
    piVar6 = (int *)0x0;
  }
  lVar5 = FUN_18060b000(0,0,FUN_1801f53d0,local_48,0,*param_1 + 8);
  *(longlong *)*param_1 = lVar5;
  if (lVar5 == 0) {
    *(undefined4 *)(*param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_48 = "tier0.dll:g_pMemAlloc";
        local_40 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_48);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar6);
    }
  }
  return param_1;
}




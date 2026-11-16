// FUN_1800e6ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6ec0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_1800e6ec0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  char *local_28;
  undefined8 local_20;
  undefined1 (*local_18) [16];
  
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  local_18 = param_1;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 3;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  pauVar4 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *pauVar4 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)*pauVar4 = *param_2;
  *(undefined8 *)(*pauVar4 + 8) = uVar1;
  *(undefined8 *)pauVar4[1] = uVar2;
  *(undefined8 *)(pauVar4[1] + 8) = uVar3;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 (**) [16])(*param_1 + 8) = pauVar4;
  return param_1;
}




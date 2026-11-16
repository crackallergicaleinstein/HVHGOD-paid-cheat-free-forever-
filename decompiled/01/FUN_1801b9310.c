// FUN_1801b9310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b9310 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b9310(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  FUN_1801409d0(param_1 + 8,*param_1);
  *param_1 = 2;
  lVar1 = param_2[1];
  lVar4 = *param_2;
  local_40 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_68 = (longlong *)0x180827288;
    local_60 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
  }
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  local_40._8_8_ = plVar2;
  local_40._0_8_ = local_30;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  uVar5 = lVar1 - lVar4 >> 5;
  if (uVar5 != 0) {
    if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar3 = FUN_18015bca0(uVar5 * 0x10);
    *plVar2 = lVar3;
    plVar2[1] = lVar3;
    plVar2[2] = uVar5 * 0x10 + lVar3;
    local_58._8_8_ = lVar3;
    local_58._0_8_ = lVar3;
    local_68 = plVar2;
    local_48 = plVar2;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_1800e64d0(lVar3,lVar4);
      lVar3 = lVar3 + 0x10;
      local_58._8_8_ = lVar3;
    }
    plVar2[1] = lVar3;
  }
  *(longlong **)(param_1 + 8) = plVar2;
}




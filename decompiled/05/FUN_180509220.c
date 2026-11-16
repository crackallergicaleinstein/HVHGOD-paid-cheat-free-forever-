// FUN_180509220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509220 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180509220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_1801b7c90();
  }
  uVar6 = *(longlong *)(param_1 + 0x10) - 1;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & uVar6;
  uVar7 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20);
  lVar1 = (uVar7 & uVar6) * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 8)) == 0) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
    }
    uVar5 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
    *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 8)) = uVar5;
  }
  pauVar2 = *(undefined1 (**) [16])
             (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar7) * 8);
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)*pauVar2 = *param_2;
  *(undefined8 *)(*pauVar2 + 8) = uVar5;
  *(undefined8 *)pauVar2[1] = uVar3;
  *(undefined8 *)(pauVar2[1] + 8) = uVar4;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  FUN_18015c010(param_2);
}




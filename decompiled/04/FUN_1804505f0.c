// FUN_1804505f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804505f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804505f0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180bbb178 <= DAT_180bbb188 + 1U) {
    FUN_180450880();
  }
  DAT_180bbb180 = DAT_180bbb180 & DAT_180bbb178 - 1;
  uVar1 = DAT_180bbb180 + DAT_180bbb188;
  lVar2 = (uVar1 & DAT_180bbb178 - 1) * 8;
  if (*(longlong *)(lVar2 + DAT_180bbb170) == 0) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_10 = 0x15;
      local_18 = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
    }
    uVar6 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
    *(undefined8 *)(lVar2 + DAT_180bbb170) = uVar6;
  }
  pauVar3 = *(undefined1 (**) [16])(DAT_180bbb170 + (DAT_180bbb178 - 1 & uVar1) * 8);
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  uVar6 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined8 *)*pauVar3 = *param_2;
  *(undefined8 *)(*pauVar3 + 8) = uVar6;
  *(undefined8 *)pauVar3[1] = uVar4;
  *(undefined8 *)(pauVar3[1] + 8) = uVar5;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined8 *)pauVar3[2] = param_2[4];
  DAT_180bbb188 = DAT_180bbb188 + 1;
  return;
}




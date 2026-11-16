// FUN_180177e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180177e20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180177e20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_18;
  undefined8 local_10;
  
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_1801798f0();
  }
  uVar6 = *(longlong *)(param_1 + 0x10) - 1;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & uVar6;
  uVar7 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
  lVar1 = (uVar6 & uVar7) * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 8)) == 0) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_10 = 0x15;
      local_18 = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
    }
    uVar5 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x70);
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
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  pauVar2[2] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[3] = 0;
  *(undefined8 *)(pauVar2[3] + 8) = 0;
  uVar5 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined8 *)pauVar2[2] = param_2[4];
  *(undefined8 *)(pauVar2[2] + 8) = uVar5;
  *(undefined8 *)pauVar2[3] = uVar3;
  *(undefined8 *)(pauVar2[3] + 8) = uVar4;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  uVar5 = param_2[9];
  *(undefined8 *)pauVar2[4] = param_2[8];
  *(undefined8 *)(pauVar2[4] + 8) = uVar5;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  pauVar2[5] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[6] = 0;
  *(undefined8 *)(pauVar2[6] + 8) = 0;
  uVar5 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  *(undefined8 *)pauVar2[5] = param_2[10];
  *(undefined8 *)(pauVar2[5] + 8) = uVar5;
  *(undefined8 *)pauVar2[6] = uVar3;
  *(undefined8 *)(pauVar2[6] + 8) = uVar4;
  *(undefined2 *)(param_2 + 10) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 7;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}




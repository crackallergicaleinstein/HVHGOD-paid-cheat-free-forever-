// FUN_18045f540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f540 */

void FUN_18045f540(undefined8 param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_180c62c58;
  pauVar1 = *(undefined1 (**) [16])(DAT_180c62c58 + 8);
  if (pauVar1 == *(undefined1 (**) [16])(DAT_180c62c58 + 0x10)) {
    FUN_18045f620();
    return;
  }
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)*pauVar1 = *param_2;
  *(undefined8 *)(*pauVar1 + 8) = uVar2;
  *(undefined8 *)pauVar1[1] = uVar3;
  *(undefined8 *)(pauVar1[1] + 8) = uVar4;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined8 *)pauVar1[2] = param_2[4];
  *(undefined4 *)(pauVar1[2] + 8) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(pauVar1[2] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)pauVar1[3] = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(pauVar1[3] + 4) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined8 *)(pauVar1[3] + 8) = param_2[7];
  uVar2 = param_2[9];
  *(undefined8 *)pauVar1[4] = param_2[8];
  *(undefined8 *)(pauVar1[4] + 8) = uVar2;
  *(undefined4 *)pauVar1[5] = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(pauVar1[5] + 4) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(pauVar1[5] + 8) = *(undefined4 *)(param_2 + 0xb);
  pauVar1[5][0xc] = *(undefined1 *)((longlong)param_2 + 0x5c);
  pauVar1[5][0xd] = *(undefined1 *)((longlong)param_2 + 0x5d);
  pauVar1[5][0xe] = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined4 *)pauVar1[6] = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(pauVar1[6] + 4) = *(undefined4 *)((longlong)param_2 + 100);
  *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x68;
  return;
}




// FUN_18043ea60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ea60 */

void FUN_18043ea60(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x10)) {
    FUN_18043ff10();
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
  uVar2 = param_2[5];
  *(undefined8 *)pauVar1[2] = param_2[4];
  *(undefined8 *)(pauVar1[2] + 8) = uVar2;
  *(undefined4 *)pauVar1[3] = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(pauVar1[3] + 4) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(pauVar1[3] + 8) = *(undefined4 *)(param_2 + 7);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x44);
  *(undefined8 *)(pauVar1[3] + 0xc) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)(pauVar1[4] + 4) = uVar2;
  *(undefined2 *)(pauVar1[4] + 0xc) = *(undefined2 *)((longlong)param_2 + 0x4c);
  pauVar1[4][0xe] = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined4 *)pauVar1[5] = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)(pauVar1[5] + 8) = param_2[0xb];
  *(undefined8 *)pauVar1[6] = param_2[0xc];
  pauVar1[6][8] = *(undefined1 *)(param_2 + 0xd);
  pauVar1[6][9] = *(undefined1 *)((longlong)param_2 + 0x69);
  *(undefined4 *)(pauVar1[6] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)pauVar1[7] = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(pauVar1[7] + 4) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
  return;
}




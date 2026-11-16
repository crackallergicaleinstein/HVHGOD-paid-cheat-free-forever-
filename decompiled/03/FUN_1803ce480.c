// FUN_1803ce480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ce480 */

void FUN_1803ce480(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x10)) {
    FUN_1803ceb90();
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
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  pauVar1[2] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[3] = 0;
  *(undefined8 *)(pauVar1[3] + 8) = 0;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined8 *)pauVar1[2] = param_2[4];
  *(undefined8 *)(pauVar1[2] + 8) = uVar2;
  *(undefined8 *)pauVar1[3] = uVar3;
  *(undefined8 *)(pauVar1[3] + 8) = uVar4;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined4 *)pauVar1[4] = *(undefined4 *)(param_2 + 8);
  pauVar1[4][4] = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined8 *)(pauVar1[4] + 8) = param_2[9];
  *(undefined8 *)pauVar1[5] = param_2[10];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x58;
  return;
}




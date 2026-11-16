// FUN_1801acec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801acec0 */

void FUN_1801acec0(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x10)) {
    FUN_18017bcb0();
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
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}




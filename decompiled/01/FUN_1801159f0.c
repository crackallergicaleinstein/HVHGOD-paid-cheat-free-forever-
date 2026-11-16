// FUN_1801159f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801159f0 */

void FUN_1801159f0(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x10)) {
    FUN_180152020(param_1,pauVar1,param_2);
    return;
  }
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  FUN_18015ba30(pauVar1,*param_2,param_2[1]);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}




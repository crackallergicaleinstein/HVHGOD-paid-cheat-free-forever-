// FUN_180151a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151a70 */

undefined1 (*) [16] FUN_180151a70(undefined1 (*param_1) [16],byte param_2)

{
  undefined1 (*pauVar1) [16];
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(0,&DAT_1806fda58,2);
  pauVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1[1] + 8)) {
    pauVar1 = *(undefined1 (**) [16])*param_1;
  }
  (*pauVar1)[0] = "0123456789ABCDEF"[param_2 >> 4];
  if (*(ulonglong *)(param_1[1] + 8) < 0x10) {
    (*param_1)[1] = "0123456789ABCDEF"[param_2 & 0xf];
    return param_1;
  }
  *(char *)(*(longlong *)*param_1 + 1) = "0123456789ABCDEF"[param_2 & 0xf];
  return param_1;
}




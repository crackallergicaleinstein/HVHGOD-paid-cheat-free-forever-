// FUN_1802e28c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e28c0 */

undefined1 (*) [16] FUN_1802e28c0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
  if (uVar2 != 0) {
    if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18017d0c0(0x16);
    }
    uVar1 = FUN_1805fae9c(0xfde9,param_2,uVar2 & 0xffffffff,0,0);
    if ((int)(uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar1 >> 0x20);
    }
    FUN_180176ba0(param_1,(longlong)(int)uVar1,0);
    pauVar3 = param_1;
    if (7 < *(ulonglong *)(param_1[1] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*param_1;
    }
    uVar2 = FUN_1805fae9c(0xfde9,param_2,uVar2 & 0xffffffff,pauVar3,(int)uVar1);
    if ((int)(uVar2 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar2 >> 0x20);
    }
  }
  return param_1;
}




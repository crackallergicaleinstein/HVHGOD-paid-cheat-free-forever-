// FUN_1801628d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801628d0 */

undefined1 (*) [16] FUN_1801628d0(undefined1 (*param_1) [16],undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
  uVar3 = param_3[1];
  if (uVar3 != 0) {
    if (0x7fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18017d0c0(0x16);
    }
    uVar1 = *param_3;
    uVar2 = FUN_1805fae9c(param_2,uVar1,uVar3 & 0xffffffff,0,0);
    if ((int)(uVar2 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar2 >> 0x20);
    }
    FUN_180176ba0(param_1,(longlong)(int)uVar2,0);
    pauVar4 = param_1;
    if (7 < *(ulonglong *)(param_1[1] + 8)) {
      pauVar4 = *(undefined1 (**) [16])*param_1;
    }
    uVar3 = FUN_1805fae9c(param_2,uVar1,uVar3 & 0xffffffff,pauVar4,(int)uVar2);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar3 >> 0x20);
    }
  }
  return param_1;
}




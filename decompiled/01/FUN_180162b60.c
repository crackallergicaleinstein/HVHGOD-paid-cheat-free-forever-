// FUN_180162b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162b60 */

undefined1 (*) [16] FUN_180162b60(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar3 = param_1[2];
  uVar1 = __std_fs_code_page();
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
  if (uVar3 != 0) {
    if (0x7fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18017d0c0(0x16);
    }
    uVar2 = FUN_1805faee4(uVar1,puVar4,uVar3 & 0xffffffff,0,0);
    if ((int)(uVar2 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar2 >> 0x20);
    }
    FUN_1800f5630(param_2,(longlong)(int)uVar2,0);
    pauVar5 = param_2;
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      pauVar5 = *(undefined1 (**) [16])*param_2;
    }
    uVar3 = FUN_1805faee4(uVar1,puVar4,uVar3 & 0xffffffff,pauVar5,(int)uVar2);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar3 >> 0x20);
    }
  }
  return param_2;
}




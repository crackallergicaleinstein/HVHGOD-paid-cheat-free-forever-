// FUN_1801a4fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a4fb0 */

undefined1 (*) [16] FUN_1801a4fb0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar3 = param_3[1];
  if (uVar3 != 0) {
    if (0x7fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18017d0c0(0x16);
    }
    uVar3 = FUN_1805faee4(0xfde9,*param_3,uVar3,0,0);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar3 >> 0x20);
    }
    uVar1 = *(ulonglong *)param_1[1];
    uVar5 = (ulonglong)(int)uVar3;
    if (uVar1 < uVar5) {
      uVar6 = uVar5 - uVar1;
      uVar2 = *(ulonglong *)(param_1[1] + 8);
      if (uVar2 - uVar1 < uVar6) {
        FUN_1801ba3e0(param_1,uVar6,uVar2,uVar6);
      }
      else {
        *(ulonglong *)param_1[1] = uVar5;
        pauVar4 = param_1;
        if (0xf < uVar2) {
          pauVar4 = *(undefined1 (**) [16])*param_1;
        }
        FUN_18063ab10(*pauVar4 + uVar1,0,uVar6);
        (*pauVar4 + uVar1)[uVar6] = 0;
      }
    }
    else {
      *(ulonglong *)param_1[1] = uVar5;
      pauVar4 = param_1;
      if (0xf < *(ulonglong *)(param_1[1] + 8)) {
        pauVar4 = *(undefined1 (**) [16])*param_1;
      }
      (*pauVar4)[uVar5] = 0;
    }
    pauVar4 = param_1;
    if (0xf < *(ulonglong *)(param_1[1] + 8)) {
      pauVar4 = *(undefined1 (**) [16])*param_1;
    }
    uVar3 = FUN_1805faee4(0xfde9,*param_3,*(undefined4 *)(param_3 + 1),pauVar4,(int)uVar3);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18017cff0(uVar3 >> 0x20);
    }
  }
  return param_1;
}




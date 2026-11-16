// FUN_1802e27f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e27f0 */

undefined1 (*) [16] FUN_1802e27f0(undefined1 (*param_1) [16],longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  uVar3 = 0xf;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  if (param_2 == param_3) {
    (*param_1)[0] = 0;
  }
  else {
    uVar2 = param_3 - param_2;
    if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (0xf < uVar2) {
      uVar3 = uVar2 | 0xf;
      if (uVar3 < 0x8000000000000000) {
        if (uVar3 < 0x16) {
          uVar3 = 0x16;
        }
      }
      else {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = FUN_18015bca0(uVar3 + 1);
      *(undefined8 *)*param_1 = uVar1;
      *(ulonglong *)(param_1[1] + 8) = uVar3;
    }
    pauVar4 = param_1;
    if (0xf < uVar3) {
      pauVar4 = *(undefined1 (**) [16])*param_1;
    }
    FUN_18063aed0(pauVar4,param_2,uVar2);
    *(ulonglong *)param_1[1] = uVar2;
    *(undefined1 *)((longlong)pauVar4 + uVar2) = 0;
  }
  return param_1;
}




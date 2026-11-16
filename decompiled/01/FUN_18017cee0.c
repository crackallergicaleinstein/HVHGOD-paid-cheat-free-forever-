// FUN_18017cee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cee0 */

undefined1 (*) [16] FUN_18017cee0(undefined1 (*param_1) [16],ulonglong param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  undefined2 *puVar5;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (param_2 < 8) {
    *(ulonglong *)param_1[1] = param_2;
    *(undefined8 *)(param_1[1] + 8) = 7;
    if (param_2 != 0) {
      pauVar4 = param_1;
      for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)*pauVar4 = param_3;
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
      }
    }
    *(undefined2 *)(*param_1 + param_2 * 2) = 0;
  }
  else {
    uVar2 = param_2 | 7;
    if (uVar2 < 0x7fffffffffffffff) {
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      if (0x7fffffffffffffff < uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bc80();
      }
      lVar3 = uVar2 * 2 + 2;
    }
    else {
      lVar3 = -2;
      uVar2 = 0x7ffffffffffffffe;
    }
    puVar1 = (undefined2 *)FUN_18015bca0(lVar3);
    *(undefined2 **)*param_1 = puVar1;
    *(ulonglong *)param_1[1] = param_2;
    *(ulonglong *)(param_1[1] + 8) = uVar2;
    puVar5 = puVar1;
    for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = param_3;
      puVar5 = puVar5 + 1;
    }
    puVar1[param_2] = 0;
  }
  return param_1;
}




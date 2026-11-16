// FUN_18050a310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050a310 */

undefined1 (*) [16] FUN_18050a310(undefined1 (*param_1) [16],longlong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *param_2;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)(uVar5 + lVar4) != '\0');
  if (((2 < uVar5) &&
      (lVar1 = thunk_FUN_1805f9970(lVar4,uVar5 + lVar4,&DAT_1807c6e34,3,param_1),
      lVar1 != uVar5 + lVar4)) && (uVar2 = lVar1 - lVar4, uVar2 != 0xffffffffffffffff)) {
    if (param_3 == 2) {
      if (uVar5 < uVar2) {
        uVar2 = uVar5;
      }
      goto LAB_18050a3e5;
    }
    if (param_3 == 3) {
      uVar3 = uVar2 + 3;
      if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_18015ac40();
      }
      lVar4 = uVar3 + lVar4;
      uVar2 = 0xffffffffffffffff;
      if (uVar5 - uVar3 != 0xffffffffffffffff) {
        uVar2 = uVar5 - uVar3;
      }
      goto LAB_18050a3e5;
    }
  }
  uVar2 = uVar5;
LAB_18050a3e5:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(param_1,lVar4,uVar2);
  return param_1;
}




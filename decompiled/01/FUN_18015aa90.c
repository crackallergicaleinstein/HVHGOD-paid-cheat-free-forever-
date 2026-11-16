// FUN_18015aa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015aa90 */

undefined8 FUN_18015aa90(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = param_2 + 2;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (0x7fffffffffffffffU - *plVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18015a9c0(param_1,uVar2,param_3,param_2,*plVar1,param_3,uVar2);
  return param_1;
}




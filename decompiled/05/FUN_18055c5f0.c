// FUN_18055c5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c5f0 */

void FUN_18055c5f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_18048a250("Walk Speed",lVar1 + 0xa20,0x3f800000,0x42c80000,"%.0f%%",0x3f800000,1,
                &DAT_18082a274);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}




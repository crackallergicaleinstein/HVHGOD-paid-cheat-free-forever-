// FUN_18055ac00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055ac00 */

void FUN_18055ac00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_18048a250("Camera FOV",lVar1 + 0x68,0x42700000,0x43160000,"%.0f deg",0x3f800000,1,
                &DAT_18082a248);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}




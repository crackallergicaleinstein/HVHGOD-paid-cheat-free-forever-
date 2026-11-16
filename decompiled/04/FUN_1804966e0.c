// FUN_1804966e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804966e0 */

void FUN_1804966e0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar2 = 0x3f800000;
  FUN_18048a250("Horizontal",lVar1 + 0x14,0,0x42c80000,"%.0f%%",0x3f800000,1,0);
  FUN_18048a250("Vertical",lVar1 + 0x18,0,0x42c80000,"%.0f%%",uVar2,1,0);
  FUN_180488f10();
  return;
}




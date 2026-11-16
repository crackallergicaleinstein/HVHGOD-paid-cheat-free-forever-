// FUN_1804959f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804959f0 */

void FUN_1804959f0(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar1 = *param_1;
  FUN_180488c60();
  pcVar2 = "%.0f%%";
  FUN_18048a250("Double Tap",lVar1 + 0x10,0,0x42c80000,"%.0f%%",CONCAT44(uVar3,0x3f800000),1,0);
  FUN_1804898a0("Strict",lVar1 + 0x14,0,1,(ulonglong)pcVar2 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}




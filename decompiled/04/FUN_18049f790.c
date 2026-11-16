// FUN_18049f790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f790 */

void FUN_18049f790(longlong *param_1)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489fc0(&DAT_180858aec,lVar1 + 0xe9c,1,0);
  uVar2 = 0;
  FUN_1804898a0("Show Bounces",lVar1 + 0xeac,0,1,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0);
  FUN_18048a250("Thickness",lVar1 + 0xeb0,0x3f800000,0x40a00000,"%.0f px",CONCAT44(uVar2,0x3f800000)
                ,1,0);
  FUN_180488f10();
  return;
}




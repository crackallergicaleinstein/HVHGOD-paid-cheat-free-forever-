// FUN_180495e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180495e40 */

void FUN_180495e40(longlong *param_1)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffffc8;
  char *pcVar2;
  undefined4 uVar3;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar3 = 0;
  FUN_1804898a0("Enabled",lVar1 + 0x250,0,1,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0);
  pcVar2 = "%.0f%%";
  FUN_18048a250("Speed",lVar1 + 0x254,0,0x42c80000,"%.0f%%",CONCAT44(uVar3,0x3f800000),
                *(undefined1 *)(lVar1 + 0x250),0);
  FUN_1804898a0("Return To Base",lVar1 + 600,0,*(undefined1 *)(lVar1 + 0x250),
                (ulonglong)pcVar2 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}




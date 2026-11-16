// FUN_18017b8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b8c0 */

void FUN_18017b8c0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_18015bca0(0x48);
  uVar2 = FUN_18015bda0(0x48,uVar2);
  FUN_18017bc00(uVar2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




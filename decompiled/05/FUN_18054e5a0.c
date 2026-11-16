// FUN_18054e5a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e5a0 */

void FUN_18054e5a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_180516db0("Start Position Color",lVar1 + 0x68,&DAT_18082a244,1);
  FUN_180516db0("Return Path Color",lVar1 + 0x6c,&DAT_18082ac78,1);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar2);
  FUN_180488f10();
  return;
}




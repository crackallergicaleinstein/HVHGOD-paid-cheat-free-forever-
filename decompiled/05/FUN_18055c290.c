// FUN_18055c290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c290 */

void FUN_18055c290(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  cVar3 = FUN_1804898a0("Predict Landings",lVar1 + 0x68,&DAT_18082a278,1,0,0);
  if (cVar3 != '\0') {
    *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar1 + 0x68);
  }
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}




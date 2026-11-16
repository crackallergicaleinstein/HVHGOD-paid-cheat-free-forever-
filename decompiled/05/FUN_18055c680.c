// FUN_18055c680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c680 */

void FUN_18055c680(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  cVar3 = FUN_1804898a0("Show Contact Route",lVar1 + 0x818,&DAT_180829dc0,1,0,0);
  if (cVar3 != '\0') {
    *(undefined1 *)(lVar1 + 0x828) = *(undefined1 *)(lVar1 + 0x818);
  }
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}




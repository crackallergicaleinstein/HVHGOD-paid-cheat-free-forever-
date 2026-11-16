// FUN_180518ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180518ec0 */

void FUN_180518ec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(char *)*param_1 != '\0') {
    lVar2 = param_1[1];
    FUN_180488c60();
    FUN_180516ec0("Force Shot on Ground",lVar2 + 0x4b8);
    FUN_180516ec0("Force Shot in Air",lVar2 + 0x450);
    FUN_180488f10();
  }
  cVar1 = *(char *)*param_1;
  lVar2 = FUN_180509800(&DAT_180c7e1f0);
  uVar3 = 0x83;
  if (cVar1 != '\0') {
    uVar3 = 100;
  }
  lVar4 = 0x524;
  if (cVar1 == '\0') {
    lVar4 = 0x528;
  }
  FUN_18054ce10(lVar2,cVar1,lVar4 + lVar2,param_4,uVar3);
  return;
}




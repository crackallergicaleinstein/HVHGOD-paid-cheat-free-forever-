// FUN_1806462fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806462fc */

void FUN_1806462fc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar4 = param_2;
  cVar3 = FUN_180164040(lVar1);
  if (cVar3 == '\0') {
    lVar4 = FUN_18017ce60(param_2 + 0x20);
    FUN_180163cd0(lVar1,lVar4);
    thunk_FUN_1805fd358(param_2 + 0x20);
  }
  uVar2 = FUN_1800efea0(lVar1 + 0x10);
  FUN_180163ab0(uVar2);
  thunk_FUN_1805fd358(lVar4 + 0x20);
  return;
}




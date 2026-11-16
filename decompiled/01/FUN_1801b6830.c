// FUN_1801b6830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6830 */

void FUN_1801b6830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 0x68;
    do {
      FUN_18015c010(lVar2 + 0x20);
      FUN_18015c010(lVar2);
      FUN_18015c010(lVar2 + -0x20);
      FUN_18015c010(lVar2 + -0x40);
      FUN_18015c010(lVar2 + -0x60);
      lVar1 = lVar2 + 0x50;
      lVar2 = lVar2 + 0xb8;
    } while (lVar1 != param_2);
  }
  return;
}




// FUN_1801f5ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5ae0 */

void FUN_1801f5ae0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 0x80;
    do {
      FUN_18015b930(lVar2 + 0x20);
      FUN_18015b930(lVar2);
      FUN_18015c010(lVar2 + -0x20);
      FUN_18015c010(lVar2 + -0x40);
      FUN_18015c010(lVar2 + -0x60);
      FUN_18015c010(lVar2 + -0x80);
      lVar1 = lVar2 + 0x58;
      lVar2 = lVar2 + 0xd8;
    } while (lVar1 != param_2);
  }
  return;
}




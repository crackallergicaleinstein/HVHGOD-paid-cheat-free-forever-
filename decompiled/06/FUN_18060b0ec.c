// FUN_18060b0ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b0ec */

/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_1806220ac(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_1808d70e0 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18060b137;
    FUN_18060a808(3,0x40000015);
  }
  *(undefined8 *)(puVar4 + -8) = 0x18060b141;
  FUN_18061a074(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




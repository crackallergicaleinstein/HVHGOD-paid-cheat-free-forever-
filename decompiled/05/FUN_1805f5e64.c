// FUN_1805f5e64 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5e64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805f5e64(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1805f5e8f;
  FUN_1805f5f04(&DAT_180bace70);
  _DAT_180bacde0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180bacf08 = puVar3 + 0x30;
  _DAT_180bacdd0 = 0xc0000409;
  _DAT_180bacdd4 = 1;
  _DAT_180bacde8 = 1;
  DAT_180bacdf0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x1805f5efb;
  DAT_180bacf68 = _DAT_180bacde0;
  __raise_securityfailure(&PTR_DAT_180689890);
  return;
}




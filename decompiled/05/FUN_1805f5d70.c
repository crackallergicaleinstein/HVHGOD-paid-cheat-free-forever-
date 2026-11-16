// FUN_1805f5d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805f5d70(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_38;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1805f5d9b;
  FUN_1805f5f74(&DAT_180bace70);
  _DAT_180bacde0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180bacf08 = puVar3 + 0x40;
  _DAT_180bacef0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180bacdd0 = 0xc0000409;
  _DAT_180bacdd4 = 1;
  _DAT_180bacde8 = 1;
  DAT_180bacdf0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_1808d5f00;
  *(undefined8 *)(puVar3 + 0x28) = DAT_1808d5f40;
  *(undefined8 *)(puVar3 + -8) = 0x1805f5e3d;
  DAT_180bacf68 = _DAT_180bacde0;
  __raise_securityfailure(&PTR_DAT_180689890);
  return;
}




// FUN_1801ce280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ce280 */

undefined8 * FUN_1801ce280(void)

{
  size_t _Size;
  size_t sVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  
  puVar3 = DAT_180bb8b20;
  uVar2 = DAT_1808da990;
  sVar1 = DAT_1808da988;
  puVar5 = DAT_1808da978;
  for (puVar6 = DAT_180bb8b18; puVar6 != puVar3; puVar6 = puVar6 + 0x2d) {
    _Size = puVar6[2];
    _Buf2 = &DAT_1808da978;
    if (0xf < uVar2) {
      _Buf2 = puVar5;
    }
    _Buf1 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      _Buf1 = (undefined8 *)*puVar6;
    }
    if ((_Size == sVar1) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0))))
    break;
  }
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != puVar3) {
    puVar5 = puVar6;
  }
  return puVar5;
}




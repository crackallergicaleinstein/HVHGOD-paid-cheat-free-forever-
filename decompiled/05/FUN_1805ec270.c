// FUN_1805ec270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ec270 */

void FUN_1805ec270(void)

{
  longlong lVar1;
  
  lVar1 = _malloc_base();
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x6830) = 5;
  *(undefined8 *)(lVar1 + 0x686c) = 0;
  *(undefined8 *)(lVar1 + 0x6810) = 0;
  *(undefined8 *)(lVar1 + 0x6818) = 0;
  *(undefined8 *)(lVar1 + 0x6820) = 0;
  *(undefined8 *)(lVar1 + 0x6828) = 0;
  *(undefined4 *)(lVar1 + 0x280c) = 0xc;
  return;
}




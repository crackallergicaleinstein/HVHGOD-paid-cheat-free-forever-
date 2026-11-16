// FUN_1805efe80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805efe80 */

void FUN_1805efe80(void)

{
  longlong lVar1;
  
  lVar1 = _malloc_base();
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x5430) = 5;
  *(undefined8 *)(lVar1 + 0x5454) = 0;
  *(undefined8 *)(lVar1 + 0x5410) = 0;
  *(undefined8 *)(lVar1 + 0x5418) = 0;
  *(undefined8 *)(lVar1 + 0x5420) = 0;
  *(undefined8 *)(lVar1 + 0x5428) = 0;
  *(undefined4 *)(lVar1 + 0x140c) = 0xc;
  return;
}




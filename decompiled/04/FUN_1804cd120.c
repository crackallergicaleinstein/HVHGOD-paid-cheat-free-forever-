// FUN_1804cd120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd120 */

void FUN_1804cd120(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180bb8ae8;
  if ((*(char *)(DAT_180bb8ae8 + 0x2268) != '\0') && ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 2) != 0))
  {
    FUN_1804cf3e0();
  }
  *(undefined1 *)(lVar1 + 0x2268) = 0;
  *(undefined8 *)(lVar1 + 0x2284) = 0;
  *(undefined8 *)(lVar1 + 0x2278) = 0;
  *(undefined4 *)(lVar1 + 0x2280) = 0;
  *(undefined8 *)(lVar1 + 0x2290) = 0;
  *(undefined8 *)(lVar1 + 0x2298) = 0;
  *(undefined8 *)(lVar1 + 0x22a0) = 0;
  *(undefined8 *)(lVar1 + 0x22a8) = 0;
  *(undefined2 *)(lVar1 + 0x22b0) = 0;
  *(undefined4 *)(lVar1 + 0x228c) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x22b2) = 0;
  *(undefined4 *)(lVar1 + 0x22e0) = 0;
  *(undefined8 *)(lVar1 + 0x22ec) = 0;
  *(undefined4 *)(lVar1 + 0x22e8) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x22f4) = 0xffffffff;
  FUN_1804aeee0(lVar1 + 0x2300);
  *(undefined1 (*) [16])(lVar1 + 0x2310) = (undefined1  [16])0x0;
  return;
}




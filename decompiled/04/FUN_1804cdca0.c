// FUN_1804cdca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cdca0 */

void FUN_1804cdca0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180bb8ae8;
  if (*(char *)(DAT_180bb8ae8 + 0x2840) == '\0') {
    lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    *(undefined1 *)(DAT_180bb8ae8 + 0x154e) = 1;
    *(undefined1 *)(lVar2 + 0x2840) = 1;
    *(undefined4 *)(lVar2 + 0x2844) = 8;
    *(longlong *)(lVar2 + 0x2848) = lVar1;
    *(undefined8 *)(lVar2 + 0x2870) = 0;
    *(undefined8 *)(lVar2 + 0x2868) = 0;
    *(undefined4 *)(lVar2 + 0x287c) = *(undefined4 *)(lVar1 + 0x1a0);
    *(undefined4 *)(lVar2 + 0x2880) = 0;
    *(undefined4 *)(lVar2 + 0x2878) = 0x7f7fffff;
    *(undefined1 *)(lVar2 + 0x2841) = 1;
  }
  return;
}




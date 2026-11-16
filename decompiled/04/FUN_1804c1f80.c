// FUN_1804c1f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1f80 */

void FUN_1804c1f80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_180bb8ae8;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 4) != 0) {
    FUN_1804cf3e0("SetKeyboardFocusHere(%d) in window \"%s\"\n",0,*(undefined8 *)(lVar1 + 8));
  }
  if ((*(char *)(lVar2 + 0x2268) == '\0') && (*(longlong *)(lVar2 + 0x14f0) == 0)) {
    FUN_1804c8e60(lVar1);
    uVar3 = 3;
    if (*(char *)(lVar1 + 0xd3) != '\0') {
      uVar3 = 0x21;
    }
    FUN_1804c9b10(0xffffffff,3,0x5600,uVar3);
    *(undefined4 *)(lVar2 + 0x2120) = 1;
    *(undefined4 *)(lVar2 + 0x2124) = 1;
    return;
  }
  if ((*(byte *)(lVar2 + 0x28cc) & 4) != 0) {
    FUN_1804cf3e0("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}




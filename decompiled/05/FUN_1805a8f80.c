// FUN_1805a8f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a8f80 */

void FUN_1805a8f80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_180572de0(param_1[8]);
  iVar3 = FUN_180577620(*(undefined8 *)(lVar1 + 0x2b8),param_2);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x80);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    param_1[3] = *(longlong *)(lVar1 + 0x18);
    param_1[4] = lVar2;
    param_1[5] = *(longlong *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}




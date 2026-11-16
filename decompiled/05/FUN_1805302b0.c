// FUN_1805302b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805302b0 */

void FUN_1805302b0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar3 = DAT_180c62ca8;
  if (DAT_180c62ca8 == 0) {
    lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x11d0);
  }
  local_18 = *(undefined8 *)(DAT_180bb8ae8 + 0x11d0);
  local_10 = *(undefined4 *)(DAT_180bb8ae8 + 0x11e4);
  local_c = *(undefined4 *)(DAT_180bb8ae8 + 0x11e0);
  FUN_1804d05a0(DAT_180bb8ae8 + 0x1fb8,&local_18);
  FUN_1804c23b0(lVar3,0x413b3333,0);
  FUN_1804b2a10(0,DAT_1808da474);
  FUN_1804c6660(DAT_180b0a41c * 9.0);
  FUN_1804f4880(&DAT_1806bbe98,param_1);
  FUN_1804c66c0(DAT_180b0a41c * 9.0);
  FUN_1804b2b70(1);
  lVar3 = DAT_180bb8ae8;
  lVar2 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fb8);
  if (*(int *)(DAT_180bb8ae8 + 0x1fb8) < 1) {
    FUN_1804c5a40("Calling PopFont() too many times!");
    return;
  }
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x1fc0);
  FUN_1804c23b0(*(undefined8 *)(lVar1 + -0x10 + lVar2 * 0x10),
                *(undefined4 *)(lVar1 + -8 + lVar2 * 0x10),
                *(undefined4 *)(lVar1 + -4 + lVar2 * 0x10));
  *(int *)(lVar3 + 0x1fb8) = *(int *)(lVar3 + 0x1fb8) + -1;
  return;
}




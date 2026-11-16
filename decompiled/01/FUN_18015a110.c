// FUN_18015a110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a110 */

longlong FUN_18015a110(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((param_2 < *(ulonglong *)(lVar2 + 0x18)) &&
     (lVar1 = *(longlong *)(param_2 * 8 + *(longlong *)(lVar2 + 0x10)), lVar1 != 0)) {
    return lVar1;
  }
  if ((*(char *)(lVar2 + 0x24) == '\0') ||
     (lVar2 = FUN_1805fbf7c(), *(ulonglong *)(lVar2 + 0x18) <= param_2)) {
    return 0;
  }
  return *(longlong *)(param_2 * 8 + *(longlong *)(lVar2 + 0x10));
}




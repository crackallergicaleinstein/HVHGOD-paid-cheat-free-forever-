// FUN_1803c3340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c3340 */

longlong FUN_1803c3340(longlong param_1)

{
  ulonglong uVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  
  if (((((*(char *)(param_1 + 0xdc1) != '\0') ||
        (((lVar3 = *(longlong *)(param_1 + 0xb98), lVar3 != 0 &&
          (UVar2 = GetTickCount64(), UVar2 - lVar3 < 1000)) || (DAT_180ccaa20 == '\0')))) ||
       (lVar3 = FUN_1803f5070(param_1 + 0x980,*(undefined4 *)(param_1 + 0xdc8),
                              *(undefined4 *)(param_1 + 0xdcc)), lVar3 != 0)) &&
      (((*(longlong *)(param_1 + 0xe68) == 0 ||
        (lVar3 = FUN_1803f5070(param_1 + 0x980,*(undefined4 *)(param_1 + 0xdc8),
                               *(undefined4 *)(param_1 + 0xdcc)), lVar3 != 0)) &&
       (*(char *)(param_1 + 0x10d4) != '\0')))) &&
     ((uVar1 = *(ulonglong *)(param_1 + 0x10c8), UVar2 = GetTickCount64(), UVar2 < uVar1 ||
      ((*(char *)(param_1 + 0xdc1) != '\0' && ((DAT_180ccaa20 != '\0' || (0.001 < DAT_180ccaa28)))))
      ))) {
    if (*(char *)(param_1 + 0xdc1) == '\0') {
      if ((*(char *)(param_1 + 0xec2) != '\0') && (*(longlong *)(param_1 + 0x1068) == 0)) {
        lVar3 = FUN_1803f5070(param_1 + 0x980,*(undefined4 *)(param_1 + 0xdc8),
                              *(undefined4 *)(param_1 + 0xdcc));
        return lVar3;
      }
    }
    else if (((*(char *)(param_1 + 0x1006) != '\0') && (*(char *)(param_1 + 0x978) != '\0')) &&
            (*(longlong *)(param_1 + 0x910) != 0)) {
      return *(longlong *)(param_1 + 0x910);
    }
    return *(longlong *)(param_1 + 0x1068);
  }
  return 0;
}




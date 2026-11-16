// FUN_18043a260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a260 */

ulonglong FUN_18043a260(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1a8);
  lVar3 = *(longlong *)(param_1 + 400);
  uVar4 = *(ulonglong *)(param_1 + 0x180);
  uVar5 = *(ulonglong *)(lVar3 + 8 + (uVar2 & 0xacd58afcaaf42074) * 0x10);
  if (uVar5 == uVar4) {
LAB_18043a2b1:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(uVar5 + 0x10);
    while (iVar1 != 0x11) {
      if (uVar5 == *(ulonglong *)(lVar3 + (uVar2 & 0xacd58afcaaf42074) * 0x10)) goto LAB_18043a2b1;
      uVar5 = *(ulonglong *)(uVar5 + 8);
      iVar1 = *(int *)(uVar5 + 0x10);
    }
  }
  if (((uVar5 == 0) || (uVar5 == uVar4)) || (*(char *)(uVar5 + 0x14) == '\0')) {
    uVar5 = *(ulonglong *)(lVar3 + 8 + (uVar2 & 0x8b1b51b09e604377) * 0x10);
    if (uVar5 == uVar4) {
LAB_18043a304:
      uVar5 = 0;
    }
    else {
      iVar1 = *(int *)(uVar5 + 0x10);
      while (iVar1 != 0xa2) {
        if (uVar5 == *(ulonglong *)(lVar3 + (uVar2 & 0x8b1b51b09e604377) * 0x10))
        goto LAB_18043a304;
        uVar5 = *(ulonglong *)(uVar5 + 8);
        iVar1 = *(int *)(uVar5 + 0x10);
      }
    }
    if (((uVar5 == 0) || (uVar5 == uVar4)) || (*(char *)(uVar5 + 0x14) == '\0')) {
      uVar5 = *(ulonglong *)(lVar3 + 8 + (uVar2 & 0xeb20a5a8482a86e6) * 0x10);
      uVar6 = 0;
      if (uVar5 != uVar4) {
        iVar1 = *(int *)(uVar5 + 0x10);
        while (iVar1 != 0xa3) {
          if (uVar5 == *(ulonglong *)(lVar3 + (uVar2 & 0xeb20a5a8482a86e6) * 0x10))
          goto LAB_18043a355;
          uVar5 = *(ulonglong *)(uVar5 + 8);
          iVar1 = *(int *)(uVar5 + 0x10);
        }
        uVar6 = uVar5;
      }
LAB_18043a355:
      if (((uVar6 == 0) || (uVar6 == uVar4)) || (*(char *)(uVar6 + 0x14) == '\0')) {
        return uVar5 & 0xffffffffffffff00;
      }
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}




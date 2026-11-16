// FUN_1806113a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806113a0 */

undefined8 FUN_1806113a0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (DAT_180bb1c40 == 0) {
    DAT_180bb1c40 = 0x200;
  }
  else if (DAT_180bb1c40 < 3) {
    DAT_180bb1c40 = 3;
  }
  DAT_180bb1c48 = _calloc_base((longlong)DAT_180bb1c40,8);
  FUN_180621380(0);
  if (DAT_180bb1c48 == 0) {
    DAT_180bb1c40 = 3;
    DAT_180bb1c48 = _calloc_base(3,8);
    FUN_180621380(0);
    if (DAT_180bb1c48 == 0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = &DAT_1808d7118;
  puVar5 = &DAT_1808d7100;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + DAT_180bb1c48) = puVar5;
    if (*(longlong *)((&DAT_180bb2130)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}




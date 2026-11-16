// FUN_18043b470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b470 */

void FUN_18043b470(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = FUN_180439770();
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x478) != *(longlong *)(lVar1 + 0x480)) {
    lVar2 = *(longlong *)(lVar1 + 0x480) + -0x78;
  }
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x38);
    if (0.0 < fVar3) {
      lVar1 = FUN_180439770();
      *(float *)(lVar2 + 0x34) = fVar3 + *(float *)(lVar1 + 500) + *(float *)(lVar2 + 0x34);
    }
    lVar1 = FUN_180439770();
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x1e8);
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  return;
}




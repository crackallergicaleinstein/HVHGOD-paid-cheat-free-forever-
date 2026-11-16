// FUN_180601d18 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601d18 */

void FUN_180601d18(void)

{
  double dVar1;
  undefined1 in_XMM0 [16];
  uint uVar2;
  
  uVar2 = in_XMM0._4_4_;
  dVar1 = in_XMM0._0_8_;
  if (0.0 <= dVar1) {
    if (dVar1 < 0.5) {
      FUN_18061db20();
    }
    else {
      if (dVar1 < 1.0) {
        uVar2 = uVar2 ^ 0x80000000;
      }
      dVar1 = (double)FUN_18061ccf0();
      FUN_18061ccf0(dVar1 * 0.5);
      dVar1 = (double)CONCAT44(uVar2,in_XMM0._0_4_) - dVar1;
      if (0.5 < dVar1) {
        dVar1 = 1.0 - dVar1;
      }
      if (dVar1 != 0.5) {
        FUN_18061db20();
      }
    }
  }
  else {
    FUN_180601d18();
  }
  return;
}




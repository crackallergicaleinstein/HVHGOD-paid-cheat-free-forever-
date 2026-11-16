// FUN_18043b3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b3e0 */

void FUN_18043b3e0(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180439770();
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x478) != *(longlong *)(lVar1 + 0x480)) {
    lVar2 = *(longlong *)(lVar1 + 0x480) + -0x78;
  }
  if ((lVar2 != 0) && (0.0 < *(float *)(lVar2 + 0x38))) {
    if (param_1 == 0.0) {
      lVar1 = FUN_180439770();
      param_1 = *(float *)(lVar1 + 0x1f0);
    }
    *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x3c) + param_1;
    *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  return;
}




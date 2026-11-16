// FUN_180517cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517cf0 */

void FUN_180517cf0(undefined8 *param_1)

{
  if (param_1 != &DAT_1808e6650) {
    FUN_18015c010();
    DAT_1808e6650 = *param_1;
    uRam00000001808e6658 = param_1[1];
    DAT_1808e6660 = param_1[2];
    DAT_1808e6668 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  FUN_18015c010(param_1);
  return;
}




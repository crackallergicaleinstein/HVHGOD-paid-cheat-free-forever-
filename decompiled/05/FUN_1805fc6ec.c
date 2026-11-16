// FUN_1805fc6ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc6ec */

void FUN_1805fc6ec(undefined8 *param_1)

{
  if ((PTP_WORK)*param_1 != (PTP_WORK)0x0) {
    CloseThreadpoolWork((PTP_WORK)*param_1);
    *param_1 = 0;
  }
  return;
}




// FUN_180474820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474820 */

undefined4 FUN_180474820(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  if (DAT_180b909b0 == 0) {
    return *(undefined4 *)(&DAT_180798058 + (ulonglong)(byte)(&DAT_18078ace0)[uVar1 * 0x18] * 0x10);
  }
  if ((ulonglong)
      ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18) <= uVar1)
  {
                    /* WARNING: Subroutine does not return */
    FUN_18047c010();
  }
  return *(undefined4 *)
          (&DAT_180798058 +
          (ulonglong)*(byte *)(*(longlong *)(DAT_180b909b0 + 0x40) + 0x10 + uVar1 * 0x18) * 0x10);
}




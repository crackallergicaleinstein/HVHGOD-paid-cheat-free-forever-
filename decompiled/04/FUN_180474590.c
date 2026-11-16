// FUN_180474590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474590 */

void FUN_180474590(int param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  longlong lVar6;
  undefined1 local_18 [16];
  
  uVar4 = (ulonglong)*param_2;
  if (DAT_180b909b0 == 0) {
    ppuVar5 = &PTR_s_Glock_18_180797be0 + uVar4 * 2;
  }
  else {
    if ((ulonglong)(*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
        <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18047c010();
    }
    ppuVar5 = (undefined **)(uVar4 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
  }
  if ((*(char *)(ppuVar5 + 1) == '\0') || ((byte)(*(char *)(ppuVar5 + 1) - 1U) < 3)) {
    sVar1 = param_2[1];
    if ((*(short *)((longlong)ppuVar5 + 10) <= sVar1) &&
       ((((int)sVar1 <
          (int)*(short *)((longlong)ppuVar5 + 0xc) + (int)*(short *)((longlong)ppuVar5 + 10) &&
         (DAT_180b909b0 != 0)) && (-1 < sVar1)))) {
      if (((int)sVar1 <
           (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68)
          ) && (lVar6 = *(longlong *)(DAT_180b909b0 + 0x58) + (longlong)sVar1 * 0x68, lVar6 != 0)) {
        uVar2 = *(undefined4 *)(lVar6 + 4);
        plVar3 = (longlong *)FUN_18047bde0(&DAT_180bbb190 + (longlong)param_1 * 0x40,local_18);
        *(undefined4 *)(*plVar3 + 0x14) = uVar2;
      }
    }
  }
  return;
}




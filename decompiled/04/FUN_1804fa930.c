// FUN_1804fa930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fa930 */

void FUN_1804fa930(longlong param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  
  sVar3 = *(short *)(param_1 + 0xa18);
  if (0 < sVar3) {
    piVar4 = (int *)(param_1 + 0xc);
    if (-1 < *(int *)(param_1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) - iVar1;
      FUN_18063aed0(param_1 + 0x630,(longlong)iVar1 + 0x630 + param_1,
                    (longlong)*(int *)(param_1 + 0xa1c));
      sVar3 = *(short *)(param_1 + 0xa18);
      iVar2 = 0;
      if (0 < sVar3) {
        do {
          if (-1 < *piVar4) {
            *piVar4 = *piVar4 - iVar1;
          }
          sVar3 = *(short *)(param_1 + 0xa18);
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 4;
        } while (iVar2 < sVar3);
      }
    }
    *(short *)(param_1 + 0xa18) = sVar3 + -1;
    FUN_18063aed0(param_1,param_1 + 0x10,(longlong)(short)(sVar3 + -1) << 4);
  }
  return;
}




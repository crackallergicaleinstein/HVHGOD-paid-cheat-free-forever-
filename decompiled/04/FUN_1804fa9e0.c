// FUN_1804fa9e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fa9e0 */

longlong FUN_1804fa9e0(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  psVar1 = (short *)(param_1 + 0xa18);
  *(undefined2 *)(param_1 + 0xa1a) = 99;
  *(undefined4 *)(param_1 + 0xa20) = 999;
  if (*psVar1 == 99) {
    FUN_1804fa930();
  }
  if (999 < param_3) {
    *psVar1 = 0;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xa1c);
  while (999 < iVar4 + param_3) {
    sVar3 = *psVar1;
    if (0 < sVar3) {
      piVar6 = (int *)(param_1 + 0xc);
      if (-1 < *(int *)(param_1 + 0xc)) {
        iVar2 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0xa1c) = iVar4 - iVar2;
        FUN_18063aed0(param_1 + 0x630,param_1 + 0x630 + (longlong)iVar2,(longlong)(iVar4 - iVar2));
        sVar3 = *psVar1;
        iVar4 = 0;
        if (0 < sVar3) {
          do {
            if (-1 < *piVar6) {
              *piVar6 = *piVar6 - iVar2;
            }
            sVar3 = *psVar1;
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 4;
          } while (iVar4 < sVar3);
        }
      }
      *psVar1 = sVar3 + -1;
      FUN_18063aed0(param_1,param_1 + 0x10,(longlong)(short)(sVar3 + -1) << 4);
    }
    iVar4 = *(int *)(param_1 + 0xa1c);
  }
  sVar3 = *psVar1;
  *(short *)(param_1 + 0xa18) = sVar3 + 1;
  puVar5 = (undefined4 *)((longlong)sVar3 * 0x10 + param_1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
    puVar5[1] = param_3;
    puVar5[2] = param_4;
    if (param_3 != 0) {
      puVar5[3] = *(undefined4 *)(param_1 + 0xa1c);
      *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + param_3;
      return (longlong)(int)puVar5[3] + 0x630 + param_1;
    }
    puVar5[3] = 0xffffffff;
  }
  return 0;
}




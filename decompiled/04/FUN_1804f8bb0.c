// FUN_1804f8bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8bb0 */

uint FUN_1804f8bb0(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 < 1) {
LAB_1804f8c30:
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar5 = (longlong)param_2 + uVar2;
    do {
      if (uVar5 <= uVar2) {
        uVar5 = uVar2;
        break;
      }
      pbVar1 = (byte *)(uVar5 - 1);
      uVar5 = uVar5 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
    uVar4 = (int)uVar5 - *(int *)(param_1 + 0x20);
    while ((-1 < (int)uVar4 && (iVar3 = FUN_1804f8a80(param_1,uVar4), iVar3 == 0))) {
      if (uVar4 == 0) goto LAB_1804f8c30;
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      uVar5 = uVar4 + uVar2;
      do {
        if (uVar5 <= uVar2) {
          uVar5 = uVar2;
          break;
        }
        pbVar1 = (byte *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar4 = (int)uVar5 - *(int *)(param_1 + 0x20);
    }
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  return uVar4;
}




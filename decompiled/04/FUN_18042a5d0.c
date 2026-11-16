// FUN_18042a5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042a5d0 */

void FUN_18042a5d0(longlong param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                  int *param_6,int *param_7)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_3 >> 10;
  iVar4 = (int)param_4 >> 10;
  if (iVar5 < *param_6) {
    *param_6 = iVar5;
  }
  if (*param_7 < iVar4) {
    *param_7 = iVar4;
  }
  if ((iVar5 < param_2) && (-1 < iVar4)) {
    if (iVar5 == iVar4) {
      *(char *)(iVar5 + param_1) =
           *(char *)(iVar5 + param_1) + (char)((int)((param_4 - param_3) * 0x33) >> 10);
      return;
    }
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    else {
      *(char *)(iVar5 + param_1) =
           *(char *)(iVar5 + param_1) + (char)((int)((0x400 - (param_3 & 0x3ff)) * 0x33) >> 10);
    }
    if (iVar4 < param_2) {
      *(char *)(iVar4 + param_1) =
           *(char *)(iVar4 + param_1) + (char)((param_4 & 0x3ff) * 0x33 >> 10);
      param_2 = iVar4;
    }
    iVar5 = iVar5 + 1;
    if ((iVar5 < param_2) && (0x7f < (uint)(param_2 - iVar5))) {
      uVar1 = param_2 - iVar5 & 0x8000007f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xffffff80) + 1;
      }
      pcVar2 = (char *)(param_1 + 0x40 + (longlong)iVar5);
      do {
        pcVar2[-0x40] = pcVar2[-0x40] + '3';
        pcVar2[-0x3f] = pcVar2[-0x3f] + '3';
        pcVar2[-0x3e] = pcVar2[-0x3e] + '3';
        pcVar2[-0x3d] = pcVar2[-0x3d] + '3';
        pcVar2[-0x3c] = pcVar2[-0x3c] + '3';
        pcVar2[-0x3b] = pcVar2[-0x3b] + '3';
        pcVar2[-0x3a] = pcVar2[-0x3a] + '3';
        pcVar2[-0x39] = pcVar2[-0x39] + '3';
        pcVar2[-0x38] = pcVar2[-0x38] + '3';
        pcVar2[-0x37] = pcVar2[-0x37] + '3';
        pcVar2[-0x36] = pcVar2[-0x36] + '3';
        pcVar2[-0x35] = pcVar2[-0x35] + '3';
        pcVar2[-0x34] = pcVar2[-0x34] + '3';
        pcVar2[-0x33] = pcVar2[-0x33] + '3';
        pcVar2[-0x32] = pcVar2[-0x32] + '3';
        pcVar2[-0x31] = pcVar2[-0x31] + '3';
        pcVar2[-0x30] = pcVar2[-0x30] + '3';
        pcVar2[-0x2f] = pcVar2[-0x2f] + '3';
        pcVar2[-0x2e] = pcVar2[-0x2e] + '3';
        pcVar2[-0x2d] = pcVar2[-0x2d] + '3';
        pcVar2[-0x2c] = pcVar2[-0x2c] + '3';
        pcVar2[-0x2b] = pcVar2[-0x2b] + '3';
        pcVar2[-0x2a] = pcVar2[-0x2a] + '3';
        pcVar2[-0x29] = pcVar2[-0x29] + '3';
        pcVar2[-0x28] = pcVar2[-0x28] + '3';
        pcVar2[-0x27] = pcVar2[-0x27] + '3';
        pcVar2[-0x26] = pcVar2[-0x26] + '3';
        pcVar2[-0x25] = pcVar2[-0x25] + '3';
        pcVar2[-0x24] = pcVar2[-0x24] + '3';
        pcVar2[-0x23] = pcVar2[-0x23] + '3';
        pcVar2[-0x22] = pcVar2[-0x22] + '3';
        pcVar2[-0x21] = pcVar2[-0x21] + '3';
        pcVar2[-0x20] = pcVar2[-0x20] + '3';
        pcVar2[-0x1f] = pcVar2[-0x1f] + '3';
        pcVar2[-0x1e] = pcVar2[-0x1e] + '3';
        pcVar2[-0x1d] = pcVar2[-0x1d] + '3';
        pcVar2[-0x1c] = pcVar2[-0x1c] + '3';
        pcVar2[-0x1b] = pcVar2[-0x1b] + '3';
        pcVar2[-0x1a] = pcVar2[-0x1a] + '3';
        pcVar2[-0x19] = pcVar2[-0x19] + '3';
        pcVar2[-0x18] = pcVar2[-0x18] + '3';
        pcVar2[-0x17] = pcVar2[-0x17] + '3';
        pcVar2[-0x16] = pcVar2[-0x16] + '3';
        pcVar2[-0x15] = pcVar2[-0x15] + '3';
        pcVar2[-0x14] = pcVar2[-0x14] + '3';
        pcVar2[-0x13] = pcVar2[-0x13] + '3';
        pcVar2[-0x12] = pcVar2[-0x12] + '3';
        pcVar2[-0x11] = pcVar2[-0x11] + '3';
        pcVar2[-0x10] = pcVar2[-0x10] + '3';
        pcVar2[-0xf] = pcVar2[-0xf] + '3';
        pcVar2[-0xe] = pcVar2[-0xe] + '3';
        pcVar2[-0xd] = pcVar2[-0xd] + '3';
        pcVar2[-0xc] = pcVar2[-0xc] + '3';
        pcVar2[-0xb] = pcVar2[-0xb] + '3';
        pcVar2[-10] = pcVar2[-10] + '3';
        pcVar2[-9] = pcVar2[-9] + '3';
        pcVar2[-8] = pcVar2[-8] + '3';
        pcVar2[-7] = pcVar2[-7] + '3';
        pcVar2[-6] = pcVar2[-6] + '3';
        pcVar2[-5] = pcVar2[-5] + '3';
        pcVar2[-4] = pcVar2[-4] + '3';
        pcVar2[-3] = pcVar2[-3] + '3';
        pcVar2[-2] = pcVar2[-2] + '3';
        pcVar2[-1] = pcVar2[-1] + '3';
        *pcVar2 = *pcVar2 + '3';
        pcVar2[1] = pcVar2[1] + '3';
        pcVar2[2] = pcVar2[2] + '3';
        pcVar2[3] = pcVar2[3] + '3';
        pcVar2[4] = pcVar2[4] + '3';
        pcVar2[5] = pcVar2[5] + '3';
        pcVar2[6] = pcVar2[6] + '3';
        pcVar2[7] = pcVar2[7] + '3';
        pcVar2[8] = pcVar2[8] + '3';
        pcVar2[9] = pcVar2[9] + '3';
        pcVar2[10] = pcVar2[10] + '3';
        pcVar2[0xb] = pcVar2[0xb] + '3';
        pcVar2[0xc] = pcVar2[0xc] + '3';
        pcVar2[0xd] = pcVar2[0xd] + '3';
        pcVar2[0xe] = pcVar2[0xe] + '3';
        pcVar2[0xf] = pcVar2[0xf] + '3';
        pcVar2[0x10] = pcVar2[0x10] + '3';
        pcVar2[0x11] = pcVar2[0x11] + '3';
        pcVar2[0x12] = pcVar2[0x12] + '3';
        pcVar2[0x13] = pcVar2[0x13] + '3';
        pcVar2[0x14] = pcVar2[0x14] + '3';
        pcVar2[0x15] = pcVar2[0x15] + '3';
        pcVar2[0x16] = pcVar2[0x16] + '3';
        pcVar2[0x17] = pcVar2[0x17] + '3';
        pcVar2[0x18] = pcVar2[0x18] + '3';
        pcVar2[0x19] = pcVar2[0x19] + '3';
        pcVar2[0x1a] = pcVar2[0x1a] + '3';
        pcVar2[0x1b] = pcVar2[0x1b] + '3';
        pcVar2[0x1c] = pcVar2[0x1c] + '3';
        pcVar2[0x1d] = pcVar2[0x1d] + '3';
        pcVar2[0x1e] = pcVar2[0x1e] + '3';
        pcVar2[0x1f] = pcVar2[0x1f] + '3';
        pcVar2[0x20] = pcVar2[0x20] + '3';
        pcVar2[0x21] = pcVar2[0x21] + '3';
        pcVar2[0x22] = pcVar2[0x22] + '3';
        pcVar2[0x23] = pcVar2[0x23] + '3';
        pcVar2[0x24] = pcVar2[0x24] + '3';
        pcVar2[0x25] = pcVar2[0x25] + '3';
        pcVar2[0x26] = pcVar2[0x26] + '3';
        pcVar2[0x27] = pcVar2[0x27] + '3';
        pcVar2[0x28] = pcVar2[0x28] + '3';
        pcVar2[0x29] = pcVar2[0x29] + '3';
        pcVar2[0x2a] = pcVar2[0x2a] + '3';
        pcVar2[0x2b] = pcVar2[0x2b] + '3';
        pcVar2[0x2c] = pcVar2[0x2c] + '3';
        pcVar2[0x2d] = pcVar2[0x2d] + '3';
        pcVar2[0x2e] = pcVar2[0x2e] + '3';
        pcVar2[0x2f] = pcVar2[0x2f] + '3';
        pcVar2[0x30] = pcVar2[0x30] + '3';
        pcVar2[0x31] = pcVar2[0x31] + '3';
        pcVar2[0x32] = pcVar2[0x32] + '3';
        pcVar2[0x33] = pcVar2[0x33] + '3';
        pcVar2[0x34] = pcVar2[0x34] + '3';
        pcVar2[0x35] = pcVar2[0x35] + '3';
        pcVar2[0x36] = pcVar2[0x36] + '3';
        pcVar2[0x37] = pcVar2[0x37] + '3';
        pcVar2[0x38] = pcVar2[0x38] + '3';
        pcVar2[0x39] = pcVar2[0x39] + '3';
        pcVar2[0x3a] = pcVar2[0x3a] + '3';
        pcVar2[0x3b] = pcVar2[0x3b] + '3';
        pcVar2[0x3c] = pcVar2[0x3c] + '3';
        pcVar2[0x3d] = pcVar2[0x3d] + '3';
        pcVar2[0x3e] = pcVar2[0x3e] + '3';
        pcVar2[0x3f] = pcVar2[0x3f] + '3';
        pcVar2 = pcVar2 + 0x80;
        iVar5 = iVar5 + 0x80;
      } while ((longlong)(pcVar2 + (-0x40 - param_1)) < (longlong)(int)(param_2 - uVar1));
    }
    lVar3 = (longlong)iVar5;
    if (lVar3 < param_2) {
      pcVar2 = (char *)(lVar3 + param_1);
      lVar3 = param_2 - lVar3;
      do {
        *pcVar2 = *pcVar2 + '3';
        pcVar2 = pcVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}




// FUN_1804ec3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ec3a0 */

void FUN_1804ec3a0(longlong param_1)

{
  short *psVar1;
  short sVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (*(short *)(param_1 + 0x78) == 0) {
    if ((*(short *)(param_1 + 0x216) != -1) && (*(float *)(param_1 + 0xe0) != 3.4028235e+38)) {
      FUN_1804efc80((int)*(short *)(param_1 + 0x216));
    }
    sVar2 = *(short *)(param_1 + 0x214);
    *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(param_1 + 0x216);
    *(undefined4 *)(param_1 + 0xe0) = 0x7f7fffff;
    *(undefined2 *)(param_1 + 0x216) = 0xffff;
    if (sVar2 != -1) {
      FUN_1804efc80((longlong)sVar2,
                    *(undefined4 *)((longlong)sVar2 * 0x78 + 0x14 + *(longlong *)(param_1 + 0x18)));
      *(undefined2 *)(param_1 + 0x214) = 0xffff;
    }
  }
  iVar8 = 0;
  if (*(short *)(param_1 + 0x78) == 0) {
    *(undefined2 *)(param_1 + 0x21c) = *(undefined2 *)(param_1 + 0x21a);
    *(undefined2 *)(param_1 + 0x21a) = 0xffff;
    if (*(short *)(param_1 + 0x21e) != -1) {
      sVar2 = *(short *)(param_1 + 0x220);
      iVar10 = (int)sVar2;
      if (sVar2 != -1) {
        lVar7 = (longlong)*(short *)(param_1 + 0x21e) * 0x78;
        iVar5 = (int)*(short *)(lVar7 + 0x5a + *(longlong *)(param_1 + 0x18));
        if (iVar5 != iVar10) {
          *(short *)(lVar7 + 0x5a + *(longlong *)(param_1 + 0x18)) = sVar2;
          iVar9 = 1;
          if (iVar10 < iVar5) {
            iVar9 = -1;
          }
          while (iVar5 = iVar5 + iVar9, iVar5 != iVar10 + iVar9) {
            psVar1 = (short *)((longlong)
                               *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 2) *
                               0x78 + 0x5a + *(longlong *)(param_1 + 0x18));
            *psVar1 = *psVar1 - (short)iVar9;
          }
          iVar10 = 0;
          if (0 < *(int *)(param_1 + 0x6c)) {
            do {
              *(short *)(*(longlong *)(param_1 + 0x28) +
                        (longlong)
                        *(short *)((longlong)iVar10 * 0x78 + 0x5a + *(longlong *)(param_1 + 0x18)) *
                        2) = (short)iVar10;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x6c));
          }
          *(undefined1 *)(param_1 + 0x247) = 1;
        }
        *(undefined2 *)(param_1 + 0x220) = 0xffff;
      }
    }
    if (*(int *)(DAT_180bb8ae8 + 0x1550) == 0) {
      *(undefined2 *)(param_1 + 0x21e) = 0xffff;
    }
  }
  if (*(char *)(param_1 + 0x24b) != '\0') {
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        *(short *)((longlong)iVar8 * 0x78 + 0x5a + *(longlong *)(param_1 + 0x18)) = (short)iVar8;
        *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 2) = (short)iVar8;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x6c));
    }
    *(undefined1 *)(param_1 + 0x24b) = 0;
    *(undefined1 *)(param_1 + 0x247) = 1;
  }
  if (*(char *)(param_1 + 0x24c) != '\0') {
    puVar3 = *(uint **)(param_1 + 0x20);
    for (puVar6 = *(uint **)(param_1 + 0x18); puVar6 != puVar3; puVar6 = puVar6 + 0x1e) {
      bVar4 = ~(byte)(*puVar6 >> 1) & 1;
      *(byte *)(puVar6 + 0x1b) = bVar4;
      *(byte *)((longlong)puVar6 + 0x6b) = bVar4;
    }
    *(undefined1 *)(param_1 + 0x24c) = 0;
    *(undefined1 *)(param_1 + 0x247) = 1;
  }
  return;
}




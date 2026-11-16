// FUN_1803a09a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a09a0 */

ulonglong FUN_1803a09a0(longlong param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint *in_RAX;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 & 1) != 0) {
    uVar8 = uVar2 | 1;
    *(uint *)(param_1 + 0x20) = uVar8;
    in_RAX = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
    puVar5 = (uint *)0x0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      puVar5 = in_RAX;
    }
    if (puVar5 != (uint *)0x0) {
      uVar4 = *(ulonglong *)(param_1 + 0x60) & 0xfffffff3fffcd040;
      bVar10 = *(ulonglong *)(param_1 + 0x60) != uVar4;
      if (bVar10) {
        *(ulonglong *)(param_1 + 0x60) = uVar4;
      }
      uVar7 = (ulonglong)bVar10;
      uVar4 = *(ulonglong *)(param_1 + 0x68) & 0xfffffff3fffcd040;
      if (*(ulonglong *)(param_1 + 0x68) != uVar4) {
        *(ulonglong *)(param_1 + 0x68) = uVar4;
        uVar7 = 1;
      }
      uVar4 = *(ulonglong *)(param_1 + 0x70) & 0xfffffff3fffcd040;
      if (*(ulonglong *)(param_1 + 0x70) != uVar4) {
        *(ulonglong *)(param_1 + 0x70) = uVar4;
        uVar7 = 1;
      }
      if ((*puVar5 & 2) != 0) {
        lVar9 = 0;
        if (*(longlong *)(puVar5 + 10) != 0) {
          lVar9 = *(longlong *)(puVar5 + 10) + 0x10;
        }
        if ((lVar9 != 0) &&
           (((*(ulonglong *)(lVar9 + 0x18) | *(ulonglong *)(lVar9 + 0x10) |
             *(ulonglong *)(lVar9 + 8)) & 0xc00032fbf) != 0)) {
          uVar7 = 1;
        }
      }
      if (*(int *)(param_1 + 0x4c) != -1) {
        uVar8 = uVar2 | 0x21;
        *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
        *(uint *)(param_1 + 0x20) = uVar8;
        uVar7 = 1;
      }
      if (*(int *)(param_1 + 0x50) != -1) {
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
        *(uint *)(param_1 + 0x20) = uVar8 | 0x40;
        uVar7 = 1;
      }
      if ((float)puVar5[0x12] != 0.0) {
        *puVar5 = *puVar5 | 0x40;
        uVar7 = 1;
        puVar5[0x12] = 0;
      }
      if ((float)puVar5[0x13] != 0.0) {
        *puVar5 = *puVar5 | 0x80;
        uVar7 = 1;
        puVar5[0x13] = 0;
      }
      if ((float)puVar5[0x14] != 0.0) {
        *puVar5 = *puVar5 | 0x100;
        uVar7 = 1;
        puVar5[0x14] = 0;
      }
      if (puVar5[0x18] != 0) {
        *puVar5 = *puVar5 | 0x1000;
        uVar7 = 1;
        puVar5[0x18] = 0;
      }
      if (puVar5[0x19] != 0) {
        *puVar5 = *puVar5 | 0x2000;
        uVar7 = 1;
        puVar5[0x19] = 0;
      }
      if (puVar5[0x15] != 0) {
        *puVar5 = *puVar5 | 0x200;
        uVar7 = 1;
        puVar5[0x15] = 0;
      }
      if (puVar5[0x16] != 0) {
        *puVar5 = *puVar5 | 0x400;
        uVar7 = 1;
        puVar5[0x16] = 0;
      }
      if (0 < (int)puVar5[4]) {
        puVar5[4] = 0;
        uVar7 = 1;
      }
      if ((*puVar5 & 4) != 0) {
        *puVar5 = *puVar5 | 4;
        puVar6 = (uint *)0x0;
        if (*(longlong *)(puVar5 + 0xc) != 0) {
          puVar6 = (uint *)(*(longlong *)(puVar5 + 0xc) + 0x10);
        }
        if (puVar6 != (uint *)0x0) {
          fVar1 = *param_2;
          if ((float)puVar6[2] != fVar1) {
            *puVar6 = *puVar6 | 1;
            uVar7 = 1;
            puVar6[2] = (uint)fVar1;
          }
          fVar1 = param_2[1];
          if ((float)puVar6[3] != fVar1) {
            *puVar6 = *puVar6 | 2;
            uVar7 = 1;
            puVar6[3] = (uint)fVar1;
          }
          fVar1 = param_2[2];
          if ((float)puVar6[4] != fVar1) {
            *puVar6 = *puVar6 | 4;
            uVar7 = 1;
            puVar6[4] = (uint)fVar1;
          }
        }
      }
      uVar2 = *(uint *)(param_1 + 0x30);
      if ((uVar2 < 0x41) && (0 < (int)uVar2)) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + lVar9 * 8);
          puVar5 = (uint *)0x0;
          if (lVar3 != 0) {
            puVar5 = (uint *)(lVar3 + 0x10);
          }
          if ((puVar5 != (uint *)0x0) && ((*puVar5 & 1) != 0)) {
            *puVar5 = *puVar5 | 1;
            puVar6 = (uint *)0x0;
            if (*(longlong *)(puVar5 + 2) != 0) {
              puVar6 = (uint *)(*(longlong *)(puVar5 + 2) + 0x10);
            }
            if (puVar6 != (uint *)0x0) {
              fVar1 = *param_2;
              if ((float)puVar6[2] != fVar1) {
                *puVar6 = *puVar6 | 1;
                uVar7 = 1;
                puVar6[2] = (uint)fVar1;
              }
              fVar1 = param_2[1];
              if ((float)puVar6[3] != fVar1) {
                *puVar6 = *puVar6 | 2;
                uVar7 = 1;
                puVar6[3] = (uint)fVar1;
              }
              fVar1 = param_2[2];
              if ((float)puVar6[4] != fVar1) {
                *puVar6 = *puVar6 | 4;
                uVar7 = 1;
                puVar6[4] = (uint)fVar1;
              }
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uVar2);
      }
      return uVar7;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




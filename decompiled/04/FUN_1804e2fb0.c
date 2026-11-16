// FUN_1804e2fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2fb0 */

void FUN_1804e2fb0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  puVar12 = *(uint **)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) == 1) {
    iVar9 = *(int *)(param_1 + 0x3c);
    if (0 < iVar9) {
      iVar3 = *(int *)(param_1 + 0x38);
      do {
        puVar10 = puVar12;
        iVar1 = iVar3;
        if (3 < iVar3) {
          uVar4 = (iVar3 - 4U >> 2) + 1;
          uVar11 = (ulonglong)uVar4;
          iVar1 = iVar3 + uVar4 * -4;
          do {
            lVar7 = (longlong)((float)(byte)*puVar10 * param_2);
            bVar8 = 0xff;
            if ((uint)lVar7 < 0xff) {
              bVar8 = (byte)lVar7;
            }
            *(byte *)puVar10 = bVar8;
            lVar7 = (longlong)((float)*(byte *)((longlong)puVar10 + 1) * param_2);
            bVar8 = 0xff;
            if ((uint)lVar7 < 0xff) {
              bVar8 = (byte)lVar7;
            }
            *(byte *)((longlong)puVar10 + 1) = bVar8;
            lVar7 = (longlong)((float)*(byte *)((longlong)puVar10 + 2) * param_2);
            bVar8 = 0xff;
            if ((uint)lVar7 < 0xff) {
              bVar8 = (byte)lVar7;
            }
            *(byte *)((longlong)puVar10 + 2) = bVar8;
            lVar7 = (longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
            bVar8 = 0xff;
            if ((uint)lVar7 < 0xff) {
              bVar8 = (byte)lVar7;
            }
            *(byte *)((longlong)puVar10 + 3) = bVar8;
            puVar10 = puVar10 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        for (; 0 < iVar1; iVar1 = iVar1 + -1) {
          lVar7 = (longlong)((float)(byte)*puVar10 * param_2);
          bVar8 = 0xff;
          if ((uint)lVar7 < 0xff) {
            bVar8 = (byte)lVar7;
          }
          *(byte *)puVar10 = bVar8;
          puVar10 = (uint *)((longlong)puVar10 + 1);
        }
        iVar9 = iVar9 + -1;
        puVar12 = (uint *)((longlong)puVar12 + (longlong)iVar2);
      } while (0 < iVar9);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 0) && (iVar9 = *(int *)(param_1 + 0x3c), 0 < iVar9)) {
    iVar3 = *(int *)(param_1 + 0x38);
    do {
      puVar10 = puVar12;
      iVar1 = iVar3;
      if (3 < iVar3) {
        uVar4 = (iVar3 - 4U >> 2) + 1;
        uVar11 = (ulonglong)uVar4;
        iVar1 = iVar3 + uVar4 * -4;
        do {
          uVar4 = *puVar10;
          uVar5 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
          uVar6 = 0xff;
          if (uVar5 < 0xff) {
            uVar6 = uVar5;
          }
          uVar5 = puVar10[1];
          *puVar10 = ((uVar6 << 8 | uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 |
                     uVar4 & 0xff;
          uVar6 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 7) * param_2);
          uVar4 = 0xff;
          if (uVar6 < 0xff) {
            uVar4 = uVar6;
          }
          uVar6 = puVar10[2];
          puVar10[1] = ((uVar4 << 8 | uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 8 |
                       uVar5 & 0xff;
          uVar5 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xb) * param_2);
          uVar4 = 0xff;
          if (uVar5 < 0xff) {
            uVar4 = uVar5;
          }
          uVar5 = puVar10[3];
          puVar10[2] = ((uVar4 << 8 | uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 8 & 0xff) << 8 |
                       uVar6 & 0xff;
          uVar6 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xf) * param_2);
          uVar4 = 0xff;
          if (uVar6 < 0xff) {
            uVar4 = uVar6;
          }
          puVar10[3] = ((uVar4 << 8 | uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 8 |
                       uVar5 & 0xff;
          puVar10 = puVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      for (; 0 < iVar1; iVar1 = iVar1 + -1) {
        uVar4 = *puVar10;
        uVar5 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
        uVar6 = 0xff;
        if (uVar5 < 0xff) {
          uVar6 = uVar5;
        }
        *puVar10 = ((uVar6 << 8 | uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 |
                   uVar4 & 0xff;
        puVar10 = puVar10 + 1;
      }
      iVar9 = iVar9 + -1;
      puVar12 = (uint *)((longlong)puVar12 + (longlong)iVar2);
    } while (0 < iVar9);
  }
  return;
}




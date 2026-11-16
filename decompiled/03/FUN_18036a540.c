// FUN_18036a540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a540 */

void FUN_18036a540(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 8) == param_1[0xa1])) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    puVar11 = (uint *)0x0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      puVar11 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
    }
    if (puVar11 != (uint *)0x0) {
      lVar8 = 0;
      if (*(longlong *)(puVar11 + 0xc) != 0) {
        lVar8 = *(longlong *)(puVar11 + 0xc) + 0x10;
      }
      if (lVar8 != 0) {
        *(ulonglong *)(param_2 + 0x60) =
             (param_1[0xa3] ^ *(ulonglong *)(param_2 + 0x60)) & 0xfffffffffffff9e1 ^ param_1[0xa3];
        *(ulonglong *)(param_2 + 0x68) =
             (param_1[0xa4] ^ *(ulonglong *)(param_2 + 0x68)) & 0xfffffffffffff9e1 ^ param_1[0xa4];
        *(ulonglong *)(param_2 + 0x70) =
             (param_1[0xa5] ^ *(ulonglong *)(param_2 + 0x70)) & 0xfffffffffffff9e1 ^ param_1[0xa5];
        uVar7 = *(uint *)(param_1 + 0xa6);
        *puVar11 = *puVar11 | 0x40;
        puVar11[0x12] = uVar7;
        uVar7 = *(uint *)((longlong)param_1 + 0x534);
        *puVar11 = *puVar11 | 0x84;
        puVar11[0x13] = uVar7;
        uVar7 = *(uint *)(param_1 + 0xa7);
        puVar9 = (uint *)0x0;
        if (*(longlong *)(puVar11 + 0xc) != 0) {
          puVar9 = (uint *)(*(longlong *)(puVar11 + 0xc) + 0x10);
        }
        *puVar9 = *puVar9 | 2;
        puVar9[3] = uVar7;
        uVar7 = *(uint *)(param_1 + 0xa0);
        if ((int)puVar11[4] < (int)uVar7) {
          do {
            lVar8 = FUN_1803dfb00();
            if (lVar8 == 0) {
              return;
            }
            uVar7 = *(uint *)(param_1 + 0xa0);
          } while ((int)puVar11[4] < (int)uVar7);
        }
        iVar13 = 0;
        if (0 < (int)uVar7) {
          lVar8 = 0;
          puVar12 = param_1;
          do {
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar1 = puVar12[4];
            puVar12 = puVar12 + 5;
            lVar2 = *(longlong *)(lVar8 + 8 + *(longlong *)(puVar11 + 6));
            lVar8 = lVar8 + 8;
            puVar10 = (undefined8 *)0x0;
            if (lVar2 != 0) {
              puVar10 = (undefined8 *)(lVar2 + 0x10);
            }
            iVar13 = iVar13 + 1;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            puVar10[4] = uVar1;
            uVar7 = *(uint *)(param_1 + 0xa0);
          } while (iVar13 < (int)uVar7);
        }
        puVar11[4] = uVar7;
        DAT_180b8e4f4 = *(undefined4 *)((longlong)param_1 + 0x53c);
        DAT_180b0dfe8 = 1;
      }
    }
  }
  return;
}




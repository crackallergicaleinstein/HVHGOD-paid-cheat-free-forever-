// FUN_1805816e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805816e0 */

void FUN_1805816e0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  longlong lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  ushort *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  puVar11 = *(ushort **)(param_1 + 0x20);
  puVar14 = *(undefined8 **)(param_1 + 0x30);
  lVar13 = (longlong)*(int *)(param_1 + 0x1c) * 0x30;
  puVar1 = puVar14 + *(int *)(param_1 + 0x2c);
  puVar2 = puVar11 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
  if (param_2 == 0) {
    uVar10 = 4;
    if (puVar11 < puVar2) {
      puVar5 = puVar11 + 0xc;
      lVar6 = (lVar13 - 1U) / 0x30 + 1;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + -4);
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -10);
        puVar5 = puVar5 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    uVar10 = 8;
    if (puVar11 < puVar2) {
      puVar5 = puVar11 + 0xc;
      lVar6 = (lVar13 - 1U) / 0x30 + 1;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + -2);
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -8);
        puVar5 = puVar5 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  do {
    if (puVar1 <= puVar14) {
      if (puVar11 < puVar2) {
        if (param_2 == 0) {
          puVar11 = puVar11 + 8;
          lVar13 = (lVar13 - 1U) / 0x30 + 1;
          do {
            *(undefined4 *)puVar11 = *(undefined4 *)(puVar11 + 4);
            puVar11 = puVar11 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          return;
        }
        puVar5 = puVar11 + 10;
        lVar13 = (ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar11)) / 0x30 + 1;
        do {
          *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + 2);
          puVar5 = puVar5 + 0x18;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      return;
    }
    puVar5 = (ushort *)*puVar14;
    puVar3 = *(ushort **)(puVar5 + 0x14);
    for (puVar7 = puVar5; puVar7 <= puVar3; puVar7 = puVar7 + 0x18) {
      puVar9 = puVar7;
      if ((uVar10 & *puVar7) != 0) goto joined_r0x000180581813;
    }
LAB_180581903:
    puVar14 = puVar14 + 1;
  } while( true );
joined_r0x000180581813:
  puVar4 = puVar9;
  if (puVar4 < puVar3) goto LAB_180581820;
  goto LAB_180581834;
LAB_180581820:
  puVar9 = puVar4 + 0x18;
  if ((uVar10 & puVar4[0x18]) == 0) {
LAB_180581834:
    puVar8 = puVar4 + 0x18;
    puVar9 = puVar8;
    while( true ) {
      if (puVar3 < puVar9) {
        if (puVar4 == puVar7) {
          iVar12 = *(int *)(puVar7 + 0xc) - *(int *)(puVar7 + 0xe);
          if (iVar12 != 0) {
            if (puVar5 < puVar7) {
              lVar6 = (ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) / 0x30 + 1;
              puVar5 = puVar5 + 0xc;
              do {
                *(int *)puVar5 = *(int *)(puVar5 + 2) + iVar12;
                lVar6 = lVar6 + -1;
                puVar5 = puVar5 + 0x18;
              } while (lVar6 != 0);
            }
            while (puVar7 = puVar7 + 0x18, puVar7 <= puVar3) {
              *(int *)(puVar7 + 0xc) = *(int *)(puVar7 + 0xe) + iVar12;
            }
          }
        }
        else {
          if (puVar4 < puVar3) {
            FUN_1805829e0(puVar8,puVar3,puVar4,puVar7);
          }
          if (puVar11 < puVar7) {
            FUN_1805829e0(puVar5,puVar7 + -0x18,puVar4,puVar7);
          }
        }
        goto LAB_180581903;
      }
      if ((uVar10 & *puVar9) != 0) break;
      puVar9 = puVar9 + 0x18;
    }
    FUN_1805829e0(puVar8,puVar9 + -0x18,puVar4,puVar9);
  }
  goto joined_r0x000180581813;
}




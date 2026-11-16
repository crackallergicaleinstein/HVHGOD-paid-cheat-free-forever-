// FUN_1801b9490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b9490 */

void FUN_1801b9490(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar10 = param_2;
  if (param_2 < lVar9) {
    do {
      puVar6 = (undefined8 *)((lVar10 * 2 + 2) * 0x50 + param_1);
      puVar1 = (undefined1 *)((longlong)puVar6 + (longlong)param_6);
      cVar5 = FUN_180114040(puVar1,puVar1 + -0x50);
      puVar8 = puVar6 + -10;
      if (-1 < cVar5) {
        puVar8 = puVar6;
      }
      lVar7 = lVar10 * 0x50;
      lVar10 = ((longlong)cVar5 >> 0x3f) + 2 + lVar10 * 2;
      puVar6 = (undefined8 *)(lVar7 + param_1);
      if (puVar6 != puVar8) {
        FUN_18015c010(puVar6);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar6 = *puVar8;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
      }
      FUN_180176c30(puVar6 + 4,puVar8 + 4);
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar8 + 8);
      *(undefined4 *)((longlong)puVar6 + 0x44) = *(undefined4 *)((longlong)puVar8 + 0x44);
      puVar6[9] = puVar8[9];
    } while (lVar10 < lVar9);
  }
  if ((lVar10 == lVar9) && ((param_3 & 1) == 0)) {
    FUN_1801b9260(lVar10 * 0x50 + param_1,param_3 * 0x50 + -0x50 + param_1);
    lVar10 = param_3 - 1;
  }
  if (param_2 < lVar10) {
    do {
      lVar9 = lVar10 + -1 >> 1;
      cVar5 = FUN_180114040(lVar9 * 0x50 + (longlong)param_6 + param_1,param_7 + param_4);
      if (-1 < cVar5) break;
      puVar8 = (undefined8 *)(lVar9 * 0x50 + param_1);
      puVar6 = (undefined8 *)(lVar10 * 0x50 + param_1);
      if (puVar6 != puVar8) {
        FUN_18015c010(puVar6);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar6 = *puVar8;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
      }
      FUN_180176c30(puVar6 + 4,puVar8 + 4);
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar8 + 8);
      *(undefined4 *)((longlong)puVar6 + 0x44) = *(undefined4 *)((longlong)puVar8 + 0x44);
      puVar6[9] = puVar8[9];
      lVar10 = lVar9;
    } while (param_2 < lVar9);
  }
  FUN_1801b9260(lVar10 * 0x50 + param_1,param_4);
  return;
}




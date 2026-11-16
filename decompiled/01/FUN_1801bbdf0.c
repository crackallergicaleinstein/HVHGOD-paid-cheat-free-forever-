// FUN_1801bbdf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bbdf0 */

void FUN_1801bbdf0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_3 - 1;
  lVar9 = param_2;
  while (lVar9 < lVar8 >> 1) {
    lVar5 = (lVar9 * 2 + 2) * 0x20 + param_1;
    cVar4 = FUN_180114040(lVar5,lVar5 + -0x20);
    puVar7 = (undefined8 *)(lVar9 * 0x20 + param_1);
    lVar9 = lVar9 * 2 + 2 + ((longlong)cVar4 >> 0x3f);
    puVar6 = (undefined8 *)(lVar9 * 0x20 + param_1);
    if (puVar7 != puVar6) {
      FUN_18015c010(puVar7);
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
    }
  }
  if ((lVar9 == lVar8 >> 1) && ((param_3 & 1) == 0)) {
    puVar6 = (undefined8 *)(param_1 + -0x20 + param_3 * 0x20);
    puVar7 = (undefined8 *)(lVar9 * 0x20 + param_1);
    lVar9 = lVar8;
    if (puVar7 != puVar6) {
      FUN_18015c010(puVar7);
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar6[3] = 0xf;
      puVar6[2] = 0;
      *(undefined1 *)puVar6 = 0;
    }
  }
  while (param_2 < lVar9) {
    lVar8 = lVar9 + -1 >> 1;
    puVar6 = (undefined8 *)(lVar8 * 0x20 + param_1);
    cVar4 = FUN_180114040(puVar6,param_4);
    if (-1 < cVar4) break;
    puVar7 = (undefined8 *)(lVar9 * 0x20 + param_1);
    lVar9 = lVar8;
    if (puVar7 != puVar6) {
      FUN_18015c010(puVar7);
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
    }
  }
  puVar6 = (undefined8 *)(lVar9 * 0x20 + param_1);
  if (puVar6 != param_4) {
    FUN_18015c010(puVar6);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *puVar6 = *param_4;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
  }
  return;
}




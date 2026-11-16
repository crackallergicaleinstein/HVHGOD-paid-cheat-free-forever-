// FUN_180360640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180360640 */

void FUN_180360640(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar5 = param_1;
  if (0x20 < param_3) {
    lVar7 = (param_3 - 0x21U >> 5) + 1;
    do {
      puVar5 = (undefined8 *)FUN_18035f1e0(puVar5,puVar5 + 0x30);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  FUN_18035f1e0(puVar5,param_2);
  if (param_3 < 0x21) {
    return;
  }
  puVar5 = param_4;
  puVar6 = param_1;
  lVar7 = param_3;
LAB_1803606c0:
  lVar7 = lVar7 + -0x20;
  puVar3 = puVar6 + 0x30;
  lVar8 = 0x20;
  if (lVar7 < 0x20) {
    lVar8 = lVar7;
  }
  lVar7 = lVar7 - lVar8;
  puVar4 = (undefined8 *)((longlong)puVar3 + lVar8 * 0xc);
  puVar9 = puVar3;
  do {
    puVar1 = (undefined8 *)((longlong)puVar5 + 0xc);
    if (*(float *)((longlong)puVar6 + 4) <= *(float *)((longlong)puVar9 + 4)) {
      *puVar5 = *puVar6;
      puVar2 = puVar6 + 1;
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)puVar2;
      if (puVar6 == puVar3) {
        lVar8 = (longlong)puVar4 - (longlong)puVar9;
        goto LAB_180360744;
      }
    }
    else {
      *puVar5 = *puVar9;
      puVar2 = puVar9 + 1;
      puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)puVar2;
      if (puVar9 == puVar4) break;
    }
    puVar5 = puVar1;
  } while( true );
  lVar8 = (longlong)puVar3 - (longlong)puVar6;
  puVar9 = puVar6;
LAB_180360744:
  FUN_18063aed0(puVar1,puVar9,lVar8);
  puVar5 = (undefined8 *)(lVar8 + (longlong)puVar1);
  puVar6 = puVar4;
  if (lVar7 < 0x21) {
    FUN_18063aed0(puVar5,puVar4,param_2 - (longlong)puVar4);
    lVar7 = (longlong)param_4 + param_3 * 0xc;
    lVar8 = 0x40;
    FUN_180361000(param_4,lVar7,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_180361000(param_1,param_2,param_4,lVar8 * 2,param_3,param_5);
      lVar8 = lVar8 * 4;
      FUN_180361000(param_4,lVar7,param_1,lVar8,param_3,param_5);
    } while (lVar8 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_1803606c0;
}




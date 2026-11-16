// FUN_18056df50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056df50 */

void FUN_18056df50(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  puVar8 = param_1;
  if (0x20 < param_3) {
    lVar9 = (param_3 - 0x21U >> 5) + 1;
    do {
      puVar8 = (undefined8 *)FUN_1805623a0(puVar8,puVar8 + 0x20);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_1805623a0(puVar8,param_2);
  if (param_3 < 0x21) {
    return;
  }
  lVar9 = param_3;
  puVar8 = param_1;
  puVar10 = param_4;
LAB_18056dff0:
  lVar9 = lVar9 + -0x20;
  puVar2 = puVar8 + 0x20;
  lVar12 = 0x20;
  if (lVar9 < 0x20) {
    lVar12 = lVar9;
  }
  lVar9 = lVar9 - lVar12;
  puVar3 = puVar2 + lVar12;
  puVar11 = puVar2;
  do {
    plVar4 = (longlong *)*puVar8;
    lVar12 = *(longlong *)*puVar11;
    local_68 = lVar12 + 0x38;
    if (0xf < *(ulonglong *)(lVar12 + 0x50)) {
      local_68 = *(longlong *)(lVar12 + 0x38);
    }
    local_60 = *(undefined8 *)(lVar12 + 0x48);
    iVar6 = FUN_18051f420(local_68,&local_68);
    lVar12 = *plVar4;
    local_58 = lVar12 + 0x38;
    if (0xf < *(ulonglong *)(lVar12 + 0x50)) {
      local_58 = *(longlong *)(lVar12 + 0x38);
    }
    local_50 = *(undefined8 *)(lVar12 + 0x48);
    puVar1 = puVar10 + 1;
    iVar7 = FUN_18051f420(local_50,&local_58);
    if (iVar6 < iVar7) {
      uVar5 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar10 = uVar5;
      if (puVar11 == puVar3) break;
    }
    else {
      uVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar10 = uVar5;
      if (puVar8 == puVar2) {
        lVar12 = (longlong)puVar3 - (longlong)puVar11;
        FUN_18063aed0(puVar1,puVar11,lVar12);
        goto LAB_18056e0db;
      }
    }
    puVar10 = puVar1;
  } while( true );
  lVar12 = (longlong)puVar2 - (longlong)puVar8;
  FUN_18063aed0(puVar1,puVar8,lVar12);
LAB_18056e0db:
  puVar10 = (undefined8 *)(lVar12 + (longlong)puVar1);
  puVar8 = puVar3;
  if (lVar9 < 0x21) {
    FUN_18063aed0(puVar10,puVar3,param_2 - (longlong)puVar3);
    lVar9 = 0x40;
    FUN_18056fa90(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_18056fa90(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
      lVar9 = lVar9 * 4;
      FUN_18056fa90(param_4,param_4 + param_3,param_1,lVar9,param_3,param_5);
    } while (lVar9 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_18056dff0;
}




// FUN_1801f4e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f4e40 */

void FUN_1801f4e40(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t sVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = param_3 + -0x1b;
  puVar13 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0xd8 >> 1) * 0x1b;
  if ((longlong)puVar14 - (longlong)param_2 < 0x2298) {
    FUN_1801f6690(param_2,puVar13,puVar14);
  }
  else {
    lVar7 = ((longlong)puVar14 - (longlong)param_2) / 0xd8 + 1 >> 3;
    FUN_1801f6690(param_2,param_2 + lVar7 * 0x1b,param_2 + lVar7 * 0x36);
    FUN_1801f6690(puVar13 + lVar7 * -0x1b,puVar13,puVar13 + lVar7 * 0x1b);
    FUN_1801f6690(puVar14 + lVar7 * -0x36,puVar14 + lVar7 * -0x1b,puVar14);
    FUN_1801f6690(param_2 + lVar7 * 0x1b,puVar13,puVar14 + lVar7 * -0x1b);
  }
  puVar14 = puVar13 + 0x1b;
  puVar15 = puVar13;
  if (param_2 < puVar13) {
    puVar9 = puVar13 + -0x17;
    do {
      puVar8 = puVar9 + 0x1b;
      if (0xf < (ulonglong)puVar9[0x1e]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar1 = puVar9[3];
      sVar2 = puVar9[2];
      puVar10 = puVar9;
      if (0xf < uVar1) {
        puVar10 = (undefined8 *)*puVar9;
      }
      if ((sVar2 == puVar9[0x1d]) &&
         ((sVar2 == 0 || (iVar6 = memcmp(puVar10,puVar8,sVar2), iVar6 == 0)))) {
        puVar10 = puVar9 + -4;
        puVar8 = puVar15;
      }
      else {
        puVar8 = puVar9 + 0x1b;
        puVar10 = puVar9;
      }
      cVar5 = FUN_180114040(puVar10,puVar8);
      if (cVar5 < '\0') break;
      puVar8 = puVar9;
      if (0xf < uVar1) {
        puVar8 = (undefined8 *)*puVar9;
      }
      puVar10 = puVar9 + 0x1b;
      sVar3 = puVar9[0x1d];
      if (0xf < (ulonglong)puVar9[0x1e]) {
        puVar10 = (undefined8 *)puVar9[0x1b];
      }
      if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar6 = memcmp(puVar10,puVar8,sVar3), iVar6 == 0))))
      {
        puVar8 = puVar15;
        puVar10 = puVar9 + -4;
      }
      else {
        puVar8 = puVar9 + 0x1b;
        puVar10 = puVar9;
      }
      cVar5 = FUN_180114040(puVar8,puVar10);
      if (cVar5 < '\0') break;
      puVar15 = puVar15 + -0x1b;
      puVar9 = puVar9 + -0x1b;
    } while (param_2 < puVar15);
  }
  if (puVar14 < param_3) {
    uVar1 = puVar15[7];
    puVar13 = puVar13 + 0x1f;
    sVar2 = puVar15[6];
    do {
      puVar9 = puVar15 + 4;
      if (0xf < uVar1) {
        puVar9 = (undefined8 *)puVar15[4];
      }
      uVar4 = puVar13[3];
      sVar3 = puVar13[2];
      puVar8 = puVar13;
      if (0xf < uVar4) {
        puVar8 = (undefined8 *)*puVar13;
      }
      if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar6 = memcmp(puVar8,puVar9,sVar3), iVar6 == 0)))) {
        puVar8 = puVar14;
        puVar9 = puVar15;
      }
      else {
        puVar9 = puVar15 + 4;
        puVar8 = puVar13;
      }
      cVar5 = FUN_180114040(puVar8,puVar9);
      if (cVar5 < '\0') break;
      puVar9 = puVar13;
      if (0xf < uVar4) {
        puVar9 = (undefined8 *)*puVar13;
      }
      puVar8 = puVar15 + 4;
      if (0xf < uVar1) {
        puVar8 = (undefined8 *)puVar15[4];
      }
      if ((sVar2 == sVar3) && ((sVar2 == 0 || (iVar6 = memcmp(puVar8,puVar9,sVar2), iVar6 == 0)))) {
        puVar9 = puVar15;
        puVar8 = puVar14;
      }
      else {
        puVar9 = puVar15 + 4;
        puVar8 = puVar13;
      }
      cVar5 = FUN_180114040(puVar9,puVar8);
      if (cVar5 < '\0') break;
      puVar14 = puVar14 + 0x1b;
      puVar13 = puVar13 + 0x1b;
    } while (puVar14 < param_3);
  }
  puVar13 = puVar15;
  puVar9 = puVar14;
LAB_1801f5125:
  do {
    if (puVar14 < param_3) {
      puVar8 = puVar14 + 4;
      do {
        puVar10 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar10 = (undefined8 *)*puVar8;
        }
        uVar1 = puVar15[7];
        puVar12 = puVar15 + 4;
        sVar2 = puVar15[6];
        if (0xf < uVar1) {
          puVar12 = (undefined8 *)puVar15[4];
        }
        if ((sVar2 == puVar8[2]) &&
           ((sVar2 == 0 || (iVar6 = memcmp(puVar12,puVar10,sVar2), iVar6 == 0)))) {
          puVar10 = puVar15;
          puVar12 = puVar14;
        }
        else {
          puVar10 = puVar15 + 4;
          puVar12 = puVar8;
        }
        cVar5 = FUN_180114040(puVar10,puVar12);
        if (-1 < cVar5) {
          puVar10 = puVar15 + 4;
          if (0xf < uVar1) {
            puVar10 = (undefined8 *)puVar15[4];
          }
          sVar3 = puVar8[2];
          puVar12 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar12 = (undefined8 *)*puVar8;
          }
          if ((sVar3 == sVar2) &&
             ((sVar3 == 0 || (iVar6 = memcmp(puVar12,puVar10,sVar3), iVar6 == 0)))) {
            puVar12 = puVar14;
            puVar10 = puVar15;
          }
          else {
            puVar10 = puVar15 + 4;
            puVar12 = puVar8;
          }
          cVar5 = FUN_180114040(puVar12,puVar10);
          if (cVar5 < '\0') break;
          if (puVar9 != puVar14) {
            FUN_1801f65e0(puVar9,puVar14);
          }
          puVar9 = puVar9 + 0x1b;
        }
        puVar14 = puVar14 + 0x1b;
        puVar8 = puVar8 + 0x1b;
      } while (puVar14 < param_3);
    }
    if (param_2 < puVar13) {
      puVar8 = puVar15 + 4;
      puVar10 = puVar13 + -0x17;
      do {
        puVar12 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar12 = (undefined8 *)*puVar8;
        }
        uVar1 = puVar10[3];
        sVar2 = puVar10[2];
        puVar11 = puVar10;
        if (0xf < uVar1) {
          puVar11 = (undefined8 *)*puVar10;
        }
        if ((sVar2 == puVar8[2]) &&
           ((sVar2 == 0 || (iVar6 = memcmp(puVar11,puVar12,sVar2), iVar6 == 0)))) {
          puVar12 = puVar10 + -4;
          puVar11 = puVar15;
        }
        else {
          puVar12 = puVar10;
          puVar11 = puVar8;
        }
        cVar5 = FUN_180114040(puVar12,puVar11);
        if (-1 < cVar5) {
          puVar12 = puVar10;
          if (0xf < uVar1) {
            puVar12 = (undefined8 *)*puVar10;
          }
          sVar3 = puVar8[2];
          puVar11 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar11 = (undefined8 *)*puVar8;
          }
          if ((sVar3 == sVar2) &&
             ((sVar3 == 0 || (iVar6 = memcmp(puVar11,puVar12,sVar3), iVar6 == 0)))) {
            puVar12 = puVar15;
            puVar11 = puVar10 + -4;
          }
          else {
            puVar12 = puVar8;
            puVar11 = puVar10;
          }
          cVar5 = FUN_180114040(puVar12,puVar11);
          if (cVar5 < '\0') break;
          puVar15 = puVar15 + -0x1b;
          puVar8 = puVar8 + -0x1b;
          if (puVar15 != puVar10 + -4) {
            FUN_1801f65e0(puVar15);
          }
        }
        puVar13 = puVar13 + -0x1b;
        puVar10 = puVar10 + -0x1b;
      } while (param_2 < puVar13);
    }
    if (puVar13 == param_2) {
      if (puVar14 == param_3) {
        *param_1 = (ulonglong)puVar15;
        param_1[1] = (ulonglong)puVar9;
        return;
      }
      if (puVar9 != puVar14) {
        FUN_1801f65e0(puVar15,puVar9);
      }
      puVar9 = puVar9 + 0x1b;
      puVar10 = puVar15;
      puVar8 = puVar14;
      puVar15 = puVar15 + 0x1b;
    }
    else {
      puVar8 = puVar13 + -0x1b;
      puVar13 = puVar8;
      if (puVar14 == param_3) {
        puVar15 = puVar15 + -0x1b;
        if (puVar8 != puVar15) {
          FUN_1801f65e0(puVar8,puVar15);
        }
        puVar9 = puVar9 + -0x1b;
        FUN_1801f65e0(puVar15,puVar9);
        goto LAB_1801f5125;
      }
      puVar10 = puVar14;
    }
    puVar14 = puVar14 + 0x1b;
    FUN_1801f65e0(puVar10,puVar8);
  } while( true );
}




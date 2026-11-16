// FUN_180162c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162c60 */

int FUN_180162c60(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  
  puVar15 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar15 = (undefined8 *)*param_1;
  }
  puVar1 = (ushort *)((longlong)puVar15 + param_1[2] * 2);
  puVar7 = (ushort *)FUN_1800a7b00(puVar15,puVar1);
  lVar5 = *param_2;
  puVar2 = (ushort *)(lVar5 + param_2[1] * 2);
  puVar8 = (ushort *)FUN_1800a7b00(lVar5,puVar2);
  uVar11 = (longlong)puVar8 - lVar5 >> 1;
  uVar14 = (longlong)puVar7 - (longlong)puVar15 >> 1;
  uVar12 = uVar14;
  if (uVar11 < uVar14) {
    uVar12 = uVar11;
  }
  iVar6 = FUN_1801594c0(puVar15,lVar5,uVar12);
  if (iVar6 == 0) {
    if (uVar14 < uVar11) {
      return -1;
    }
    puVar9 = puVar7;
    if (uVar14 <= uVar11) {
      for (; (puVar13 = puVar8, puVar9 != puVar1 && ((*puVar9 == 0x5c || (*puVar9 == 0x2f))));
          puVar9 = puVar9 + 1) {
      }
      for (; (puVar13 != puVar2 && ((*puVar13 == 0x5c || (*puVar13 == 0x2f))));
          puVar13 = puVar13 + 1) {
      }
      iVar6 = (uint)(puVar7 != puVar9) - (uint)(puVar8 != puVar13);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = (uint)(puVar13 == puVar2) - (uint)(puVar9 == puVar1);
      do {
        if ((puVar9 == puVar1) || (iVar6 != 0)) {
          return iVar6;
        }
        uVar3 = *puVar9;
        if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
        uVar4 = *puVar13;
        if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
          iVar10 = 1;
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 - iVar6 != 0) {
          return iVar10 - iVar6;
        }
        if ((char)iVar6 == '\0') {
          if ((uint)uVar3 - (uint)uVar4 != 0) {
            return (uint)uVar3 - (uint)uVar4;
          }
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        else {
          do {
            puVar9 = puVar9 + 1;
            if (puVar9 == puVar1) break;
          } while ((*puVar9 == 0x5c) || (*puVar9 == 0x2f));
          do {
            puVar13 = puVar13 + 1;
            if (puVar13 == puVar2) break;
          } while ((*puVar13 == 0x5c) || (*puVar13 == 0x2f));
        }
        iVar6 = (uint)(puVar13 == puVar2) - (uint)(puVar9 == puVar1);
      } while( true );
    }
    iVar6 = 1;
  }
  return iVar6;
}




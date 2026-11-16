// FUN_1805cd800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cd800 */

undefined8 FUN_1805cd800(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  
  puVar2 = (undefined8 *)(param_1 + 0x4a0);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  piVar9 = *(int **)(param_1 + 0xf8);
  piVar7 = piVar9 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
  do {
    if (piVar7 <= piVar9) {
      return 8;
    }
    if (*piVar9 == 0x42444620) {
      uVar4 = piVar9[3];
      if (uVar4 != 0) {
        iVar6 = FUN_1805788b0(param_2,piVar9[2]);
        if (iVar6 != 0) {
          return 8;
        }
        if (uVar4 < 8) {
          return 8;
        }
        iVar6 = FUN_180577d80(param_2,uVar4,puVar2);
        if (iVar6 != 0) {
          return 8;
        }
        puVar5 = (undefined1 *)*puVar2;
        *(undefined1 **)(param_1 + 0x4a8) = puVar5 + uVar4;
        uVar11 = (uint)CONCAT11(puVar5[2],puVar5[3]);
        uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]);
        if ((((CONCAT11(*puVar5,puVar5[1]) == 1) && (7 < uVar8)) && (uVar11 <= uVar8 - 8 >> 2)) &&
           (uVar8 < uVar4)) {
          *(uint *)(param_1 + 0x4bc) = uVar11;
          *(undefined1 **)(param_1 + 0x4b0) = puVar5 + uVar8;
          *(uint *)(param_1 + 0x4b8) = uVar4 - uVar8;
          puVar12 = puVar5 + (ulonglong)(uVar11 * 4) + 8;
          if (uVar11 != 0) {
            puVar10 = puVar5 + 10;
            do {
              uVar3 = *puVar10;
              puVar1 = puVar10 + 1;
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + (ulonglong)CONCAT11(uVar3,*puVar1) * 10;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (puVar12 <= puVar5 + uVar8) {
            *(undefined1 *)(param_1 + 0x4c0) = 1;
            return 0;
          }
        }
        FUN_180578860(param_2,puVar2);
        *puVar2 = 0;
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        *(undefined8 *)(param_1 + 0x4b0) = 0;
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        *(undefined8 *)(param_1 + 0x4c0) = 0;
        return 8;
      }
    }
    piVar9 = piVar9 + 4;
  } while( true );
}




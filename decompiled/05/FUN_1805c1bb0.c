// FUN_1805c1bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1bb0 */

undefined8 FUN_1805c1bb0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong local_res18;
  
  if (*(undefined1 **)(param_2 + 0x108) < (undefined1 *)(param_1 + 10U)) {
    FUN_18057bd80(param_2,8);
  }
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                             *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7)),
                            *(undefined1 *)(param_1 + 8)),*(undefined1 *)(param_1 + 9));
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar10) || (uVar10 < 10)) ||
     ((uVar10 - 10) / 0xb < uVar6)) {
    FUN_18057bd80(param_2,8);
  }
  uVar4 = 1;
  if (uVar6 != 0) {
    local_res18 = (ulonglong)uVar6;
    puVar12 = (undefined1 *)(param_1 + 10U);
    do {
      uVar6 = (uint)CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]);
      uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar12[3],puVar12[4]),puVar12[5]),puVar12[6]);
      uVar9 = CONCAT31(CONCAT21(CONCAT11(puVar12[7],puVar12[8]),puVar12[9]),puVar12[10]);
      if ((uVar10 <= uVar7) || (uVar10 <= uVar9)) {
        FUN_18057bd80(param_2,8);
      }
      if (uVar6 < uVar4) {
        FUN_18057bd80(param_2,8);
      }
      uVar4 = uVar6 + 1;
      if (uVar7 != 0) {
        uVar6 = 0;
        puVar5 = (undefined1 *)((ulonglong)uVar7 + 4 + param_1);
        if (*(undefined1 **)(param_2 + 0x108) < puVar5) {
          FUN_18057bd80(param_2,8);
        }
        uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar5[-4],puVar5[-3]),puVar5[-2]),puVar5[-1]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar5) >> 2 < uVar7) {
          FUN_18057bd80(param_2,8);
        }
        if (uVar7 != 0) {
          uVar11 = (ulonglong)uVar7;
          do {
            uVar8 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
            uVar7 = (byte)puVar5[3] + uVar8;
            if (0x10ffff < uVar7) {
              FUN_18057bd80(param_2,8);
            }
            if (uVar8 < uVar6) {
              FUN_18057bd80(param_2,8);
            }
            uVar6 = uVar7 + 1;
            uVar11 = uVar11 - 1;
            puVar5 = puVar5 + 4;
          } while (uVar11 != 0);
        }
      }
      if (uVar9 != 0) {
        uVar6 = 0;
        puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar9);
        puVar5 = puVar3 + 4;
        if (*(undefined1 **)(param_2 + 0x108) < puVar5) {
          FUN_18057bd80(param_2,8);
        }
        uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar5) / 5 < uVar7) {
          FUN_18057bd80(param_2,8);
        }
        if (uVar7 != 0) {
          uVar11 = (ulonglong)uVar7;
          do {
            uVar1 = puVar5[3];
            uVar7 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
            uVar2 = puVar5[4];
            if (0x10ffff < uVar7) {
              FUN_18057bd80(param_2,8);
            }
            if (uVar7 < uVar6) {
              FUN_18057bd80(param_2,8);
            }
            uVar6 = uVar7 + 1;
            if ((0 < *(int *)(param_2 + 0x110)) &&
               (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(uVar1,uVar2))) {
              FUN_18057bd80(param_2,0x10);
            }
            uVar11 = uVar11 - 1;
            puVar5 = puVar5 + 5;
          } while (uVar11 != 0);
        }
      }
      local_res18 = local_res18 - 1;
      puVar12 = puVar12 + 0xb;
    } while (local_res18 != 0);
  }
  return 0;
}




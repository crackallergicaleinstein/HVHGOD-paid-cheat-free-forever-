// FUN_1805c7480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7480 */

ulonglong FUN_1805c7480(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint local_res8 [2];
  
  uVar9 = 0;
  uVar15 = 0;
  uVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x6b65726e,param_2,local_res8);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (local_res8[0] < 4) {
    return 0x8e;
  }
  uVar5 = FUN_180577d80(param_2,local_res8[0],param_1 + 0x488);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x488);
  *(uint *)(param_1 + 0x490) = local_res8[0];
  puVar2 = (undefined1 *)(lVar3 + (ulonglong)local_res8[0]);
  uVar10 = (uint)CONCAT11(*(undefined1 *)(lVar3 + 2),*(undefined1 *)(lVar3 + 3));
  if (uVar10 < 0x21) {
    uVar8 = 0;
    if (uVar10 == 0) goto LAB_1805c7665;
  }
  else {
    uVar10 = 0x20;
  }
  uVar14 = 1;
  uVar8 = 0;
  puVar12 = (undefined1 *)(lVar3 + 4);
  do {
    if (puVar2 < puVar12 + 6) break;
    if (CONCAT11(puVar12[2],puVar12[3]) < 0xf) break;
    puVar13 = puVar12 + (uint)CONCAT11(puVar12[2],puVar12[3]);
    if (puVar2 < puVar12 + (uint)CONCAT11(puVar12[2],puVar12[3])) {
      puVar13 = puVar2;
    }
    if (((CONCAT11(puVar12[4],puVar12[5]) < 0x100) && ((puVar12[5] & 3) == 1)) &&
       (puVar1 = puVar12 + 0xe, puVar1 <= puVar13)) {
      uVar6 = (uint)CONCAT11(puVar12[6],puVar12[7]);
      if ((longlong)puVar13 - (longlong)puVar1 < (longlong)(ulonglong)(uVar6 * 6)) {
        uVar6 = (uint)(((longlong)puVar13 - (longlong)puVar1) / 6);
      }
      uVar9 = uVar9 | uVar14;
      if (uVar6 != 0) {
        iVar11 = uVar6 - 1;
        if (iVar11 != 0) {
          puVar7 = puVar12 + 0x15;
          uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar12[0xf]),puVar12[0x10]),puVar12[0x11]);
          do {
            uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar7[-1],*puVar7),puVar7[1]),puVar7[2]);
            if (uVar4 < uVar6) goto LAB_1805c7653;
            puVar7 = puVar7 + 6;
            iVar11 = iVar11 + -1;
            uVar6 = uVar4;
          } while (iVar11 != 0);
        }
        uVar15 = uVar15 | uVar14;
      }
    }
LAB_1805c7653:
    uVar8 = uVar8 + 1;
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    puVar12 = puVar13;
  } while (uVar8 < uVar10);
LAB_1805c7665:
  *(uint *)(param_1 + 0x494) = uVar8;
  *(uint *)(param_1 + 0x498) = uVar9;
  *(uint *)(param_1 + 0x49c) = uVar15;
  return uVar5 & 0xffffffff;
}




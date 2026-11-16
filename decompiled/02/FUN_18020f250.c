// FUN_18020f250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020f250 */

undefined8 *
FUN_18020f250(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  ulonglong uVar1;
  size_t _Size;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  float *local_48;
  undefined8 *local_40;
  
  uVar1 = param_3[2];
  uVar9 = param_3[3];
  puVar10 = param_3;
  if (0xf < uVar9) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar6 = 0;
  uVar13 = 0xcbf29ce484222325;
  if (uVar1 != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)((longlong)puVar10 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  puVar10 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar10 != *(undefined8 **)(param_1 + 2)) {
    puVar12 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    while( true ) {
      puVar11 = puVar10 + 2;
      if (0xf < (ulonglong)puVar10[5]) {
        puVar11 = (undefined8 *)*puVar11;
      }
      puVar7 = param_3;
      if (0xf < uVar9) {
        puVar7 = (undefined8 *)*param_3;
      }
      if ((uVar1 == puVar10[4]) &&
         ((uVar1 == 0 || (iVar5 = memcmp(puVar7,puVar11,uVar1), iVar5 == 0)))) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar12) break;
      puVar10 = (undefined8 *)puVar10[1];
    }
    puVar12 = puVar10;
  }
  local_48 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  FUN_1801b7740(&local_48);
  puVar10 = local_40;
  *(undefined1 (*) [16])(local_40 + 2) = (undefined1  [16])0x0;
  local_40[4] = 0;
  local_40[5] = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  local_40[2] = *param_3;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = uVar4;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined2 *)(local_40 + 6) = *param_4;
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar16 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar16 = (undefined1  [12])0x0;
  }
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar15 / (float)uVar1) {
    auVar14._0_4_ = fVar15 / *param_1;
    auVar14._4_12_ = auVar16;
    auVar14 = vroundss_avx(ZEXT816(0),auVar14,2);
    fVar15 = auVar14._0_4_;
    lVar8 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar8)) {
      uVar9 = (longlong)fVar15 + lVar8;
    }
    uVar6 = uVar1;
    if ((uVar1 < uVar9) && ((0x1ff < uVar1 || (uVar6 = uVar1 * 8, uVar1 * 8 < uVar9)))) {
      uVar6 = uVar9;
    }
    FUN_1801b7e40(param_1,uVar6);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    puVar12 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != *(undefined8 **)(param_1 + 2)) {
      puVar12 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
      uVar1 = puVar10[5];
      _Size = puVar10[4];
      while( true ) {
        puVar7 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar10 + 2;
        if (0xf < uVar1) {
          _Buf1 = (undefined8 *)puVar10[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar7,_Size), iVar5 == 0)))) {
          puVar12 = (undefined8 *)*puVar11;
          goto LAB_18020f4f9;
        }
        if (puVar11 == puVar12) break;
        puVar11 = (undefined8 *)puVar11[1];
      }
      puVar12 = puVar11;
    }
  }
LAB_18020f4f9:
  puVar11 = (undefined8 *)puVar12[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar10 = puVar12;
  puVar10[1] = puVar11;
  *puVar11 = puVar10;
  puVar12[1] = puVar10;
  uVar13 = *(ulonglong *)(param_1 + 0xc) & uVar13;
  lVar8 = *(longlong *)(param_1 + 6);
  puVar7 = *(undefined8 **)(lVar8 + uVar13 * 0x10);
  if (puVar7 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar8 + uVar13 * 0x10) = puVar10;
  }
  else {
    if (puVar7 == puVar12) {
      *(undefined8 **)(lVar8 + uVar13 * 0x10) = puVar10;
      goto LAB_18020f545;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar13 * 0x10) != puVar11) goto LAB_18020f545;
  }
  *(undefined8 **)(lVar8 + 8 + uVar13 * 0x10) = puVar10;
LAB_18020f545:
  *param_2 = puVar10;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




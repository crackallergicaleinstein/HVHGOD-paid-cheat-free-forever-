// FUN_180550530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180550530 */

undefined8 * FUN_180550530(float *param_1,undefined8 *param_2,undefined8 *param_3,short *param_4)

{
  ulonglong uVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  float *local_48;
  undefined8 *local_40;
  
  uVar1 = param_3[2];
  uVar6 = param_3[3];
  puVar7 = param_3;
  if (0xf < uVar6) {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar3 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (uVar1 != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar7 + uVar3)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar7 != puVar9) {
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    while( true ) {
      puVar8 = puVar7 + 2;
      if (0xf < (ulonglong)puVar7[5]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      puVar4 = param_3;
      if (0xf < uVar6) {
        puVar4 = (undefined8 *)*param_3;
      }
      if ((uVar1 == puVar7[4]) &&
         ((uVar1 == 0 || (iVar2 = memcmp(puVar4,puVar8,uVar1), iVar2 == 0)))) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == puVar9) break;
      puVar7 = (undefined8 *)puVar7[1];
    }
    puVar9 = puVar7;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  local_48 = param_1 + 2;
  FUN_1801b7740(&local_48);
  puVar7 = local_40;
  FUN_18015b360(local_40 + 2,param_3);
  *(int *)(puVar7 + 6) = (int)*param_4;
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar13 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar13 = (undefined1  [12])0x0;
  }
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar12 / (float)uVar1) {
    auVar11._0_4_ = fVar12 / *param_1;
    auVar11._4_12_ = auVar13;
    auVar11 = vroundss_avx(ZEXT816(0),auVar11,2);
    fVar12 = auVar11._0_4_;
    lVar5 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar5)) {
      uVar6 = (longlong)fVar12 + lVar5;
    }
    uVar3 = uVar1;
    if ((uVar1 < uVar6) && ((0x1ff < uVar1 || (uVar3 = uVar1 * 8, uVar1 * 8 < uVar6)))) {
      uVar3 = uVar6;
    }
    FUN_1801b7e40(param_1,uVar3);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
      uVar1 = puVar7[5];
      _Size = puVar7[4];
      while( true ) {
        puVar4 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        _Buf1 = puVar7 + 2;
        if (0xf < uVar1) {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size == puVar8[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar4,_Size), iVar2 == 0)))) break;
        if (puVar8 == puVar9) goto LAB_1805507b6;
        puVar8 = (undefined8 *)puVar8[1];
      }
      puVar8 = (undefined8 *)*puVar8;
LAB_1805507b6:
      puVar9 = puVar8;
    }
  }
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar9;
  puVar7[1] = puVar8;
  *puVar8 = puVar7;
  puVar9[1] = puVar7;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar5 = *(longlong *)(param_1 + 6);
  puVar4 = *(undefined8 **)(lVar5 + uVar10 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar10 * 0x10) = puVar7;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar5 + uVar10 * 0x10) = puVar7;
      goto LAB_180550807;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar10 * 0x10) != puVar8) goto LAB_180550807;
  }
  *(undefined8 **)(lVar5 + 8 + uVar10 * 0x10) = puVar7;
LAB_180550807:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




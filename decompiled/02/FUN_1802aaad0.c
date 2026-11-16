// FUN_1802aaad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aaad0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1802aaad0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  char *local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 *local_30;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = *(undefined8 **)(DAT_180cd3dd8 + 8 + (uVar8 & DAT_180cd3df0) * 0x10);
  puVar9 = DAT_180cd3dc8;
  if (puVar4 != DAT_180cd3dc8) {
    lVar5 = puVar4[2];
    puVar9 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar5) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(undefined8 **)(DAT_180cd3dd8 + (uVar8 & DAT_180cd3df0) * 0x10)) break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar5 = puVar9[2];
    }
  }
  if (DAT_180cd3dd0 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_38 = &DAT_180cd3dc8;
  local_30 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  puVar4[2] = *(undefined8 *)param_3;
  uVar3 = param_4[1];
  puVar4[3] = *param_4;
  puVar4[4] = uVar3;
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180cd3dd0 + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(DAT_180cd3dd0 + 1U);
  if (DAT_180cd3dc0 < fVar11 / (float)DAT_180cd3df8) {
    auVar10._0_4_ = fVar11 / DAT_180cd3dc0;
    auVar10._4_12_ = auVar12;
    auVar10 = vroundss_avx(ZEXT816(0),auVar10,2);
    fVar11 = auVar10._0_4_;
    lVar5 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar7 = DAT_180cd3df8;
    if ((DAT_180cd3df8 < uVar6) &&
       ((0x1ff < DAT_180cd3df8 || (uVar7 = DAT_180cd3df8 * 8, DAT_180cd3df8 * 8 < uVar6)))) {
      uVar7 = uVar6;
    }
    local_30 = puVar4;
    FUN_1802ae5d0(0x5f000000,uVar7);
    puVar1 = *(undefined8 **)(DAT_180cd3dd8 + 8 + (DAT_180cd3df0 & uVar8) * 0x10);
    puVar9 = DAT_180cd3dc8;
    if (puVar1 != DAT_180cd3dc8) {
      lVar5 = puVar1[2];
      puVar9 = puVar1;
      while (puVar4[2] != lVar5) {
        if (puVar9 == *(undefined8 **)(DAT_180cd3dd8 + (DAT_180cd3df0 & uVar8) * 0x10))
        goto LAB_1802aad79;
        puVar9 = (undefined8 *)puVar9[1];
        lVar5 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1802aad79:
  puVar1 = (undefined8 *)puVar9[1];
  DAT_180cd3dd0 = DAT_180cd3dd0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar1;
  *puVar1 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180cd3dd8;
  uVar8 = DAT_180cd3df0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180cd3dd8 + uVar8 * 0x10);
  if (puVar2 == DAT_180cd3dc8) {
    *(undefined8 **)(DAT_180cd3dd8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180cd3dd8 + uVar8 * 0x10) = puVar4;
      goto LAB_1802aadd8;
    }
    if (*(undefined8 **)(DAT_180cd3dd8 + 8 + uVar8 * 0x10) != puVar1) goto LAB_1802aadd8;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1802aadd8:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




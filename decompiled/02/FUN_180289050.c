// FUN_180289050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180289050 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180289050(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [12];
  char *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 *local_20;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar3 = *(undefined8 **)(DAT_180cd3d38 + 8 + (uVar7 & DAT_180cd3d50) * 0x10);
  puVar8 = DAT_180cd3d28;
  if (puVar3 != DAT_180cd3d28) {
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)(DAT_180cd3d38 + (uVar7 & DAT_180cd3d50) * 0x10)) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cd3d30 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_28 = &DAT_180cd3d28;
  local_20 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined1 (*) [16])(puVar3 + 3) = (undefined1  [16])0x0;
  puVar3[5] = 0;
  auVar11 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180cd3d30 + 1U) < 0) {
    auVar11 = (undefined1  [12])0x0;
  }
  fVar10 = (float)(DAT_180cd3d30 + 1U);
  if (DAT_180cd3d20 < fVar10 / (float)DAT_180cd3d58) {
    auVar9._0_4_ = fVar10 / DAT_180cd3d20;
    auVar9._4_12_ = auVar11;
    auVar9 = vroundss_avx(ZEXT816(0),auVar9,2);
    fVar10 = auVar9._0_4_;
    lVar4 = 0;
    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar6 = DAT_180cd3d58;
    if ((DAT_180cd3d58 < uVar5) &&
       ((0x1ff < DAT_180cd3d58 || (uVar6 = DAT_180cd3d58 * 8, DAT_180cd3d58 * 8 < uVar5)))) {
      uVar6 = uVar5;
    }
    local_20 = puVar3;
    FUN_18028a160(0x5f000000,uVar6);
    puVar1 = *(undefined8 **)(DAT_180cd3d38 + 8 + (DAT_180cd3d50 & uVar7) * 0x10);
    puVar8 = DAT_180cd3d28;
    if (puVar1 != DAT_180cd3d28) {
      lVar4 = puVar1[2];
      puVar8 = puVar1;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cd3d38 + (DAT_180cd3d50 & uVar7) * 0x10))
        goto LAB_180289300;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180289300:
  puVar1 = (undefined8 *)puVar8[1];
  DAT_180cd3d30 = DAT_180cd3d30 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar1;
  *puVar1 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cd3d38;
  uVar7 = DAT_180cd3d50 & uVar7;
  puVar2 = *(undefined8 **)(DAT_180cd3d38 + uVar7 * 0x10);
  if (puVar2 == DAT_180cd3d28) {
    *(undefined8 **)(DAT_180cd3d38 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == puVar8) {
      *(undefined8 **)(DAT_180cd3d38 + uVar7 * 0x10) = puVar3;
      goto LAB_18028935f;
    }
    if (*(undefined8 **)(DAT_180cd3d38 + 8 + uVar7 * 0x10) != puVar1) goto LAB_18028935f;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_18028935f:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




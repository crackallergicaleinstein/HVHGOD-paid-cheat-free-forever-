// FUN_1802303c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802303c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1802303c0(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  char *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 *local_20;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar4 = *(undefined8 **)(DAT_180bbee28 + 8 + (uVar8 & DAT_180bbee40) * 0x10);
  puVar9 = DAT_180bbee18;
  if (puVar4 != DAT_180bbee18) {
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(undefined8 **)(DAT_180bbee28 + (uVar8 & DAT_180bbee40) * 0x10)) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_180bbee20 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_28 = &DAT_180bbee18;
  local_20 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180bbee20 + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(DAT_180bbee20 + 1U);
  if (DAT_180bbee10 < fVar11 / (float)DAT_180bbee48) {
    auVar10._0_4_ = fVar11 / DAT_180bbee10;
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
    uVar7 = DAT_180bbee48;
    if ((DAT_180bbee48 < uVar6) &&
       ((0x1ff < DAT_180bbee48 || (uVar7 = DAT_180bbee48 * 8, DAT_180bbee48 * 8 < uVar6)))) {
      uVar7 = uVar6;
    }
    local_20 = puVar4;
    FUN_180232390(0x5f000000,uVar7);
    puVar2 = *(undefined8 **)(DAT_180bbee28 + 8 + (DAT_180bbee40 & uVar8) * 0x10);
    puVar9 = DAT_180bbee18;
    if (puVar2 != DAT_180bbee18) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180bbee28 + (DAT_180bbee40 & uVar8) * 0x10))
        goto LAB_18023063c;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18023063c:
  puVar2 = (undefined8 *)puVar9[1];
  DAT_180bbee20 = DAT_180bbee20 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar2;
  *puVar2 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180bbee28;
  uVar8 = DAT_180bbee40 & uVar8;
  puVar3 = *(undefined8 **)(DAT_180bbee28 + uVar8 * 0x10);
  if (puVar3 == DAT_180bbee18) {
    *(undefined8 **)(DAT_180bbee28 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar3 == puVar9) {
      *(undefined8 **)(DAT_180bbee28 + uVar8 * 0x10) = puVar4;
      goto LAB_18023069b;
    }
    if (*(undefined8 **)(DAT_180bbee28 + 8 + uVar8 * 0x10) != puVar2) goto LAB_18023069b;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18023069b:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




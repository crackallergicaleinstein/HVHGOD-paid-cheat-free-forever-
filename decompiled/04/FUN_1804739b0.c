// FUN_1804739b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804739b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1804739b0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  char *local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 *local_30;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)(DAT_180c62ce8 + 8 + (uVar9 & DAT_180c62d00) * 0x10);
  puVar10 = DAT_180c62cd8;
  if (puVar5 != DAT_180c62cd8) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar10 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == *(undefined8 **)(DAT_180c62ce8 + (uVar9 & DAT_180c62d00) * 0x10)) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar1 = *(int *)(puVar10 + 2);
    }
  }
  if (DAT_180c62ce0 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_38 = &DAT_180c62cd8;
  local_30 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  uVar4 = param_4[1];
  puVar5[3] = *param_4;
  puVar5[4] = uVar4;
  auVar13 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180c62ce0 + 1U) < 0) {
    auVar13 = (undefined1  [12])0x0;
  }
  fVar12 = (float)(DAT_180c62ce0 + 1U);
  if (DAT_180c62cd0 < fVar12 / (float)DAT_180c62d08) {
    auVar11._0_4_ = fVar12 / DAT_180c62cd0;
    auVar11._4_12_ = auVar13;
    auVar11 = vroundss_avx(ZEXT816(0),auVar11,2);
    fVar12 = auVar11._0_4_;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar8 = DAT_180c62d08;
    if ((DAT_180c62d08 < uVar7) &&
       ((0x1ff < DAT_180c62d08 || (uVar8 = DAT_180c62d08 * 8, DAT_180c62d08 * 8 < uVar7)))) {
      uVar8 = uVar7;
    }
    local_30 = puVar5;
    FUN_180473d20(0x5f000000,uVar8);
    puVar2 = *(undefined8 **)(DAT_180c62ce8 + 8 + (DAT_180c62d00 & uVar9) * 0x10);
    puVar10 = DAT_180c62cd8;
    if (puVar2 != DAT_180c62cd8) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar10 = puVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180c62ce8 + (DAT_180c62d00 & uVar9) * 0x10))
        goto LAB_180473c28;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180473c28:
  puVar2 = (undefined8 *)puVar10[1];
  DAT_180c62ce0 = DAT_180c62ce0 + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar10[1] = puVar5;
  lVar6 = DAT_180c62ce8;
  uVar9 = DAT_180c62d00 & uVar9;
  puVar3 = *(undefined8 **)(DAT_180c62ce8 + uVar9 * 0x10);
  if (puVar3 == DAT_180c62cd8) {
    *(undefined8 **)(DAT_180c62ce8 + uVar9 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar10) {
      *(undefined8 **)(DAT_180c62ce8 + uVar9 * 0x10) = puVar5;
      goto LAB_180473c87;
    }
    if (*(undefined8 **)(DAT_180c62ce8 + 8 + uVar9 * 0x10) != puVar2) goto LAB_180473c87;
  }
  *(undefined8 **)(lVar6 + 8 + uVar9 * 0x10) = puVar5;
LAB_180473c87:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




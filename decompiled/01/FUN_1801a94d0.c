// FUN_1801a94d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a94d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801a94d0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [12];
  char *local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar7 = *(undefined8 **)(DAT_180bbe9a8 + 8 + (uVar11 & DAT_180bbe9c0) * 0x10);
  puVar12 = DAT_180bbe998;
  if (puVar7 != DAT_180bbe998) {
    iVar1 = *(int *)(puVar7 + 2);
    puVar12 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar12;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar12 == *(undefined8 **)(DAT_180bbe9a8 + (uVar11 & DAT_180bbe9c0) * 0x10)) break;
      puVar12 = (undefined8 *)puVar12[1];
      iVar1 = *(int *)(puVar12 + 2);
    }
  }
  if (DAT_180bbe9a0 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_48 = &DAT_180bbe998;
  local_40 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x68);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)(puVar7 + 3) = *param_4;
  puVar7[4] = *(undefined8 *)(param_4 + 2);
  *(undefined1 (*) [16])(puVar7 + 5) = (undefined1  [16])0x0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  uVar4 = *(undefined8 *)(param_4 + 6);
  uVar5 = *(undefined8 *)(param_4 + 8);
  uVar6 = *(undefined8 *)(param_4 + 10);
  puVar7[5] = *(undefined8 *)(param_4 + 4);
  puVar7[6] = uVar4;
  puVar7[7] = uVar5;
  puVar7[8] = uVar6;
  *(undefined8 *)(param_4 + 10) = 0xf;
  *(undefined1 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 9) = (undefined1  [16])0x0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  uVar4 = *(undefined8 *)(param_4 + 0xe);
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  uVar6 = *(undefined8 *)(param_4 + 0x12);
  puVar7[9] = *(undefined8 *)(param_4 + 0xc);
  puVar7[10] = uVar4;
  puVar7[0xb] = uVar5;
  puVar7[0xc] = uVar6;
  *(undefined1 *)(param_4 + 0xc) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x12) = 0xf;
  auVar15 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180bbe9a0 + 1U) < 0) {
    auVar15 = (undefined1  [12])0x0;
  }
  fVar14 = (float)(DAT_180bbe9a0 + 1U);
  if (DAT_180bbe990 < fVar14 / (float)DAT_180bbe9c8) {
    auVar13._0_4_ = fVar14 / DAT_180bbe990;
    auVar13._4_12_ = auVar15;
    auVar13 = vroundss_avx(ZEXT816(0),auVar13,2);
    fVar14 = auVar13._0_4_;
    lVar8 = 0;
    if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar14 + lVar8)) {
      uVar9 = (longlong)fVar14 + lVar8;
    }
    uVar10 = DAT_180bbe9c8;
    if ((DAT_180bbe9c8 < uVar9) &&
       ((0x1ff < DAT_180bbe9c8 || (uVar10 = DAT_180bbe9c8 * 8, DAT_180bbe9c8 * 8 < uVar9)))) {
      uVar10 = uVar9;
    }
    local_40 = puVar7;
    FUN_1801b78c0(uVar9,uVar10);
    puVar2 = *(undefined8 **)(DAT_180bbe9a8 + 8 + (DAT_180bbe9c0 & uVar11) * 0x10);
    puVar12 = DAT_180bbe998;
    if (puVar2 != DAT_180bbe998) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar12 = puVar2;
      while (*(int *)(puVar7 + 2) != iVar1) {
        if (puVar12 == *(undefined8 **)(DAT_180bbe9a8 + (DAT_180bbe9c0 & uVar11) * 0x10))
        goto LAB_1801a97a8;
        puVar12 = (undefined8 *)puVar12[1];
        iVar1 = *(int *)(puVar12 + 2);
      }
      puVar12 = (undefined8 *)*puVar12;
    }
  }
LAB_1801a97a8:
  puVar2 = (undefined8 *)puVar12[1];
  DAT_180bbe9a0 = DAT_180bbe9a0 + 1;
  *puVar7 = puVar12;
  puVar7[1] = puVar2;
  *puVar2 = puVar7;
  puVar12[1] = puVar7;
  lVar8 = DAT_180bbe9a8;
  uVar11 = DAT_180bbe9c0 & uVar11;
  puVar3 = *(undefined8 **)(DAT_180bbe9a8 + uVar11 * 0x10);
  if (puVar3 == DAT_180bbe998) {
    *(undefined8 **)(DAT_180bbe9a8 + uVar11 * 0x10) = puVar7;
  }
  else {
    if (puVar3 == puVar12) {
      *(undefined8 **)(DAT_180bbe9a8 + uVar11 * 0x10) = puVar7;
      goto LAB_1801a9807;
    }
    if (*(undefined8 **)(DAT_180bbe9a8 + 8 + uVar11 * 0x10) != puVar2) goto LAB_1801a9807;
  }
  *(undefined8 **)(lVar8 + 8 + uVar11 * 0x10) = puVar7;
LAB_1801a9807:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




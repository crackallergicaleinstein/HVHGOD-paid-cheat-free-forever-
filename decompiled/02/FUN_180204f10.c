// FUN_180204f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180204f10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180204f10(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [12];
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar10 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar11 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar11) {
    iVar2 = *(int *)(puVar6 + 2);
    puVar11 = puVar6;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar11;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar11 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) break;
      puVar11 = (undefined8 *)puVar11[1];
      iVar2 = *(int *)(puVar11 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  local_48 = pfVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)param_3;
  *(undefined1 *)((longlong)puVar6 + 0x14) = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  auVar14 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar14 = (undefined1  [12])0x0;
  }
  fVar13 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar13 / (float)uVar3) {
    auVar12._0_4_ = fVar13 / *param_1;
    auVar12._4_12_ = auVar14;
    auVar12 = vroundss_avx(ZEXT816(0),auVar12,2);
    fVar13 = auVar12._0_4_;
    lVar7 = 0;
    if ((9.223372e+18 <= fVar13) && (fVar13 = fVar13 - 9.223372e+18, fVar13 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar7)) {
      uVar8 = (longlong)fVar13 + lVar7;
    }
    uVar9 = uVar3;
    if ((uVar3 < uVar8) && ((0x1ff < uVar3 || (uVar9 = uVar3 * 8, uVar3 * 8 < uVar8)))) {
      uVar9 = uVar8;
    }
    local_40 = puVar6;
    FUN_180205a20(param_1,uVar9);
    puVar4 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar11 = *(undefined8 **)pfVar1;
    if (puVar4 != puVar11) {
      iVar2 = *(int *)(puVar4 + 2);
      puVar11 = puVar4;
      while (*(int *)(puVar6 + 2) != iVar2) {
        if (puVar11 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10))
        goto LAB_180205151;
        puVar11 = (undefined8 *)puVar11[1];
        iVar2 = *(int *)(puVar11 + 2);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
  }
LAB_180205151:
  puVar4 = (undefined8 *)puVar11[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar11;
  puVar6[1] = puVar4;
  *puVar4 = puVar6;
  puVar11[1] = puVar6;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar7 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar7 + uVar10 * 0x10);
  if (puVar5 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar7 + uVar10 * 0x10) = puVar6;
  }
  else {
    if (puVar5 == puVar11) {
      *(undefined8 **)(lVar7 + uVar10 * 0x10) = puVar6;
      goto LAB_1802051a1;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar10 * 0x10) != puVar4) goto LAB_1802051a1;
  }
  *(undefined8 **)(lVar7 + 8 + uVar10 * 0x10) = puVar6;
LAB_1802051a1:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




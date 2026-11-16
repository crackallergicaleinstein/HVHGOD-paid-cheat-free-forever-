// FUN_180204840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180204840 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180204840(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float fVar15;
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar14 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar3 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar13 = *(undefined8 **)pfVar1;
  if (puVar3 != puVar13) {
    iVar2 = *(int *)(puVar3 + 2);
    puVar13 = puVar3;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar13;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar13 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) break;
      puVar13 = (undefined8 *)puVar13[1];
      iVar2 = *(int *)(puVar13 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xa3d70a3d70a3d7) {
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
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,400);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)param_3;
  lVar8 = 2;
  puVar3 = puVar7 + 3;
  do {
    puVar12 = param_4;
    puVar9 = puVar3;
    uVar6 = puVar12[1];
    *puVar9 = *puVar12;
    puVar9[1] = uVar6;
    uVar6 = puVar12[3];
    puVar9[2] = puVar12[2];
    puVar9[3] = uVar6;
    uVar6 = puVar12[5];
    puVar9[4] = puVar12[4];
    puVar9[5] = uVar6;
    uVar6 = puVar12[7];
    puVar9[6] = puVar12[6];
    puVar9[7] = uVar6;
    uVar6 = puVar12[9];
    puVar9[8] = puVar12[8];
    puVar9[9] = uVar6;
    uVar6 = puVar12[0xb];
    puVar9[10] = puVar12[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar12[0xd];
    puVar9[0xc] = puVar12[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar12[0xf];
    puVar9[0xe] = puVar12[0xe];
    puVar9[0xf] = uVar6;
    lVar8 = lVar8 + -1;
    puVar3 = puVar9 + 0x10;
    param_4 = puVar12 + 0x10;
  } while (lVar8 != 0);
  uVar6 = puVar12[0x11];
  puVar9[0x10] = puVar12[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar12[0x13];
  puVar9[0x12] = puVar12[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar12[0x15];
  puVar9[0x14] = puVar12[0x14];
  puVar9[0x15] = uVar6;
  uVar6 = puVar12[0x17];
  puVar9[0x16] = puVar12[0x16];
  puVar9[0x17] = uVar6;
  uVar6 = puVar12[0x19];
  puVar9[0x18] = puVar12[0x18];
  puVar9[0x19] = uVar6;
  uVar6 = puVar12[0x1b];
  puVar9[0x1a] = puVar12[0x1a];
  puVar9[0x1b] = uVar6;
  uVar6 = puVar12[0x1d];
  puVar9[0x1c] = puVar12[0x1c];
  puVar9[0x1d] = uVar6;
  puVar9[0x1e] = puVar12[0x1e];
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar4) {
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((float)(*(longlong *)(param_1 + 4) + 1) / *param_1)),2);
    fVar15 = auVar5._0_4_;
    lVar8 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar8)) {
      uVar10 = (longlong)fVar15 + lVar8;
    }
    uVar11 = uVar4;
    if ((uVar4 < uVar10) && ((0x1ff < uVar4 || (uVar11 = uVar4 * 8, uVar4 * 8 < uVar10)))) {
      uVar11 = uVar10;
    }
    local_40 = puVar7;
    FUN_180205a20(param_1,uVar11);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar14) * 0x10);
    puVar13 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar13) {
      iVar2 = *(int *)(puVar3 + 2);
      puVar13 = puVar3;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar13 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar14) * 0x10))
        goto LAB_180204b52;
        puVar13 = (undefined8 *)puVar13[1];
        iVar2 = *(int *)(puVar13 + 2);
      }
      puVar13 = (undefined8 *)*puVar13;
    }
  }
LAB_180204b52:
  puVar3 = (undefined8 *)puVar13[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar13;
  puVar7[1] = puVar3;
  *puVar3 = puVar7;
  puVar13[1] = puVar7;
  uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
  lVar8 = *(longlong *)(param_1 + 6);
  puVar9 = *(undefined8 **)(lVar8 + uVar14 * 0x10);
  if (puVar9 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar8 + uVar14 * 0x10) = puVar7;
  }
  else {
    if (puVar9 == puVar13) {
      *(undefined8 **)(lVar8 + uVar14 * 0x10) = puVar7;
      goto LAB_180204ba2;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar14 * 0x10) != puVar3) goto LAB_180204ba2;
  }
  *(undefined8 **)(lVar8 + 8 + uVar14 * 0x10) = puVar7;
LAB_180204ba2:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




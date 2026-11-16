// FUN_1801afff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801afff0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801afff0(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar10 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]
                 ) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3])
               * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
             0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
           0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    lVar6 = puVar5[2];
    puVar9 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar6) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar6 = puVar9[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
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
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  puVar5[2] = *(undefined8 *)param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  auVar13 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar13 = (undefined1  [12])0x0;
  }
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar12 / (float)uVar2) {
    auVar11._0_4_ = fVar12 / *param_1;
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
    uVar8 = uVar2;
    if ((uVar2 < uVar7) && ((0x1ff < uVar2 || (uVar8 = uVar2 * 8, uVar2 * 8 < uVar7)))) {
      uVar8 = uVar7;
    }
    local_40 = puVar5;
    FUN_1801b8d60(param_1,uVar8);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar9) {
      lVar6 = puVar3[2];
      puVar9 = puVar3;
      while (puVar5[2] != lVar6) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_1801b0282;
        puVar9 = (undefined8 *)puVar9[1];
        lVar6 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1801b0282:
  puVar3 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  puVar9[1] = puVar5;
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0xc);
  lVar6 = *(longlong *)(param_1 + 6);
  puVar4 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar5;
      goto LAB_1801b02cf;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar3) goto LAB_1801b02cf;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar5;
LAB_1801b02cf:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




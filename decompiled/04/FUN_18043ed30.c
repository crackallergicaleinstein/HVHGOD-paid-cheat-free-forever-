// FUN_18043ed30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ed30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18043ed30(float *param_1,undefined8 *param_2,byte *param_3)

{
  char *pcVar1;
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
  char *local_78;
  undefined8 local_70;
  float *local_68;
  undefined8 *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  uVar10 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]
                 ) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3])
               * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
             0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
           0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar9 = *(undefined8 **)(param_1 + 2);
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
  local_68 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x1642c8590b21642) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_60 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_78 = "tier0.dll:g_pMemAlloc";
    local_70 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xb8);
  puVar5[2] = *(undefined8 *)param_3;
  local_48 = puVar5 + 3;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  *local_48 = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  pcVar1 = (char *)(puVar5 + 7);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  puVar5[8] = 0;
  puVar5[9] = 0;
  local_78 = pcVar1;
  local_60 = puVar5;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  lVar6 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  puVar5[8] = lVar6;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 7;
  puVar5[0xe] = 8;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = -0x80;
  pcVar1[3] = '?';
  FUN_1801406e0(puVar5 + 10,0x10,puVar5[8]);
  FUN_18043ec00(puVar5 + 0xf);
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
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar8 = (longlong)fVar12 + lVar6;
    }
    uVar7 = uVar2;
    if ((uVar2 < uVar8) && ((0x1ff < uVar2 || (uVar7 = uVar2 * 8, uVar2 * 8 < uVar8)))) {
      uVar7 = uVar8;
    }
    FUN_1804402b0(param_1,uVar7);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar3 != puVar9) {
      lVar6 = puVar3[2];
      puVar9 = puVar3;
      while (puVar5[2] != lVar6) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10
                       )) goto LAB_18043f0a2;
        puVar9 = (undefined8 *)puVar9[1];
        lVar6 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18043f0a2:
  puVar3 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  puVar9[1] = puVar5;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar6 = *(longlong *)(param_1 + 6);
  puVar4 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar5;
      goto LAB_18043f0f2;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar3) goto LAB_18043f0f2;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar5;
LAB_18043f0f2:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




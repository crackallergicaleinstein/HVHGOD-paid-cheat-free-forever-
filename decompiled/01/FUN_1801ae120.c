// FUN_1801ae120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ae120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801ae120(float *param_1,undefined8 *param_2,byte *param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  char *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 *local_50;
  
  uVar9 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  plVar8 = *(longlong **)(param_1 + 2);
  if (plVar1 != plVar8) {
    lVar5 = plVar1[2];
    while (*(longlong *)param_3 != lVar5) {
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar8 = plVar1;
        goto LAB_1801ae266;
      }
      plVar1 = (longlong *)plVar1[1];
      lVar5 = plVar1[2];
    }
    plVar8 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      FUN_180180b20(plVar1 + 3,param_4);
      FUN_180176c30(plVar1 + 0xc,param_4 + 0x48);
      plVar1[0x10] = *(longlong *)(param_4 + 0x68);
      plVar1[0x11] = *(longlong *)(param_4 + 0x70);
      plVar1[0x12] = *(longlong *)(param_4 + 0x78);
      plVar1[0x13] = *(longlong *)(param_4 + 0x80);
      FUN_1801bb8d0(plVar1 + 0x14,param_4 + 0x88);
      *param_2 = plVar1;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1801ae266:
  local_58 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x94f2094f2094f2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_50 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_68 = "tier0.dll:g_pMemAlloc";
    local_60 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x1b8);
  puVar4[2] = *(undefined8 *)param_3;
  local_50 = puVar4;
  FUN_1801bbba0(puVar4 + 3,param_4);
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar11 / (float)uVar2) {
    auVar10._0_4_ = fVar11 / *param_1;
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
    uVar7 = uVar2;
    if ((uVar2 < uVar6) && ((0x1ff < uVar2 || (uVar7 = uVar2 * 8, uVar2 * 8 < uVar6)))) {
      uVar7 = uVar6;
    }
    FUN_1801b80d0(param_1,uVar7);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    plVar8 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar8) {
      lVar5 = plVar1[2];
      plVar8 = plVar1;
      while (puVar4[2] != lVar5) {
        if (plVar8 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10)
           ) goto LAB_1801ae403;
        plVar8 = (longlong *)plVar8[1];
        lVar5 = plVar8[2];
      }
      plVar8 = (longlong *)*plVar8;
    }
  }
LAB_1801ae403:
  puVar3 = (undefined8 *)plVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = plVar8;
  puVar4[1] = puVar3;
  *puVar3 = puVar4;
  plVar8[1] = (longlong)puVar4;
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  lVar5 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar5 + uVar9 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (plVar1 == plVar8) {
      *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar4;
      goto LAB_1801ae453;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) != puVar3) goto LAB_1801ae453;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_1801ae453:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




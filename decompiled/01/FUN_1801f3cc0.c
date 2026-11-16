// FUN_1801f3cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f3cc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801f3cc0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  longlong local_48;
  longlong lStack_40;
  longlong *local_38;
  longlong *local_30;
  char *local_28;
  undefined8 local_20;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar6 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1801f5470(uVar4,&local_48,param_3,uVar8);
  if (lStack_40 != 0) {
    *param_2 = lStack_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180bbebb0 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_38 = &DAT_180bbeba8;
  local_30 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  local_30 = plVar2;
  FUN_18015b360(plVar2 + 2,param_3);
  plVar2[6] = 0;
  plVar2[7] = 0;
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180bbebb0 + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(DAT_180bbebb0 + 1U);
  if (DAT_180bbeba0 < fVar11 / (float)DAT_180bbebd8) {
    auVar10._0_4_ = fVar11 / DAT_180bbeba0;
    auVar10._4_12_ = auVar12;
    auVar10 = vroundss_avx(ZEXT816(0),auVar10,2);
    fVar11 = auVar10._0_4_;
    lVar5 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar4 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar4 = (longlong)fVar11 + lVar5;
    }
    uVar7 = DAT_180bbebd8;
    if ((DAT_180bbebd8 < uVar4) &&
       ((0x1ff < DAT_180bbebd8 || (uVar7 = DAT_180bbebd8 * 8, DAT_180bbebd8 * 8 < uVar4)))) {
      uVar7 = uVar4;
    }
    uVar9 = FUN_1801f60c0(0x5f000000,uVar7);
    plVar3 = (longlong *)FUN_1801f5470(uVar9,&local_38,plVar2 + 2,uVar8);
    local_48 = *plVar3;
  }
  plVar3 = *(longlong **)(local_48 + 8);
  DAT_180bbebb0 = DAT_180bbebb0 + 1;
  *plVar2 = local_48;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_48 + 8) = plVar2;
  lVar1 = DAT_180bbebb8;
  uVar8 = DAT_180bbebd0 & uVar8;
  lVar5 = *(longlong *)(DAT_180bbebb8 + uVar8 * 0x10);
  if (lVar5 == DAT_180bbeba8) {
    *(longlong **)(DAT_180bbebb8 + uVar8 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_48) {
      *(longlong **)(DAT_180bbebb8 + uVar8 * 0x10) = plVar2;
      goto LAB_1801f3f45;
    }
    if (*(longlong **)(DAT_180bbebb8 + 8 + uVar8 * 0x10) != plVar3) goto LAB_1801f3f45;
  }
  *(longlong **)(lVar1 + 8 + uVar8 * 0x10) = plVar2;
LAB_1801f3f45:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




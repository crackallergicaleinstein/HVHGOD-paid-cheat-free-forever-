// FUN_180562970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180562970 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180562970(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
  longlong local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong *local_40;
  char *local_38;
  undefined8 local_30;
  
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
  FUN_18056c930(uVar4,&local_58,param_3,uVar8);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180c63060 == 0x67b23a5440cf64) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_48 = &DAT_180c63058;
  local_40 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x278);
  local_40 = plVar2;
  FUN_18015b360(plVar2 + 2,param_3);
  FUN_18063ab10(plVar2 + 6,0,0x1e0);
  *(undefined4 *)((longlong)plVar2 + 0x271) = 0;
  *(undefined2 *)((longlong)plVar2 + 0x275) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x277) = 0;
  FUN_1801576b0(plVar2 + 6);
  FUN_1801576b0(plVar2 + 0x24);
  *(undefined1 (*) [16])(plVar2 + 0x42) = (undefined1  [16])0x0;
  plVar2[0x44] = 0;
  plVar2[0x45] = 0xf;
  *(undefined1 *)(plVar2 + 0x42) = 0;
  *(undefined1 (*) [16])(plVar2 + 0x46) = (undefined1  [16])0x0;
  plVar2[0x48] = 0;
  plVar2[0x49] = 0xf;
  *(undefined1 *)(plVar2 + 0x46) = 0;
  *(undefined4 *)(plVar2 + 0x4a) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x254) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)plVar2 + 0x25c) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x264) = 0;
  *(undefined4 *)((longlong)plVar2 + 0x26c) = 0x3f800000;
  *(undefined1 *)(plVar2 + 0x4e) = 0;
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180c63060 + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(DAT_180c63060 + 1U);
  if (DAT_180c63050 < fVar11 / (float)DAT_180c63088) {
    auVar10._0_4_ = fVar11 / DAT_180c63050;
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
    uVar7 = DAT_180c63088;
    if ((DAT_180c63088 < uVar4) &&
       ((0x1ff < DAT_180c63088 || (uVar7 = DAT_180c63088 * 8, DAT_180c63088 * 8 < uVar4)))) {
      uVar7 = uVar4;
    }
    uVar9 = FUN_1805715d0(0x5f000000,uVar7);
    plVar3 = (longlong *)FUN_18056c930(uVar9,&local_48,plVar2 + 2,uVar8);
    local_58 = *plVar3;
  }
  plVar3 = *(longlong **)(local_58 + 8);
  DAT_180c63060 = DAT_180c63060 + 1;
  *plVar2 = local_58;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_58 + 8) = plVar2;
  lVar1 = DAT_180c63068;
  uVar8 = DAT_180c63080 & uVar8;
  lVar5 = *(longlong *)(DAT_180c63068 + uVar8 * 0x10);
  if (lVar5 == DAT_180c63058) {
    *(longlong **)(DAT_180c63068 + uVar8 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_58) {
      *(longlong **)(DAT_180c63068 + uVar8 * 0x10) = plVar2;
      goto LAB_180562c93;
    }
    if (*(longlong **)(DAT_180c63068 + 8 + uVar8 * 0x10) != plVar3) goto LAB_180562c93;
  }
  *(longlong **)(lVar1 + 8 + uVar8 * 0x10) = plVar2;
LAB_180562c93:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




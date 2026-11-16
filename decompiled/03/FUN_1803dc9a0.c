// FUN_1803dc9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dc9a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1803dc9a0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [12];
  longlong local_68;
  longlong lStack_60;
  longlong *local_58;
  longlong *local_50;
  char *local_48;
  undefined8 local_40;
  
  uVar3 = FUN_1803dce20(param_1,param_3);
  FUN_1803dcec0(extraout_XMM0_Qa,&local_68,param_3,uVar3);
  if (lStack_60 != 0) {
    *param_2 = lStack_60;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cc9280 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_58 = &DAT_180cc9278;
  local_50 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  plVar4 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
  local_50 = plVar4;
  FUN_18015b360(plVar4 + 2,param_3);
  *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_3 + 0x20);
  plVar5 = plVar4 + 7;
  *plVar5 = 0;
  if (plVar5 != param_4) {
    *plVar5 = *param_4;
    *param_4 = 0;
  }
  lVar6 = param_4[3];
  param_4[3] = 0;
  lVar1 = param_4[2];
  param_4[2] = 0;
  lVar2 = param_4[1];
  param_4[1] = 0;
  plVar4[8] = lVar2;
  plVar4[9] = lVar1;
  plVar4[10] = lVar6;
  *(int *)(plVar4 + 0xb) = (int)param_4[4];
  *(undefined4 *)((longlong)plVar4 + 0x5c) = *(undefined4 *)((longlong)param_4 + 0x24);
  auVar12 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180cc9280 + 1U) < 0) {
    auVar12 = (undefined1  [12])0x0;
  }
  fVar11 = (float)(DAT_180cc9280 + 1U);
  if (DAT_180cc9270 < fVar11 / (float)DAT_180cc92a8) {
    auVar10._0_4_ = fVar11 / DAT_180cc9270;
    auVar10._4_12_ = auVar12;
    auVar10 = vroundss_avx(ZEXT816(0),auVar10,2);
    fVar11 = auVar10._0_4_;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar8 = DAT_180cc92a8;
    if ((DAT_180cc92a8 < uVar7) &&
       ((0x1ff < DAT_180cc92a8 || (uVar8 = DAT_180cc92a8 * 8, DAT_180cc92a8 * 8 < uVar7)))) {
      uVar8 = uVar7;
    }
    uVar9 = FUN_1803ddc60(0x5f000000,uVar8);
    plVar5 = (longlong *)FUN_1803dcec0(uVar9,&local_58,plVar4 + 2,uVar3);
    local_68 = *plVar5;
  }
  plVar5 = *(longlong **)(local_68 + 8);
  DAT_180cc9280 = DAT_180cc9280 + 1;
  *plVar4 = local_68;
  plVar4[1] = (longlong)plVar5;
  *plVar5 = (longlong)plVar4;
  *(longlong **)(local_68 + 8) = plVar4;
  lVar1 = DAT_180cc9288;
  uVar3 = DAT_180cc92a0 & uVar3;
  lVar6 = *(longlong *)(DAT_180cc9288 + uVar3 * 0x10);
  if (lVar6 == DAT_180cc9278) {
    *(longlong **)(DAT_180cc9288 + uVar3 * 0x10) = plVar4;
  }
  else {
    if (lVar6 == local_68) {
      *(longlong **)(DAT_180cc9288 + uVar3 * 0x10) = plVar4;
      goto LAB_1803dcc21;
    }
    if (*(longlong **)(DAT_180cc9288 + 8 + uVar3 * 0x10) != plVar5) goto LAB_1803dcc21;
  }
  *(longlong **)(lVar1 + 8 + uVar3 * 0x10) = plVar4;
LAB_1803dcc21:
  *param_2 = (longlong)plVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




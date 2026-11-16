// FUN_1803e4770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e4770 */

void FUN_1803e4770(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 ****ppppuVar15;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 ****local_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_e0 = *param_2;
  uVar2 = local_e0._8_8_;
  uVar1 = local_e0._0_8_;
  do {
    plVar10 = (longlong *)*param_1;
    plVar9 = plVar10 + 2;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    uVar3 = FUN_180159df0(plVar10,*plVar9,0,uVar1,uVar2);
    puVar8 = (undefined8 *)*param_1;
    uVar11 = puVar8[2];
    if (uVar3 == 0xffffffffffffffff) {
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      if (7 < uVar11) {
        lVar7 = thunk_FUN_1805f9970(puVar8,uVar11 + (longlong)puVar8,"shader =",8);
        if (lVar7 != uVar11 + (longlong)puVar8) {
          uVar11 = lVar7 - (longlong)puVar8;
          goto LAB_1803e4908;
        }
      }
      uVar11 = 0xffffffffffffffff;
LAB_1803e4908:
      puVar8 = (undefined8 *)*param_1;
      puVar14 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      lVar7 = -1;
      if (uVar11 < *puVar14) {
        lVar4 = *puVar14 + (longlong)puVar8;
        lVar5 = thunk_FUN_1805f7e70((longlong)puVar8 + uVar11,lVar4,10);
        if (lVar5 != lVar4) {
          lVar7 = lVar5 - (longlong)puVar8;
        }
      }
      if (lVar7 != -1) {
        lVar4 = *param_1;
        local_c0 = (undefined1  [16])0x0;
        local_b0 = (undefined1  [16])0x0;
        FUN_18015ba30(local_c0,*param_3,param_3[1]);
        local_e0 = (undefined1  [16])0x0;
        local_d0 = (undefined1  [16])0x0;
        FUN_18015ba30(local_e0,*(undefined8 *)*param_2,*(undefined8 *)(*param_2 + 8));
        puVar8 = (undefined8 *)FUN_18015b2a0(local_e0,&DAT_18081294c,3);
        local_60 = *puVar8;
        uStack_58 = puVar8[1];
        uStack_50 = puVar8[2];
        uStack_48 = puVar8[3];
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        puVar8[2] = 0;
        FUN_18015a6e0(local_80);
        plVar9 = (longlong *)FUN_18015b2a0(local_80,&DAT_180812948,1);
        local_a0 = (undefined8 ****)*plVar9;
        lStack_98 = plVar9[1];
        lStack_90 = plVar9[2];
        uStack_88 = plVar9[3];
        *(undefined1 *)plVar9 = 0;
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        ppppuVar15 = &local_a0;
        if (0xf < uStack_88) {
          ppppuVar15 = local_a0;
        }
        FUN_180141490(lVar4,lVar7 + 1,ppppuVar15,lStack_90);
        FUN_18015c010(&local_a0);
        FUN_18015c010(local_80);
        FUN_18015c010(&local_60);
        FUN_18015c010(local_e0);
        FUN_18015c010(local_c0);
      }
      return;
    }
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if (uVar11 == 0) {
      lVar7 = -1;
    }
    else {
      uVar13 = uVar3;
      if (uVar11 - 1 < uVar3) {
        uVar13 = uVar11 - 1;
      }
      lVar5 = uVar13 + 1 + (longlong)puVar8;
      lVar4 = thunk_FUN_1805f7d20(puVar8,lVar5,10);
      lVar7 = -1;
      if (lVar4 != lVar5) {
        lVar7 = lVar4 - (longlong)puVar8;
      }
    }
    puVar8 = (undefined8 *)*param_1;
    puVar14 = puVar8 + 2;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if ((uVar3 < *puVar14) &&
       (lVar4 = *puVar14 + (longlong)puVar8,
       lVar5 = thunk_FUN_1805f7e70((longlong)puVar8 + uVar3,lVar4,10), lVar5 != lVar4)) {
      puVar6 = (undefined8 *)*param_1;
      if (lVar5 - (longlong)puVar8 == -1) goto LAB_1803e4875;
      uVar11 = (lVar5 - (longlong)puVar8) + 1;
      puVar14 = puVar6 + 2;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
LAB_1803e4875:
      puVar14 = puVar6 + 2;
      uVar11 = *puVar14;
    }
    uVar3 = 0;
    if (lVar7 != -1) {
      uVar3 = lVar7 + 1;
    }
    uVar13 = *puVar14;
    if (uVar13 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180141470();
    }
    uVar12 = uVar11 - uVar3;
    if (uVar13 - uVar3 < uVar11 - uVar3) {
      uVar12 = uVar13 - uVar3;
    }
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_18063aed0((longlong)puVar6 + uVar3,uVar12 + (longlong)puVar6 + uVar3);
    *puVar14 = uVar13 - uVar12;
  } while( true );
}




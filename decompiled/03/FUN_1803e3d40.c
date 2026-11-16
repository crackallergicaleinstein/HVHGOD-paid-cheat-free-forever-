// FUN_1803e3d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e3d40 */

void FUN_1803e3d40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 ****local_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  FUN_18015ba30(local_80,*param_2,param_2[1]);
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_80,&DAT_1808126f4,2);
  local_c0 = *pauVar1;
  auStack_b0 = pauVar1[1];
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  puVar7 = local_c0;
  if (0xf < (ulonglong)auStack_b0._8_8_) {
    puVar7 = (undefined1 *)local_c0._0_8_;
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_180159df0(puVar5,param_1[2],0,puVar7,auStack_b0._0_8_);
  FUN_18015c010(local_c0);
  FUN_18015c010(local_80);
  if (uVar2 != 0xffffffffffffffff) {
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    if (uVar2 < (ulonglong)param_1[2]) {
      lVar6 = param_1[2] + (longlong)puVar5;
      lVar3 = thunk_FUN_1805f7e70((longlong)puVar5 + uVar2,lVar6,0x3d);
      lVar9 = -1;
      if (lVar3 != lVar6) {
        lVar9 = lVar3 - (longlong)puVar5;
      }
    }
    else {
      lVar9 = -1;
    }
    uVar2 = lVar9 + 1;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    lVar6 = -1;
    if (uVar2 < (ulonglong)param_1[2]) {
      lVar9 = (longlong)puVar5 + param_1[2];
      lVar3 = thunk_FUN_1805f7e70((longlong)puVar5 + uVar2,lVar9,10);
      if (lVar3 != lVar9) {
        lVar6 = lVar3 - (longlong)puVar5;
      }
    }
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    FUN_18015ba30(local_60,*param_3,param_3[1]);
    plVar4 = (longlong *)FUN_180141490(local_60,0,&DAT_1806bcfc0,1);
    local_a0 = (undefined8 ****)*plVar4;
    lStack_98 = plVar4[1];
    lStack_90 = plVar4[2];
    uStack_88 = plVar4[3];
    *(undefined1 *)plVar4 = 0;
    plVar4[2] = 0;
    plVar4[3] = 0xf;
    if (lVar6 == -1) {
      lVar6 = param_1[2];
    }
    ppppuVar8 = &local_a0;
    if (0xf < uStack_88) {
      ppppuVar8 = local_a0;
    }
    FUN_1801b3ca0(param_1,uVar2,lVar6 - uVar2,ppppuVar8,lStack_90);
    FUN_18015c010(&local_a0);
    FUN_18015c010(local_60);
  }
  return;
}




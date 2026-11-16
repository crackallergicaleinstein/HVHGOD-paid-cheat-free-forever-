// FUN_1802e2a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e2a10 */

undefined1 (*) [16] FUN_1802e2a10(undefined1 (*param_1) [16],undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  undefined1 (*local_88 [2]) [16];
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  lVar6 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar6 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  local_88[0] = param_1;
  if (lVar6 == 0) {
    fVar7 = 0.0;
  }
  else {
    local_78 = (undefined *)*param_2;
    uStack_70 = param_2[1];
    FUN_180430010(lVar6,local_88,&local_78);
    fVar7 = SUB84(local_88[0],0);
  }
  if (param_3 < fVar7) {
    lVar6 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar6 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    if (lVar6 == 0) {
      fVar7 = 0.0;
    }
    else {
      local_78 = &DAT_1807d3edc;
      uStack_70 = 3;
      FUN_180430010(lVar6,local_88,&local_78);
      fVar7 = SUB84(local_88[0],0);
    }
    if (fVar7 <= param_3) {
      lVar6 = DAT_180bbade0;
      if (DAT_180bbadc8 != DAT_180bbadd0) {
        lVar6 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar6 != 0) {
        local_78 = &DAT_1807d3edc;
        uStack_70 = 3;
        FUN_180430010(lVar6,local_88,&local_78);
      }
      local_78 = (undefined *)*param_2;
      uStack_70 = param_2[1];
      uVar4 = FUN_1802e2c30(&local_78);
      local_60 = (undefined1  [16])0x0;
      local_50 = (undefined1  [16])0x0;
      if ((ulonglong)param_2[1] < uVar4) {
        uVar4 = param_2[1];
      }
      FUN_18015ba30(local_60,*param_2,uVar4);
      puVar5 = (undefined8 *)FUN_18015b2a0(local_60,&DAT_1807d3edc,3);
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = 0;
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined8 *)*param_1 = *puVar5;
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar2;
      *(undefined8 *)(param_1[1] + 8) = uVar3;
      *(undefined1 *)puVar5 = 0;
      puVar5[2] = 0;
      puVar5[3] = 0xf;
      FUN_18015c010(local_60);
    }
    else {
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = 0xf;
      (*param_1)[0] = 0;
    }
  }
  else {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,*param_2,param_2[1]);
  }
  return param_1;
}




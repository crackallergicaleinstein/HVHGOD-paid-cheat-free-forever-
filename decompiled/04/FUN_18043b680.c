// FUN_18043b680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b680 */

undefined8 * FUN_18043b680(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [64];
  float local_78;
  float local_74;
  undefined *local_68;
  ulonglong uStack_60;
  
  lVar4 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar4 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  auVar13 = ZEXT864(0);
  if (lVar4 == 0) {
    fVar12 = 0.0;
  }
  else {
    local_68 = (undefined *)*param_2;
    uStack_60 = param_2[1];
    FUN_180430010(local_68,&local_78,&local_68);
    fVar12 = local_78;
  }
  if (param_3 < fVar12) {
    lVar4 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar4 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    if (lVar4 == 0) {
      fVar12 = 0.0;
    }
    else {
      local_68 = &DAT_1807d3edc;
      uStack_60 = 3;
      FUN_180430010(lVar4,&local_78,&local_68);
      fVar12 = local_78;
    }
    if (fVar12 <= param_3) {
      uVar10 = 0;
      uVar9 = 0;
      uVar1 = param_2[1];
      param_3 = param_3 - fVar12;
      uVar11 = uVar1;
      lVar4 = DAT_180bbadd0;
      do {
        if (uVar11 == 0xffffffffffffffff) break;
        uVar7 = (uVar11 - uVar10 >> 1) + uVar10;
        uVar3 = uVar7;
        if (uVar1 < uVar7) {
          uVar3 = uVar1;
        }
        lVar6 = DAT_180bbade0;
        if (DAT_180bbadc8 != lVar4) {
          lVar6 = *(longlong *)(lVar4 + -8);
        }
        if (lVar6 == 0) {
          local_78 = auVar13._0_4_;
          local_74 = local_78;
        }
        else {
          local_68 = (undefined *)*param_2;
          uStack_60 = uVar3;
          FUN_180430010(lVar6,&local_78,&local_68);
          lVar4 = DAT_180bbadd0;
        }
        if (param_3 < local_78) {
          uVar11 = uVar7 - 1;
        }
        else {
          uVar10 = uVar7 + 1;
          uVar9 = uVar7;
        }
      } while (uVar10 <= uVar11);
      lVar4 = FUN_180439770();
      puVar8 = (undefined8 *)(lVar4 + 0x4f0);
      *(undefined8 *)(lVar4 + 0x500) = 0;
      puVar5 = puVar8;
      if (0xf < *(ulonglong *)(lVar4 + 0x508)) {
        puVar5 = (undefined8 *)*puVar8;
      }
      *(undefined1 *)puVar5 = 0;
      FUN_1800f5540(puVar8,uVar9 + 3);
      FUN_180113930(puVar8,*param_2,uVar9);
      FUN_18015b2a0(puVar8,&DAT_1807d3edc,3);
      if (0xf < *(ulonglong *)(lVar4 + 0x508)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar2 = *(undefined8 *)(lVar4 + 0x500);
      *param_1 = puVar8;
      param_1[1] = uVar2;
    }
    else {
      *param_1 = &DAT_1807d3edc;
      param_1[1] = 3;
    }
  }
  else {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
  }
  return param_1;
}




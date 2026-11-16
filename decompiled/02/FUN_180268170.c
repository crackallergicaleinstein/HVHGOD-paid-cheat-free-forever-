// FUN_180268170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180268170 */

void FUN_180268170(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar1 = **(longlong **)(param_8 + 8);
  while( true ) {
    fVar10 = (float)FUN_18025e110();
    fVar11 = (float)FUN_18025e110((longlong)*(int *)param_1[1],
                                  (longlong)*(int *)param_1[1] * 0x98 + lVar1);
    if (fVar10 < fVar11) break;
    param_1 = param_1 + 4;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
LAB_180268221:
  lVar8 = param_5;
  puVar9 = param_3;
  if (param_2 != puVar9 + -4) goto code_r0x00018026823c;
  uVar2 = *param_2;
  uVar3 = param_2[3];
  param_2[3] = 0;
  uVar4 = param_2[2];
  param_2[2] = 0;
  lVar1 = param_2[1];
  param_2[1] = 0;
  local_78._8_8_ = uVar4;
  local_78._0_8_ = lVar1;
  local_80 = uVar2;
  local_68 = uVar3;
  while (param_2 != param_1) {
    param_2 = param_2 + -4;
    puVar9 = puVar9 + -4;
    FUN_1802668f0(puVar9,param_2);
  }
  *param_1 = uVar2;
  plVar7 = param_1 + 1;
  if (plVar7 != (longlong *)local_78) {
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      lVar5 = lVar8;
      if ((0xfff < (param_1[3] - lVar8 & 0xfffffffffffffffcU)) &&
         (lVar5 = *(longlong *)(lVar8 + -8), 0x1f < (lVar8 - lVar5) - 8U)) goto LAB_1802684c3;
      FUN_1804547d0(lVar5);
      param_1[2] = 0;
    }
    *plVar7 = lVar1;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
    local_78 = (undefined1  [16])0x0;
    local_68 = 0;
  }
  puVar6 = local_78;
  goto LAB_1802684a1;
code_r0x00018026823c:
  fVar10 = (float)FUN_18025e110((longlong)*(int *)puVar9[-3],
                                (longlong)*(int *)puVar9[-3] * 0x98 + lVar1);
  fVar11 = (float)FUN_18025e110((longlong)*(int *)param_2[-3],
                                (longlong)*(int *)param_2[-3] * 0x98 + lVar1);
  param_3 = puVar9 + -4;
  param_5 = lVar8 + -1;
  if (fVar10 < fVar11) {
    if (param_4 == 1) {
      uVar2 = *param_1;
      uVar3 = param_1[3];
      param_1[3] = 0;
      uVar4 = param_1[2];
      param_1[2] = 0;
      lVar1 = param_1[1];
      param_1[1] = 0;
      local_98._8_8_ = uVar4;
      local_98._0_8_ = lVar1;
      local_88 = uVar3;
      for (; param_2 != puVar9; param_2 = param_2 + 4) {
        FUN_1802668f0(param_1,param_2);
        param_1 = param_1 + 4;
      }
      *param_1 = uVar2;
      plVar7 = param_1 + 1;
      if (plVar7 != (longlong *)local_98) {
        lVar8 = *plVar7;
        if (lVar8 != 0) {
          lVar5 = lVar8;
          if ((0xfff < (param_1[3] - lVar8 & 0xfffffffffffffffcU)) &&
             (lVar5 = *(longlong *)(lVar8 + -8), 0x1f < (lVar8 - lVar5) - 8U)) {
LAB_1802684c3:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0(lVar5);
          param_1[2] = 0;
        }
        *plVar7 = lVar1;
        param_1[2] = uVar4;
        param_1[3] = uVar3;
        local_98 = (undefined1  [16])0x0;
        local_88 = 0;
      }
      puVar6 = local_98;
LAB_1802684a1:
      FUN_180159650(puVar6);
    }
    else if ((lVar8 < param_4) || (param_7 < param_4)) {
      if (param_7 < lVar8) {
        FUN_18026acf0(param_1,param_2,puVar9,param_4,lVar8,param_6,param_7,param_8);
      }
      else {
        FUN_18026ab30(param_1,param_2,puVar9,param_6,param_8);
      }
    }
    else {
      FUN_18026a980(param_1,param_2,puVar9,param_6,param_8);
    }
    return;
  }
  goto LAB_180268221;
}




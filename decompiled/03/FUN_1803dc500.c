// FUN_1803dc500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dc500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803dc500(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_118 [32];
  char *local_e8;
  undefined8 *puStack_e0;
  undefined4 local_d8;
  char *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong uStack_a0;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStackY_118;
  local_d8 = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0xf;
  local_40._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_40._1_15_;
  local_40 = auVar3 << 8;
  cVar5 = FUN_180205be0(param_2,param_4,param_5);
  if (cVar5 == '\0') {
    local_e8 = "[icons] VPK entry read failed for {}: {}";
    puStack_e0 = (undefined8 *)&DAT_00000028;
    FUN_18020f580(&local_e8,param_3,local_40);
    goto LAB_1803dc76f;
  }
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  local_e8 = (char *)local_58._0_8_;
  puStack_e0 = (undefined8 *)(local_58._8_8_ - local_58._0_8_);
  FUN_1803dc7c0(local_58._0_8_,&local_70,&local_e8);
  if (local_70 == lStack_68) {
    local_c8 = "[icons] compiled SVG decode failed for {}";
    uStack_c0 = 0x29;
    local_80 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      local_80 = (undefined8 *)*param_3;
    }
    local_78 = param_3[2];
    local_88 = 0xc000000000000000;
    local_e8 = (char *)0x1;
    puStack_e0 = &local_88;
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_b8._1_15_;
    local_b8 = auVar4 << 8;
    local_d8 = 1;
    lVar10 = local_78 + 0x29;
    if (0xffffffffffffffd6 < local_78) {
      lVar10 = -1;
    }
    FUN_1800f5540(local_b8,lVar10);
    local_98 = local_e8;
    puStack_90 = puStack_e0;
    FUN_1801da050(&local_e8,local_b8,&local_c8,&local_98);
    puVar7 = local_b8;
    if (uStack_a0 < 0x10) {
LAB_1803dc6a8:
      puVar6 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar6;
      puVar6 = (undefined1 *)FUN_1803b0a60();
      *puVar6 = 1;
      FUN_1800a9e50(1,puVar7);
      puVar7 = (undefined1 *)FUN_1803b0a60();
      *puVar7 = uVar1;
    }
    else {
      puVar7 = (undefined1 *)local_b8._0_8_;
      if ((undefined1 *)local_b8._0_8_ != (undefined1 *)0x0) goto LAB_1803dc6a8;
    }
    FUN_18015c010(local_b8);
  }
  else {
    plVar8 = (longlong *)FUN_1803dcfb0(&DAT_180cc92f0,&local_98);
    lVar10 = *plVar8;
    plVar8 = (longlong *)(lVar10 + 0x30);
    if (plVar8 != &local_70) {
      lVar2 = *plVar8;
      if (lVar2 != 0) {
        lVar9 = lVar2;
        if ((0xfff < (ulonglong)(*(longlong *)(lVar10 + 0x40) - lVar2)) &&
           (lVar9 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar9);
        *plVar8 = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x40) = 0;
      }
      *plVar8 = local_70;
      *(longlong *)(lVar10 + 0x38) = lStack_68;
      *(undefined8 *)(lVar10 + 0x40) = local_60;
      local_70 = 0;
      lStack_68 = 0;
      local_60 = 0;
    }
  }
  FUN_180113710(&local_70);
LAB_1803dc76f:
  FUN_18015c010(local_40);
  FUN_180113710(local_58);
}




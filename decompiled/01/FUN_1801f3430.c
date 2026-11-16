// FUN_1801f3430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f3430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f3430(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *****pppppuVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  undefined8 *****local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong *local_e8;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 *****pppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  local_d0 = param_5;
  pppppuStack_80 = (undefined8 *****)0x0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = (undefined1  [16])0x0;
  lVar2 = param_2[5];
  local_88 = *param_2;
  pppppuVar1 = (undefined8 *****)(param_2 + 1);
  local_170 = param_4;
  local_e8 = param_1;
  local_d8 = param_3;
  local_c8 = param_2;
  local_c0 = param_4;
  FUN_1800f5370(&pppppuStack_80,pppppuVar1);
  local_68._8_8_ = lVar2;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_f8 = (undefined1  [16])0x0;
  lVar2 = param_3[5];
  local_118 = *param_3;
  local_168 = param_3 + 1;
  FUN_1800f5370(&uStack_110,local_168);
  local_f8._8_8_ = lVar2;
  pppppuStack_b0 = (undefined8 *****)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  lVar2 = param_4[5];
  local_b8 = *param_4;
  pppppuVar9 = (undefined8 *****)(param_4 + 1);
  FUN_1800f5370(&pppppuStack_b0,pppppuVar9);
  local_98._8_8_ = lVar2;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_128 = (undefined1  [16])0x0;
  lVar2 = param_5[5];
  local_148 = *param_5;
  FUN_1800f5370(&uStack_140,param_5 + 1);
  lVar5 = local_118;
  lVar4 = local_148;
  local_128._8_8_ = lVar2;
  uVar6 = local_150;
  local_150 = uStack_a0;
  while ((uStack_a0 = local_150, local_88 != lVar5 && (local_b8 != lVar4))) {
    local_158 = &pppppuStack_b0;
    if (7 < (ulonglong)local_98._0_8_) {
      local_158 = pppppuStack_b0;
    }
    iVar7 = FUN_180162c60(&pppppuStack_80,&local_158);
    uVar6 = local_150;
    if (iVar7 != 0) break;
    FUN_1801ad0b0(&local_88);
    FUN_1801ad0b0(&local_b8);
    uVar6 = local_150;
    local_150 = uStack_a0;
  }
  local_150 = uVar6;
  plVar3 = local_170;
  *local_170 = local_b8;
  if ((undefined8 ******)pppppuVar9 != &pppppuStack_b0) {
    pppppuVar8 = &pppppuStack_b0;
    if (7 < (ulonglong)local_98._0_8_) {
      pppppuVar8 = pppppuStack_b0;
    }
    FUN_1800f5190(pppppuVar9,pppppuVar8,uStack_a0);
  }
  *param_2 = local_88;
  if ((undefined8 ******)pppppuVar1 != &pppppuStack_80) {
    pppppuVar8 = &pppppuStack_80;
    if (7 < (ulonglong)local_68._0_8_) {
      pppppuVar8 = pppppuStack_80;
    }
    FUN_1800f5190(pppppuVar1,pppppuVar8,uStack_70);
  }
  *param_1 = *param_2;
  FUN_1800f5370(param_1 + 1,pppppuVar1);
  param_1[5] = param_2[5];
  param_1[6] = *plVar3;
  FUN_1800f5370(param_1 + 7,pppppuVar9);
  param_1[0xb] = plVar3[5];
  FUN_18015b930(&uStack_140);
  FUN_18015b930(&pppppuStack_b0);
  FUN_18015b930(&uStack_110);
  FUN_18015b930(&pppppuStack_80);
  FUN_18015b930(pppppuVar1);
  FUN_18015b930(local_168);
  FUN_18015b930(pppppuVar9);
  FUN_18015b930(param_5 + 1);
}




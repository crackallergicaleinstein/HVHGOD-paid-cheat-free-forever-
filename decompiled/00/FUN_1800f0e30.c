// FUN_1800f0e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f0e30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f0e30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined **ppuVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  undefined1 local_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 local_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  auStack_158 = ZEXT816(0xf) << 0x40;
  local_168._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_168._1_15_;
  local_168 = auVar2 << 8;
  local_138 = ZEXT816(0xf) << 0x40;
  local_148._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_148._1_15_;
  local_148 = auVar3 << 8;
  local_188._0_9_ = ZEXT89(0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_178._8_8_;
  local_178 = auVar4 << 0x40;
  local_1a8 = (char *)0x0;
  uStack_1a0 = local_188._8_8_;
  local_198 = 0;
  local_1b0 = 0;
  local_1b8 = local_168;
  local_68 = param_1;
  FUN_18015a8b0(param_1 + 2,0,&local_1a8,local_148);
  param_1[0xf] = 0x64e1e1e1;
  *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
  FUN_18063ab10(param_1 + 0x11,0,0x348);
  lVar9 = 7;
  FUN_1800fc630(param_1 + 0x11,7);
  FUN_18063ab10(param_1 + 0x7a,0,0x14a0);
  lVar10 = 0x2c;
  FUN_1800fc630(param_1 + 0x7a,0x2c);
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  FUN_18015ba30(local_148,"glow items v2",0xd);
  pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_148," profiles",9);
  local_58 = *pauVar5;
  uStack_48 = *(undefined8 *)pauVar5[1];
  uStack_40 = *(ulonglong *)(pauVar5[1] + 8);
  (*pauVar5)[0] = 0;
  *(undefined8 *)pauVar5[1] = 0;
  *(undefined8 *)(pauVar5[1] + 8) = 0xf;
  FUN_18015c010(local_148);
  local_188._0_8_ = local_58;
  if (0xf < uStack_40) {
    local_188._0_8_ = local_58._0_8_;
  }
  local_1a8 = "scope";
  uStack_1a0 = 5;
  local_188._8_8_ = uStack_48;
  FUN_1800f3030(param_1,local_188,&local_1a8);
  local_1a8 = local_58;
  if (0xf < uStack_40) {
    local_1a8 = (char *)local_58._0_8_;
  }
  local_188._0_8_ = "selected group";
  local_188._8_8_ = 0xe;
  uStack_1a0 = uStack_48;
  FUN_1800f3030((longlong)param_1 + 4,&local_1a8,local_188);
  local_1a8 = local_58;
  if (0xf < uStack_40) {
    local_1a8 = (char *)local_58._0_8_;
  }
  local_188._8_8_ = 0xf;
  local_188._0_8_ = "selected weapon";
  uStack_1a0 = uStack_48;
  FUN_1800f3030(param_1 + 1,&local_1a8,local_188);
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  FUN_18015ba30(local_188,"glow items v2",0xd);
  pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_188," - all",6);
  local_168 = *pauVar5;
  auStack_158 = pauVar5[1];
  (*pauVar5)[0] = 0;
  *(undefined8 *)pauVar5[1] = 0;
  *(undefined8 *)(pauVar5[1] + 8) = 0xf;
  FUN_1800c04e0(param_1 + 2,local_168);
  FUN_18015c010(local_168);
  FUN_18015c010(local_188);
  ppuVar7 = &PTR_s_Pistols_1806ff970;
  lVar6 = 0;
  do {
    puVar1 = *ppuVar7;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_e8,"glow items v2",0xd);
    pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_e8," - group - ",0xb);
    local_108 = *pauVar5;
    auStack_f8 = pauVar5[1];
    *(undefined8 *)(pauVar5[1] + 8) = 0xf;
    (*pauVar5)[0] = 0;
    *(undefined8 *)pauVar5[1] = 0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (puVar1[lVar8] != '\0');
    pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_108,puVar1);
    local_128 = *pauVar5;
    auStack_118 = pauVar5[1];
    (*pauVar5)[0] = 0;
    *(undefined8 *)pauVar5[1] = 0;
    *(undefined8 *)(pauVar5[1] + 8) = 0xf;
    FUN_1800c04e0(lVar6 + 0x88 + (longlong)param_1,local_128);
    FUN_18015c010(local_128);
    FUN_18015c010(local_108);
    FUN_18015c010(local_e8);
    lVar6 = lVar6 + 0x78;
    ppuVar7 = ppuVar7 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  ppuVar7 = &PTR_DAT_1806ff3d8;
  lVar9 = 0;
  do {
    puVar1 = *ppuVar7;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    FUN_18015ba30(local_88,"glow items v2",0xd);
    pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_88," - weapon - ",0xc);
    local_a8 = *pauVar5;
    auStack_98 = pauVar5[1];
    *(undefined8 *)(pauVar5[1] + 8) = 0xf;
    (*pauVar5)[0] = 0;
    *(undefined8 *)pauVar5[1] = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (puVar1[lVar6] != '\0');
    pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_a8,puVar1);
    local_c8 = *pauVar5;
    auStack_b8 = pauVar5[1];
    (*pauVar5)[0] = 0;
    *(undefined8 *)pauVar5[1] = 0;
    *(undefined8 *)(pauVar5[1] + 8) = 0xf;
    FUN_1800c04e0(lVar9 + 0x3d0 + (longlong)param_1,local_c8);
    FUN_18015c010(local_c8);
    FUN_18015c010(local_a8);
    FUN_18015c010(local_88);
    lVar9 = lVar9 + 0x78;
    ppuVar7 = ppuVar7 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FUN_18015c010(local_58);
}




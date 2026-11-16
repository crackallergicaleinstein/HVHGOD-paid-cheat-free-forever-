// FUN_18041c340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041c340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041c340(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  longlong lStack_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  longlong local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  plVar8 = (longlong *)FUN_18043aae0();
  plVar13 = (longlong *)*plVar8;
  plVar8 = plVar13 + (plVar8[1] - (longlong)plVar13 >> 3);
  lVar14 = lStack_170;
  for (; plVar13 != plVar8; plVar13 = plVar13 + 1) {
    lVar4 = *plVar13;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x50) != 0)) &&
       (lStack_170 = *(longlong *)(lVar4 + 0x30), lStack_170 != 0)) {
      local_178 = lVar4 + 0x20;
      if (0xf < *(ulonglong *)(lVar4 + 0x38)) {
        local_178 = *(ulonglong *)(lVar4 + 0x20);
      }
      local_38._0_8_ = lVar4 + 0x40;
      if (0xf < *(ulonglong *)(lVar4 + 0x58)) {
        local_38._0_8_ = *(longlong *)(lVar4 + 0x40);
      }
      local_38._8_8_ = *(longlong *)(lVar4 + 0x50);
      local_118 = FUN_1800aa290(local_38,&local_178);
      local_114 = 0;
      local_108 = 1;
      local_110 = lVar4;
      FUN_18015b360(&local_100,lVar4 + 0x40);
      FUN_18015b360(&local_e0,lVar4 + 0x20);
      local_a8 = local_118;
      local_a4 = local_114;
      local_a0 = local_110;
      local_98 = local_108;
      local_90 = CONCAT71(uStack_ff,local_100);
      uStack_88 = uStack_f8;
      uStack_80 = uStack_f0;
      uStack_78 = uStack_e8;
      uStack_f0 = 0;
      uStack_e8 = 0xf;
      local_100 = 0;
      local_70 = CONCAT71(uStack_df,local_e0);
      uStack_68 = uStack_d8;
      uStack_60 = uStack_d0;
      uStack_58 = uStack_c8;
      uStack_d0 = 0;
      uStack_c8 = 0xf;
      local_e0 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_50 = (undefined1  [16])0x0;
      local_40 = 0;
      FUN_1800aa3b0(&local_a8);
      FUN_180111b90(&local_c0);
      FUN_18015c010(&local_e0);
      FUN_18015c010(&local_100);
      lVar14 = lStack_170;
    }
    lStack_170 = lVar14;
    lVar14 = lStack_170;
  }
  lStack_170 = lVar14;
  puVar9 = (undefined8 *)FUN_1800aa200();
  local_38 = (undefined1  [16])0x0;
  FUN_1800f4e90(&local_178,local_38,0,1);
  puVar5 = (undefined4 *)puVar9[1];
  uVar7 = local_178;
  lVar14 = lStack_170;
  for (puVar12 = (undefined4 *)*puVar9; puVar12 != puVar5; puVar12 = puVar12 + 0x1c) {
    local_178 = uVar7;
    lStack_170 = lVar14;
    FUN_18015abc0(local_38,0xc,&DAT_1806bbf8c,*puVar12);
    local_168 = local_148;
    puVar10 = (undefined1 *)FUN_1800aab50(local_148,puVar12);
    local_138 = (undefined1  [16])0x0;
    local_128 = 0;
    local_120 = 0;
    lVar14 = -1;
    do {
      lVar4 = lVar14 + 1;
      lVar14 = lVar14 + 1;
    } while (local_38[lVar4] != '\0');
    FUN_18015ba30(local_138,local_38);
    puVar11 = (undefined1 *)FUN_1800f43d0(&local_178,local_138);
    uVar2 = *puVar11;
    *puVar11 = *puVar10;
    *puVar10 = uVar2;
    uVar6 = *(undefined8 *)(puVar11 + 8);
    puVar1 = (undefined8 *)(puVar10 + 8);
    *(undefined8 *)(puVar11 + 8) = *puVar1;
    *puVar1 = uVar6;
    FUN_1801409d0(puVar1,*puVar10);
    uVar7 = local_178;
    lVar14 = lStack_170;
  }
  local_38._8_8_ = lVar14;
  local_38._0_8_ = uVar7;
  local_178 = uVar7 & 0xffffffffffffff00;
  lStack_170 = 0;
  uVar2 = *(undefined1 *)(puVar9 + 5);
  *(char *)(puVar9 + 5) = (char)uVar7;
  local_38[0] = uVar2;
  uVar6 = puVar9[6];
  puVar9[6] = lVar14;
  local_38._8_8_ = uVar6;
  FUN_1801409d0(local_38 + 8);
  FUN_1801409d0(&lStack_170,local_178 & 0xff);
  FUN_1800abea0();
  local_148 = (undefined1  [16])0x0;
  FUN_1800f4e90(&local_158,local_148,0,1);
  puVar5 = (undefined4 *)puVar9[1];
  uVar2 = local_158;
  uVar6 = uStack_150;
  for (puVar12 = (undefined4 *)*puVar9; puVar12 != puVar5; puVar12 = puVar12 + 0x1c) {
    local_158 = uVar2;
    uStack_150 = uVar6;
    FUN_18015abc0(local_38,0xc,&DAT_1806bbf8c,*puVar12);
    local_160 = local_148;
    puVar10 = (undefined1 *)FUN_1800aab50(local_148,puVar12);
    local_138 = (undefined1  [16])0x0;
    local_128 = 0;
    local_120 = 0;
    lVar14 = -1;
    do {
      lVar4 = lVar14 + 1;
      lVar14 = lVar14 + 1;
    } while (local_38[lVar4] != '\0');
    FUN_18015ba30(local_138,local_38);
    puVar11 = (undefined1 *)FUN_1800f43d0(&local_158,local_138);
    uVar2 = *puVar11;
    *puVar11 = *puVar10;
    *puVar10 = uVar2;
    uVar6 = *(undefined8 *)(puVar11 + 8);
    puVar1 = (undefined8 *)(puVar10 + 8);
    *(undefined8 *)(puVar11 + 8) = *puVar1;
    *puVar1 = uVar6;
    FUN_1801409d0(puVar1,*puVar10);
    uVar2 = local_158;
    uVar6 = uStack_150;
  }
  local_158 = 0;
  uStack_150 = 0;
  uVar3 = *(undefined1 *)(puVar9 + 3);
  *(undefined1 *)(puVar9 + 3) = uVar2;
  local_178 = CONCAT71(uStack_157,uVar3);
  lStack_170 = puVar9[4];
  puVar9[4] = uVar6;
  FUN_1801409d0(&lStack_170);
  FUN_1801409d0(&uStack_150,local_158);
}




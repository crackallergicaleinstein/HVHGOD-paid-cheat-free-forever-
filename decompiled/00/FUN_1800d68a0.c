// FUN_1800d68a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d68a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d68a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [8];
  undefined1 *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  plVar12 = (longlong *)*param_1;
  plVar2 = plVar12 + 0x14;
  local_158 = param_3;
  for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
    lVar14 = *plVar12;
    local_120 = -1;
    do {
      local_120 = local_120 + 1;
    } while (*(char *)(lVar14 + local_120) != '\0');
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_148 = *param_2;
    uStack_140 = param_2[1];
    local_128 = lVar14;
    uVar7 = FUN_1800aa290(&local_148,&local_128);
    FUN_18015abc0(local_68,0xc,&DAT_1806bbf8c,uVar7);
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    lVar13 = -1;
    do {
      lVar6 = lVar13 + 1;
      lVar13 = lVar13 + 1;
    } while (local_68[lVar6] != '\0');
    FUN_18015ba30(local_88,local_68);
    local_110 = -1;
    do {
      local_110 = local_110 + 1;
    } while (*(char *)(lVar14 + local_110) != '\0');
    local_58 = 0;
    local_50 = 0;
    local_148 = *param_3;
    uStack_140 = param_3[1];
    local_118 = lVar14;
    uVar7 = FUN_1800aa290(&local_148,&local_118);
    FUN_18015abc0(&local_58,0xc,&DAT_1806bbf8c,uVar7);
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    lVar14 = -1;
    do {
      lVar13 = lVar14 + 0x11;
      lVar14 = lVar14 + 1;
    } while (local_68[lVar13] != '\0');
    FUN_18015ba30(local_a8,&local_58);
    if (((param_4 == '\0') || (*(char *)param_1[2] != '\x01')) ||
       (plVar4 = *(longlong **)((char *)param_1[2] + 8),
       plVar8 = (longlong *)FUN_180111e70(plVar4,local_138,local_a8), *plVar8 == *plVar4)) {
      pcVar5 = (char *)param_1[2];
      if ((*pcVar5 == '\x01') &&
         (plVar4 = *(longlong **)(pcVar5 + 8),
         plVar8 = (longlong *)FUN_180111e70(plVar4,local_108,local_88), *plVar8 != *plVar4)) {
        local_100 = local_f8;
        uVar9 = FUN_18015b360(local_e8,local_88);
        uVar9 = FUN_1800f43d0(pcVar5,uVar9);
        puVar10 = (undefined1 *)FUN_1800f4a50(local_f8,uVar9);
        lVar14 = param_1[2];
        uVar9 = FUN_18015b360(local_c8,local_a8);
        puVar11 = (undefined1 *)FUN_1800f43d0(lVar14,uVar9);
        uVar3 = *puVar11;
        *puVar11 = *puVar10;
        *puVar10 = uVar3;
        uVar9 = *(undefined8 *)(puVar11 + 8);
        puVar1 = (undefined8 *)(puVar10 + 8);
        *(undefined8 *)(puVar11 + 8) = *puVar1;
        *puVar1 = uVar9;
        FUN_1801409d0(puVar1,*puVar10);
        *(undefined1 *)param_1[3] = 1;
      }
      param_3 = local_158;
    }
    FUN_18015c010(local_a8);
    FUN_18015c010();
  }
}




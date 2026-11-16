// FUN_1800e1840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e1840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e1840(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  char **ppcVar13;
  longlong lVar14;
  undefined1 auStack_168 [32];
  char local_148;
  char local_147 [7];
  undefined1 local_140 [2] [16];
  undefined1 local_120 [16];
  undefined1 (*local_110) [16];
  undefined1 (*local_108) [16];
  undefined1 local_100 [8];
  undefined1 local_f8 [32];
  char *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_58 = "damage preset count";
  local_50 = "hitchance preset count";
  ppcVar13 = &local_58;
  do {
    local_d8 = *ppcVar13;
    local_d0 = -1;
    do {
      local_d0 = local_d0 + 1;
    } while (local_d8[local_d0] != '\0');
    local_c8 = param_2 + 0x570;
    if (0xf < *(ulonglong *)(param_2 + 0x588)) {
      local_c8 = *(longlong *)(param_2 + 0x570);
    }
    local_48 = (char *)0x0;
    local_40 = 0;
    local_c0 = *(undefined8 *)(param_2 + 0x580);
    uVar7 = FUN_1800aa290(&local_c8,&local_d8);
    FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar7);
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    lVar14 = -1;
    do {
      lVar4 = lVar14 + 1;
      lVar14 = lVar14 + 1;
    } while (*(char *)((longlong)&local_48 + lVar4) != '\0');
    FUN_18015ba30(local_78,&local_48);
    pcVar10 = *(char **)(param_1 + 8);
    if (*pcVar10 == '\x01') {
      plVar3 = *(longlong **)(pcVar10 + 8);
      plVar8 = (longlong *)FUN_180111e70(plVar3,local_100);
      if (*plVar8 == *plVar3) goto LAB_1800e1c33;
      uVar9 = FUN_18015b360(local_140,local_78);
      pcVar10 = (char *)FUN_1800f43d0(pcVar10,uVar9);
      if ((*pcVar10 == '\x05') || (*pcVar10 == '\x06')) {
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar11 = FUN_18015b360(local_f8,local_78);
        uVar9 = FUN_1800f43d0(uVar9,uVar11);
        local_140[0] = ZEXT816(0);
        FUN_1801409d0(local_140[0] + 8,0);
        local_140[0][0] = 5;
        local_140[0]._8_8_ = 0;
        FUN_180112ae0(uVar9,&local_148);
        FUN_1801409d0(local_140[0] + 8,local_140[0][0]);
        if (local_148 == -1) {
          local_110 = local_140;
          local_140[0] = ZEXT816(0);
          FUN_1801409d0(local_140[0] + 8,0);
          local_140[0][0] = 5;
          local_140[0]._8_8_ = 0;
          uVar9 = *(undefined8 *)(param_1 + 8);
          uVar11 = FUN_18015b360(local_f8,local_78);
          puVar12 = (undefined1 *)FUN_1800f43d0(uVar9,uVar11);
          auVar5 = local_140[0];
          uVar1 = *puVar12;
          *puVar12 = local_140[0][0];
          local_140[0][0] = uVar1;
          auVar6 = local_140[0];
          uVar9 = *(undefined8 *)(puVar12 + 8);
          local_140[0]._8_8_ = auVar5._8_8_;
          *(undefined8 *)(puVar12 + 8) = local_140[0]._8_8_;
          local_140[0]._0_8_ = auVar6._0_8_;
          local_140[0]._8_8_ = uVar9;
          FUN_1801409d0(local_140[0] + 8,uVar1);
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 8);
          uVar11 = FUN_18015b360(local_f8,local_78);
          uVar9 = FUN_1800f43d0(uVar9,uVar11);
          local_140[0] = ZEXT816(0);
          FUN_1801409d0(local_140[0] + 8,0);
          local_140[0][0] = 5;
          local_140[0]._8_8_ = 4;
          FUN_180112ae0(uVar9,local_147);
          FUN_1801409d0(local_140[0] + 8,local_140[0][0]);
          if ('\0' < local_147[0]) {
            local_110 = local_140;
            local_140[0] = ZEXT816(0);
            FUN_1801409d0(local_140[0] + 8,0);
            local_140[0][0] = 5;
            local_140[0]._8_8_ = 4;
            uVar9 = *(undefined8 *)(param_1 + 8);
            uVar11 = FUN_18015b360(local_f8,local_78);
            puVar12 = (undefined1 *)FUN_1800f43d0(uVar9,uVar11);
            auVar5 = local_140[0];
            uVar1 = *puVar12;
            *puVar12 = local_140[0][0];
            local_140[0][0] = uVar1;
            auVar6 = local_140[0];
            uVar9 = *(undefined8 *)(puVar12 + 8);
            local_140[0]._8_8_ = auVar5._8_8_;
            *(undefined8 *)(puVar12 + 8) = local_140[0]._8_8_;
            local_140[0]._0_8_ = auVar6._0_8_;
            local_140[0]._8_8_ = uVar9;
            FUN_1801409d0(local_140[0] + 8,uVar1);
          }
        }
      }
      else {
        local_108 = local_140;
        local_140[0] = ZEXT816(0);
        FUN_1801409d0(local_140[0] + 8,0);
        local_140[0][0] = 5;
        local_140[0]._8_8_ = 1;
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar11 = FUN_18015b360(local_b8,local_78);
        puVar12 = (undefined1 *)FUN_1800f43d0(uVar9,uVar11);
        auVar5 = local_140[0];
        uVar1 = *puVar12;
        *puVar12 = local_140[0][0];
        local_140[0][0] = uVar1;
        auVar6 = local_140[0];
        uVar9 = *(undefined8 *)(puVar12 + 8);
        local_140[0]._8_8_ = auVar5._8_8_;
        *(undefined8 *)(puVar12 + 8) = local_140[0]._8_8_;
        local_140[0]._0_8_ = auVar6._0_8_;
        local_140[0]._8_8_ = uVar9;
        FUN_1801409d0(local_140[0] + 8,uVar1);
      }
    }
    else {
LAB_1800e1c33:
      local_110 = &local_120;
      iVar2 = **(int **)(param_1 + 0x10);
      local_120 = ZEXT816(0);
      FUN_1801409d0(local_120 + 8,0);
      local_120[0] = 5;
      uVar9 = 1;
      if (iVar2 == 4) {
        uVar9 = 4;
      }
      local_120._8_8_ = uVar9;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar11 = FUN_18015b360(local_98,local_78);
      puVar12 = (undefined1 *)FUN_1800f43d0(uVar9,uVar11);
      auVar5 = local_120;
      uVar1 = *puVar12;
      *puVar12 = local_120[0];
      local_120[0] = uVar1;
      auVar6 = local_120;
      uVar9 = *(undefined8 *)(puVar12 + 8);
      local_120._8_8_ = auVar5._8_8_;
      *(undefined8 *)(puVar12 + 8) = local_120._8_8_;
      local_120._0_8_ = auVar6._0_8_;
      local_120._8_8_ = uVar9;
      FUN_1801409d0(local_120 + 8,uVar1);
    }
    FUN_18015c010(local_78);
    ppcVar13 = ppcVar13 + 1;
    if (ppcVar13 == (char **)&local_48) {
    }
  } while( true );
}




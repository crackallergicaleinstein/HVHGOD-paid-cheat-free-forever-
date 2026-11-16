// FUN_1800b22d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b22d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b22d0(undefined8 param_1,char *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined1 (**ppauVar6) [16];
  longlong lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  int *piVar11;
  undefined1 (**ppauVar12) [16];
  char *pcVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined **ppuVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  int iVar20;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  char *local_180;
  undefined8 local_178;
  char local_168;
  undefined1 local_158 [8];
  undefined8 auStack_150 [3];
  undefined1 (*local_138) [16];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100 [2];
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  int local_b8 [4];
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_70;
  char local_68 [8];
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  pcVar13 = "legitbot";
  if (param_3 != '\0') {
    pcVar13 = "ragebot";
  }
  local_88 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 0;
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (pcVar13[lVar18] != '\0');
  local_168 = param_3;
  local_100[0] = param_1;
  FUN_18015ba30(local_88);
  iVar17 = 0;
  piVar19 = (int *)(param_2 + 0x5180);
  if (piVar19 != (int *)(param_2 + 0x5194)) {
    local_b8[2] = 2;
    local_b8[0] = 0;
    do {
      local_b8[1] = *piVar19;
      piVar11 = local_b8;
      if (-1 < local_b8[1]) {
        piVar11 = local_b8 + 1;
      }
      piVar5 = local_b8 + 2;
      if (local_b8[1] < 3) {
        piVar5 = piVar11;
      }
      if (iVar17 < *piVar5) {
        iVar17 = *piVar5;
      }
      piVar19 = piVar19 + 1;
    } while (piVar19 != (int *)(param_2 + 0x5194));
  }
  local_138 = (undefined1 (*) [16])local_158;
  _local_158 = ZEXT816(0);
  FUN_1801409d0(auStack_150,0);
  local_158[0] = 5;
  auStack_150[0] = (longlong)iVar17;
  if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_178 = 9;
  local_180 = " profiles";
  local_188 = local_78;
  FUN_18015a9c0(local_f0);
  local_138 = &local_f0;
  if (0xf < (ulonglong)auStack_e0._8_8_) {
    local_138 = (undefined1 (*) [16])local_f0._0_8_;
  }
  local_128._8_8_ = 5;
  local_128._0_8_ = "scope";
  local_130 = auStack_e0._0_8_;
  FUN_1800afbf0(param_1,&local_138,local_128,local_158);
  FUN_18015c010();
  local_158 = (undefined1  [8])local_128;
  local_138 = (undefined1 (*) [16])CONCAT44(local_138._4_4_,5);
  local_108 = 0;
  iVar20 = *(int *)(param_2 + 0x5194);
  local_128 = ZEXT816(0);
  ppauVar12 = (undefined1 (**) [16])&local_108;
  if (-1 < iVar20) {
    ppauVar12 = (undefined1 (**) [16])(param_2 + 0x5194);
  }
  ppauVar6 = &local_138;
  if (iVar20 < 6) {
    ppauVar6 = ppauVar12;
  }
  iVar20 = *(int *)ppauVar6;
  FUN_1801409d0(local_128 + 8,0);
  local_128[0] = 5;
  local_128._8_8_ = (longlong)iVar20;
  if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_178 = 9;
  local_180 = " profiles";
  local_188 = local_78;
  FUN_18015a9c0(local_f0);
  local_138 = &local_f0;
  if (0xf < (ulonglong)auStack_e0._8_8_) {
    local_138 = (undefined1 (*) [16])local_f0._0_8_;
  }
  local_158 = (undefined1  [8])0x1806bc738;
  auStack_150[0] = 0xe;
  local_130 = auStack_e0._0_8_;
  FUN_1800afbf0(param_1,&local_138,local_158,local_128);
  FUN_18015c010();
  local_158 = (undefined1  [8])local_128;
  local_108 = 0x21;
  local_138 = (undefined1 (*) [16])((ulonglong)local_138 & 0xffffffff00000000);
  iVar20 = *(int *)(param_2 + 0x51a8);
  local_128 = ZEXT816(0);
  ppauVar12 = &local_138;
  if (-1 < iVar20) {
    ppauVar12 = (undefined1 (**) [16])(param_2 + 0x51a8);
  }
  ppauVar6 = (undefined1 (**) [16])&local_108;
  if (iVar20 < 0x22) {
    ppauVar6 = ppauVar12;
  }
  iVar20 = *(int *)ppauVar6;
  FUN_1801409d0(local_128 + 8,0);
  local_128[0] = 5;
  local_128._8_8_ = (longlong)iVar20;
  if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_178 = 9;
  local_180 = " profiles";
  local_188 = local_78;
  FUN_18015a9c0(local_f0);
  local_138 = &local_f0;
  if (0xf < (ulonglong)auStack_e0._8_8_) {
    local_138 = (undefined1 (*) [16])local_f0._0_8_;
  }
  auStack_150[0] = 0xf;
  local_158 = (undefined1  [8])"selected weapon";
  local_130 = auStack_e0._0_8_;
  FUN_1800afbf0(param_1,&local_138,local_158,local_128);
  FUN_18015c010(local_f0);
  if (param_3 == '\0') {
    if ((*param_2 == '\0') && (param_2[0x38] == '\0')) {
      cVar1 = param_2[0x74];
      goto LAB_1800b2691;
    }
LAB_1800b270e:
    uVar8 = 1;
  }
  else {
    if (*param_2 != '\0') {
      cVar1 = param_2[0x38];
LAB_1800b2691:
      if (cVar1 != '\0') goto LAB_1800b270e;
    }
    iVar20 = 0;
    puVar15 = &DAT_1806ff9dc;
    do {
      pcVar13 = (char *)FUN_1800ada00(param_2,0,*puVar15);
      lVar18 = FUN_1800ada00(param_2,1);
      lVar7 = FUN_1800ada00(param_2);
      param_1 = local_100[0];
      if (param_3 == '\0') {
        if ((*pcVar13 != '\0') || (*(char *)(lVar18 + 0x38) != '\0')) goto LAB_1800b270e;
        cVar1 = *(char *)(lVar7 + 0x74);
LAB_1800b26ed:
        if (cVar1 != '\0') goto LAB_1800b270e;
      }
      else if (*pcVar13 != '\0') {
        cVar1 = *(char *)(lVar18 + 0x38);
        goto LAB_1800b26ed;
      }
      iVar20 = iVar20 + 1;
      puVar15 = puVar15 + 8;
    } while (iVar20 < 0x22);
    uVar8 = 0;
  }
  iVar20 = 0;
  uVar8 = FUN_1800afd50(&local_138,uVar8,2,0);
  local_158 = (undefined1  [8])local_88;
  if (0xf < local_70) {
    local_158 = (undefined1  [8])local_88._0_8_;
  }
  local_128._8_8_ = 9;
  local_128._0_8_ = "auto fire";
  auStack_150[0] = local_78;
  FUN_1800afbf0(param_1,local_158,local_128,uVar8);
  if (0x7fffffffffffffffU - local_78 < 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_178 = 0xe;
  local_180 = " - all weapons";
  local_188 = local_78;
  FUN_18015a9c0(local_f0);
  local_180 = (char *)CONCAT44(local_180._4_4_,0xffffffff);
  local_188 = CONCAT44(local_188._4_4_,0xffffffff);
  FUN_1800b0420(param_1,local_f0,param_2,param_3);
  FUN_18015c010(local_f0);
  local_128 = (undefined1  [16])0x0;
  FUN_1800f4e90(local_58,local_128,0,2);
  local_128 = (undefined1  [16])0x0;
  FUN_1800f4e90(local_68,local_128,0,2);
  ppuVar16 = &PTR_s_Pistols_1806ffe00;
  while( true ) {
    _local_158 = ZEXT816(0);
    FUN_1801409d0(auStack_150,0);
    local_158[0] = 4;
    local_138 = (undefined1 (*) [16])CONCAT71(local_138._1_7_,iVar17 == 1);
    auStack_150[0] = (longlong)local_138;
    if ((local_58[0] != '\0') && (local_58[0] != '\x02')) {
      local_100[0] = FUN_180112a50(local_58);
      uVar8 = FUN_1800f6bd0(local_a8,"cannot use push_back() with ",local_100);
      FUN_1800f6ca0(local_f0,0x134,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_f0,&DAT_1808d1050);
    }
    if (local_58[0] == '\0') {
      local_58[0] = '\x02';
      FUN_180111d10(&local_108,2);
      local_50 = CONCAT44(uStack_104,local_108);
    }
    puVar3 = *(undefined8 **)(local_50 + 8);
    if (puVar3 == *(undefined8 **)(local_50 + 0x10)) {
      FUN_18014fc20(local_50,puVar3,local_158);
      uVar14 = (ulonglong)local_158[0];
    }
    else {
      *puVar3 = local_158;
      puVar3[1] = auStack_150[0];
      uVar14 = (ulonglong)puVar3 & 0xffffffffffffff00;
      local_158 = (undefined1  [8])(local_158._1_8_ << 8);
      auStack_150[0] = 0;
      *(longlong *)(local_50 + 8) = *(longlong *)(local_50 + 8) + 0x10;
    }
    FUN_1801409d0(auStack_150,uVar14);
    puVar4 = *ppuVar16;
    if (0x7fffffffffffffffU - local_78 < 0xb) break;
    local_178 = 0xb;
    local_180 = " - group - ";
    local_188 = local_78;
    FUN_18015a9c0(local_158);
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (puVar4[lVar18] != '\0');
    pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_158,puVar4);
    local_f0 = *pauVar9;
    auStack_e0 = pauVar9[1];
    (*pauVar9)[0] = 0;
    *(undefined8 *)pauVar9[1] = 0;
    *(undefined8 *)(pauVar9[1] + 8) = 0xf;
    local_180 = (char *)CONCAT44(local_180._4_4_,0xffffffff);
    local_188 = CONCAT44(local_188._4_4_,iVar20);
    FUN_1800b0420(local_100[0],local_f0,param_2,local_168);
    FUN_18015c010(local_f0);
    FUN_18015c010(local_158);
    iVar20 = iVar20 + 1;
    ppuVar16 = ppuVar16 + 1;
    if (5 < iVar20) {
      iVar20 = 0;
      ppuVar16 = &PTR_DAT_1806ff9c8;
      while( true ) {
        _local_158 = ZEXT816(0);
        FUN_1801409d0(auStack_150,0);
        local_158[0] = 4;
        local_138 = (undefined1 (*) [16])CONCAT71(local_138._1_7_,iVar17 == 2);
        auStack_150[0] = (longlong)local_138;
        if ((local_68[0] != '\0') && (local_68[0] != '\x02')) {
          local_100[0] = FUN_180112a50(local_68);
          uVar8 = FUN_1800f6bd0(local_a8,"cannot use push_back() with ",local_100);
          FUN_1800f6ca0(local_f0,0x134,uVar8);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_f0,&DAT_1808d1050);
        }
        if (local_68[0] == '\0') {
          local_68[0] = '\x02';
          FUN_180111d10(&local_108,2);
          local_60 = CONCAT44(uStack_104,local_108);
        }
        puVar3 = *(undefined8 **)(local_60 + 8);
        if (puVar3 == *(undefined8 **)(local_60 + 0x10)) {
          FUN_18014fc20(local_60,puVar3,local_158);
          uVar14 = (ulonglong)local_158[0];
        }
        else {
          *puVar3 = local_158;
          puVar3[1] = auStack_150[0];
          uVar14 = (ulonglong)puVar3 & 0xffffffffffffff00;
          local_158 = (undefined1  [8])(local_158._1_8_ << 8);
          auStack_150[0] = 0;
          *(longlong *)(local_60 + 8) = *(longlong *)(local_60 + 8) + 0x10;
        }
        FUN_1801409d0(auStack_150,uVar14);
        uVar2 = *(undefined4 *)((longlong)ppuVar16 + 0x14);
        puVar4 = *ppuVar16;
        if (0x7fffffffffffffffU - local_78 < 0xc) break;
        local_178 = 0xc;
        local_180 = " - weapon - ";
        local_188 = local_78;
        FUN_18015a9c0(local_a8);
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (puVar4[lVar18] != '\0');
        pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_a8,puVar4);
        uVar8 = local_100[0];
        local_128 = *pauVar9;
        auStack_118 = pauVar9[1];
        (*pauVar9)[0] = 0;
        *(undefined8 *)pauVar9[1] = 0;
        *(undefined8 *)(pauVar9[1] + 8) = 0xf;
        local_180 = (char *)CONCAT44(local_180._4_4_,iVar20);
        local_188 = CONCAT44(local_188._4_4_,uVar2);
        FUN_1800b0420(local_100[0],local_128,param_2,local_168);
        FUN_18015c010(local_128);
        FUN_18015c010(local_a8);
        iVar20 = iVar20 + 1;
        ppuVar16 = ppuVar16 + 4;
        if (0x21 < iVar20) {
          local_158 = (undefined1  [8])local_100;
          uVar10 = FUN_1800f4a50(local_100,local_58);
          if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_178 = 9;
          local_180 = " profiles";
          local_188 = local_78;
          FUN_18015a9c0(local_f0);
          local_158 = (undefined1  [8])local_f0;
          if (0xf < (ulonglong)auStack_e0._8_8_) {
            local_158 = (undefined1  [8])local_f0._0_8_;
          }
          local_128._0_8_ = "configured groups";
          local_128._8_8_ = 0x11;
          auStack_150[0] = auStack_e0._0_8_;
          FUN_1800afbf0(uVar8,local_158,local_128,uVar10);
          FUN_18015c010(local_f0);
          local_158 = (undefined1  [8])local_100;
          uVar10 = FUN_1800f4a50(local_100,local_68);
          if (0x7fffffffffffffffU - local_78 < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_178 = 9;
          local_180 = " profiles";
          local_188 = local_78;
          FUN_18015a9c0(local_f0);
          local_158 = (undefined1  [8])local_f0;
          if (0xf < (ulonglong)auStack_e0._8_8_) {
            local_158 = (undefined1  [8])local_f0._0_8_;
          }
          local_128._8_8_ = 0x12;
          local_128._0_8_ = "configured weapons";
          auStack_150[0] = auStack_e0._0_8_;
          FUN_1800afbf0(uVar8,local_158,local_128,uVar10);
          FUN_18015c010(local_f0);
          FUN_1801409d0(&local_60,local_68[0]);
          FUN_1801409d0(&local_50,local_58[0]);
          FUN_18015c010(local_88);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18015bb70();
}




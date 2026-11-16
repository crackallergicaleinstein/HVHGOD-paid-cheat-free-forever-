// FUN_1801ded70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ded70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801ded70(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                  longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  char *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  char **local_180;
  char *local_178;
  longlong *plStack_170;
  undefined4 local_168;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  char *local_138;
  undefined8 *local_130;
  ulonglong *local_128;
  char **local_120;
  char *local_118;
  int *local_110;
  int *local_108;
  char **local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  char *local_e8;
  char local_e0 [4];
  int local_dc;
  int local_d8 [2];
  undefined1 local_d0 [16];
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  char *local_a8;
  longlong *plStack_a0;
  char local_98 [65];
  undefined1 local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  iVar11 = 0;
  cVar3 = *(char *)(param_4 + 1);
  local_b0 = param_3;
  if (cVar3 == 'c') {
    if (param_3 < 0x80) {
      *(undefined1 *)((longlong)param_4 + 0xb) = 0;
      local_178 = (char *)*param_4;
      plStack_170 = (longlong *)param_4[1];
      local_168 = *(undefined4 *)(param_4 + 2);
      local_188 = param_5;
      FUN_1801dc140(param_1,param_2,param_3,&local_178);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("integral cannot be stored in char");
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(undefined1 *)((longlong)param_4 + 10) = 2;
  }
  uVar8 = 10;
  iVar10 = 2;
  if (cVar3 == 'B') {
LAB_1801dee23:
    uVar8 = 2;
  }
  else if (cVar3 == 'X') {
LAB_1801dee15:
    uVar8 = 0x10;
  }
  else {
    if (cVar3 == 'b') goto LAB_1801dee23;
    if (cVar3 == 'o') {
      uVar8 = 8;
    }
    else if (cVar3 == 'x') goto LAB_1801dee15;
  }
  local_188 = CONCAT44(local_188._4_4_,uVar8);
  FUN_1801e1ad0(&local_178,local_98,local_57,param_3);
  pcVar5 = local_178;
  local_e8 = local_98;
  local_dc = (int)local_178 - (int)local_e8;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_dc = local_dc + 1;
  }
  pcVar9 = local_e8;
  if ((*(char *)(param_4 + 1) == 'X') && (pcVar9 = local_98, local_98 != local_178)) {
    do {
      cVar3 = *pcVar9;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar9 = cVar3 + -0x20;
      }
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != local_178);
  }
  local_a8 = (char *)0x0;
  plStack_a0 = (longlong *)0x0;
  if (*(char *)((longlong)param_4 + 0xb) == '\0') goto LAB_1801def23;
  cVar3 = *(char *)(param_4 + 1);
  if (cVar3 == 'B') {
    local_178 = "0B";
LAB_1801def09:
    plStack_170 = (longlong *)0x2;
  }
  else {
    if (cVar3 == 'X') {
      local_178 = "0X";
      goto LAB_1801def09;
    }
    if (cVar3 == 'b') {
      local_178 = "0b";
      goto LAB_1801def09;
    }
    if (cVar3 == 'o') {
      if (local_b0 == 0) goto LAB_1801deebc;
      local_178 = "0";
      plStack_170 = (longlong *)0x1;
      iVar10 = 1;
    }
    else {
      if (cVar3 == 'x') {
        local_178 = "0x";
        goto LAB_1801def09;
      }
LAB_1801deebc:
      local_178 = (char *)0x0;
      plStack_170 = (longlong *)0x0;
      iVar10 = 0;
    }
  }
  local_a8 = local_178;
  plStack_a0 = plStack_170;
  local_dc = local_dc + iVar10;
  pcVar9 = local_178;
LAB_1801def23:
  local_d8[0] = 0;
  lStack_c0 = 0;
  uStack_b8 = 0xf;
  local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_d0._1_15_;
  local_d0 = auVar4 << 8;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      plStack_170 = (longlong *)FUN_1805fbf84(CONCAT71((int7)((ulonglong)pcVar9 >> 8),1));
    }
    else {
      plStack_170 = *(longlong **)(param_5 + 8);
      (**(code **)(*plStack_170 + 8))();
    }
    plVar6 = (longlong *)FUN_1801ddd40(&local_178);
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_158);
    FUN_18015c010(local_d0);
    local_d0._1_7_ = uStack_157;
    local_d0[0] = local_158;
    local_d0._8_8_ = uStack_150;
    lStack_c0 = lStack_148;
    uStack_b8 = uStack_140;
    lStack_148 = 0;
    uStack_140 = 0xf;
    local_158 = 0;
    thunk_FUN_18015c010(&local_158);
    if ((plStack_170 != (longlong *)0x0) &&
       (puVar7 = (undefined8 *)(**(code **)(*plStack_170 + 0x10))(), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pcVar9 = local_d0;
    if (0xf < uStack_b8) {
      pcVar9 = (char *)local_d0._0_8_;
    }
    uVar12 = (longlong)pcVar5 - (longlong)local_e8;
    if ((lStack_c0 != 0) && ((ulonglong)(longlong)*pcVar9 < uVar12)) {
      pcVar2 = pcVar9 + lStack_c0;
      do {
        cVar3 = *pcVar9;
        uVar12 = uVar12 - (longlong)cVar3;
        iVar11 = iVar11 + 1;
        pcVar1 = pcVar9 + 1;
        if (pcVar1 != pcVar2) {
          cVar3 = *pcVar1;
          pcVar9 = pcVar1;
        }
      } while ((ulonglong)(longlong)cVar3 < uVar12);
    }
    local_dc = local_dc + iVar11;
    local_d8[0] = iVar11;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_e0[0] = '\0';
  }
  else {
    local_e0[0] = '\x01';
  }
  local_138 = pcVar5;
  local_128 = &local_b0;
  local_118 = local_e0;
  local_110 = &local_dc;
  local_108 = local_d8;
  local_100 = &local_e8;
  local_f8 = local_d0;
  local_f0 = &param_5;
  local_130 = param_4;
  local_120 = &local_a8;
  if (local_e0[0] == '\0') {
    local_180 = &local_138;
    FUN_1801dfe70(param_1,param_2,local_dc,param_4);
  }
  else {
    FUN_1801ddb50(&local_138,param_1,param_2);
  }
  thunk_FUN_18015c010(local_d0);
}




// FUN_1800b4580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4580 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b4580(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [48];
  char local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_100 [56];
  undefined8 local_c8;
  undefined1 local_c0 [56];
  undefined8 local_88;
  char local_80;
  undefined7 uStack_7f;
  longlong *plStack_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_118._0_8_ = param_1;
  if (0x4000000 < *(ulonglong *)(*param_2 + 8)) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (*(ulonglong *)(*param_2 + 8) == 0) {
    puVar1 = (undefined8 *)FUN_1800b4410(local_118);
    uVar5 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar5;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_1801409d0(local_118 + 8,local_118[0]);
  }
  local_c8 = 0;
  FUN_1800e76d0(&local_80,param_2,local_100);
  if (local_80 == '\t') {
    local_118 = *param_2;
    FUN_1800ab8b0(local_70,local_118);
    if ((char)local_58 == '\0') {
LAB_1800b47b8:
      *(undefined1 *)(param_1 + 2) = 0;
      if ((char)local_58 != '\0') {
        FUN_180113710(local_70);
      }
      FUN_1801409d0(&plStack_78,local_80);
    }
    uVar8 = local_70._8_8_ - local_70._0_8_;
    if (uVar8 < 4) goto LAB_1800b47b8;
    if (*(char *)local_70._0_8_ == 'H') {
      if (((*(char *)(local_70._0_8_ + 1) == 'C') && (*(char *)(local_70._0_8_ + 2) == 'G')) &&
         (*(char *)(local_70._0_8_ + 3) == '1')) {
        local_118._8_8_ = uVar8;
        local_118._0_8_ = local_70._0_8_;
        FUN_1800b3290(param_1,local_118);
        if ((char)local_58 != '\0') {
          FUN_180113710(local_70);
        }
        FUN_1801409d0(&plStack_78,local_80);
      }
LAB_1800b4797:
      *(undefined1 *)(param_1 + 2) = 0;
      FUN_180113710(local_70);
      FUN_1801409d0(&plStack_78,local_80);
    }
    if ((*(char *)local_70._0_8_ != 'A') || (*(char *)(local_70._0_8_ + 1) != 'C'))
    goto LAB_1800b4797;
    FUN_1800abd30(local_50,(char *)(local_70._0_8_ + 3),uVar8 - 3);
    if (local_30 == '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      if ((char)local_58 != '\0') {
        FUN_180113710(local_70);
      }
      FUN_1801409d0(&plStack_78,local_80);
    }
    local_88 = 0;
    pcVar2 = (char *)FUN_1800e6d80(local_118,local_50,local_c0);
    cVar6 = *pcVar2;
    *pcVar2 = local_80;
    pcVar4 = pcVar2 + 8;
    plVar7 = *(longlong **)pcVar4;
    *(longlong **)pcVar4 = plStack_78;
    local_80 = cVar6;
    plStack_78 = plVar7;
    FUN_1801409d0(pcVar4,*pcVar2);
    if (local_30 != '\0') {
      FUN_18015c010(local_50);
    }
    if ((char)local_58 != '\0') {
      FUN_180113710(local_70);
    }
  }
  plVar7 = plStack_78;
  cVar6 = local_80;
  if (local_80 != '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_1801409d0(&plStack_78,local_80);
  }
  plVar3 = (longlong *)FUN_1800f6de0(plStack_78,local_118,"fields");
  if (*plVar3 != *plVar7) {
    local_70 = (undefined1  [16])0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_18015ba30(local_70,"fields",6);
    pcVar4 = (char *)FUN_1800f43d0(&local_80,local_70);
    plVar7 = plStack_78;
    cVar6 = local_80;
    if (*pcVar4 == '\x01') {
      if (local_80 != '\x01') goto LAB_1800b4c3c;
      plVar3 = (longlong *)FUN_1800f6de0(plStack_78,local_118,"version");
      if (*plVar3 != *plVar7) {
        local_70 = (undefined1  [16])0x0;
        local_60 = 0;
        local_58 = 0;
        FUN_18015ba30(local_70,"version",7);
        pcVar4 = (char *)FUN_1800f43d0(&local_80,local_70);
        if ((*pcVar4 == '\x05') || (*pcVar4 == '\x06')) {
          local_70 = (undefined1  [16])0x0;
          local_60 = 0;
          local_58 = 0;
          FUN_18015ba30(local_70,"version",7);
          uVar5 = FUN_1800f43d0(&local_80,local_70);
          local_118 = ZEXT816(0);
          FUN_1801409d0(local_118 + 8,0);
          local_118[0] = 5;
          local_118._8_8_ = 1;
          FUN_180112ae0(uVar5,local_128,local_118);
          FUN_1801409d0(local_118 + 8,local_118[0]);
          if (-1 < local_128[0]) {
            local_70 = (undefined1  [16])0x0;
            local_60 = 0;
            local_58 = 0;
            FUN_18015ba30(local_70,"version",7);
            uVar5 = FUN_1800f43d0(&local_80,local_70);
            local_118 = ZEXT816(0);
            FUN_1801409d0(local_118 + 8,0);
            local_118[0] = 5;
            local_118._8_8_ = 0xc;
            FUN_180112ae0(uVar5,local_128,local_118);
            FUN_1801409d0(local_118 + 8,local_118[0]);
            if (-1 < -local_128[0]) {
              *param_1 = CONCAT71(uStack_7f,local_80);
              param_1[1] = plStack_78;
              local_80 = '\0';
              plStack_78 = (longlong *)0x0;
              *(undefined1 *)(param_1 + 2) = 1;
              FUN_1801409d0(&plStack_78,0);
            }
          }
        }
        goto LAB_1800b4a0b;
      }
    }
    else {
LAB_1800b4a0b:
      plVar7 = plStack_78;
      cVar6 = local_80;
    }
    if (cVar6 != '\x01') goto LAB_1800b4c3c;
  }
  plVar3 = (longlong *)FUN_1800f6de0(plVar7,local_118,&DAT_1806bbfa8);
  if (*plVar3 != *plVar7) {
    local_70 = (undefined1  [16])0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_18015ba30(local_70,&DAT_1806bbfa8,1);
    pcVar4 = (char *)FUN_1800f43d0(&local_80,local_70);
    plVar7 = plStack_78;
    if (*pcVar4 == '\x01') {
      if ((local_80 != '\x01') ||
         (plVar3 = (longlong *)FUN_1800f6de0(plStack_78,local_118,&DAT_1806bbee0),
         *plVar3 == *plVar7)) {
LAB_1800b4c15:
        *param_1 = CONCAT71(uStack_7f,local_80);
        param_1[1] = plStack_78;
        local_80 = '\0';
        plStack_78 = (longlong *)0x0;
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_1801409d0(&plStack_78,0);
      }
      local_70 = (undefined1  [16])0x0;
      local_60 = 0;
      local_58 = 0;
      FUN_18015ba30(local_70,&DAT_1806bbee0,1);
      pcVar4 = (char *)FUN_1800f43d0(&local_80,local_70);
      if ((*pcVar4 == '\x05') || (*pcVar4 == '\x06')) {
        local_70 = (undefined1  [16])0x0;
        local_60 = 0;
        local_58 = 0;
        FUN_18015ba30(local_70,&DAT_1806bbee0,1);
        uVar5 = FUN_1800f43d0(&local_80,local_70);
        local_118 = ZEXT816(0);
        FUN_1801409d0(local_118 + 8,0);
        local_118[0] = 5;
        local_118._8_8_ = 1;
        FUN_180112ae0(uVar5,local_128,local_118);
        FUN_1801409d0(local_118 + 8,local_118[0]);
        if (-1 < local_128[0]) {
          local_70 = (undefined1  [16])0x0;
          local_60 = 0;
          local_58 = 0;
          FUN_18015ba30(local_70,&DAT_1806bbee0,1);
          uVar5 = FUN_1800f43d0(&local_80,local_70);
          local_118 = ZEXT816(0);
          FUN_1801409d0(local_118 + 8,0);
          local_118[0] = 5;
          local_118._8_8_ = 0xc;
          FUN_180112ae0(uVar5,local_128,local_118);
          FUN_1801409d0(local_118 + 8,local_118[0]);
          if (-1 < -local_128[0]) goto LAB_1800b4c15;
        }
      }
    }
    cVar6 = local_80;
  }
LAB_1800b4c3c:
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1801409d0(&plStack_78,cVar6);
}




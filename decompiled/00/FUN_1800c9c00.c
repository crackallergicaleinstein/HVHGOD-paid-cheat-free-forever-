// FUN_1800c9c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c9c00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800c9c00(char *param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 auStack_c8 [32];
  uint local_a8 [2];
  undefined1 local_a0 [32];
  undefined1 local_80 [56];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_48 = local_48 & 0xffffff00;
  *(ulonglong *)param_1 = CONCAT44(0xffffffff,local_48);
  param_1[8] = -1;
  param_1[9] = -1;
  param_1[10] = -1;
  param_1[0xb] = -1;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  if (*param_2 == '\x01') {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_1800e6b50(param_2,&local_48,&DAT_1806bdf44);
    uVar6 = FUN_1800f3e20(param_2,local_a0);
    cVar2 = FUN_1800e6ca0(&local_48,uVar6);
    if (cVar2 == '\0') {
      uVar6 = FUN_1800f34a0(&local_48);
      cVar2 = FUN_1800e6720(uVar6);
    }
    else {
      cVar2 = '\0';
    }
    *param_1 = cVar2;
    if (*param_2 != '\x01') {
      uVar6 = FUN_180112a50(param_2);
      local_48 = (uint)uVar6;
      uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar6 = FUN_1800f6bd0(local_a0,"cannot use value() with ",&local_48);
      FUN_1800f6ca0(local_80,0x132,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_80,&DAT_1808d1050);
    }
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_1800e6b50(param_2,&local_48,"tint_color");
    uVar6 = FUN_1800f3e20(param_2,local_a0);
    cVar2 = FUN_1800e6ca0(&local_48,uVar6);
    uVar5 = 0xffffffff;
    if (cVar2 == '\0') {
      uVar6 = FUN_1800f34a0(&local_48);
      uVar3 = FUN_1800e9850(uVar6);
    }
    else {
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
    if (*param_2 != '\x01') {
      uVar6 = FUN_180112a50(param_2);
      local_48 = (uint)uVar6;
      uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar6 = FUN_1800f6bd0(local_a0,"cannot use value() with ",&local_48);
      FUN_1800f6ca0(local_80,0x132,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_80,&DAT_1808d1050);
    }
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_1800e6b50(param_2,&local_48,"menu_material");
    uVar6 = FUN_1800f3e20(param_2,local_a0);
    cVar2 = FUN_1800e6ca0(&local_48,uVar6);
    if (cVar2 == '\0') {
      uVar6 = FUN_1800f34a0(&local_48);
      uVar4 = FUN_1800e62a0(uVar6);
    }
    else {
      uVar4 = 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + 8);
    *puVar1 = uVar4;
    if (*param_1 != '\0') {
      uVar5 = *(undefined4 *)(param_1 + 4);
    }
    if (*param_2 != '\x01') {
      uVar6 = FUN_180112a50(param_2);
      local_48 = (uint)uVar6;
      uStack_44 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar6 = FUN_1800f6bd0(local_a0,"cannot use value() with ",&local_48);
      FUN_1800f6ca0(local_80,0x132,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_80,&DAT_1808d1050);
    }
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_1800e6b50(param_2,&local_48,"material_color");
    uVar6 = FUN_1800f3e20(param_2,local_a0);
    cVar2 = FUN_1800e6ca0(&local_48,uVar6);
    if (cVar2 == '\0') {
      uVar6 = FUN_1800f34a0(&local_48);
      uVar5 = FUN_1800e9850(uVar6);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    local_48 = 10;
    local_a8[0] = 0xffffffff;
    puVar8 = local_a8;
    if (-2 < (int)*puVar1) {
      puVar8 = puVar1;
    }
    puVar7 = &local_48;
    if ((int)*puVar1 < 0xb) {
      puVar7 = puVar8;
    }
    *puVar1 = *puVar7;
  }
}




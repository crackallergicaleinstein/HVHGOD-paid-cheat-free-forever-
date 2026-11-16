// FUN_18015ee40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ee40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ee40(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_268 [32];
  longlong local_248;
  char **local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined **local_200;
  undefined1 local_1f8 [24];
  undefined **local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [32];
  undefined8 local_1a0 [4];
  undefined1 local_180 [64];
  char *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120 [16];
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0 [3];
  undefined1 local_d8 [32];
  undefined1 local_b8 [40];
  char local_90;
  longlong local_88 [7];
  longlong *local_50;
  char local_48;
  undefined1 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  uVar2 = *(undefined1 *)(param_1 + 0xe8);
  if (puVar8 == (undefined8 *)0x0) {
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    local_120 = ZEXT816(0);
    local_120[9] = uVar2;
    local_120._10_6_ = 0;
    lVar1 = param_1 + 0x48;
    local_140 = param_3;
    local_110 = lVar1;
    FUN_180160250(param_1,&local_140);
    iVar6 = FUN_180161330(lVar1);
    *(int *)(param_1 + 0x40) = iVar6;
    if (iVar6 != 0xf) {
      local_220 = (undefined1  [16])0x0;
      local_210 = (undefined1  [16])0x0;
      FUN_18015ba30(local_220,"value",5);
      uVar7 = FUN_18013fea0(param_1,local_1c0,0xf,local_220);
      local_238 = *(char ***)(param_1 + 0x68);
      uStack_230 = *(undefined8 *)(param_1 + 0x70);
      local_228 = *(undefined8 *)(param_1 + 0x78);
      uVar7 = FUN_1801212b0(&local_200,local_228,&local_238,uVar7);
      FUN_18013fdc0(lVar1,local_1a0);
      auVar4 = local_120;
      local_120[8] = 1;
      auVar5 = local_120;
      local_120[9] = auVar4[9];
      local_120 = auVar5;
      if (local_120[9] != '\0') {
        FUN_1800a8410(local_180,uVar7);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_180,&DAT_1808d1140);
      }
      FUN_18015c010(local_1a0);
      local_1e0 = std::exception::vftable;
      FUN_180606758(local_1d8);
      local_200 = std::exception::vftable;
      FUN_180606758(local_1f8);
      FUN_18015c010(local_1c0);
      FUN_18015c010(local_220);
    }
    if (local_120[8] != '\0') {
      local_238._0_1_ = '\t';
      FUN_180111d10(&uStack_230,9);
      cVar3 = *param_3;
      *param_3 = (char)local_238;
      local_238 = (char **)CONCAT71(local_238._1_7_,cVar3);
      uVar7 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = uStack_230;
      uStack_230 = uVar7;
      FUN_1801409d0(&uStack_230);
    }
    puVar8 = &uStack_138;
  }
  else {
    FUN_18063ab10(local_f8,0,0xd0);
    local_238 = &local_140;
    local_108 = 0;
    local_108 = (**(code **)*puVar8)(puVar8,&local_140);
    lVar1 = param_1 + 0x48;
    local_248 = lVar1;
    FUN_18013fbe0(local_f8,param_3,&local_140,uVar2);
    FUN_18015f2a0(param_1,local_f8);
    iVar6 = FUN_180161330(lVar1);
    *(int *)(param_1 + 0x40) = iVar6;
    if (iVar6 != 0xf) {
      local_220 = (undefined1  [16])0x0;
      local_210 = (undefined1  [16])0x0;
      FUN_18015ba30(local_220,"value",5);
      uVar7 = FUN_18013fea0(param_1,local_1a0,0xf,local_220);
      local_238 = *(char ***)(param_1 + 0x68);
      uStack_230 = *(undefined8 *)(param_1 + 0x70);
      local_228 = *(undefined8 *)(param_1 + 0x78);
      uVar7 = FUN_1801212b0(&local_200,local_228,&local_238,uVar7);
      FUN_18013fdc0(lVar1,local_1c0);
      local_90 = '\x01';
      if (local_48 != '\0') {
        FUN_1800a8410(&local_140,uVar7);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(&local_140,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c0);
      local_1e0 = std::exception::vftable;
      FUN_180606758(local_1d8);
      local_200 = std::exception::vftable;
      FUN_180606758(local_1f8);
      FUN_18015c010(local_1a0);
      FUN_18015c010(local_220);
    }
    if (local_90 == '\0') {
      if (*param_3 == '\t') {
        local_238 = (char **)((ulonglong)local_238._1_7_ << 8);
        FUN_180111d10(&uStack_230,0);
        cVar3 = *param_3;
        *param_3 = (char)local_238;
        local_238 = (char **)CONCAT71(local_238._1_7_,cVar3);
        uVar7 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = uStack_230;
        uStack_230 = uVar7;
        FUN_1801409d0(&uStack_230);
      }
      FUN_1801409d0(local_38,local_40);
    }
    else {
      local_238._0_1_ = '\t';
      FUN_180111d10(&uStack_230,9);
      cVar3 = *param_3;
      *param_3 = (char)local_238;
      local_238 = (char **)CONCAT71(local_238._1_7_,cVar3);
      uVar7 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = uStack_230;
      uStack_230 = uVar7;
      FUN_1801409d0(&uStack_230);
      FUN_1801409d0(local_38,local_40);
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x20))(local_50,local_50 != local_88);
      local_50 = (longlong *)0x0;
    }
    FUN_180159650(local_b8);
    FUN_180159650(local_d8);
    puVar8 = local_f0;
  }
  FUN_1800f0160(puVar8);
}




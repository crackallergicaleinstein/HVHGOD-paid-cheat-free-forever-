// FUN_18010fca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010fca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010fca0(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0xe8);
  if (puVar7 == (undefined8 *)0x0) {
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    local_120 = ZEXT816(0);
    local_120[9] = uVar1;
    local_120._10_6_ = 0;
    local_140 = param_3;
    local_110 = param_1 + 0x48;
    FUN_180121440(param_1,&local_140);
    iVar5 = FUN_1801401f0(param_1);
    if (iVar5 != 0xf) {
      local_220 = (undefined1  [16])0x0;
      local_210 = (undefined1  [16])0x0;
      FUN_18015ba30(local_220,"value",5);
      uVar6 = FUN_18013fea0(param_1,local_1c0,0xf,local_220);
      local_238 = *(char ***)(param_1 + 0x68);
      uStack_230 = *(undefined8 *)(param_1 + 0x70);
      local_228 = *(undefined8 *)(param_1 + 0x78);
      uVar6 = FUN_1801212b0(&local_200,local_228,&local_238,uVar6);
      FUN_18013fdc0(param_1 + 0x48,local_1a0);
      auVar3 = local_120;
      local_120[8] = 1;
      auVar4 = local_120;
      local_120[9] = auVar3[9];
      local_120 = auVar4;
      if (local_120[9] != '\0') {
        FUN_1800a8410(local_180,uVar6);
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
      cVar2 = *param_3;
      *param_3 = (char)local_238;
      local_238 = (char **)CONCAT71(local_238._1_7_,cVar2);
      uVar6 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = uStack_230;
      uStack_230 = uVar6;
      FUN_1801409d0(&uStack_230);
    }
    puVar7 = &uStack_138;
  }
  else {
    FUN_18063ab10(local_f8,0,0xd0);
    local_238 = &local_140;
    local_108 = 0;
    local_108 = (**(code **)*puVar7)(puVar7,&local_140);
    local_248 = param_1 + 0x48;
    FUN_18013fbe0(local_f8,param_3,&local_140,uVar1);
    FUN_180120310(param_1,local_f8);
    iVar5 = FUN_1801401f0(param_1);
    if (iVar5 != 0xf) {
      local_220 = (undefined1  [16])0x0;
      local_210 = (undefined1  [16])0x0;
      FUN_18015ba30(local_220,"value",5);
      uVar6 = FUN_18013fea0(param_1,local_1a0,0xf,local_220);
      local_238 = *(char ***)(param_1 + 0x68);
      uStack_230 = *(undefined8 *)(param_1 + 0x70);
      local_228 = *(undefined8 *)(param_1 + 0x78);
      uVar6 = FUN_1801212b0(&local_200,local_228,&local_238,uVar6);
      FUN_18013fdc0(param_1 + 0x48,local_1c0);
      local_90 = '\x01';
      if (local_48 != '\0') {
        FUN_1800a8410(&local_140,uVar6);
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
        cVar2 = *param_3;
        *param_3 = (char)local_238;
        local_238 = (char **)CONCAT71(local_238._1_7_,cVar2);
        uVar6 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = uStack_230;
        uStack_230 = uVar6;
        FUN_1801409d0(&uStack_230);
      }
      FUN_1801409d0(local_38,local_40);
    }
    else {
      local_238._0_1_ = '\t';
      FUN_180111d10(&uStack_230,9);
      cVar2 = *param_3;
      *param_3 = (char)local_238;
      local_238 = (char **)CONCAT71(local_238._1_7_,cVar2);
      uVar6 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = uStack_230;
      uStack_230 = uVar6;
      FUN_1801409d0(&uStack_230);
      FUN_1801409d0(local_38,local_40);
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x20))(local_50,local_50 != local_88);
      local_50 = (longlong *)0x0;
    }
    FUN_180159650(local_b8);
    FUN_180159650(local_d8);
    puVar7 = local_f0;
  }
  FUN_1800f0160(puVar7);
}




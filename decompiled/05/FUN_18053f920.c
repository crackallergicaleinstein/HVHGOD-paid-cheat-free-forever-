// FUN_18053f920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053f920 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053f920(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  FUN_18055a970(param_1,param_2,param_3,*param_1);
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Gap & Animation",&DAT_180859278,1);
  auVar5 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##scope_motion",auVar5._0_8_);
  }
  cVar2 = FUN_180488630("##scope_motion","Gap & Animation",auVar5._0_8_);
  auVar6 = ZEXT464(0x3f800000);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_40 = 0;
    local_50 = &DAT_18082a248;
    local_58 = 1;
    local_60 = CONCAT44(local_60._4_4_,auVar6._0_4_);
    local_68 = "%.0f px";
    FUN_18048a250("Base Gap",lVar1 + 0xe0,0,0x42c80000);
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Follow Weapon Spread",lVar1 + 0x68,&DAT_18082a244,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(lVar1 + 0x68);
    }
    local_40 = 0;
    local_50 = &DAT_18082a274;
    local_58 = 1;
    local_60 = CONCAT44(local_60._4_4_,auVar6._0_4_);
    local_68 = "%.0fx";
    FUN_18048a250("Transition Speed",lVar1 + 0xe8,auVar6._0_8_,0x41f00000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Glow & Softness",&DAT_180858a0c,1);
  uVar4 = auVar5._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##scope_light",uVar4);
    uVar4 = auVar5._0_8_;
  }
  cVar2 = FUN_180488630("##scope_light","Glow & Softness",uVar4);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Color Softness",lVar1 + 0x1d0,&DAT_18082a260,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x1e0) = *(undefined1 *)(lVar1 + 0x1d0);
    }
    local_58 = *(undefined1 *)(lVar1 + 0x1d0);
    uVar3 = 0x3c23d70a;
    local_40 = 0;
    local_50 = &DAT_18082a260;
    local_60 = CONCAT44(local_60._4_4_,0x3c23d70a);
    local_68 = "%.2f";
    FUN_18048a250("Softness Amount",lVar1 + 0x238,0,auVar6._0_8_);
    FUN_180488f10();
    FUN_180488c60();
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0(&DAT_1806bd384,lVar1 + 0x248,&DAT_180858a0c,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 600) = *(undefined1 *)(lVar1 + 0x248);
    }
    local_40 = 0;
    local_50 = &DAT_180830b60;
    local_58 = *(undefined1 *)(lVar1 + 0x248);
    local_60 = CONCAT44(local_60._4_4_,uVar3);
    local_68 = "%.2f";
    FUN_18048a250("Glow Strength",lVar1 + 0x2b0,0,auVar6._0_8_);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}




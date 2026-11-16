// FUN_180543300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180543300 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180543300(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined *local_60;
  undefined1 local_50;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Route Search",&DAT_18082ac6c,1);
  auVar5 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##edgebug_search",auVar5._0_8_);
  }
  cVar2 = FUN_180488630("##edgebug_search","Route Search",auVar5._0_8_);
  if (cVar2 != '\0') {
    uVar3 = FUN_180488c60();
    local_40 = 4;
    local_48 = &PTR_DAT_18086c0a0;
    FUN_18055c1b0(uVar3,lVar1 + 0x304,&local_48);
    auVar4 = ZEXT464(0x3f800000);
    local_50 = 0;
    local_60 = &DAT_18082a248;
    local_68 = 1;
    local_70._0_4_ = 0x3f800000;
    local_78 = "%.0f deg";
    FUN_18048a250("Steering FOV",lVar1 + 0x2f4,0,0x43340000);
    local_78 = &DAT_18082a278;
    FUN_18053bcb0("Prediction Ticks",lVar1 + 0x308,0x18,0x60);
    FUN_180488f10();
    FUN_180488c60();
    local_50 = 0;
    local_60 = &DAT_18082a274;
    local_68 = 1;
    local_70._0_4_ = auVar4._0_4_;
    local_78 = "%.0f u/s";
    FUN_18048a250("Minimum Exit Speed",lVar1 + 0x2f8,0,0x43fa0000);
    local_50 = 0;
    local_60 = &DAT_18082a278;
    local_68 = 1;
    local_70._0_4_ = 0x3dcccccd;
    local_78 = "%.1f ms";
    FUN_18048a250("Maximum Route Delay",lVar1 + 0x2fc,0,0x42000000);
    local_50 = 0;
    local_60 = &DAT_180829dbc;
    local_68 = 1;
    local_70 = CONCAT44(local_70._4_4_,0x3c23d70a);
    local_78 = "%.2f";
    FUN_18048a250("Route Lock Strength",lVar1 + 0x300,0,auVar4._0_8_);
    local_70 = 0;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Stable Route Scoring",lVar1 + 0x378,&DAT_180859278,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x388) = *(undefined1 *)(lVar1 + 0x378);
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Visual & Audio Feedback",&DAT_180829dc0,1);
  uVar3 = auVar5._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##edgebug_feedback",uVar3);
    uVar3 = auVar5._0_8_;
  }
  cVar2 = FUN_180488630("##edgebug_feedback","Visual & Audio Feedback",uVar3);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_70 = 0;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Show Route",lVar1 + 0x310,&DAT_180829dc0,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 800) = *(undefined1 *)(lVar1 + 0x310);
    }
    local_78 = (char *)CONCAT71(local_78._1_7_,1);
    FUN_1805367d0("Route Color",lVar1 + 0x44c,&DAT_18082a268,*(undefined1 *)(lVar1 + 0x310));
    FUN_180488f10();
    FUN_180488c60();
    FUN_180542e40(lVar1 + 0x3e0,lVar1 + 0x448);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}




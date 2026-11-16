// FUN_18053f3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053f3d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053f3d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Color & Outline",&DAT_18082a268,1);
  auVar5 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##crosshair_colors",auVar5._0_8_);
  }
  cVar2 = FUN_180488630("##crosshair_colors","Color & Outline",auVar5._0_8_);
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_68 = (char *)CONCAT71(local_68._1_7_,1);
    FUN_1805367d0("Crosshair Color",lVar1 + 0x150,&DAT_18082a268,1);
    FUN_180488f10();
    FUN_180488c60();
    local_40 = 0;
    local_50 = &DAT_18082a288;
    local_58 = 1;
    local_60 = CONCAT44(local_60._4_4_,0x3dcccccd);
    local_68 = "%.1f px";
    FUN_18048a250("Outline Width",lVar1 + 0x14c,0,0x40800000);
    local_68 = (char *)CONCAT71(local_68._1_7_,1);
    FUN_1805367d0("Outline Color",lVar1 + 0x154,&DAT_18082a288,fVar6 < *(float *)(lVar1 + 0x14c));
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Glow & Softness",&DAT_180858a0c,1);
  uVar4 = auVar5._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##crosshair_light",uVar4);
    uVar4 = auVar5._0_8_;
  }
  cVar2 = FUN_180488630("##crosshair_light","Glow & Softness",uVar4);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Color Softness",lVar1 + 0x158,&DAT_18082a260,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x168) = *(undefined1 *)(lVar1 + 0x158);
    }
    local_58 = *(undefined1 *)(lVar1 + 0x158);
    uVar3 = 0x3c23d70a;
    local_40 = 0;
    local_50 = &DAT_18082a260;
    local_60 = CONCAT44(local_60._4_4_,0x3c23d70a);
    local_68 = "%.2f";
    FUN_18048a250("Softness Amount",lVar1 + 0x1c0,0,0x3f800000);
    FUN_180488f10();
    FUN_180488c60();
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0(&DAT_1806bd384,lVar1 + 0x1c8,&DAT_180858a0c,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x1d8) = *(undefined1 *)(lVar1 + 0x1c8);
    }
    local_40 = 0;
    local_50 = &DAT_180830b60;
    local_58 = *(undefined1 *)(lVar1 + 0x1c8);
    local_60 = CONCAT44(local_60._4_4_,uVar3);
    local_68 = "%.2f";
    FUN_18048a250("Glow Strength",lVar1 + 0x230,0,0x3f800000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}




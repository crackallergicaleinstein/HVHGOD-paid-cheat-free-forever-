// FUN_18053e180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053e180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053e180(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined *local_70;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Strike Shape",&DAT_180829fa0,1);
  auVar4 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##thunder_shape",auVar4._0_8_);
  }
  cVar2 = FUN_180488630("##thunder_shape","Strike Shape",auVar4._0_8_);
  uVar6 = 0x3dcccccd;
  auVar5 = ZEXT464(0x3f800000);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_60 = 0;
    local_70 = &DAT_18082a254;
    local_78 = 1;
    local_80._0_4_ = 0x41200000;
    local_88 = "%.0f u";
    FUN_18048a250("Strike Height",lVar1 + 0xc,0x43160000,0x45098000);
    local_60 = 0;
    local_70 = &DAT_18082a288;
    local_78 = 1;
    local_88 = "%.1f px";
    local_80._0_4_ = uVar6;
    FUN_18048a250("Bolt Width",lVar1 + 0x10,0x3f000000,0x40c00000);
    local_60 = 0;
    local_70 = &DAT_180858a00;
    local_78 = 1;
    local_80 = CONCAT44(local_80._4_4_,auVar5._0_4_);
    local_88 = "%.0f";
    FUN_18048a250("Jaggedness",lVar1 + 0x14,0,0x42a00000);
    local_88 = "\x05";
    FUN_18053bcb0("Branches",lVar1 + 0x18,0,8);
    local_88 = &DAT_180829fa0;
    FUN_18053bcb0("Strikes",lVar1 + 0x1c,1,3);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Light & Bloom",&DAT_180830b60,1);
  if (cVar2 != '\0') {
    FUN_1805303d0("##thunder_light",auVar4._0_8_);
  }
  cVar2 = FUN_180488630("##thunder_light","Light & Bloom",auVar4._0_8_);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_88._0_1_ = 1;
    FUN_1805367d0("Bolt Color",lVar1,&DAT_180829fa0,1);
    local_88._0_1_ = 1;
    FUN_1805367d0("Core Color",lVar1 + 4,&DAT_180830b60,1);
    FUN_180488f10();
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88._1_7_ << 8);
    FUN_1804898a0(&DAT_180869c9c,lVar1 + 0x24,&DAT_18082a260,1);
    local_78 = *(undefined1 *)(lVar1 + 0x24);
    local_60 = 0;
    local_70 = &DAT_18082a254;
    local_80 = CONCAT44(local_80._4_4_,uVar6);
    local_88 = "%.1f px";
    FUN_18048a250("Blur Radius",lVar1 + 0x28,0x3e4ccccd,0x40800000);
    FUN_180488f10();
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    FUN_1804898a0("Bloom",lVar1 + 0x25,&DAT_180830b60,1);
    local_78 = *(undefined1 *)(lVar1 + 0x25);
    local_60 = 0;
    local_70 = &DAT_180830b60;
    local_80._0_4_ = 0x3c23d70a;
    local_88 = "%.2f";
    FUN_18048a250("Bloom Strength",lVar1 + 0x30,0,auVar5._0_8_);
    local_78 = *(undefined1 *)(lVar1 + 0x25);
    local_60 = 0;
    local_70 = &DAT_18082a254;
    local_80 = CONCAT44(local_80._4_4_,uVar6);
    local_88 = "%.1f px";
    FUN_18048a250("Bloom Radius",lVar1 + 0x2c,0x3e4ccccd,0x41000000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Thunder Audio",&DAT_18085d590,1);
  uVar3 = auVar4._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##thunder_audio",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar2 = FUN_180488630("##thunder_audio","Thunder Audio",uVar3);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    FUN_1804898a0("Play Thunder",lVar1 + 0x26,&DAT_18085d590,1);
    local_78 = *(undefined1 *)(lVar1 + 0x26);
    local_60 = 0;
    local_70 = &DAT_18085d590;
    local_80 = CONCAT44(local_80._4_4_,auVar5._0_4_);
    local_88 = "%.0f%%";
    FUN_18048a250("Volume",lVar1 + 0x34,0,0x42c80000);
    FUN_180488f10();
    if (*(char *)(lVar1 + 0x26) != '\0') {
      FUN_1805302b0(
                   "Thunder by Jerimee - CC BY 3.0\nopengameart.org/content/thunder\ncreativecommons.org/licenses/by/3.0\nEdited: trim, mono, resample and fades."
                   );
    }
    FUN_1804aeac0();
  }
}




// FUN_1805408e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805408e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805408e0(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined ***local_100;
  undefined1 local_f8;
  undefined *local_f0;
  undefined1 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 local_a8;
  uint7 uStack_a7;
  undefined8 uStack_a0;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  local_48[0] = (uint)DAT_180cc8c48;
  if (2 < local_48[0]) {
    local_48[0] = 2;
  }
  FUN_180488c60();
  uStack_c0 = 3;
  local_c8 = &PTR_DAT_18086c270;
  local_d0 = 3;
  auStack_b8 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = (ulonglong)uStack_a7 << 8;
  local_d8 = &PTR_DAT_18086c2a0;
  local_100 = &local_88;
  local_88 = &PTR_DAT_18086c270;
  uStack_80 = 3;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_108 = &DAT_180829a44;
  uStack_60 = 0;
  local_58 = auVar1._0_8_;
  cVar2 = FUN_18048d220("Weather Type",local_48,&local_d8,1);
  if (cVar2 != '\0') {
    DAT_180cc8c48 = (byte)local_48[0];
  }
  local_108 = (char *)CONCAT71(local_108._1_7_,1);
  FUN_1805367d0("Particle Color",&DAT_180cc8c4c,&DAT_18082a268,1);
  FUN_180488f10();
  FUN_180488c60();
  cVar2 = FUN_18048b0e0("Particle Appearance",&DAT_18085d5b0,1);
  auVar4 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##weather_particles",auVar4._0_8_);
  }
  cVar2 = FUN_180488630("##weather_particles","Particle Appearance",auVar4._0_8_);
  uVar5 = 0x3d4ccccd;
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_e0 = 0;
    local_f0 = &DAT_180829db8;
    local_f8 = 1;
    local_108 = "%.2fx";
    local_100._0_4_ = uVar5;
    FUN_18048a250("Particle Density",&DAT_180cc8c50,0,0x40000000);
    local_e0 = 0;
    local_f0 = &DAT_18082a254;
    local_f8 = 1;
    local_108 = "%.2fx";
    local_100._0_4_ = uVar5;
    FUN_18048a250("Particle Size",&DAT_180cc8c54,0x3e800000,0x40400000);
    local_e0 = 0;
    local_f0 = &DAT_18082a274;
    local_f8 = 1;
    local_100 = (undefined ***)CONCAT44(local_100._4_4_,uVar5);
    local_108 = "%.2fx";
    FUN_18048a250("Motion Speed",&DAT_180cc8c58,0x3dcccccd,0x40400000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  cVar2 = FUN_18048b0e0("Area & Height",&DAT_18082a248,1);
  uVar3 = auVar4._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##weather_area",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar2 = FUN_180488630("##weather_area","Area & Height",uVar3);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_e0 = 0;
    local_f0 = &DAT_18082a248;
    local_f8 = 1;
    local_108 = "%.2fx";
    local_100._0_4_ = uVar5;
    FUN_18048a250("Area Scale",&DAT_180cc8c5c,0x3e800000,0x40000000);
    local_e0 = 0;
    local_f0 = &DAT_18082a254;
    local_f8 = 1;
    local_100 = (undefined ***)CONCAT44(local_100._4_4_,0x3f800000);
    local_108 = "%.0f u";
    FUN_18048a250("Height Offset",&DAT_180cc8c60,0xc3800000,0x44000000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
}




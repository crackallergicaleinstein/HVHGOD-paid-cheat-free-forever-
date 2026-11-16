// FUN_180517150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517150 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180517150(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_38 [2];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_30 = &DAT_180866d1c;
  local_28 = &DAT_18085828c;
  local_20 = &DAT_180858288;
  local_18 = "Custom";
  local_38[0] = (uint)DAT_180cad720;
  FUN_180488c60();
  local_98 = 1;
  auStack_a8 = ZEXT816(0);
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_90 = 0;
  local_c8 = &local_30;
  local_58 = CONCAT71(uStack_97,1);
  local_f0 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_f8 = &DAT_18082a26c;
  uStack_50 = 0;
  local_48 = auVar1._0_8_;
  local_c0 = 4;
  cVar2 = FUN_18048d220("Pitch",local_38,&local_c8,1);
  if (cVar2 != '\0') {
    DAT_180cad720 = (byte)local_38[0];
    FUN_18050cd00();
  }
  if (local_38[0] == 3) {
    local_c0 = 5;
    local_c8 = (undefined **)0x180866f2c;
    local_e0 = FUN_180515fb0(&local_c8);
    local_d0 = 0;
    local_e8 = 1;
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,0x3f800000);
    local_f8 = "%.0f deg";
    cVar2 = FUN_18048a250("Angle",&DAT_180cad724,0xc2b20000,0x42b20000);
    if (cVar2 != '\0') {
      FUN_18050cd00();
    }
  }
  FUN_180488f10();
}




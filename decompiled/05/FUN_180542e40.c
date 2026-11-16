// FUN_180542e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180542e40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180542e40(char *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined8 *local_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 local_e8;
  uint7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88 [4];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_120 = (undefined8 *)0x0;
  local_128 = (undefined *)((ulonglong)local_128 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Success Sound",param_1,&DAT_18085d590,1);
  if (cVar2 != '\0') {
    param_1[0x10] = *param_1;
  }
  if ((DAT_180cd74b0 & 1) == 0) {
    DAT_180cd74b0 = DAT_180cd74b0 | 1;
    FUN_1805430a0();
    atexit(FUN_180663f70);
  }
  local_78 = &DAT_180cd70a0;
  if (0xf < DAT_180cd70b8) {
    local_78 = DAT_180cd70a0;
  }
  local_70 = &DAT_180cd70c0;
  if (0xf < DAT_180cd70d8) {
    local_70 = DAT_180cd70c0;
  }
  local_68 = &DAT_180cd70e0;
  if (0xf < DAT_180cd70f8) {
    local_68 = DAT_180cd70e0;
  }
  local_60 = &DAT_180cd7100;
  if (0xf < DAT_180cd7118) {
    local_60 = DAT_180cd7100;
  }
  local_58 = &DAT_180cd7120;
  if (0xf < DAT_180cd7138) {
    local_58 = DAT_180cd7120;
  }
  local_50 = &DAT_180cd7140;
  if (0xf < DAT_180cd7158) {
    local_50 = DAT_180cd7140;
  }
  local_48 = &DAT_180cd7160;
  if (0xf < DAT_180cd7178) {
    local_48 = DAT_180cd7160;
  }
  local_40 = &DAT_180cd7180;
  if (0xf < DAT_180cd7198) {
    local_40 = DAT_180cd7180;
  }
  local_38 = &DAT_180cd71a0;
  if (0xf < DAT_180cd71b8) {
    local_38 = DAT_180cd71a0;
  }
  local_30 = &DAT_180cd71c0;
  if (0xf < DAT_180cd71d8) {
    local_30 = DAT_180cd71c0;
  }
  local_88[0] = *param_2;
  local_108 = 0;
  uStack_100 = 0;
  auStack_f8 = ZEXT816(0);
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (ulonglong)uStack_e7 << 8;
  uStack_a0 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_98 = auVar1._0_8_;
  local_118 = &local_78;
  local_110 = 10;
  local_120 = &local_c8;
  local_128 = &DAT_18085d58c;
  cVar2 = FUN_18048d220("Sound",local_88,&local_118,*param_1);
  if (cVar2 != '\0') {
    *param_2 = local_88[0];
  }
  if (*param_1 != '\0') {
    FUN_1805302b0("Uses Hit Sound\'s volume and custom file from Misc / Audio Feedback.");
  }
}




// FUN_18046bd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046bd00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046bd00(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined *local_110;
  undefined1 local_100;
  char **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 local_c8;
  uint7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_68 [2];
  char *local_60;
  char *local_58;
  char *local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  lVar1 = *param_1;
  FUN_180488a80("Health Number",&DAT_18082a258);
  local_120 = (undefined8 *)0x0;
  local_128 = (char *)((ulonglong)local_128 & 0xffffffffffffff00);
  FUN_1804898a0("Show HP",lVar1 + 0x54,&DAT_180829dc0,1);
  if (*(char *)(lVar1 + 0x54) != '\0') {
    local_e8 = 0;
    local_60 = "Fill Edge";
    uStack_e0 = 0;
    local_58 = "Start";
    local_50 = "Center";
    auStack_d8 = ZEXT816(0);
    local_48 = &DAT_18082aac8;
    local_68[0] = (uint)*(byte *)(lVar1 + 0x55);
    local_f8 = &local_60;
    local_120 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
    local_c8 = 0;
    uStack_c0 = 0;
    local_88 = (ulonglong)uStack_c7 << 8;
    local_128 = &DAT_18082a298;
    uStack_80 = 0;
    local_78 = auVar2._0_8_;
    local_f0 = 4;
    cVar3 = FUN_18048d220("Number Position",local_68,&local_f8,1);
    if (cVar3 != '\0') {
      *(undefined1 *)(lVar1 + 0x55) = (undefined1)local_68[0];
    }
    uVar4 = 0x3f800000;
    local_100 = 0;
    local_110 = &DAT_18082a258;
    local_118 = 1;
    local_120._0_4_ = 0x3f800000;
    local_128 = "%.0f px";
    FUN_18048a250("Number Size",lVar1 + 0x7c,0x40e00000,0x41600000);
    local_100 = 0;
    local_110 = &DAT_18082a254;
    local_118 = 1;
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,uVar4);
    local_128 = "%.0f px";
    FUN_18048a250("Distance From Bar",lVar1 + 0x80,0,0x40c00000);
    local_120 = (undefined8 *)CONCAT71(local_120._1_7_,1);
    FUN_180489fc0("Number Color",lVar1 + 0x58,1,&DAT_18082a268);
    local_120 = (undefined8 *)0x0;
    local_128 = (char *)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_1804898a0("Number Outline",lVar1 + 0x68,&DAT_18082a248,1);
    if (*(char *)(lVar1 + 0x68) != '\0') {
      local_120 = (undefined8 *)CONCAT71(local_120._1_7_,1);
      FUN_180489fc0("Number Outline Color",lVar1 + 0x6c,1,&DAT_18082a260);
    }
  }
}




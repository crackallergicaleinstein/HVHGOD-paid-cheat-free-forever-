// FUN_180460b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180460b70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180460b70(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined1 auStack_27b58 [32];
  uint auStack_27b38 [10];
  undefined2 auStack_27b0f [5];
  undefined4 auStack_27b04 [6];
  undefined1 auStack_27aea [18441];
  undefined1 uStack_232e1;
  undefined1 uStack_21160;
  undefined4 uStack_20f4c;
  undefined1 uStack_20f31;
  undefined1 uStack_1a7d3;
  undefined1 uStack_1a788;
  undefined2 uStack_1a55a;
  undefined8 local_28;
  ulonglong local_20 [3];
  
  local_20[0] = DAT_1808d5f00 ^ (ulonglong)auStack_27b58;
  FUN_18063ab10(auStack_27b38,0,0x27b10);
  FUN_180460de0(auStack_27b38,6);
  uStack_232e1 = 1;
  local_28._0_4_ = 8;
  puVar5 = &local_28;
  local_28._4_4_ = 9;
  do {
    uVar1 = (uint)*puVar5;
    lVar3 = (longlong)(int)uVar1;
    auVar2 = vpcmpeqd_avx(ZEXT416(uVar1),SUB6416(ZEXT464(8),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x42aa0000),0),SUB6416(ZEXT464(0x42900000),0),auVar2);
    auStack_27b04[lVar3 * 10] = auVar2._0_4_;
    puVar5 = (ulonglong *)((longlong)puVar5 + 4);
    auVar2 = vpcmpeqd_avx(ZEXT416(uVar1),SUB6416(ZEXT464(8),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x42c80000),0),SUB6416(ZEXT464(0x42a00000),0),auVar2);
    auStack_27b04[lVar3 * 10 + 3] = auVar2._0_4_;
    *(bool *)(auStack_27b38 + lVar3 * 10 + 10) = uVar1 == 8;
    auStack_27b0f[lVar3 * 0x14] = 0x101;
    auStack_27aea[lVar3 * 0x28] = 1;
  } while (puVar5 != local_20);
  uStack_21160 = 1;
  puVar4 = auStack_27b38;
  uStack_20f31 = 1;
  uStack_20f4c = 2;
  uStack_1a7d3 = 1;
  uStack_1a788 = 1;
  uStack_1a55a = 0x101;
  do {
    FUN_18045f9f0(puVar4 + 0xe68);
    puVar4 = puVar4 + 0x1a76;
  } while (puVar4 != (uint *)&local_28);
  FUN_18063aed0(param_1,auStack_27b38,0x27b10);
}




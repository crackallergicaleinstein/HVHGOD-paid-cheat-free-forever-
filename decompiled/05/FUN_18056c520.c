// FUN_18056c520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056c520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18056c520(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  char *param_5)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (*param_5 == '\0') {
  }
  uVar3 = **(uint **)(param_5 + 8);
  local_48._0_1_ = (byte)uVar3;
  local_48._1_1_ = (byte)(uVar3 >> 8);
  uVar5 = uVar3 >> 0x18;
  if (0x96 < (byte)(uVar3 >> 0x18)) {
    uVar5 = 0x96;
  }
  local_48._2_1_ = (byte)(uVar3 >> 0x10);
  if ((((DAT_1808e4fb5 != '\0') && ((byte)local_48 < 0x28)) && (local_48._1_1_ < 0x28)) &&
     (local_48._2_1_ < 0x28)) {
    local_48._2_1_ = 0xf5;
    local_48._1_1_ = 0xf5;
    local_48._0_1_ = 0xf5;
  }
  uVar7 = (uint)local_48._2_1_;
  local_48 = uVar3;
  local_40 = param_3;
  local_38 = param_2;
  if (param_5[1] == '\0') {
    local_60 = 0;
    uVar3 = (uint)local_48._1_1_;
    uVar4 = (uint)(byte)local_48;
    local_68 = param_4;
    FUN_1804df870(param_1,&local_38,&local_40,((uVar5 << 8 | uVar7) << 8 | uVar3) << 8 | uVar4);
  }
  else {
    local_60 = local_60 & 0xffffff00;
    local_68 = ((uVar5 << 8 | uVar7) << 8 | (uint)local_48._1_1_) << 8 | (uint)(byte)local_48;
    FUN_1804a8080(param_1,&local_38,&local_40);
  }
  auVar8._0_8_ = FUN_180547640();
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8 = vmaxss_avx(auVar8,ZEXT416(0x3f800000));
  uVar3 = **(uint **)(param_5 + 0x18);
  uVar5 = uVar3 & 0xff;
  uVar7 = uVar3 >> 8 & 0xff;
  bVar2 = (byte)(uVar3 >> 0x10);
  if (DAT_1808e4fb5 != '\0') {
    bVar6 = (byte)(uVar3 >> 8);
    if ((((byte)uVar3 == bVar6) && (bVar6 == bVar2)) && (0xb4 < (byte)uVar3)) {
      bVar2 = 0x1e;
      uVar5 = 0x1e;
      uVar7 = 0x1e;
    }
  }
  local_48._3_1_ = (undefined1)(uVar3 >> 0x18);
  uVar1 = CONCAT11(local_48._3_1_,bVar2);
  local_58 = 0;
  local_60 = auVar8._0_4_;
  local_68 = param_4;
  local_48 = uVar3;
  FUN_1804de7c0(param_1,&local_38,&local_40,((uint)uVar1 << 8 | uVar7) << 8 | uVar5);
}




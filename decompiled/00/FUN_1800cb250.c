// FUN_1800cb250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cb250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800cb250(undefined1 (*param_1) [16],char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [64];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_74;
  undefined1 (*local_70) [16];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_48._8_8_;
  local_48 = auVar1 << 0x40;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  uStack_38 = uStack_38 & 0xffffff0000000000;
  auVar1 = vinsertps_avx(local_48,auVar2 << 0x20,0x20);
  auVar1 = vinsertps_avx(auVar1,auVar2 << 0x20,0x30);
  *param_1 = auVar1;
  *(ulonglong *)param_1[1] = uStack_38;
  if (*param_2 == '\x01') {
    local_48 = ZEXT816(0);
    uStack_38 = 0;
    uStack_30 = 0;
    auVar7 = ZEXT1264(ZEXT812(0)) << 0x20;
    local_70 = param_1;
    FUN_1800e6b50(param_2,local_48,&DAT_1806bdf80);
    uVar6 = FUN_1800f3e20(param_2,local_68);
    cVar3 = FUN_1800e6ca0(local_48,uVar6);
    if (cVar3 == '\0') {
      uVar6 = FUN_1800f34a0(local_48);
      uVar5 = FUN_1800e62a0(uVar6);
    }
    else {
      uVar5 = 0;
    }
    local_48._0_4_ = uVar5;
    local_74 = 0;
    uVar5 = FUN_1800e63a0(param_2,&DAT_1806bdfac,&local_74);
    local_48._4_4_ = uVar5;
    local_74 = auVar7._0_4_;
    uVar5 = FUN_1800e9950(param_2,&DAT_1806bdfa4,&local_74);
    local_48._8_4_ = uVar5;
    local_74 = auVar7._0_4_;
    uVar5 = FUN_1800e9950(param_2,&DAT_1806bdfa8,&local_74);
    local_48._12_4_ = uVar5;
    local_74 = auVar7._0_4_;
    uVar5 = FUN_1800e9950(param_2,&DAT_1806bdfb4,&local_74);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar5);
    local_78 = 0;
    uVar4 = FUN_1800e9a30(param_2);
    uStack_38._0_5_ = CONCAT14(uVar4,(undefined4)uStack_38);
    *(undefined8 *)*param_1 = local_48._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_48._8_8_;
    *(ulonglong *)param_1[1] = uStack_38;
    FUN_1800cacc0(param_1);
  }
}




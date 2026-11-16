// FUN_18046b960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046b960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046b960(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined8 *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  FUN_180488a80("Style",&DAT_18082a268);
  auVar2 = ZEXT812(0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = auVar2;
  auVar7 = ZEXT1264(auVar2) << 0x20;
  if (*(char *)(*param_1 + 0xc) == '\x03') {
    local_a8 = 0;
    uStack_a0 = 0;
    auStack_98 = ZEXT816(0);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar1 = vunpcklps_avx(auVar1 << 0x20,auVar1 << 0x20);
    local_b8 = &PTR_s_Static_18077f388;
    local_c0 = &local_68;
    local_88 = 0;
    uStack_80 = 0;
    local_48 = (ulonglong)uStack_87 << 8;
    local_28[0] = (uint)*(byte *)(param_1[1] + 0x40);
    local_c8 = &DAT_18082a268;
    uStack_40 = 0;
    local_38 = auVar1._0_8_;
    local_b0 = 3;
    auVar7 = ZEXT1264(auVar2) << 0x20;
    cVar3 = FUN_18048d220("Fill Style",local_28,&local_b8,1);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1[1] + 0x40) = (undefined1)local_28[0];
    }
  }
  if ((*(char *)(*param_1 + 0xc) == '\x03') && (lVar5 = param_1[1], *(char *)(lVar5 + 0x40) != '\0')
     ) {
    if (*(int *)(param_1[2] + 0x6e0c) == 3) {
      pcVar4 = "Low Health";
    }
    else {
      pcVar4 = "Low Value";
      if (*(int *)(param_1[2] + 0x6e0c) == 0x1b) {
        pcVar4 = "Low Armor";
      }
    }
    local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,1);
    FUN_180489fc0(pcVar4,lVar5 + 0x44,CONCAT71((int7)((ulonglong)lVar5 >> 8),1),&DAT_18082a268);
    lVar5 = param_1[1] + 0xc;
    if (*(int *)(param_1[2] + 0x6e0c) == 3) {
      pcVar4 = "High Health";
    }
    else {
      pcVar4 = "High Value";
      if (*(int *)(param_1[2] + 0x6e0c) == 0x1b) {
        pcVar4 = "High Armor";
      }
    }
  }
  else {
    pcVar4 = "Element Color";
    lVar5 = param_1[1] + 0xc;
  }
  local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,1);
  FUN_180489fc0(pcVar4,lVar5,1,&DAT_18082a268);
  if ((*(char *)(*param_1 + 0xc) == '\x02') || (*(char *)(*param_1 + 0xc) == '\x04')) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = &PTR_s_Original_18077f3a0;
    local_c0 = &local_68;
    auStack_98 = ZEXT816(0);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar6 = auVar7._0_16_;
    auVar1 = vunpcklps_avx(auVar6,auVar6);
    local_88 = 0;
    uStack_80 = 0;
    local_48 = (ulonglong)uStack_87 << 8;
    local_28[0] = (uint)*(byte *)(param_1[1] + 0x38);
    local_c8 = &DAT_18082a258;
    uStack_40 = 0;
    local_38 = auVar1._0_8_;
    local_b0 = 3;
    auVar7 = ZEXT1664(auVar6);
    cVar3 = FUN_18048d220("Text Case",local_28,&local_b8,1);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1[1] + 0x38) = (undefined1)local_28[0];
    }
    local_b8 = &PTR_s_Regular_18077f260;
    local_c0 = &local_68;
    auStack_98 = ZEXT816(0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar1 = vunpcklps_avx(auVar7._0_16_,auVar7._0_16_);
    local_88 = 1;
    uStack_80 = 0;
    local_48 = CONCAT71(uStack_87,1);
    local_38 = auVar1._0_8_;
    uStack_40 = 0;
    local_b0 = 3;
    local_c8 = &DAT_18082a288;
    FUN_18048d220("Font Weight",param_1[1] + 0x3c,&local_b8,1);
  }
  local_c0 = (undefined8 *)0x0;
  local_c8 = (undefined *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_1804898a0("Background",param_1[1] + 0x1c,&DAT_180829a3c,1);
  local_c0 = (undefined8 *)0x0;
  local_c8 = (undefined *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_1804898a0("Shadow",param_1[1] + 0x1d,&DAT_18082a240,1);
  local_c0 = (undefined8 *)0x0;
  local_c8 = (undefined *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_1804898a0("Outline",param_1[1] + 0x24,&DAT_18082a248,1);
  if (*(char *)(param_1[1] + 0x24) != '\0') {
    local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,1);
    FUN_180489fc0("Outline Color",param_1[1] + 0x28,1,&DAT_18082a260);
  }
}




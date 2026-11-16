// FUN_1802248c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802248c0 */

undefined8 FUN_1802248c0(void)

{
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  if ((DAT_180cd3a40 & 1) == 0) {
    DAT_180cd3a40 = DAT_180cd3a40 | 1;
    local_98 = 0xb900000080;
    uStack_90 = 0x800000010;
    uStack_88 = 0;
    uStack_80 = 0x7500000000;
    local_78 = 0x3200000003;
    uStack_70 = 0xc3000000c0;
    uStack_68 = 0x9100000089;
    uStack_60 = 0x900000088;
    local_58 = 0;
    uStack_50 = 0xc000000033;
    uStack_48 = 0x81000000c6;
    uStack_40 = 0x90000008c;
    local_38 = 0;
    uStack_30 = 0xc600000001;
    uStack_28 = 0xc800000081;
    uStack_20 = 8;
    local_18 = 0;
    local_14 = 1;
    local_a8 = &local_98;
    local_a0 = local_10;
    DAT_180cd3a48 = FUN_180219910(&local_a8);
    return DAT_180cd3a48;
  }
  return DAT_180cd3a48;
}




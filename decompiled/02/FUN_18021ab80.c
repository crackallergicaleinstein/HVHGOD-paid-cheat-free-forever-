// FUN_18021ab80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021ab80 */

void FUN_18021ab80(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  iVar2 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_10c = 0x3c23d70a;
  local_a8 = 0x3f80000000000000;
  uStack_a0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  uStack_c0 = 0x3f800000;
  uStack_b8 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_110 = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_f8._1_15_;
  local_f8 = auVar1 << 8;
  local_d8 = 0;
  local_d4 = 0xffffffffffffffff;
  local_cc = 0xffffffff;
  local_c8 = 0;
  uStack_b0 = 0xffffffff;
  uStack_98 = 0xffffffff00000000;
  uStack_90 = 0;
  uStack_78 = 0xffffffff;
  uStack_60 = 0xffffffff00000000;
  uStack_58 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0xffffffff;
  local_18 = 0;
  local_10 = 0;
  local_e = 0;
  DAT_180cc9eb8 = 0;
  FUN_1800cf9c0(&DAT_180cc9ec0,&local_110);
  DAT_180cc9fb0 = local_24._4_4_;
  DAT_180cc9fb4 = local_1c;
  DAT_180cc9fb8 = local_18;
  DAT_180cc9fc0 = (undefined1)local_10;
  DAT_180cc9fc1 = local_10._1_1_;
  DAT_180cc9fc2 = local_e;
  FUN_18015c010(local_f8);
  DAT_180cc9fd0 = 0;
  DAT_180cc9fc8 = 0;
  FUN_1805f68fc(&DAT_180cc9e50);
  return;
}




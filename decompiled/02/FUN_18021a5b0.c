// FUN_18021a5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021a5b0 */

void FUN_18021a5b0(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined2 local_118 [4];
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
  undefined4 local_24;
  undefined4 local_20;
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
  if (DAT_180cca116 == '\0') {
    if ((ulonglong)((DAT_180cc9ea8 - DAT_180cc9ea0) / 0x110) < 0x80) {
      local_110 = 0;
      local_10c = 0x3c23d70a;
      local_108 = 0;
      local_104 = 0;
      local_100 = 0;
      local_e8 = 0;
      uStack_e0 = 0xf;
      local_f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar1[0xf] = 0;
      auVar1._0_15_ = local_f8._1_15_;
      local_f8 = auVar1 << 8;
      local_d8 = 0;
      local_d4 = 0xffffffffffffffff;
      local_cc = 0xffffffff;
      local_c8 = 0;
      uStack_c0 = 0x3f800000;
      uStack_b8 = 0;
      uStack_b0 = 0xffffffff;
      local_a8 = 0x3f80000000000000;
      uStack_a0 = 0;
      uStack_98 = 0xffffffff00000000;
      uStack_90 = 0;
      local_88 = 0x3f800000;
      uStack_80 = 0;
      uStack_78 = 0xffffffff;
      uStack_70 = 0x3f80000000000000;
      local_68 = 0;
      uStack_60 = 0xffffffff00000000;
      uStack_58 = 0;
      uStack_50 = 0x3f800000;
      local_48 = 0;
      local_40 = 0xffffffff;
      local_3c = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_1c = 0xffffffff;
      local_18 = 0;
      local_10 = 1;
      local_e = 0;
      local_118[0] = param_2;
      local_20 = param_3;
      if (DAT_180cc9ea8 == DAT_180cc9eb0) {
        FUN_1802318f0(&DAT_180cc9ea0,DAT_180cc9ea8,local_118);
      }
      else {
        FUN_1802329a0(DAT_180cc9ea8,local_118);
        DAT_180cc9ea8 = DAT_180cc9ea8 + 0x110;
      }
      FUN_18015c010(local_f8);
    }
  }
  FUN_1805f68fc(&DAT_180cc9e50);
  return;
}




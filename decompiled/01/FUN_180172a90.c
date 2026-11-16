// FUN_180172a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172a90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180172a90(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  DAT_180bb8d23 = 0;
  if (DAT_180bb8cc0 != 0) {
    FUN_18015b360(local_148,&DAT_180bb8c90);
    FUN_18015b360(local_128,&DAT_180bb8c70);
    FUN_1800e60e0(local_a8,"action");
    FUN_1800e60e0(local_90,&DAT_180700e24);
    local_180 = local_78;
    local_188 = local_a8;
    FUN_1800f4e90(local_d8,&local_188,1,2);
    local_c8 = 0;
    FUN_1800e60e0(local_178,&DAT_1806bc068);
    local_160 = ZEXT816(0);
    FUN_1801409d0(local_160 + 8,0);
    local_160[0] = 3;
    uVar3 = FUN_18013f1a0();
    local_160._8_8_ = uVar3;
    local_150 = 0;
    local_188 = local_178;
    local_180 = local_148;
    FUN_1800f4e90(local_c0,&local_188,1,2);
    local_b0 = 0;
    local_188 = local_d8;
    local_180 = local_a8;
    FUN_1800f4e90(local_108,&local_188,1,2);
    local_f8._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar2 = (undefined1  [14])local_f8._2_14_;
    uStack_70 = uStack_140;
    uStack_68 = uStack_138;
    uStack_60 = uStack_130;
    uStack_138 = 0;
    uStack_130 = 0xf;
    local_148[0] = 0;
    uStack_50 = uStack_120;
    uStack_48 = uStack_118;
    uStack_40 = uStack_110;
    uStack_118 = 0;
    uStack_110 = 0xf;
    local_128[0] = 0;
    uStack_30 = uStack_100;
    local_108[0] = 0;
    uStack_100 = 0;
    local_f8._8_8_ = SUB168((undefined1  [16])0x0,8);
    local_28 = 0;
    uStack_20 = local_f8._8_8_;
    uStack_18 = 0;
    uStack_10 = 7;
    uStack_e8 = 0;
    uStack_e0 = 7;
    auVar1._14_2_ = 0;
    auVar1._0_14_ = auVar2;
    local_f8 = auVar1 << 0x10;
    FUN_180171620(&DAT_180bb8b48,local_78);
    FUN_18015b930(local_f8);
    FUN_1801409d0(&uStack_100,local_108[0]);
    FUN_18015c010(local_128);
    FUN_18015c010(local_148);
    _eh_vector_destructor_iterator_(local_d8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_178,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_a8,0x18,2,FUN_1800aab30);
    DAT_180bb8cc0 = 0;
    puVar4 = &DAT_180bb8cb0;
    if (0xf < DAT_180bb8cc8) {
      puVar4 = DAT_180bb8cb0;
    }
    *(undefined1 *)puVar4 = 0;
    _DAT_180bb8ce0 = 0;
    puVar4 = &DAT_180bb8cd0;
    if (0xf < DAT_180bb8ce8) {
      puVar4 = DAT_180bb8cd0;
    }
    *(undefined1 *)puVar4 = 0;
  }
  return;
}




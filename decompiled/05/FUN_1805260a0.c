// FUN_1805260a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805260a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805260a0(char param_1)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_208;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (DAT_1808e6670 != '\0') {
    lVar9 = (longlong)DAT_1808e6674 * 0x15 + (longlong)DAT_1808e6678;
    puVar10 = &DAT_1808e4ff0 + lVar9 * 4;
    puVar8 = puVar10;
    if (0xf < (ulonglong)(&DAT_1808e5008)[lVar9 * 4]) {
      puVar8 = (undefined8 *)*puVar10;
    }
    uVar11 = 0xcbf29ce484222325;
    uVar7 = 0;
    if ((&DAT_1808e5000)[lVar9 * 4] != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)puVar8);
        uVar7 = uVar7 + 1;
        uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
      } while (uVar7 < (ulonglong)(&DAT_1808e5000)[lVar9 * 4]);
    }
    FUN_18056c930(uVar7,local_18,puVar10,uVar11);
    uVar6 = _DAT_1808e66f0;
    uVar5 = _DAT_1808e66e8;
    uVar4 = _DAT_1808e66e0;
    if (local_10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa8dc("invalid unordered_map<K, T> key");
    }
    if (param_1 != '\0') {
      *(undefined8 *)(local_10 + 0x78) = _DAT_1808e66d8;
      *(undefined8 *)(local_10 + 0x80) = uVar4;
      *(undefined8 *)(local_10 + 0x88) = uVar5;
      *(undefined8 *)(local_10 + 0x90) = uVar6;
      uVar6 = uRam00000001808e6710;
      uVar5 = uRam00000001808e6708;
      uVar4 = _DAT_1808e6700;
      *(undefined8 *)(local_10 + 0x98) = _DAT_1808e66f8;
      *(undefined8 *)(local_10 + 0xa0) = uVar4;
      *(undefined8 *)(local_10 + 0xa8) = uVar5;
      *(undefined8 *)(local_10 + 0xb0) = uVar6;
      uVar6 = uRam00000001808e6730;
      uVar5 = uRam00000001808e6728;
      uVar4 = uRam00000001808e6720;
      *(undefined8 *)(local_10 + 0xb8) = _DAT_1808e6718;
      *(undefined8 *)(local_10 + 0xc0) = uVar4;
      *(undefined8 *)(local_10 + 200) = uVar5;
      *(undefined8 *)(local_10 + 0xd0) = uVar6;
      uVar6 = uRam00000001808e6750;
      uVar5 = uRam00000001808e6748;
      uVar4 = uRam00000001808e6740;
      *(undefined8 *)(local_10 + 0xd8) = _DAT_1808e6738;
      *(undefined8 *)(local_10 + 0xe0) = uVar4;
      *(undefined8 *)(local_10 + 0xe8) = uVar5;
      *(undefined8 *)(local_10 + 0xf0) = uVar6;
      *(undefined8 *)(local_10 + 0xf8) = DAT_1808e6758;
      *(undefined4 *)(local_10 + 0x100) = DAT_1808e6760;
      uVar4 = _DAT_1808e676c;
      *(undefined8 *)(local_10 + 0x104) = _DAT_1808e6764;
      *(undefined8 *)(local_10 + 0x10c) = uVar4;
      *(undefined8 *)(local_10 + 0x114) = _DAT_1808e6774;
      FUN_1800cb400(local_10 + 0x30);
      FUN_180113930(local_10 + 0x230,"Draft saved",0xb);
    }
    local_1b0 = 0x3f80000000000000;
    uStack_1a8 = 0;
    uStack_1a0 = 0xffffffff00000000;
    local_190 = 0x3f800000;
    uStack_188 = 0;
    local_200._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_200._1_15_;
    local_200 = auVar2 << 8;
    local_1d0 = 0;
    uStack_1c8 = 0x3f800000;
    uStack_1c0 = 0;
    uStack_1b8 = 0xffffffff;
    uStack_198 = 0;
    uStack_180 = 0xffffffff;
    uStack_178 = 0x3f80000000000000;
    uStack_170 = 0;
    uStack_168 = 0xffffffff00000000;
    uStack_160 = 0;
    uStack_158 = 0x3f800000;
    uStack_150 = 0;
    local_110._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_110._1_15_;
    local_110 = auVar3 << 8;
    local_e0 = 0;
    uStack_d8 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    local_214 = 0x3c23d70a;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    local_124 = 0x3c23d70a;
    local_218 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_1f0 = 0;
    local_1e8 = 0xf;
    local_1e0 = 0;
    local_1dc = 0xffffffffffffffff;
    local_1d4 = 0xffffffff;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_130 = 0;
    local_12c = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_100 = 0;
    local_f8 = 0xf;
    local_f0 = 0;
    local_ec = 0xffffffffffffffff;
    local_e4 = 0xffffffff;
    local_c0 = 0x3f80000000000000;
    uStack_b8 = 0;
    local_a0 = 0x3f800000;
    uStack_98 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
    uStack_b0 = 0xffffffff00000000;
    uStack_a8 = 0;
    uStack_90 = 0xffffffff;
    uStack_88 = 0x3f80000000000000;
    uStack_80 = 0;
    uStack_78 = 0xffffffff00000000;
    uStack_70 = 0;
    uStack_68 = 0x3f800000;
    uStack_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_40 = 0;
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_24 = uStack_24 & 0xffffff00;
    local_20 = 0;
    _DAT_1808e6670 = 0;
    _DAT_1808e6674 = 0;
    _DAT_1808e667c = 0;
    DAT_1808e6684 = 0;
    DAT_1808e6688 = 0;
    FUN_1800cf9c0(&DAT_1808e6690,&local_218);
    FUN_1800cf9c0(&DAT_1808e6780,(longlong)&local_12c + 4);
    _DAT_1808e6870 = CONCAT44(uStack_34,uStack_38);
    uRam00000001808e6878 = CONCAT44(uStack_2c,uStack_30);
    DAT_1808e6880 = CONCAT44(uStack_24,local_28);
    _DAT_1808e6888 = (undefined4)local_20;
    DAT_1808e688c = local_20._4_1_;
    FUN_18015c010(local_110);
    FUN_18015c010(local_200);
    FUN_1801d80f0();
    FUN_18021ab80();
    lVar9 = DAT_180c62f50;
    if (DAT_180c62f50 != 0) {
      *(undefined4 *)(DAT_180c62f50 + 0x50) = 0;
      *(undefined4 *)(lVar9 + 0xf8) = 0;
      *(undefined1 *)(lVar9 + 0xb8) = 0;
    }
  }
  return;
}




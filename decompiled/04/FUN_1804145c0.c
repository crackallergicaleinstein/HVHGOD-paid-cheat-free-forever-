// FUN_1804145c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804145c0 */

undefined8 * FUN_1804145c0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  uint local_230;
  undefined1 local_22c;
  undefined1 local_228 [16];
  undefined8 local_218;
  uint local_210;
  uint local_208 [8];
  uint local_1e8 [8];
  uint local_1c8 [4];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_138;
  uint local_128 [20];
  uint local_d8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong local_78;
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
  
  uVar1 = local_250;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar3 = FUN_18017ea70();
    local_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    local_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    cVar2 = FUN_1804514f0(&local_98,param_2,0x80);
    bVar8 = cVar2 != '\0';
    if (bVar8) {
      local_1b8 = local_98;
      uStack_1b0 = uStack_90;
      uStack_1a8 = uStack_88;
      uStack_1a0 = uStack_80;
      local_198 = local_78;
      uStack_190 = uStack_70;
      uStack_188 = uStack_68;
      uStack_180 = uStack_60;
      local_178 = local_58;
      uStack_170 = uStack_50;
      uStack_168 = uStack_48;
      uStack_160 = uStack_40;
      local_158 = local_38;
      uStack_150 = uStack_30;
      uStack_148 = uStack_28;
      uStack_140 = uStack_20;
    }
    local_138 = bVar8;
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    lVar3 = FUN_18017ea70();
    uVar5 = 0x1c;
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    local_218 = 0;
    local_210 = 0;
    local_228 = (undefined1  [16])0x0;
    cVar2 = FUN_1804514f0(local_228,param_3,0x1c);
    local_22c = cVar2 != '\0';
    if ((bool)local_22c) {
      local_248 = local_228._0_8_;
      uStack_240 = local_228._8_8_;
      local_238 = local_218;
      local_230 = local_210;
    }
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if ((bVar8) && (cVar2 != '\0')) {
      uVar7 = 0x48;
      puVar4 = local_d8;
      local_d8[0] = 0x48;
      local_d8[1] = 0x8b;
      local_d8[2] = 2;
      local_d8[3] = 0x48;
      local_d8[4] = 0x8b;
      local_d8[5] = 0xca;
      local_d8[6] = 0xff;
      local_d8[7] = 0x90;
      uVar6 = 0x48;
      while( true ) {
        if ((-1 < (int)uVar6) && (*(byte *)((longlong)local_1c8 + uVar5 + 0x10) != uVar6))
        goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == local_d8 + 8) break;
        uVar6 = *puVar4;
      }
      local_d8[8] = 0x48;
      local_d8[9] = 0x85;
      local_d8[10] = 0xc0;
      local_d8[0xb] = 0x74;
      local_d8[0xc] = 0xffffffff;
      local_d8[0xd] = 0x4c;
      local_d8[0xe] = 0x8d;
      local_d8[0xf] = 0x88;
      uVar5 = 0x28;
      puVar4 = local_d8 + 8;
      uVar6 = 0x48;
      while( true ) {
        if ((-1 < (int)uVar6) && (*(byte *)((longlong)local_1c8 + uVar5 + 0x10) != uVar6))
        goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == (uint *)&local_98) break;
        uVar6 = *puVar4;
      }
      local_208[0] = 0x4c;
      local_208[1] = 0x89;
      local_208[2] = 0xb;
      local_208[3] = 0x41;
      local_208[4] = 0xfe;
      puVar4 = local_208;
      local_208[5] = 0x41;
      uVar5 = 0x34;
      local_208[6] = 0xffffffff;
      uVar6 = 0x4c;
      while( true ) {
        if ((-1 < (int)uVar6) && (*(byte *)((longlong)local_1c8 + uVar5 + 0x10) != uVar6))
        goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == local_208 + 7) break;
        uVar6 = *puVar4;
      }
      local_1c8[0] = 0x45;
      local_1c8[1] = 0x89;
      local_1c8[2] = 0x41;
      local_1c8[3] = 0xffffffff;
      uVar5 = 0x70;
      puVar4 = local_1c8;
      uVar6 = 0x45;
      while( true ) {
        if ((-1 < (int)uVar6) && (*(byte *)((longlong)local_1c8 + uVar5 + 0x10) != uVar6))
        goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == (uint *)&local_1b8) break;
        uVar6 = *puVar4;
      }
      local_128[0] = 0x48;
      local_128[1] = 0x8b;
      local_128[2] = 0x11;
      local_128[3] = 0x48;
      local_128[4] = 0x85;
      local_128[5] = 0xd2;
      local_128[6] = 0x74;
      local_128[7] = 0x13;
      local_128[8] = 0x80;
      local_128[9] = 0x6a;
      local_128[10] = 0xffffffff;
      local_128[0xb] = 1;
      local_128[0xc] = 0x75;
      local_128[0xd] = 0xd;
      local_128[0xe] = 0x48;
      local_128[0xf] = 0x8b;
      local_128[0x10] = 5;
      puVar4 = local_128;
      uVar5 = 0;
      while( true ) {
        if ((-1 < (int)uVar7) && ((byte)local_228[uVar5 - 0x20] != uVar7)) goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == local_128 + 0x11) break;
        uVar7 = *puVar4;
      }
      local_1e8[0] = 0x8b;
      local_1e8[1] = 0x40;
      local_1e8[2] = 0xffffffff;
      local_1e8[3] = 0x89;
      local_1e8[4] = 0x42;
      puVar4 = local_1e8;
      local_1e8[5] = 0xffffffff;
      uVar5 = 0x15;
      local_1e8[6] = 0xc3;
      uVar6 = 0x8b;
      while( true ) {
        if ((-1 < (int)uVar6) && ((byte)local_228[uVar5 - 0x20] != uVar6)) goto LAB_180414a38;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        puVar4 = puVar4 + 1;
        if (puVar4 == local_1e8 + 7) break;
        uVar6 = *puVar4;
      }
      local_250._3_1_ = SUB41(uVar1,3);
      local_250._0_3_ = CONCAT12(local_238._7_1_,CONCAT11(uStack_148._3_1_,uStack_180._2_1_));
      if ((((((local_198 & 0x700000000) == 0) && (local_198._4_4_ >> 3 < 0x80)) &&
           ((int)uStack_188 - 0x100U < 0x7f01)) &&
          ((uStack_180._2_1_ == uStack_240._2_1_ && (uStack_180._2_1_ + 1 <= (uint)uStack_148._3_1_)
           ))) && ((uStack_148._3_1_ < 0x39 &&
                   (((local_230 >> 0x10 & 0xff) == uStack_148._3_1_ + 4 && (local_238._7_1_ == 'D'))
                   )))) {
        *param_1 = CONCAT44(local_198._4_4_ >> 3,(int)uStack_188);
        *(undefined4 *)(param_1 + 1) = local_250;
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
        return param_1;
      }
    }
  }
LAB_180414a38:
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}




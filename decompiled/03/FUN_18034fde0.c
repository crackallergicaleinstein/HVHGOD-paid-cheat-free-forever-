// FUN_18034fde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034fde0 */

void FUN_18034fde0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  
  lVar7 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar7 < 0x1de8) {
      if ((param_1 != param_2) && (puVar9 = param_1 + 0x1d, puVar9 != param_2)) {
        lVar7 = 0xe8;
        puVar8 = puVar9;
        do {
          local_128 = *puVar8;
          uVar2 = puVar8[1];
          uStack_118 = puVar8[2];
          uStack_110 = puVar8[3];
          local_48 = puVar8[0x1c];
          local_b8 = puVar8[0xe];
          uStack_b0 = puVar8[0xf];
          local_108 = puVar8[4];
          uStack_100 = puVar8[5];
          uStack_f8 = puVar8[6];
          uStack_f0 = puVar8[7];
          local_e8 = puVar8[8];
          uStack_e0 = puVar8[9];
          uStack_d8 = puVar8[10];
          uStack_d0 = puVar8[0xb];
          local_c8 = puVar8[0xc];
          uStack_c0 = puVar8[0xd];
          local_a8 = puVar8[0x10];
          uStack_a0 = puVar8[0x11];
          uStack_98 = puVar8[0x12];
          uStack_90 = puVar8[0x13];
          local_88 = puVar8[0x14];
          uStack_80 = puVar8[0x15];
          uStack_78 = puVar8[0x16];
          uStack_70 = puVar8[0x17];
          local_68 = puVar8[0x18];
          uStack_60 = puVar8[0x19];
          uStack_58 = puVar8[0x1a];
          uStack_50 = puVar8[0x1b];
          uStack_120._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          if (*(float *)((longlong)param_1 + 0xc) <= uStack_120._4_4_) {
            fVar1 = *(float *)((longlong)puVar9 + lVar7 + -0x1c4);
            puVar6 = (undefined8 *)(lVar7 + -0xe8 + (longlong)param_1);
            puVar5 = puVar8;
            while (puVar4 = puVar6, uStack_120._4_4_ < fVar1) {
              uVar3 = puVar4[1];
              *puVar5 = *puVar4;
              puVar5[1] = uVar3;
              uVar3 = puVar4[3];
              puVar5[2] = puVar4[2];
              puVar5[3] = uVar3;
              uVar3 = puVar4[5];
              puVar5[4] = puVar4[4];
              puVar5[5] = uVar3;
              uVar3 = puVar4[7];
              puVar5[6] = puVar4[6];
              puVar5[7] = uVar3;
              uVar3 = puVar4[9];
              puVar5[8] = puVar4[8];
              puVar5[9] = uVar3;
              uVar3 = puVar4[0xb];
              puVar5[10] = puVar4[10];
              puVar5[0xb] = uVar3;
              uVar3 = puVar4[0xd];
              puVar5[0xc] = puVar4[0xc];
              puVar5[0xd] = uVar3;
              uVar3 = puVar4[0xf];
              puVar5[0xe] = puVar4[0xe];
              puVar5[0xf] = uVar3;
              uVar3 = puVar4[0x11];
              puVar5[0x10] = puVar4[0x10];
              puVar5[0x11] = uVar3;
              uVar3 = puVar4[0x13];
              puVar5[0x12] = puVar4[0x12];
              puVar5[0x13] = uVar3;
              uVar3 = puVar4[0x15];
              puVar5[0x14] = puVar4[0x14];
              puVar5[0x15] = uVar3;
              uVar3 = puVar4[0x17];
              puVar5[0x16] = puVar4[0x16];
              puVar5[0x17] = uVar3;
              uVar3 = puVar4[0x19];
              puVar5[0x18] = puVar4[0x18];
              puVar5[0x19] = uVar3;
              uVar3 = puVar4[0x1b];
              puVar5[0x1a] = puVar4[0x1a];
              puVar5[0x1b] = uVar3;
              puVar5[0x1c] = puVar4[0x1c];
              puVar6 = puVar4 + -0x1d;
              puVar5 = puVar4;
              fVar1 = *(float *)((longlong)puVar4 + -0xdc);
            }
            *puVar5 = local_128;
            puVar5[1] = uVar2;
            puVar5[2] = uStack_118;
            puVar5[3] = uStack_110;
            puVar5[4] = local_108;
            puVar5[5] = uStack_100;
            puVar5[6] = uStack_f8;
            puVar5[7] = uStack_f0;
            puVar5[8] = local_e8;
            puVar5[9] = uStack_e0;
            puVar5[10] = uStack_d8;
            puVar5[0xb] = uStack_d0;
            puVar5[0xc] = local_c8;
            puVar5[0xd] = uStack_c0;
            puVar5[0xe] = local_b8;
            puVar5[0xf] = uStack_b0;
            puVar5[0x10] = local_a8;
            puVar5[0x11] = uStack_a0;
            puVar5[0x12] = uStack_98;
            puVar5[0x13] = uStack_90;
            puVar5[0x14] = local_88;
            puVar5[0x15] = uStack_80;
            puVar5[0x16] = uStack_78;
            puVar5[0x17] = uStack_70;
            puVar5[0x18] = local_68;
            puVar5[0x19] = uStack_60;
            puVar5[0x1a] = uStack_58;
            puVar5[0x1b] = uStack_50;
            puVar5[0x1c] = local_48;
          }
          else {
            uStack_120 = uVar2;
            FUN_18063aed0(puVar9,param_1,lVar7);
            *param_1 = local_128;
            param_1[1] = uStack_120;
            param_1[2] = uStack_118;
            param_1[3] = uStack_110;
            param_1[4] = local_108;
            param_1[5] = uStack_100;
            param_1[6] = uStack_f8;
            param_1[7] = uStack_f0;
            param_1[8] = local_e8;
            param_1[9] = uStack_e0;
            param_1[10] = uStack_d8;
            param_1[0xb] = uStack_d0;
            param_1[0xc] = local_c8;
            param_1[0xd] = uStack_c0;
            param_1[0xe] = local_b8;
            param_1[0xf] = uStack_b0;
            param_1[0x10] = local_a8;
            param_1[0x11] = uStack_a0;
            param_1[0x12] = uStack_98;
            param_1[0x13] = uStack_90;
            param_1[0x14] = local_88;
            param_1[0x15] = uStack_80;
            param_1[0x16] = uStack_78;
            param_1[0x17] = uStack_70;
            param_1[0x18] = local_68;
            param_1[0x19] = uStack_60;
            param_1[0x1a] = uStack_58;
            param_1[0x1b] = uStack_50;
            param_1[0x1c] = local_48;
          }
          puVar8 = puVar8 + 0x1d;
          lVar7 = lVar7 + 0xe8;
        } while (puVar8 != param_2);
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_180350610(&local_138,param_1,param_2,param_4);
    puVar8 = local_130;
    puVar9 = local_138;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_138 - (longlong)param_1) / 0xe8 <
        ((longlong)param_2 - (longlong)local_130) / 0xe8) {
      FUN_18034fde0(param_1,local_138,param_3,param_4);
      puVar9 = param_2;
      param_1 = puVar8;
    }
    else {
      FUN_18034fde0(local_130,param_2,param_3,param_4);
    }
    lVar7 = (longlong)puVar9 - (longlong)param_1;
    param_2 = puVar9;
  }
  lVar10 = (longlong)param_2 - (longlong)param_1;
  lVar7 = lVar10 / 0xe8;
  lVar11 = lVar7 >> 1;
  if (0 < lVar11) {
    puVar9 = param_1 + lVar11 * 0x1d;
    do {
      local_48 = puVar9[-1];
      local_128 = puVar9[-0x1d];
      uStack_120 = puVar9[-0x1c];
      uStack_118 = puVar9[-0x1b];
      uStack_110 = puVar9[-0x1a];
      local_b8 = puVar9[-0xf];
      uStack_b0 = puVar9[-0xe];
      local_108 = puVar9[-0x19];
      uStack_100 = puVar9[-0x18];
      uStack_f8 = puVar9[-0x17];
      uStack_f0 = puVar9[-0x16];
      local_e8 = puVar9[-0x15];
      uStack_e0 = puVar9[-0x14];
      uStack_d8 = puVar9[-0x13];
      uStack_d0 = puVar9[-0x12];
      local_c8 = puVar9[-0x11];
      uStack_c0 = puVar9[-0x10];
      local_a8 = puVar9[-0xd];
      uStack_a0 = puVar9[-0xc];
      uStack_98 = puVar9[-0xb];
      uStack_90 = puVar9[-10];
      lVar11 = lVar11 + -1;
      local_88 = puVar9[-9];
      uStack_80 = puVar9[-8];
      uStack_78 = puVar9[-7];
      uStack_70 = puVar9[-6];
      local_68 = puVar9[-5];
      uStack_60 = puVar9[-4];
      uStack_58 = puVar9[-3];
      uStack_50 = puVar9[-2];
      FUN_1803525e0(param_1,lVar11,lVar7,&local_128,param_4);
      puVar9 = puVar9 + -0x1d;
    } while (0 < lVar11);
  }
  if (lVar7 < 2) {
    return;
  }
  do {
    puVar9 = param_2 + -0x1d;
    if (1 < lVar10 / 0xe8) {
      local_128 = *puVar9;
      uStack_120 = param_2[-0x1c];
      uStack_118 = param_2[-0x1b];
      uStack_110 = param_2[-0x1a];
      local_b8 = param_2[-0xf];
      uStack_b0 = param_2[-0xe];
      local_48 = param_2[-1];
      local_108 = param_2[-0x19];
      uStack_100 = param_2[-0x18];
      uStack_f8 = param_2[-0x17];
      uStack_f0 = param_2[-0x16];
      local_e8 = param_2[-0x15];
      uStack_e0 = param_2[-0x14];
      uStack_d8 = param_2[-0x13];
      uStack_d0 = param_2[-0x12];
      local_c8 = param_2[-0x11];
      uStack_c0 = param_2[-0x10];
      local_a8 = param_2[-0xd];
      uStack_a0 = param_2[-0xc];
      uStack_98 = param_2[-0xb];
      uStack_90 = param_2[-10];
      local_88 = param_2[-9];
      uStack_80 = param_2[-8];
      uStack_78 = param_2[-7];
      uStack_70 = param_2[-6];
      local_68 = param_2[-5];
      uStack_60 = param_2[-4];
      uStack_58 = param_2[-3];
      uStack_50 = param_2[-2];
      uVar2 = param_1[1];
      *puVar9 = *param_1;
      param_2[-0x1c] = uVar2;
      uVar2 = param_1[3];
      param_2[-0x1b] = param_1[2];
      param_2[-0x1a] = uVar2;
      uVar2 = param_1[5];
      param_2[-0x19] = param_1[4];
      param_2[-0x18] = uVar2;
      uVar2 = param_1[7];
      param_2[-0x17] = param_1[6];
      param_2[-0x16] = uVar2;
      uVar2 = param_1[9];
      param_2[-0x15] = param_1[8];
      param_2[-0x14] = uVar2;
      uVar2 = param_1[0xb];
      param_2[-0x13] = param_1[10];
      param_2[-0x12] = uVar2;
      uVar2 = param_1[0xd];
      param_2[-0x11] = param_1[0xc];
      param_2[-0x10] = uVar2;
      uVar2 = param_1[0xf];
      param_2[-0xf] = param_1[0xe];
      param_2[-0xe] = uVar2;
      uVar2 = param_1[0x11];
      param_2[-0xd] = param_1[0x10];
      param_2[-0xc] = uVar2;
      uVar2 = param_1[0x13];
      param_2[-0xb] = param_1[0x12];
      param_2[-10] = uVar2;
      uVar2 = param_1[0x15];
      param_2[-9] = param_1[0x14];
      param_2[-8] = uVar2;
      uVar2 = param_1[0x17];
      param_2[-7] = param_1[0x16];
      param_2[-6] = uVar2;
      uVar2 = param_1[0x19];
      param_2[-5] = param_1[0x18];
      param_2[-4] = uVar2;
      uVar2 = param_1[0x1b];
      param_2[-3] = param_1[0x1a];
      param_2[-2] = uVar2;
      param_2[-1] = param_1[0x1c];
      FUN_1803525e0(param_1,0,((longlong)puVar9 - (longlong)param_1) / 0xe8,&local_128,param_4);
    }
    lVar10 = (longlong)puVar9 - (longlong)param_1;
    param_2 = puVar9;
  } while (0x1cf < lVar10);
  return;
}




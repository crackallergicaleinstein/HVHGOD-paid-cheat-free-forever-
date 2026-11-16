// FUN_18032a330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032a330 */

void FUN_18032a330(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  ulonglong local_208 [7];
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  ulonglong uStack_1a0;
  char local_198 [96];
  undefined8 local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  byte bStack_101;
  uint uStack_d0;
  ushort uStack_ba;
  uint uStack_b4;
  undefined2 uStack_9a;
  uint uStack_64;
  undefined8 local_28;
  ulonglong *puStack_20;
  
  FUN_180329b50(*param_1);
  lVar8 = param_1[1];
  if (*(char *)(lVar8 + 4) != '\0') {
    dVar9 = (double)*(float *)(lVar8 + 0x8c);
    if (*(longlong *)param_1[2] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)param_1[2] + 8);
    }
    local_208[0] = 0xdb35e39b27e1c185;
    local_208[1] = 0xa05181ee77d57a06;
    local_208[2] = 0x929654b1461b7377;
    local_208[3] = 0xa5cea54bfef7110;
    local_208[4] = 0xa70c9f7f916b7e19;
    local_208[5] = 0x2b2d6d82aa402c0a;
    local_208[6] = 0xc064ed9510bc010b;
    uStack_1d0 = 0x395f26c4;
    uStack_1cc._0_4_ = 0xfec09918;
    uStack_1cc._4_4_ = 0xe2c48f8d;
    uStack_1c4 = 0x835e2313;
    uStack_1c0 = 0xf863c3261a551f0e;
    local_1b8 = 0x56a0bc092c25563f;
    uStack_1b0 = 0x67ff882c0a9bdf38;
    builtin_strncpy(local_198,
                    "[pixelsurf-wall] RELEASE cmd={} reason={} air_ticks={} last_vz={:.2f} confirm={}\n"
                    ,0x52);
    local_198[0x52] = '\0';
    local_198[0x53] = '\0';
    local_198[0x54] = '\0';
    local_198[0x55] = '\0';
    local_198[0x56] = '\0';
    local_198[0x57] = '\0';
    local_198[0x58] = '\0';
    local_198[0x59] = '\0';
    local_198[0x5a] = '\0';
    local_198[0x5b] = '\0';
    local_198[0x5c] = '\0';
    local_198[0x5d] = '\0';
    local_198[0x5e] = '\0';
    local_198[0x5f] = '\0';
    uVar4 = 0xffffffffffffffff;
    do {
      uStack_1a0 = uVar4 + 1;
      lVar3 = uVar4 + 1;
      uVar4 = uStack_1a0;
    } while (local_198[lVar3] != '\0');
    local_1a8 = local_198;
    if (DAT_180bbeabc != '\0') {
      local_208[5] = uVar6;
      local_208[0] = 0x3000000000000000;
      local_208[6] = param_2;
      local_208[1] = 0xb000000000000008;
      uStack_1d0 = *(undefined4 *)(lVar8 + 0x80);
      local_208[2] = 0x1000000000000010;
      uStack_1cc._0_4_ = SUB84(dVar9,0);
      uStack_1cc._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
      local_208[3] = 0x8000000000000014;
      uStack_1c4 = *(undefined4 *)(lVar8 + 0x78);
      local_208[4] = 0x100000000000001c;
      local_138 = 5;
      puStack_130 = local_208;
      local_118 = 0;
      uStack_110 = 0xf;
      local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_128._1_15_;
      local_128 = auVar2 << 8;
      uVar4 = 0;
      uVar7 = 0;
      do {
        bVar5 = (byte)(local_208[uVar7] >> 0x3c);
        if (bVar5 == 0xc) {
          uVar4 = uVar4 + *(longlong *)
                           ((longlong)local_208 + (local_208[uVar7] & 0xfffffffffffffff) + 0x30);
        }
        else if (bVar5 == 0xb) {
          uVar4 = uVar4 + 0x20;
        }
        else {
          uVar4 = uVar4 + 8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 5);
      lVar8 = uStack_1a0 + uVar4;
      if (CARRY8(uStack_1a0,uVar4)) {
        lVar8 = -1;
      }
      uStack_1cc = dVar9;
      FUN_1800f5540(local_128,lVar8);
      local_28 = local_138;
      puStack_20 = puStack_130;
      FUN_1801da050(&local_138,local_128,&local_1a8,&local_28,0);
      FUN_18030e280(local_128);
      FUN_18015c010(local_128);
    }
  }
  plVar1 = (longlong *)param_1[1];
  uStack_d0 = uStack_d0 & 0xffffff00;
  uStack_b4 = uStack_b4 & 0xffffff00;
  uStack_64 = uStack_64 & 0xffffff00;
  *plVar1 = (ulonglong)bStack_101 << 0x38;
  plVar1[1] = 0x3c80000000000000;
  plVar1[2] = 0x10000;
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[5] = -1;
  plVar1[6] = -1;
  plVar1[7] = CONCAT44(0xffffffff,uStack_d0);
  plVar1[8] = -1000;
  plVar1[9] = (ulonglong)uStack_ba << 0x30;
  plVar1[10] = (ulonglong)uStack_b4 << 0x20;
  plVar1[0xb] = -0x407fffff000003e8;
  plVar1[0xc] = -1;
  plVar1[0xd] = CONCAT26(uStack_9a,0xffffffff);
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0xfffffc18;
  plVar1[0x12] = 0;
  plVar1[0x13] = 0;
  plVar1[0x14] = (ulonglong)uStack_64 << 0x20;
  plVar1[0x15] = -1000;
  plVar1[0x16] = 0;
  plVar1[0x17] = 0;
  plVar1[0x18] = 0xffffffff;
  plVar1[0x19] = 0;
  plVar1[0x1a] = 0;
  *(undefined4 *)(plVar1 + 0x1b) = 0;
  *(undefined1 *)(param_1[1] + 3) = *(undefined1 *)((longlong)plVar1 + 3);
  return;
}




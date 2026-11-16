// FUN_18034e890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e890 */

void FUN_18034e890(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined4 *param_14,undefined1 *param_15,
                  undefined1 *param_16,undefined8 *param_17,undefined4 *param_18,
                  undefined8 *param_19,undefined8 *param_20,undefined8 *param_21,
                  undefined8 *param_22,undefined1 *param_23)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *local_1f8;
  ulonglong *puStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_168 [22];
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_6e;
  undefined4 local_66;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 local_52;
  undefined8 local_4a;
  undefined1 local_42;
  undefined1 *local_38;
  ulonglong *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_1 < DAT_1808e3e30) || (0x7f < param_1 - DAT_1808e3e30)) {
    if (DAT_1808e3e3c != 0) {
      local_1a8 = 0xdb35e39b27e1c185;
      uStack_1a0 = 0xa05181ee77d57a06;
      local_198 = 0x929654b1461b7377;
      uStack_190 = 0xa5cea54bfef7110;
      local_188 = 0xa70c9f7f916b7e19;
      uStack_180 = 0x2b2d6d82aa402c0a;
      local_178 = 0xc064ed9510bc010b;
      uStack_170 = 0xfec09918395f26c4;
      local_1e8._8_8_ = 0x7b28205d7664612d;
      local_1e8._0_8_ = 0x677562656764655b;
      local_1d8 = 0x2073656e696c207d;
      uStack_1d0 = 0x7373657270707573;
      local_1c8 = 0x6874207962206465;
      uStack_1c0 = 0x6c20657461722065;
      local_1b8 = 0xa2974696d69;
      uStack_1b0 = 0;
      lVar8 = -1;
      do {
        puStack_1f0 = (ulonglong *)(lVar8 + 1);
        lVar3 = lVar8 + 1;
        lVar8 = (longlong)puStack_1f0;
      } while (local_1e8[lVar3] != '\0');
      local_1f8 = local_1e8;
      FUN_18034fcc0(&local_1f8,&DAT_1808e3e3c);
    }
    DAT_1808e3e38 = 0;
    DAT_1808e3e3c = 0;
    DAT_1808e3e30 = param_1;
  }
  else if (0x17 < DAT_1808e3e38) {
    DAT_1808e3e3c = DAT_1808e3e3c + 1;
    return;
  }
  DAT_1808e3e38 = DAT_1808e3e38 + 1;
  local_168[0x15] = *param_3;
  local_168[0] = 0x3000000000000000;
  local_b8 = *param_4;
  local_168[1] = 0xb000000000000008;
  local_b0 = *param_5;
  local_168[2] = 0x1000000000000010;
  local_ac = *param_6;
  local_168[3] = 0x4000000000000014;
  local_a4 = *param_7;
  local_168[4] = 0x100000000000001c;
  local_a0 = *param_8;
  local_168[5] = 0x1000000000000020;
  local_9c = *param_9;
  local_168[6] = 0x8000000000000024;
  local_94 = *param_10;
  local_168[7] = 0x800000000000002c;
  local_8c = *param_11;
  local_168[8] = 0x8000000000000034;
  local_84 = *param_12;
  local_168[9] = 0x800000000000003c;
  local_7c = *param_13;
  local_168[10] = 0x8000000000000044;
  local_74 = *param_14;
  local_168[0xb] = 0x100000000000004c;
  local_70 = *param_15;
  local_168[0xc] = 0x5000000000000050;
  local_6f = *param_16;
  local_168[0xd] = 0x5000000000000051;
  local_6e = *param_17;
  local_168[0xe] = 0xb000000000000052;
  local_66 = *param_18;
  local_168[0xf] = 0x100000000000005a;
  local_62 = *param_19;
  local_168[0x10] = 0x800000000000005e;
  local_5a = *param_20;
  local_168[0x11] = 0x8000000000000066;
  local_52 = *param_21;
  local_168[0x12] = 0x800000000000006e;
  local_4a = *param_22;
  local_168[0x13] = 0x8000000000000076;
  local_42 = *param_23;
  local_168[0x14] = 0x500000000000007e;
  local_1f8 = (undefined1 *)0x15;
  puStack_1f0 = local_168;
  local_1d8 = 0;
  uStack_1d0 = 0xf;
  local_1e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_1e8._1_15_;
  local_1e8 = auVar2 << 8;
  uVar6 = 0;
  uVar9 = 0;
  do {
    bVar7 = (byte)(local_168[uVar9] >> 0x3c);
    if (bVar7 == 0xc) {
      uVar6 = uVar6 + *(longlong *)
                       ((longlong)local_168 + (local_168[uVar9] & 0xfffffffffffffff) + 0xb0);
    }
    else if (bVar7 == 0xb) {
      uVar6 = uVar6 + 0x20;
    }
    else {
      uVar6 = uVar6 + 8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x15);
  lVar8 = param_2[1] + uVar6;
  if (CARRY8(param_2[1],uVar6)) {
    lVar8 = -1;
  }
  FUN_1800f5540(local_1e8,lVar8);
  local_38 = local_1f8;
  puStack_30 = puStack_1f0;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1801da050(&local_1f8,local_1e8,&local_28,&local_38,0);
  puVar5 = local_1e8;
  if ((uStack_1d0 < 0x10) ||
     (puVar5 = (undefined1 *)local_1e8._0_8_, (undefined1 *)local_1e8._0_8_ != (undefined1 *)0x0)) {
    puVar4 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar4;
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = 1;
    FUN_1800a9e50(1,puVar5);
    puVar5 = (undefined1 *)FUN_1803b0a60();
    *puVar5 = uVar1;
  }
  FUN_18015c010(local_1e8);
  return;
}




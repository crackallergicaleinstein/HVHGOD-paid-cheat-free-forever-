// FUN_18034db80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034db80 */

void FUN_18034db80(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined1 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined4 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined1 *param_16)

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
  undefined1 *local_198;
  ulonglong *puStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108 [15];
  longlong local_90 [2];
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_7b;
  undefined8 local_73;
  undefined4 local_6b;
  undefined8 local_67;
  undefined8 local_5f;
  undefined8 local_57;
  undefined8 local_4f;
  undefined8 local_47;
  undefined1 local_3f;
  undefined1 *local_38;
  ulonglong *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_1 < DAT_1808e3e30) || (0x7f < param_1 - DAT_1808e3e30)) {
    if (DAT_1808e3e3c != 0) {
      local_148 = 0xdb35e39b27e1c185;
      uStack_140 = 0xa05181ee77d57a06;
      local_138 = 0x929654b1461b7377;
      uStack_130 = 0xa5cea54bfef7110;
      local_128 = 0xa70c9f7f916b7e19;
      uStack_120 = 0x2b2d6d82aa402c0a;
      local_118 = 0xc064ed9510bc010b;
      uStack_110 = 0xfec09918395f26c4;
      local_188._8_8_ = 0x7b28205d7664612d;
      local_188._0_8_ = 0x677562656764655b;
      local_178 = 0x2073656e696c207d;
      uStack_170 = 0x7373657270707573;
      local_168 = 0x6874207962206465;
      uStack_160 = 0x6c20657461722065;
      local_158 = 0xa2974696d69;
      uStack_150 = 0;
      lVar8 = -1;
      do {
        puStack_190 = (ulonglong *)(lVar8 + 1);
        lVar3 = lVar8 + 1;
        lVar8 = (longlong)puStack_190;
      } while (local_188[lVar3] != '\0');
      local_198 = local_188;
      FUN_18034fcc0(&local_198,&DAT_1808e3e3c);
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
  local_108[0xe] = *param_3;
  local_108[0] = 0x3000000000000000;
  local_90[0] = *param_4;
  local_108[1] = 0xb000000000000008;
  local_90[1] = *param_5;
  local_108[2] = 0xb000000000000010;
  local_80 = *param_6;
  local_108[3] = 0x1000000000000018;
  local_7c = *param_7;
  local_108[4] = 0x500000000000001c;
  local_7b = *param_8;
  local_108[5] = 0xb00000000000001d;
  local_73 = *param_9;
  local_108[6] = 0x3000000000000025;
  local_6b = *param_10;
  local_108[7] = 0x100000000000002d;
  local_67 = *param_11;
  local_108[8] = 0x8000000000000031;
  local_5f = *param_12;
  local_108[9] = 0x8000000000000039;
  local_57 = *param_13;
  local_108[10] = 0x8000000000000041;
  local_4f = *param_14;
  local_108[0xb] = 0x8000000000000049;
  local_47 = *param_15;
  local_108[0xc] = 0x8000000000000051;
  local_3f = *param_16;
  local_108[0xd] = 0x5000000000000059;
  local_198 = (undefined1 *)0xe;
  puStack_190 = local_108;
  local_178 = 0;
  uStack_170 = 0xf;
  local_188._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_188._1_15_;
  local_188 = auVar2 << 8;
  uVar6 = 0;
  uVar9 = 0;
  do {
    bVar7 = (byte)(local_108[uVar9] >> 0x3c);
    if (bVar7 == 0xc) {
      uVar6 = uVar6 + *(longlong *)((longlong)local_90 + (local_108[uVar9] & 0xfffffffffffffff));
    }
    else if (bVar7 == 0xb) {
      uVar6 = uVar6 + 0x20;
    }
    else {
      uVar6 = uVar6 + 8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xe);
  lVar8 = param_2[1] + uVar6;
  if (CARRY8(param_2[1],uVar6)) {
    lVar8 = -1;
  }
  FUN_1800f5540(local_188,lVar8);
  local_38 = local_198;
  puStack_30 = puStack_190;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1801da050(&local_198,local_188,&local_28,&local_38,0);
  puVar5 = local_188;
  if ((uStack_170 < 0x10) ||
     (puVar5 = (undefined1 *)local_188._0_8_, (undefined1 *)local_188._0_8_ != (undefined1 *)0x0)) {
    puVar4 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar4;
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = 1;
    FUN_1800a9e50(1,puVar5);
    puVar5 = (undefined1 *)FUN_1803b0a60();
    *puVar5 = uVar1;
  }
  FUN_18015c010(local_188);
  return;
}




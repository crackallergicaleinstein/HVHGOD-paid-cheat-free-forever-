// FUN_18034d210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034d210 */

void FUN_18034d210(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8)

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
  undefined1 *local_e8;
  ulonglong *puStack_e0;
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98 [10];
  undefined4 local_48;
  undefined8 local_44;
  undefined1 *local_38;
  ulonglong *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_1 < DAT_1808e3e30) || (0x7f < param_1 - DAT_1808e3e30)) {
    if (DAT_1808e3e3c != 0) {
      local_98[0] = 0xdb35e39b27e1c185;
      local_98[1] = 0xa05181ee77d57a06;
      local_98[2] = 0x929654b1461b7377;
      local_98[3] = 0xa5cea54bfef7110;
      local_98[4] = 0xa70c9f7f916b7e19;
      local_98[5] = 0x2b2d6d82aa402c0a;
      local_98[6] = 0xc064ed9510bc010b;
      local_98[7] = 0xfec09918395f26c4;
      local_d8._8_8_ = 0x7b28205d7664612d;
      local_d8._0_8_ = 0x677562656764655b;
      uStack_c8 = 0x2073656e696c207d;
      uStack_c0 = 0x7373657270707573;
      local_b8 = 0x6874207962206465;
      uStack_b0 = 0x6c20657461722065;
      local_a8 = 0xa2974696d69;
      uStack_a0 = 0;
      lVar8 = -1;
      do {
        puStack_e0 = (ulonglong *)(lVar8 + 1);
        lVar3 = lVar8 + 1;
        lVar8 = (longlong)puStack_e0;
      } while (local_d8[lVar3] != '\0');
      local_e8 = local_d8;
      FUN_18034fcc0(&local_e8,&DAT_1808e3e3c);
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
  local_98[6] = *param_3;
  local_98[0] = 0x3000000000000000;
  local_98[7] = *param_4;
  local_98[1] = 0xb000000000000008;
  local_98[8] = *param_5;
  local_98[2] = 0xb000000000000010;
  local_98[9] = *param_6;
  local_98[3] = 0xb000000000000018;
  local_48 = *param_7;
  local_98[4] = 0x1000000000000020;
  local_44 = *param_8;
  local_98[5] = 0xb000000000000024;
  local_e8 = (undefined1 *)0x6;
  puStack_e0 = local_98;
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  local_d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_d8._1_15_;
  local_d8 = auVar2 << 8;
  uVar6 = 0;
  uVar9 = 0;
  do {
    bVar7 = (byte)(local_98[uVar9] >> 0x3c);
    if (bVar7 == 0xc) {
      uVar6 = uVar6 + *(longlong *)
                       ((longlong)local_98 + (local_98[uVar9] & 0xfffffffffffffff) + 0x38);
    }
    else if (bVar7 == 0xb) {
      uVar6 = uVar6 + 0x20;
    }
    else {
      uVar6 = uVar6 + 8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  lVar8 = param_2[1] + uVar6;
  if (CARRY8(param_2[1],uVar6)) {
    lVar8 = -1;
  }
  FUN_1800f5540(local_d8,lVar8);
  local_38 = local_e8;
  puStack_30 = puStack_e0;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1801da050(&local_e8,local_d8,&local_28,&local_38,0);
  puVar5 = local_d8;
  if ((uStack_c0 < 0x10) ||
     (puVar5 = (undefined1 *)local_d8._0_8_, (undefined1 *)local_d8._0_8_ != (undefined1 *)0x0)) {
    puVar4 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar4;
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = 1;
    FUN_1800a9e50(1,puVar5);
    puVar5 = (undefined1 *)FUN_1803b0a60();
    *puVar5 = uVar1;
  }
  FUN_18015c010(local_d8);
  return;
}




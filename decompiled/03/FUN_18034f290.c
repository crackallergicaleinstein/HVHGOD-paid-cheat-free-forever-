// FUN_18034f290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034f290 */

void FUN_18034f290(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_98;
  ulonglong *puStack_90;
  ulonglong local_88 [8];
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_37;
  undefined8 local_33;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88[7] = *param_2;
  local_88[0] = 0x3000000000000000;
  local_48 = *param_3;
  local_88[1] = 0x1000000000000008;
  local_44 = *param_4;
  local_88[2] = 0x400000000000000c;
  local_3c = DAT_180bda1d8;
  local_88[3] = 0x1000000000000014;
  local_38 = DAT_180bbec89;
  local_88[4] = 0x5000000000000018;
  local_37 = *param_7;
  local_88[5] = 0x1000000000000019;
  local_33 = *param_8;
  local_88[6] = 0x800000000000001d;
  local_98 = 7;
  puStack_90 = local_88;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_c0._1_15_;
  local_c0 = auVar2 << 8;
  uVar5 = 0;
  uVar8 = 0;
  do {
    bVar6 = (byte)(local_88[uVar8] >> 0x3c);
    if (bVar6 == 0xc) {
      uVar5 = uVar5 + *(longlong *)
                       ((longlong)local_88 + (local_88[uVar8] & 0xfffffffffffffff) + 0x40);
    }
    else if (bVar6 == 0xb) {
      uVar5 = uVar5 + 0x20;
    }
    else {
      uVar5 = uVar5 + 8;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 7);
  lVar7 = param_1[1] + uVar5;
  if (CARRY8(param_1[1],uVar5)) {
    lVar7 = -1;
  }
  FUN_1800f5540(local_c0,lVar7);
  local_28 = local_98;
  puStack_20 = puStack_90;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_98,local_c0,&local_18,&local_28,0);
  puVar4 = local_c0;
  if ((uStack_a8 < 0x10) ||
     (puVar4 = (undefined1 *)local_c0._0_8_, (undefined1 *)local_c0._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_c0);
  return;
}




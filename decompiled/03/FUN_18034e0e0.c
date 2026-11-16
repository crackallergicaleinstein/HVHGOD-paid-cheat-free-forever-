// FUN_18034e0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e0e0 */

void FUN_18034e0e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined8 local_88;
  ulonglong *puStack_80;
  ulonglong local_78 [6];
  longlong local_48 [3];
  undefined1 local_30;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_78[5] = *param_2;
  local_78[0] = 0x3000000000000000;
  local_48[0] = *param_3;
  local_78[1] = 0x8000000000000008;
  local_48[1] = *param_4;
  local_78[2] = 0x8000000000000010;
  local_48[2] = *param_5;
  local_78[3] = 0x8000000000000018;
  local_30 = *param_6;
  local_78[4] = 0x5000000000000020;
  local_88 = 5;
  puStack_80 = local_78;
  local_a0 = 0;
  uStack_98 = 0xf;
  local_b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_b0._1_15_;
  local_b0 = auVar2 << 8;
  uVar5 = 0;
  uVar8 = 0;
  do {
    bVar6 = (byte)(local_78[uVar8] >> 0x3c);
    if (bVar6 == 0xc) {
      uVar5 = uVar5 + *(longlong *)((longlong)local_48 + (local_78[uVar8] & 0xfffffffffffffff));
    }
    else if (bVar6 == 0xb) {
      uVar5 = uVar5 + 0x20;
    }
    else {
      uVar5 = uVar5 + 8;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  lVar7 = param_1[1] + uVar5;
  if (CARRY8(param_1[1],uVar5)) {
    lVar7 = -1;
  }
  FUN_1800f5540(local_b0,lVar7);
  local_28 = local_88;
  puStack_20 = puStack_80;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_88,local_b0,&local_18,&local_28,0);
  puVar4 = local_b0;
  if ((uStack_98 < 0x10) ||
     (puVar4 = (undefined1 *)local_b0._0_8_, (undefined1 *)local_b0._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_b0);
  return;
}




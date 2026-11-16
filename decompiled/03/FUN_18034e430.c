// FUN_18034e430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e430 */

void FUN_18034e430(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_78;
  ulonglong *puStack_70;
  ulonglong local_68 [5];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_68[4] = *param_2;
  local_68[0] = 0x3000000000000000;
  local_40 = *param_3;
  local_68[1] = 0x1000000000000008;
  local_3c = *param_4;
  local_68[2] = 0x800000000000000c;
  local_34 = *param_5;
  local_68[3] = 0x8000000000000014;
  local_78 = 4;
  puStack_70 = local_68;
  local_90 = 0;
  uStack_88 = 0xf;
  local_a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_a0._1_15_;
  local_a0 = auVar2 << 8;
  uVar5 = 0;
  uVar8 = 0;
  do {
    bVar6 = (byte)(local_68[uVar8] >> 0x3c);
    if (bVar6 == 0xc) {
      uVar5 = uVar5 + *(longlong *)
                       ((longlong)local_68 + (local_68[uVar8] & 0xfffffffffffffff) + 0x28);
    }
    else if (bVar6 == 0xb) {
      uVar5 = uVar5 + 0x20;
    }
    else {
      uVar5 = uVar5 + 8;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  lVar7 = param_1[1] + uVar5;
  if (CARRY8(param_1[1],uVar5)) {
    lVar7 = -1;
  }
  FUN_1800f5540(local_a0,lVar7);
  local_28 = local_78;
  puStack_20 = puStack_70;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_78,local_a0,&local_18,&local_28,0);
  puVar4 = local_a0;
  if ((uStack_88 < 0x10) ||
     (puVar4 = (undefined1 *)local_a0._0_8_, (undefined1 *)local_a0._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_a0);
  return;
}




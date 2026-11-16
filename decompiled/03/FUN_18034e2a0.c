// FUN_18034e2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e2a0 */

void FUN_18034e2a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_80 [16];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_58;
  ulonglong *puStack_50;
  ulonglong local_48 [5];
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_48[2] = *param_2;
  local_48[0] = 0x3000000000000000;
  local_48[3] = *param_3;
  local_48[1] = 0xb000000000000008;
  local_58 = 2;
  puStack_50 = local_48;
  local_70 = 0;
  uStack_68 = 0xf;
  local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_80._1_15_;
  local_80 = auVar2 << 8;
  uVar5 = 0;
  uVar8 = 0;
  do {
    bVar6 = (byte)(local_48[uVar8] >> 0x3c);
    if (bVar6 == 0xc) {
      uVar5 = uVar5 + *(longlong *)
                       ((longlong)local_48 + (local_48[uVar8] & 0xfffffffffffffff) + 0x18);
    }
    else if (bVar6 == 0xb) {
      uVar5 = uVar5 + 0x20;
    }
    else {
      uVar5 = uVar5 + 8;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  lVar7 = param_1[1] + uVar5;
  if (CARRY8(param_1[1],uVar5)) {
    lVar7 = -1;
  }
  FUN_1800f5540(local_80,lVar7);
  local_48[4] = local_58;
  puStack_20 = puStack_50;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_58,local_80,&local_18,local_48 + 4,0);
  puVar4 = local_80;
  if ((uStack_68 < 0x10) ||
     (puVar4 = (undefined1 *)local_80._0_8_, (undefined1 *)local_80._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_80);
  return;
}




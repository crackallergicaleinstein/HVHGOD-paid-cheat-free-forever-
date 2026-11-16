// FUN_1804545d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804545d0 */

void FUN_1804545d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_90 [16];
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 local_68;
  ulonglong *puStack_60;
  ulonglong local_58 [7];
  ulonglong *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_58[2] = *param_2;
  local_58[3] = param_2[1];
  local_58[0] = 0xc000000000000000;
  local_58[4] = *param_3;
  local_58[5] = param_3[1];
  local_58[1] = 0xc000000000000010;
  local_68 = 2;
  puStack_60 = local_58;
  local_80 = 0;
  uStack_78 = 0xf;
  local_90._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_90._1_15_;
  local_90 = auVar2 << 8;
  uVar5 = 0;
  uVar8 = 0;
  do {
    bVar6 = (byte)(local_58[uVar8] >> 0x3c);
    if (bVar6 == 0xc) {
      uVar5 = uVar5 + *(longlong *)
                       ((longlong)local_58 + (local_58[uVar8] & 0xfffffffffffffff) + 0x18);
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
  FUN_1800f5540(local_90,lVar7);
  local_58[6] = local_68;
  puStack_20 = puStack_60;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_68,local_90,&local_18,local_58 + 6,0);
  puVar4 = local_90;
  if ((uStack_78 < 0x10) ||
     (puVar4 = (undefined1 *)local_90._0_8_, (undefined1 *)local_90._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  thunk_FUN_18015c010(local_90);
  return;
}




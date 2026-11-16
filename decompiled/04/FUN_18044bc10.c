// FUN_18044bc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044bc10 */

void FUN_18044bc10(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 local_80 [16];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_2;
  uStack_18 = param_2[1];
  local_28 = 0xc000000000000000;
  local_58 = 1;
  puStack_50 = &local_28;
  local_70 = 0;
  uStack_68 = 0xf;
  local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_80._1_15_;
  local_80 = auVar2 << 8;
  lVar5 = param_1[1] + param_2[1];
  if (CARRY8(param_1[1],param_2[1])) {
    lVar5 = -1;
  }
  FUN_1800f5540(local_80,lVar5);
  local_48 = local_58;
  puStack_40 = puStack_50;
  local_38 = *param_1;
  uStack_30 = param_1[1];
  FUN_1801da050(&local_58,local_80,&local_38,&local_48,0);
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
  thunk_FUN_18015c010(local_80);
  return;
}




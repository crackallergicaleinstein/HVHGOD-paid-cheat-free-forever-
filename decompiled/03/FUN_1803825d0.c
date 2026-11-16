// FUN_1803825d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803825d0 */

void FUN_1803825d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 local_70 [16];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_30 = *param_2;
  local_38 = 0xb000000000000000;
  local_48 = 1;
  puStack_40 = &local_38;
  local_60 = 0;
  uStack_58 = 0xf;
  local_70._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_70._1_15_;
  local_70 = auVar2 << 8;
  lVar5 = param_1[1] + 0x20;
  if (0xffffffffffffffdf < (ulonglong)param_1[1]) {
    lVar5 = -1;
  }
  FUN_1800f5540(local_70,lVar5);
  local_28 = local_48;
  puStack_20 = puStack_40;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_48,local_70,&local_18,&local_28,0);
  puVar4 = local_70;
  if ((uStack_58 < 0x10) ||
     (puVar4 = (undefined1 *)local_70._0_8_, (undefined1 *)local_70._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_70);
  return;
}




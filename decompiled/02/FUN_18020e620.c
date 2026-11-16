// FUN_18020e620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020e620 */

/* WARNING: Removing unreachable block (ram,0x00018020e673) */

void FUN_18020e620(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_60 [16];
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = 0;
  uStack_30 = 0;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_60._1_15_;
  local_60 = auVar2 << 8;
  FUN_1800f5540(local_60,param_1[1]);
  local_28 = local_38;
  uStack_20 = uStack_30;
  local_18 = *param_1;
  uStack_10 = param_1[1];
  FUN_1801da050(&local_38,local_60,&local_18,&local_28,0);
  puVar4 = local_60;
  if ((uStack_48 < 0x10) ||
     (puVar4 = (undefined1 *)local_60._0_8_, (undefined1 *)local_60._0_8_ != (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar3;
    puVar3 = (undefined1 *)FUN_1803b0a60();
    *puVar3 = 1;
    FUN_1800a9e50(1,puVar4);
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = uVar1;
  }
  FUN_18015c010(local_60);
  return;
}




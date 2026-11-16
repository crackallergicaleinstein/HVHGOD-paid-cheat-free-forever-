// FUN_1800f7700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f7700 */

void FUN_1800f7700(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint7 uStack_7f;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0xf;
  local_38 = 0;
  local_18 = 0;
  local_10 = 0xf;
  local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_48._1_15_;
  local_48 = auVar1 << 8;
  local_28._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_28._1_15_;
  local_28 = auVar2 << 8;
  lStack_60 = (ulonglong)uStack_7f << 8;
  local_68 = 0;
  local_58 = 0;
  FUN_18015a8b0(0,0,&local_68,local_28,local_48,0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}




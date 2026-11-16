// FUN_1800f9170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f9170 */

void FUN_1800f9170(longlong param_1)

{
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
  
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  local_30 = 0;
  FUN_18015ba30(local_48,&DAT_1806bd1f0,4);
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  local_10 = 0;
  FUN_18015ba30(local_28,&DAT_1806bd1f0,4);
  lStack_60 = (ulonglong)uStack_7f << 8;
  local_68 = 0;
  local_58 = 0;
  FUN_18015a8b0(param_1,0,&local_68,local_28,local_48,0);
  *(undefined4 *)(param_1 + 0x68) = 0x4bffc0ad;
  *(undefined4 *)(param_1 + 0x6c) = 0x4bffc0ad;
  *(undefined2 *)(param_1 + 0x70) = 0x101;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  return;
}




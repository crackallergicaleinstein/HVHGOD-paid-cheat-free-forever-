// FUN_18060a980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a980 */

void FUN_18060a980(void)

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180bb2030 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1808d7448._0_4_;
    uStack_2c = PTR_PTR_1808d7448._4_4_;
    uStack_28 = PTR_DAT_1808d7450._0_4_;
    uStack_24 = PTR_DAT_1808d7450._4_4_;
  }
  FUN_18060aa1c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}




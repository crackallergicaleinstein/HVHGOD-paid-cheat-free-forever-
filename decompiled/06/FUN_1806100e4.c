// FUN_1806100e4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806100e4 */

int FUN_1806100e4(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  FILE *in_RCX;
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
    param_1 = PTR_PTR_1808d7448._0_4_;
  }
  if (in_RCX == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_180610169;
  }
  iVar1 = FUN_180610058(param_1,local_48);
  if (iVar1 == 0) {
    if ((*(uint *)((longlong)&in_RCX->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(in_RCX);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_180610144;
    }
    iVar1 = 0;
  }
  else {
LAB_180610144:
    iVar1 = -1;
  }
LAB_180610169:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}




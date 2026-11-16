// FUN_18054d9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054d9d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054d9d0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  local_30 = 0;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(**(longlong **)*param_1 + lVar6) != '\0');
  FUN_18015ba30(local_48);
  pbVar4 = local_48;
  if (0xf < local_30) {
    pbVar4 = (byte *)local_48._0_8_;
  }
  pbVar5 = pbVar4 + local_38;
  if (pbVar4 != pbVar5) {
    do {
      iVar2 = tolower((uint)*pbVar4);
      *pbVar4 = (byte)iVar2;
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar5);
  }
  local_28 = (undefined1  [16])0x0;
  local_58 = &DAT_1808e6650;
  if (0xf < DAT_1808e6668) {
    local_58 = DAT_1808e6650;
  }
  local_78._0_8_ = local_48;
  if (0xf < local_30) {
    local_78._0_8_ = local_48._0_8_;
  }
  local_50 = DAT_1808e6660;
  local_78._8_8_ = local_38;
  FUN_18050a420(local_28,local_78,&local_58);
  if (local_28._8_8_ != 0) {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    FUN_18015ba30(local_78,local_28._0_8_);
    puVar3 = local_78;
    if (0xf < (ulonglong)local_68._8_8_) {
      puVar3 = (undefined1 *)local_78._0_8_;
    }
    FUN_180516b10(puVar3);
    FUN_18015c010(local_78);
  }
  FUN_18015c010(local_48);
  uVar1 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar1);
  FUN_180488f10();
}




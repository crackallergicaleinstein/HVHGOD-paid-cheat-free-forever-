// FUN_18033dbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033dbd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033dbd0(undefined8 param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined8 *local_e0;
  char *local_d8;
  longlong local_d0;
  char local_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  uVar4 = (ulonglong)DAT_1808e3e20;
  if (param_2 != DAT_1808e3e20) {
    uVar3 = 8;
    if (4 < (byte)(param_2 - 1)) {
      uVar3 = 0;
    }
    local_70 = param_1;
    local_28 = param_3;
    local_88 = FUN_18033cb20(uVar3);
    local_80 = FUN_18033c8d0(param_2);
    local_78 = FUN_18033c8d0(uVar4 & 0xff);
    local_68 = 0xdb35e39b27e1c185;
    uStack_60 = 0xa05181ee77d57a06;
    local_58 = 0x929654b1461b7377;
    uStack_50 = 0xa5cea54bfef7110;
    local_48 = 0xa70c9f7f916b7e19;
    uStack_40 = 0x2b2d6d82aa402c0a;
    local_38 = 0xc064ed9510bc010b;
    builtin_strncpy(local_c8,"[edgebug-adv] cmd={} state {} -> {} ({}) attempt",0x30);
    uStack_30 = 0xfec09918395f26c4;
    builtin_strncpy(local_c8 + 0x30,"={} owner={}\n",0xe);
    local_c8[0x3e] = '\0';
    local_c8[0x3f] = '\0';
    lVar2 = -1;
    do {
      local_d0 = lVar2 + 1;
      lVar1 = lVar2 + 1;
      lVar2 = local_d0;
    } while (local_c8[lVar1] != '\0');
    local_d8 = local_c8;
    local_e0 = &local_88;
    local_e8 = &DAT_1808e3e40;
    local_f0 = &local_28;
    local_f8 = &local_80;
    FUN_18034d210(param_1,&local_d8,&local_70,&local_78);
    DAT_1808e3e20 = param_2;
    _DAT_1808e3e28 = param_1;
  }
}




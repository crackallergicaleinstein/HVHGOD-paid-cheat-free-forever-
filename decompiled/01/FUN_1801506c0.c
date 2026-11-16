// FUN_1801506c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801506c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801506c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined1 local_68 [16];
  char local_58 [8];
  undefined1 local_50 [24];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_50._0_16_ = ZEXT816(0);
  FUN_1801409d0(local_50 + 8,0);
  local_50[0] = 3;
  FUN_180111c50(&local_38,param_2);
  local_50._8_8_ = local_38;
  local_58[0] = '\x04';
  local_38 = (undefined1 *)
             CONCAT44(local_38._4_4_,
                      (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  plVar4 = *(longlong **)(param_1 + 0xa8);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  local_58[0] = (**(code **)(*plVar4 + 0x10))(plVar4,&local_38,local_58,local_50);
  local_30 = *(ulonglong *)(param_1 + 0x58);
  if (((longlong)local_30 < 0) && (local_30 != 0)) {
    lVar2 = -((~local_30 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (local_30 >> 5) * 4;
  }
  local_38 = (undefined1 *)(*(longlong *)(param_1 + 0x40) + lVar2);
  local_30 = local_30 & 0x1f;
  local_78 = local_58;
  FUN_180157500(param_1 + 0x40,local_68,&local_38);
  if ((local_58[0] != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    local_38 = local_68;
    puVar6 = (undefined1 *)FUN_1800f4a50(local_68,param_1 + 0xb8);
    puVar7 = (undefined1 *)
             FUN_180140e40(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),
                           param_2);
    uVar3 = *puVar7;
    *puVar7 = *puVar6;
    *puVar6 = uVar3;
    puVar1 = (undefined8 *)(puVar6 + 8);
    uVar5 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar7 + 8) = *puVar1;
    *puVar1 = uVar5;
    FUN_1801409d0(puVar1,*puVar6);
    *(undefined1 **)(param_1 + 0x60) = puVar7;
  }
  FUN_1801409d0(local_50 + 8,local_50[0]);
}




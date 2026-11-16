// FUN_18041f070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041f070 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041f070(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined1 auStack_6d8 [32];
  undefined **local_6b8;
  char *local_6b0;
  undefined4 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  local_698 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  local_678 = 0;
  uStack_670 = 0;
  uStack_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  uStack_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  uStack_628 = 0;
  uStack_620 = 0;
  local_6b0 = *(char **)((undefined4 *)*param_1 + 4);
  local_6b8 = (undefined **)CONCAT44(local_6b8._4_4_,*(undefined4 *)*param_1);
  FUN_18015ad60(&local_698,0x80,0xffffffffffffffff,"EXCEPTION 0x%08lX at 0x%p");
  FUN_1800a9e50(4,&local_698);
  FUN_18063ab10(local_618,0,0x600);
  local_6a0 = *(undefined8 *)((undefined4 *)*param_1 + 4);
  local_6a8 = *(undefined4 *)*param_1;
  local_6b0 = s_not_started_1808d7cf0;
  local_6b8 = (undefined **)s_uninitialized_1808d7d90;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "operation=%s step=\"%s\" exception=0x%08lX address=0x%p");
  ppuVar1 = &PTR_180700558;
  if (local_618[0] != '\0') {
    ppuVar1 = (undefined **)&DAT_1806bcfc0;
  }
  local_6b0 = local_618;
  local_6b8 = ppuVar1;
  FUN_1800f6900(4,local_6b0,"Initialization","INITIALIZATION_FAILURE");
}




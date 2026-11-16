// FUN_180420440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180420440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180420440(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  char *local_628;
  undefined4 local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  FUN_18063ab10(local_618,0,0x600);
  local_620 = 10;
  local_628 = "46abdc405729fb40dc0824ff08d3cae4e97ab678";
  local_630 = "0.1.411";
  local_638 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "operation=%s version=%s build=%s security_epoch=%d");
  local_638 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_638 = (undefined **)&DAT_1806bcfc0;
  }
  local_630 = local_618;
  FUN_1800f6900(1);
}




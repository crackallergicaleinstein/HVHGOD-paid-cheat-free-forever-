// FUN_1800e9a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e9a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e9a30(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (*param_1 != '\x01') {
    local_78 = FUN_180112a50();
    uVar2 = FUN_1800f6bd0(local_70,"cannot use value() with ",&local_78);
    FUN_1800f6ca0(&local_50,0x132,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_50,&DAT_1808d1050);
  }
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1800e6b50(param_1,&local_50,"placed");
  uVar2 = FUN_1800f3e20(param_1,local_70);
  cVar1 = FUN_1800e6ca0(&local_50,uVar2);
  if ((cVar1 == '\0') && (pcVar3 = (char *)FUN_1800f34a0(&local_50), *pcVar3 != '\x04')) {
    local_78 = FUN_180112a50(pcVar3);
    uVar2 = FUN_180156f00(local_70);
    FUN_1800f6ca0(&local_50,0x12e,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_50,&DAT_1808d1050);
  }
}




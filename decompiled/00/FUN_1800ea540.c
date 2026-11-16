// FUN_1800ea540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ea540(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_88[0] = param_2;
  if (*param_1 != '\x01') {
    local_88[0] = (undefined8 *)FUN_180112a50();
    uVar2 = FUN_1800f6bd0(local_78,"cannot use value() with ",local_88);
    FUN_1800f6ca0(&local_58,0x132,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_58,&DAT_1808d1050);
  }
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1800e6b50(param_1,&local_58,&DAT_1806bbee0);
  uVar2 = FUN_1800f3e20(param_1,local_78);
  cVar1 = FUN_1800e6ca0(&local_58,uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1800f34a0(&local_58);
    FUN_1800f4a50(param_2,uVar2);
  }
  else {
    uVar2 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = uVar2;
    *(undefined1 *)param_4 = 0;
    param_4[1] = 0;
  }
}




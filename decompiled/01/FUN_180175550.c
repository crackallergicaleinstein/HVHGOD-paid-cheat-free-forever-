// FUN_180175550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175550 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180175550(char *param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined1 (*local_98 [2]) [16];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_98[0] = param_2;
  if (*param_1 != '\x01') {
    local_98[0] = (undefined1 (*) [16])FUN_180112a50();
    uVar4 = FUN_1800f6bd0(local_88,"cannot use value() with ",local_98);
    FUN_1800f6ca0(&local_68,0x132,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_68,&DAT_1808d1050);
  }
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_1800e6b50(param_1,&local_68);
  uVar4 = FUN_1800f3e20(param_1,local_88);
  cVar3 = FUN_1800e6ca0(&local_68,uVar4);
  if (cVar3 == '\0') {
    uVar4 = FUN_1800f34a0(&local_68);
    FUN_1800e69c0(uVar4,param_2);
  }
  else {
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    uVar4 = param_4[1];
    uVar1 = param_4[2];
    uVar2 = param_4[3];
    *(undefined8 *)*param_2 = *param_4;
    *(undefined8 *)(*param_2 + 8) = uVar4;
    *(undefined8 *)param_2[1] = uVar1;
    *(undefined8 *)(param_2[1] + 8) = uVar2;
    *(undefined1 *)param_4 = 0;
    param_4[2] = 0;
    param_4[3] = 0xf;
  }
}




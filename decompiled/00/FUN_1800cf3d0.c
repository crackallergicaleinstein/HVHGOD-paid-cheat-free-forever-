// FUN_1800cf3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cf3d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800cf3d0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_88 [32];
  char local_68 [8];
  undefined1 local_60 [32];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_40._0_8_ = param_2;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar2 = FUN_1800f34a0(*param_1);
  FUN_1800ea030(uVar2,&local_30,local_40);
  uVar2 = FUN_1800f34a0(*param_1);
  uVar2 = FUN_1800f3e20(uVar2,local_60);
  cVar1 = FUN_1800e6ca0(&local_30,uVar2);
  if (cVar1 == '\0') {
    pcVar3 = (char *)FUN_1800f34a0(&local_30);
    if ((*pcVar3 == '\x05') || (*pcVar3 == '\x06')) {
      uVar2 = FUN_1800f3560(&local_30);
      local_40 = ZEXT816(0);
      FUN_1801409d0(local_40 + 8,0);
      local_40[0] = 5;
      local_40._8_8_ = 0;
      FUN_180112ae0(uVar2,local_68,local_40);
      FUN_1801409d0(local_40 + 8,local_40[0]);
      if (-1 < local_68[0]) {
        uVar2 = FUN_1800f3560(&local_30);
        local_40 = ZEXT816(0);
        FUN_1801409d0(local_40 + 8,0);
        local_40[0] = 5;
        local_40._8_8_ = 1;
        FUN_180112ae0(uVar2,local_68,local_40);
        FUN_1801409d0(local_40 + 8,local_40[0]);
        if (-1 < -local_68[0]) {
          uVar2 = FUN_1800f34a0(&local_30);
          FUN_1800e62a0(uVar2);
        }
      }
    }
  }
}




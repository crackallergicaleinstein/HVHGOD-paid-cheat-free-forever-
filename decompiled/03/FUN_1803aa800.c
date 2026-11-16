// FUN_1803aa800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aa800 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803aa800(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_58 [8];
  undefined8 local_50;
  PSRWLOCK pRStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70030 != 0) {
    (*(code *)DAT_180c70030)();
  }
  if (DAT_180b0c8c0 != '\0') {
    local_50 = 0;
    pRStack_48 = (PSRWLOCK)0x0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_180244f40();
    if (((char)uStack_38 != '\0') && (param_2 != 0)) {
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      cVar1 = FUN_1804514c0(&local_a8,param_2,0x28);
      local_58[0] = cVar1 != '\0';
      if ((bool)local_58[0]) {
        local_80 = local_a8;
        uStack_78 = uStack_a0;
        uStack_70 = uStack_98;
        uStack_68 = uStack_90;
        local_60 = local_88;
      }
      lVar3 = FUN_18017ea70();
      if (*(int *)(lVar3 + 4) != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
      }
      if ((((local_58[0] != '\0') &&
           (pcVar4 = (char *)thunk_FUN_1805f7e70(&local_80,local_58,0), pcVar4 != local_58)) &&
          ((longlong)pcVar4 - (longlong)&local_80 == 0x1a)) &&
         (iVar2 = memcmp(&local_80,"g_flBrightnessExposureBias",0x1a), iVar2 != 0)) {
        memcmp(&local_80,"g_flRenderOnlyExposureBias",0x1a);
      }
    }
    FUN_180180bf0(&local_50);
    if ((char)uStack_40 != '\0') {
      ReleaseSRWLockShared(pRStack_48);
    }
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}




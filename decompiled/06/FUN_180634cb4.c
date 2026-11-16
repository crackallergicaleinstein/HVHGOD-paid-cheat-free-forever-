// FUN_180634cb4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180634cb4 */

BOOL FUN_180634cb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  LPCWSTR pWVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  undefined8 local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  LPCWSTR local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
    uVar5 = 0xfde9;
  }
  else {
    iVar1 = FUN_1806216f4();
    if (iVar1 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      uVar5 = 1;
    }
    else {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      uVar5 = 0;
    }
  }
  iVar1 = FUN_18061e9f8(param_1,&local_48,local_res18,uVar5);
  pWVar4 = (LPCWSTR)0x0;
  if (iVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_1806216f4();
      if (iVar1 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    iVar1 = FUN_18061e9f8(param_2,&local_78,local_res18,uVar3);
    pWVar4 = local_68;
    if (iVar1 == 0) {
      BVar2 = SetEnvironmentVariableW(local_38,local_68);
      goto LAB_180634e17;
    }
  }
  BVar2 = 0;
LAB_180634e17:
  if (local_50 != '\0') {
    FUN_180621380(pWVar4);
  }
  if (local_20 != '\0') {
    FUN_180621380(local_38);
  }
  return BVar2;
}




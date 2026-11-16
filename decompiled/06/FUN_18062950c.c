// FUN_18062950c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062950c */

void FUN_18062950c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  iVar1 = FUN_18062f9c0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  uVar2 = 0xfde9;
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVar1 = FUN_1806216f4();
    if (iVar1 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
      uVar2 = 1;
    }
    else {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
      uVar2 = 0;
    }
  }
  FUN_18062b638(uVar2,0,param_2,param_4,param_3,0x3f,0,0);
  return;
}




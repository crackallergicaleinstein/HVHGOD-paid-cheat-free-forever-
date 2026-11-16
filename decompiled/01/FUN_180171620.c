// FUN_180171620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180171620 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180171620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  local_30 = param_2;
  iVar2 = FUN_1805f68d0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (*(ulonglong *)(param_1 + 200) < 4) {
    if (*(int *)(param_1 + 0x100) == 0) {
      local_58 = param_1;
      uVar3 = FUN_180175b30(local_50,&local_58);
      FUN_18017ccc0(param_1 + 0xf8,uVar3);
      FUN_18015a450(local_50);
      FUN_18015a520(local_40);
      if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
    }
    FUN_180177e20(param_1 + 0xa8,param_2);
    lVar1 = *(longlong *)(param_1 + 0x50);
    iVar2 = FUN_1805f68d0(lVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1805f6a6c(param_1 + 0x60);
    FUN_1805f68fc(lVar1);
    FUN_1805f68fc(param_1);
    FUN_18015b930(param_2 + 0x50);
    FUN_1801409d0(param_2 + 0x48,*(undefined1 *)(param_2 + 0x40));
    FUN_18015c010(param_2 + 0x20);
    FUN_18015c010(param_2);
  }
  else {
    FUN_1805f68fc(param_1);
    FUN_18015b930(param_2 + 0x50);
    FUN_1801409d0(param_2 + 0x48,*(undefined1 *)(param_2 + 0x40));
    FUN_18015c010(param_2 + 0x20);
    FUN_18015c010(param_2);
  }
}




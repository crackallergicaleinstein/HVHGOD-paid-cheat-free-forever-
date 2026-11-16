// FUN_180194780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180194780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194780(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_30 [8];
  undefined *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28 = &DAT_180b90310;
  local_20 = param_2;
  iVar1 = FUN_1805f68d0(&DAT_180b90310);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b9035c == 0x7fffffff) {
    DAT_180b9035c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180b907f8 == '\0') {
    FUN_180195c60(&DAT_180b90360,param_2);
    if ((DAT_180b907e8 == 0) && (DAT_180b90360 != '\0')) {
      local_48 = &DAT_180b90310;
      uVar2 = FUN_1801a8490(local_40,&local_48);
      FUN_18017ccc0(&DAT_180b907e0,uVar2);
      FUN_18015a450(local_40);
      FUN_18015a520(local_30);
      if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
    }
    FUN_1805f68fc(&DAT_180b90310);
    FUN_1800efed0(param_2 + 0x1d8);
    FUN_1800efed0(param_2 + 0x1c8);
    _eh_vector_destructor_iterator_((void *)(param_2 + 8),0xe0,2,thunk_FUN_1801ab310);
  }
  else {
    FUN_1805f68fc(&DAT_180b90310);
    FUN_1800efed0(param_2 + 0x1d8);
    FUN_1800efed0(param_2 + 0x1c8);
    _eh_vector_destructor_iterator_((void *)(param_2 + 8),0xe0,2,thunk_FUN_1801ab310);
  }
}




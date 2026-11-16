// FUN_1804c7cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7cc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c7cc0(int param_1,uint param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
     (*(int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
              *(longlong *)(DAT_180bb8ae8 + 0x2000)) != param_1)) {
    *(undefined4 *)(DAT_180bb8ae8 + 0x1f10) = 0;
  }
  FUN_1804b08d0(local_28,0x14,"##Popup_%08x");
  cVar1 = FUN_1804bee10(local_28,0,param_2 | 0x4000000);
  if (cVar1 == '\0') {
    FUN_1804c7e80();
  }
}




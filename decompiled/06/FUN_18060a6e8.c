// FUN_18060a6e8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a6e8 */

longlong FUN_18060a6e8(longlong *param_1)

{
  longlong lVar1;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_18061f788(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}




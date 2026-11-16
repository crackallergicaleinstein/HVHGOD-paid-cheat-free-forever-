// FUN_1806066d8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806066d8 */

void FUN_1806066d8(longlong *param_1,longlong *param_2)

{
  size_t sVar1;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || ((char *)*param_1 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    sVar1 = strlen((char *)*param_1);
    lVar2 = _malloc_base(sVar1 + 1);
    if (lVar2 != 0) {
      FUN_18061f0b0(lVar2,sVar1 + 1,*param_1);
      *param_2 = lVar2;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_180621380(0);
  }
  return;
}




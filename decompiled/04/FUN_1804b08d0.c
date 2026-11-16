// FUN_1804b08d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b08d0 */

ulonglong FUN_1804b08d0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = FUN_1804aeff0();
  uVar2 = (uint)uVar1;
  if (param_1 != 0) {
    if ((uVar2 == 0xffffffff) || (param_2 <= (int)uVar2)) {
      uVar2 = param_2 - 1;
    }
    *(undefined1 *)((int)uVar2 + param_1) = 0;
    uVar1 = (ulonglong)uVar2;
  }
  return uVar1;
}




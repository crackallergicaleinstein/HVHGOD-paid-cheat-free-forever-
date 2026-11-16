// FUN_1805a8f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a8f30 */

ulonglong FUN_1805a8f30(longlong *param_1)

{
  ulonglong uVar1;
  longlong local_res8;
  
  uVar1 = FUN_180575840(*(undefined8 *)(*param_1 + 0x2b8),&local_res8);
  if ((int)uVar1 == 0) {
    param_1[8] = local_res8;
    FUN_180572de0();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}




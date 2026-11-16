// FUN_180588a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588a30 */

ulonglong FUN_180588a30(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x408) == 0) {
    uVar1 = FUN_180588160(param_1,0);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  return uVar2;
}




// FUN_18017cdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cdb0 */

ulonglong FUN_18017cdb0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + 4);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




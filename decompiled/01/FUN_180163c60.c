// FUN_180163c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163c60 */

ulonglong FUN_180163c60(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((*(char *)(param_1 + 0xc) != '\0') || (FUN_180163600(), *(char *)(param_1 + 0xd) != '\0')) {
    FUN_180163600(param_1 + 0x88);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return (ulonglong)((*(int *)(param_1 + 8) == 4) + 1);
  }
  uVar2 = FUN_1800efea0();
  FUN_180163ab0(uVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}




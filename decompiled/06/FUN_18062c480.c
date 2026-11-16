// FUN_18062c480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c480 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18062c480(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_1808d5f00 & 0x3f;
  pcVar3 = (code *)((DAT_180bb26b0 ^ DAT_1808d5f00) >> bVar2 |
                   (DAT_180bb26b0 ^ DAT_1808d5f00) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}




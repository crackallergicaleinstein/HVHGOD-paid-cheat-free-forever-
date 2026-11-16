// FUN_180631090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180631090 */

uint FUN_180631090(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_180bb26b8;
  }
  else {
    puVar3 = (undefined4 *)FUN_18060fe00();
    *puVar3 = 0x16;
    FUN_18060aad4();
    uVar1 = DAT_180bb26b8;
    uVar2 = 0xffffffff;
  }
  DAT_180bb26b8 = uVar1;
  return uVar2;
}




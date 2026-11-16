// FUN_18062c3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c3a0 */

ulonglong FUN_18062c3a0(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_1808d5f00 & 0x3f;
  uVar2 = DAT_180bb26a8 ^ DAT_1808d5f00;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




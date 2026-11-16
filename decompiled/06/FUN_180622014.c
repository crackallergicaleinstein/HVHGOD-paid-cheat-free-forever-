// FUN_180622014 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180622014 */

ulonglong FUN_180622014(undefined8 param_1,undefined4 *param_2,undefined8 param_3,
                       undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_1808d5f00 & 0x3f;
  uVar2 = DAT_180bb2118 ^ DAT_1808d5f00;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




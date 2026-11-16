// FUN_18028c730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028c730 */

/* WARNING: Removing unreachable block (ram,0x00018028c79b) */

ulonglong FUN_18028c730(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)((int)((param_1 >> 0xf ^ param_1) >> 4) + (int)uVar3 & 0xfff);
      in_RAX = *(ulonglong *)(&DAT_180c66220 + uVar2 * 8);
      if (in_RAX == 0) {
        LOCK();
        uVar1 = *(ulonglong *)(&DAT_180c66220 + uVar2 * 8);
        if (uVar1 == 0) {
          *(ulonglong *)(&DAT_180c66220 + uVar2 * 8) = param_1;
        }
        else {
          in_RAX = uVar1;
        }
        UNLOCK();
        if (uVar1 == 0) goto LAB_18028c781;
      }
      if (in_RAX == param_1) {
LAB_18028c781:
        uVar3 = DAT_180c6e220;
        if (DAT_180c6e220 < param_2 + 0x2eeU) {
          DAT_180c6e220 = param_2 + 1000;
          LOCK();
          UNLOCK();
        }
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1000);
  }
  return in_RAX & 0xffffffffffffff00;
}




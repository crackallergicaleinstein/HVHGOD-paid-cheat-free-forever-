// FUN_18003b060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003b060 */

bool FUN_18003b060(void)

{
  longlong lVar1;
  longlong lVar2;
  ULONGLONG UVar3;
  bool bVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  if (DAT_180bacc78 != 0) {
    lVar2 = _Xtime_get_ticks();
    lVar1 = DAT_180baccb8;
    if ((DAT_180baccb0 & 1) != 0) {
      UVar3 = GetTickCount64();
      bVar4 = false;
      if ((UVar3 - lVar1 < 10000) &&
         (lVar2 / 10000000 - lVar2 / -0x6769800000000000 < DAT_180bacc80)) {
        UVar3 = GetTickCount64();
        bVar4 = UVar3 < DAT_180bacc68;
      }
      goto LAB_18003b0ec;
    }
  }
  bVar4 = false;
LAB_18003b0ec:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  return bVar4;
}




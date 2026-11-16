// FUN_180629b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180629b90 */

/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_180bb2594 != 0) {
    return;
  }
  __acrt_lock(6);
  if (DAT_180bb2594 == 0) {
    FUN_1806299f8();
    LOCK();
    DAT_180bb2594 = DAT_180bb2594 + 1;
    UNLOCK();
  }
  __acrt_unlock(6);
  return;
}




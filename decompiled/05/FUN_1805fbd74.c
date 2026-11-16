// FUN_1805fbd74 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbd74 */

/* Library Function - Single Match
    public: __cdecl std::_Init_locks::_Init_locks(void) __ptr64
   
   Library: Visual Studio 2019 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_1808d5fd4 = DAT_1808d5fd4 + 1;
  UNLOCK();
  if (DAT_1808d5fd4 == 0) {
    puVar1 = (undefined4 *)&DAT_180bb1750;
    do {
      FUN_18060541c(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_180bb1890);
  }
  return this;
}




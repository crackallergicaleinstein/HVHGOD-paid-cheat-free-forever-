// FUN_1805f5a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5a00 */

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool bVar4;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 == 0) {
LAB_1805f5a2e:
    uVar3 = 0;
  }
  else {
    do {
      pvVar2 = (void *)0x0;
      LOCK();
      bVar4 = DAT_180bacd90 == (void *)0x0;
      if (bVar4) {
        DAT_180bacd90 = StackBase;
      }
      else {
        pvVar2 = DAT_180bacd90;
      }
      UNLOCK();
      if (bVar4) goto LAB_1805f5a2e;
    } while (StackBase != pvVar2);
    uVar3 = 1;
  }
  return uVar3;
}




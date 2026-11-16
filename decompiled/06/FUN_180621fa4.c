// FUN_180621fa4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621fa4 */

void FUN_180621fa4(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_180bb2100 == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_180629f70();
    if (cVar1 == '\0') {
      FUN_180621698(local_res8);
    }
    DAT_180bb2100 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}




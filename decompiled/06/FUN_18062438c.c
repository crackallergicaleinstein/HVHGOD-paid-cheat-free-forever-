// FUN_18062438c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062438c */

void FUN_18062438c(char param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((param_1 != '\0') && ((*(uint *)((longlong)param_2 + 0x14) >> 9 & 1) != 0)) {
    FUN_180610058(param_2,param_3);
    LOCK();
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffd7f;
    UNLOCK();
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}




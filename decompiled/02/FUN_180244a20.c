// FUN_180244a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244a20 */

undefined8 FUN_180244a20(longlong *param_1,longlong param_2,ulonglong param_3)

{
  short sVar1;
  
  if ((((*(char *)((longlong)param_1 + 0x24) != '\0') && (param_2 != 0)) && (*param_1 == param_2))
     && (((-1 < param_1[1] && ((ulonglong)param_1[2] <= param_3)) && (param_3 - param_1[2] < 0xfb)))
     ) {
    sVar1 = thunk_FUN_180624430((int)param_1[3]);
    if (sVar1 < 1) {
      sVar1 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_1 + 0x1c));
      if (sVar1 < 1) {
        sVar1 = thunk_FUN_180624430((int)param_1[4]);
        if (sVar1 < 1) {
          return 1;
        }
      }
    }
  }
  return 0;
}




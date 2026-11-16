// FUN_1802ed320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ed320 */

longlong FUN_1802ed320(ulonglong param_1,uint param_2,byte param_3)

{
  bool bVar1;
  
  if (param_2 < 0x40) {
    return (ulonglong)
           ((uint)(((param_1 * 2 - (ulonglong)param_3 | param_1) & param_1 * 2) >>
                  ((ulonglong)param_2 & 0x3f)) & 1) + (param_1 >> ((ulonglong)param_2 & 0x3f));
  }
  if (param_2 == 0x40) {
    if ((param_3 == 0) || ((param_1 & 0x7fffffffffffffff) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((longlong)param_1 < 0) && (bVar1)) {
      return 1;
    }
  }
  return 0;
}




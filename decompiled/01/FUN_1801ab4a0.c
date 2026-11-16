// FUN_1801ab4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ab4a0 */

ulonglong FUN_1801ab4a0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  
  param_1 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    do {
      if ((ulonglong)plVar1[4] < *param_2) {
        plVar1 = plVar1 + 2;
      }
      else {
        param_1 = plVar1;
      }
      plVar1 = (longlong *)*plVar1;
    } while (*(char *)((longlong)plVar1 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)param_1 + 0x19) == '\0') &&
     (plVar1 = (longlong *)param_1[4], plVar1 <= (longlong *)*param_2)) {
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




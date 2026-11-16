// FUN_1801ab550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ab550 */

void FUN_1801ab550(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)*param_1;
  plVar1 = (longlong *)local_10[1];
  local_18 = local_10;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar2 = plVar1;
    do {
      if ((ulonglong)plVar2[4] < *param_2) {
        plVar2 = plVar2 + 2;
      }
      else {
        if ((*(char *)((longlong)local_10 + 0x19) != '\0') && (*param_2 < (ulonglong)plVar2[4])) {
          local_10 = plVar2;
        }
        local_18 = plVar2;
      }
      plVar2 = (longlong *)*plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar1 = (longlong *)*local_10;
  }
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    do {
      if (*param_2 < (ulonglong)plVar1[4]) {
        plVar2 = (longlong *)*plVar1;
        local_10 = plVar1;
      }
      else {
        plVar2 = (longlong *)plVar1[2];
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  FUN_1801b3030(param_1,&local_18);
  return;
}




// FUN_1804281e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804281e0 */

void FUN_1804281e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    while (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 0x148);
      plVar3 = *(longlong **)(lVar4 + 0x140);
      while (plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[4];
        if (*plVar3 != 0) {
          thunk_FUN_180621380();
        }
        thunk_FUN_180621380(plVar3);
        plVar3 = plVar2;
      }
      if ((*(char *)(lVar4 + 0x40) == '\x02') || (*(char *)(lVar4 + 0x40) == '\x03')) {
        thunk_FUN_180621380(*(undefined8 *)(lVar4 + 0x48));
      }
      if ((*(char *)(lVar4 + 0x50) == '\x02') || (*(char *)(lVar4 + 0x50) == '\x03')) {
        thunk_FUN_180621380(*(undefined8 *)(lVar4 + 0x58));
      }
      thunk_FUN_180621380(lVar4);
      lVar4 = lVar1;
    }
    thunk_FUN_180621380(param_1);
  }
  return;
}




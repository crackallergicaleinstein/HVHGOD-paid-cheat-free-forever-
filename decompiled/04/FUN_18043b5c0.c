// FUN_18043b5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b5c0 */

bool FUN_18043b5c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x440);
  plVar3 = (longlong *)FUN_180439710();
  if (lVar1 == 0) {
    return *plVar3 != plVar3[1];
  }
  plVar5 = (longlong *)*plVar3;
  do {
    if (plVar5 == (longlong *)plVar3[1]) {
LAB_18043b607:
      lVar1 = *(longlong *)(param_1 + 0x440);
      puVar4 = (undefined8 *)FUN_180439710();
      plVar3 = (longlong *)*puVar4;
      while( true ) {
        if (plVar3 == (longlong *)puVar4[1]) {
          return false;
        }
        lVar2 = *plVar3;
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != lVar1)) &&
           (*(char *)(lVar2 + 0x21) == '\0')) break;
        plVar3 = plVar3 + 1;
      }
      return true;
    }
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == lVar1)) {
      if (*(char *)(lVar2 + 0x20) != '\0') {
        return true;
      }
      goto LAB_18043b607;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}




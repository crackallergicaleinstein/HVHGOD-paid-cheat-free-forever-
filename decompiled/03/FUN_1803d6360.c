// FUN_1803d6360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6360 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803d6360(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (((DAT_180c70e21 != '\0') && (param_1 != 0)) && (param_2 != 0)) {
    pcVar3 = (code *)0x0;
    iVar1 = FUN_1805f68d0(&DAT_1809ba4c0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809ba50c == 0x7fffffff) {
      DAT_1809ba50c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_180c70e21 != '\0') {
      plVar2 = DAT_180b0df98;
      if (DAT_180b0df98 == DAT_180b0dfa0) {
LAB_1803d6404:
        FUN_1805f68fc(&DAT_1809ba4c0);
        if ((pcVar3 != (code *)0x0) && (DAT_180c70e21 != '\0')) {
          (*pcVar3)(param_2);
        }
        goto LAB_1803d642d;
      }
      do {
        if (*plVar2 == param_1) {
          pcVar3 = *(code **)(*plVar2 + 0x28);
          goto LAB_1803d6404;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != DAT_180b0dfa0);
    }
    FUN_1805f68fc(&DAT_1809ba4c0);
  }
LAB_1803d642d:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return 0;
}




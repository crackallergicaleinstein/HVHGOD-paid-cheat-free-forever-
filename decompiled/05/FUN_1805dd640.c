// FUN_1805dd640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dd640 */

undefined8 FUN_1805dd640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar2 = (code *)param_1[0xd59];
    lVar1 = param_1[0xd5a];
    if (*param_1 != 0) {
      if ((code *)param_1[0xd59] == (code *)0x0) {
        thunk_FUN_180621380();
      }
      else {
        (*(code *)param_1[0xd59])(lVar1,*param_1,param_3,param_4,param_1[0xd58]);
      }
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_1);
      return 0;
    }
    thunk_FUN_180621380(param_1);
  }
  return 0;
}




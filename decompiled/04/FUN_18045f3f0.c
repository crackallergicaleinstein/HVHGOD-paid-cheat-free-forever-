// FUN_18045f3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f3f0 */

char * FUN_18045f3f0(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x210) {
    if (param_1 == 0x20f) {
switchD_18045f432_caseD_213:
      return "Ctrl";
    }
    if (param_1 == 0) {
      return "None";
    }
  }
  else {
    switch(param_1) {
    case 0x210:
    case 0x214:
      return "Shift";
    case 0x211:
    case 0x215:
      return "Alt";
    case 0x212:
    case 0x216:
      return "Win";
    case 0x213:
      goto switchD_18045f432_caseD_213;
    case 0x290:
      return "M1";
    case 0x291:
      return "M2";
    case 0x292:
      return "M3";
    case 0x293:
      return "Mouse4";
    case 0x294:
      return "Mouse5";
    }
  }
  pcVar1 = (char *)FUN_1804c2a40(param_1);
  return pcVar1;
}




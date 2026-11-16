// FUN_1805bd3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd3b0 */

undefined8 FUN_1805bd3b0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  pcVar2 = (char *)*param_1;
  iVar5 = 0;
  uVar6 = 3;
  pcVar3 = pcVar2;
  if (param_2 <= pcVar2) {
LAB_1805bd46c:
    *param_1 = pcVar3;
    return uVar6;
  }
LAB_1805bd3e0:
  do {
    cVar1 = *pcVar2;
    pcVar3 = pcVar2 + 1;
    if (cVar1 == '\\') {
      if (pcVar3 == param_2) goto LAB_1805bd46c;
      switch(*pcVar3) {
      case '(':
      case ')':
      case '\\':
      case 'b':
      case 'f':
      case 'n':
      case 'r':
      case 't':
        pcVar3 = pcVar2 + 2;
        break;
      default:
        uVar4 = 0;
        do {
          if (param_2 <= pcVar3) goto LAB_1805bd46c;
          pcVar2 = pcVar3;
          if (7 < (byte)(*pcVar3 - 0x30U)) goto LAB_1805bd3e0;
          pcVar3 = pcVar3 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
      }
    }
    else if (cVar1 == '(') {
      iVar5 = iVar5 + 1;
    }
    else if ((cVar1 == ')') && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar6 = 0;
      goto LAB_1805bd46c;
    }
    pcVar2 = pcVar3;
    if (param_2 <= pcVar3) {
      *param_1 = pcVar3;
      return 3;
    }
  } while( true );
}




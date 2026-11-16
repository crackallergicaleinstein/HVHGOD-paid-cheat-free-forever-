// FUN_180422e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422e60 */

undefined8 FUN_180422e60(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar2 = *param_1;
  pcVar1 = param_1 + 1;
  if (cVar2 == 'p') {
    cVar3 = *pcVar1;
    if (cVar3 == 'x') {
      return 1;
    }
    if (cVar3 == 't') {
      return 2;
    }
    if (cVar3 == 'c') {
      return 3;
    }
  }
  if (cVar2 == 'm') {
    if (*pcVar1 == 'm') {
      return 4;
    }
  }
  else if (cVar2 == 'c') {
    if (*pcVar1 == 'm') {
      return 5;
    }
    goto LAB_180422ec2;
  }
  if (cVar2 == 'i') {
    uVar4 = 0;
    if (*pcVar1 == 'n') {
      uVar4 = 6;
    }
    return uVar4;
  }
LAB_180422ec2:
  if (cVar2 == '%') {
    return 7;
  }
  if (cVar2 != 'e') {
    return 0;
  }
  if (param_1[1] == 'm') {
    return 8;
  }
  uVar4 = 0;
  if (param_1[1] == 'x') {
    uVar4 = 9;
  }
  return uVar4;
}




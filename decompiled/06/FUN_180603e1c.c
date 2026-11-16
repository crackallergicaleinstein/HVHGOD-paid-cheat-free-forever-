// FUN_180603e1c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603e1c */

undefined1 * FUN_180603e1c(undefined8 param_1,undefined1 *param_2,char param_3,uint param_4)

{
  char cVar1;
  undefined2 *puVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  
  *param_2 = 0x25;
  puVar2 = (undefined2 *)(param_2 + 1);
  if ((param_4 & 0x20) != 0) {
    *(undefined1 *)puVar2 = 0x2b;
    puVar2 = (undefined2 *)(param_2 + 2);
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((longlong)puVar2 + 1);
  }
  *puVar2 = 0x2a2e;
  pcVar3 = (char *)(puVar2 + 1);
  if (param_3 != '\0') {
    *pcVar3 = param_3;
    pcVar3 = (char *)((longlong)puVar2 + 3);
  }
  uVar4 = param_4 & 0x3000;
  if ((param_4 & 4) == 0) {
    if (uVar4 == 0x2000) {
      cVar1 = 'f';
      goto LAB_180603ea8;
    }
    if (uVar4 == 0x3000) {
      cVar1 = 'a';
      goto LAB_180603ea8;
    }
    cVar1 = 'g';
    cVar5 = 'e';
  }
  else {
    if (uVar4 == 0x2000) {
      cVar1 = 'F';
      goto LAB_180603ea8;
    }
    if (uVar4 == 0x3000) {
      cVar1 = 'A';
      goto LAB_180603ea8;
    }
    cVar1 = 'G';
    cVar5 = 'E';
  }
  if (uVar4 == 0x1000) {
    cVar1 = cVar5;
  }
LAB_180603ea8:
  *pcVar3 = cVar1;
  pcVar3[1] = '\0';
  return param_2;
}




// FUN_1805c8370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8370 */

char FUN_1805c8370(longlong param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *param_2 + 1;
  if (0xff < uVar2) {
    *param_2 = 0;
    return '\0';
  }
  pcVar3 = (char *)(*(longlong *)(param_1 + 0x18) + 6 + (ulonglong)uVar2);
  do {
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
      *param_2 = uVar2;
      return cVar1;
    }
    uVar2 = uVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar2 < 0x100);
  *param_2 = 0;
  return '\0';
}




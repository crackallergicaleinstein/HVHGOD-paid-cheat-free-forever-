// FUN_18057c0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c0a0 */

int FUN_18057c0a0(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)*param_1;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 * 0x1f + (int)cVar1;
    cVar1 = *pcVar2;
  }
  return iVar3;
}




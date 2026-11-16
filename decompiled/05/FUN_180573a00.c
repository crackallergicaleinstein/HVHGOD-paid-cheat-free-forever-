// FUN_180573a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573a00 */

longlong * FUN_180573a00(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    return (longlong *)0x0;
  }
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar1 = puVar4 + *(uint *)(param_1 + 0x14);
  while( true ) {
    if (puVar1 <= puVar4) {
      return (longlong *)0x0;
    }
    plVar2 = (longlong *)*puVar4;
    iVar3 = strcmp(*(char **)(*plVar2 + 8),param_2);
    if (iVar3 == 0) break;
    puVar4 = puVar4 + 1;
  }
  return plVar2;
}




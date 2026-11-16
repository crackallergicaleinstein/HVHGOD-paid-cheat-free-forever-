// FUN_180612130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180612130 */

undefined8 FUN_180612130(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_1806aefb8)[lVar3]) && (cVar1 != (&DAT_1806aefc0)[lVar3]))
    goto LAB_180612171;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  uVar2 = 1;
LAB_180612171:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}




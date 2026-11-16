// FUN_1806120e8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806120e8 */

undefined8 FUN_1806120e8(char *param_1,undefined8 *param_2)

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
    if ((cVar1 != "IND)ind)remainderf"[lVar3]) && (cVar1 != "IND)ind)remainderf"[lVar3 + 4]))
    goto LAB_180612129;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  uVar2 = 1;
LAB_180612129:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}




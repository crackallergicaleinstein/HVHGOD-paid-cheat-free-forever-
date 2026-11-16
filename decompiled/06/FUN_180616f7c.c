// FUN_180616f7c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180616f7c */

undefined8 FUN_180616f7c(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *in_RAX;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_1806af0a8)[lVar4]) && (cVar2 != (&DAT_1806af0b0)[lVar4]))
    goto LAB_180616fec;
    in_RAX = (char *)(param_2[2] + 1);
    param_2[2] = (longlong)in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (char *)param_2[1])) {
      lVar1 = *param_2;
      in_RAX = *(char **)(lVar1 + 0x10);
      if (in_RAX == *(char **)(lVar1 + 8)) goto LAB_180616fc2;
      cVar2 = *in_RAX;
      in_RAX = in_RAX + 1;
      *(char **)(lVar1 + 0x10) = in_RAX;
    }
    else {
LAB_180616fc2:
      cVar2 = '\0';
    }
    lVar4 = lVar4 + 1;
    *param_1 = cVar2;
  } while (lVar4 != 5);
  uVar3 = 1;
LAB_180616fec:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
}




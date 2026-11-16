// FUN_1802a97e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a97e0 */

undefined1 * FUN_1802a97e0(undefined1 *param_1,char *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
  cVar1 = *param_2;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  if ((param_3 == '\0') || (param_2[0xad0] == '\0')) {
    bVar2 = false;
    if ((cVar1 == '\0') ||
       (((((param_2[0x68] == '\0' && (param_2[0x1c0] == '\0')) && (param_2[0x2a8] == '\0')) &&
         ((param_2[0x4d8] == '\0' && (param_2[0x708] == '\0')))) &&
        ((param_2[0x9d8] == '\0' && ((param_2[0xa50] == '\0' && (param_2[0x938] == '\0')))))))) {
      *param_1 = 0;
      return param_1;
    }
  }
  else {
    bVar2 = true;
  }
  *param_1 = 1;
  if ((cVar1 == '\0') || (param_2[0x9d8] == '\0')) {
    param_1[1] = 0;
    if (cVar1 != '\0') goto LAB_1802a987f;
LAB_1802a9897:
    param_1[2] = 0;
    if (cVar1 != '\0') goto LAB_1802a98a0;
LAB_1802a98ba:
    param_1[3] = 0;
    if (cVar1 != '\0') goto LAB_1802a98c3;
LAB_1802a98ed:
    if (!bVar2) {
      uVar3 = 0;
      goto LAB_1802a9913;
    }
    if ((param_2[0xad0] != '\0') && (*(int *)(param_2 + 0xbd0) != *(int *)(param_2 + 0xbd4)))
    goto LAB_1802a9909;
  }
  else {
    param_1[1] = 1;
LAB_1802a987f:
    if ((param_2[0xa50] == '\0') && (param_2[0x708] == '\0')) goto LAB_1802a9897;
    param_1[2] = 1;
LAB_1802a98a0:
    if (param_2[0x1c0] == '\0') goto LAB_1802a98ba;
    param_1[3] = 1;
LAB_1802a98c3:
    if (((param_2[0x68] == '\0') || (*(int *)(param_2 + 0x1b4) == *(int *)(param_2 + 0x1b8))) &&
       ((param_2[0x1c0] == '\0' || (*(int *)(param_2 + 0x29c) == *(int *)(param_2 + 0x2a0)))))
    goto LAB_1802a98ed;
LAB_1802a9909:
    param_1[5] = 1;
  }
  uVar3 = 1;
LAB_1802a9913:
  param_1[4] = uVar3;
  if ((cVar1 != '\0') && (param_2[0x938] != '\0')) {
    param_1[6] = param_2[0x9a0];
    param_1[7] = param_2[0x9a1];
    param_1[8] = param_2[0x9a2];
    param_1[9] = param_2[0x9a3];
    param_1[10] = param_2[0x9a4];
    param_1[0xb] = param_2[0x9a5];
    param_1[0xc] = param_2[0x9a6];
    param_1[0xd] = param_2[0x9a8];
  }
  if ((param_1[7] == '\0') && ((cVar1 == '\0' || (param_2[0x4d8] == '\0')))) {
    param_1[7] = 0;
    return param_1;
  }
  param_1[7] = 1;
  return param_1;
}




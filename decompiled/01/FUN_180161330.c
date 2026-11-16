// FUN_180161330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180161330 */

undefined8 FUN_180161330(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  char local_18 [16];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar2 = FUN_180162620();
    if (iVar2 == 0xef) {
      iVar2 = FUN_180162620(param_1);
      if ((iVar2 != 0xbb) || (iVar2 = FUN_180162620(param_1), iVar2 != 0xbf)) {
        *(char **)(param_1 + 0x70) = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
        return 0xe;
      }
    }
    else {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
        }
      }
      else {
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
      }
      if (*(int *)(param_1 + 0x14) != -1) {
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      }
    }
  }
  do {
    do {
      FUN_180162620(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
    } while (iVar2 == 0x20);
  } while (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xd));
  cVar1 = *(char *)(param_1 + 0x10);
  while( true ) {
    if ((cVar1 == '\0') || (iVar2 != 0x2f)) {
      switch(iVar2) {
      case 0x22:
        uVar4 = FUN_180161cb0(param_1);
        return uVar4;
      case 0x2c:
        return 0xd;
      case 0x2d:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar4 = FUN_180161740(param_1);
        return uVar4;
      case 0x3a:
        return 0xc;
      case 0x5b:
        return 8;
      case 0x5d:
        return 10;
      case 0x66:
        builtin_strncpy(local_18,"false",5);
        uVar6 = 1;
        while (cVar1 = FUN_180162620(param_1), cVar1 == local_18[uVar6]) {
          uVar6 = uVar6 + 1;
          if (4 < uVar6) {
            return 2;
          }
        }
        break;
      case 0x6e:
        builtin_strncpy(local_18,"null",4);
        uVar6 = 1;
        while (cVar1 = FUN_180162620(param_1), cVar1 == local_18[uVar6]) {
          uVar6 = uVar6 + 1;
          if (3 < uVar6) {
            return 3;
          }
        }
        break;
      case 0x74:
        uVar6 = 1;
        builtin_strncpy(local_18,"true",4);
        do {
          cVar1 = FUN_180162620(param_1);
          if (cVar1 != local_18[uVar6]) {
            *(char **)(param_1 + 0x70) = "invalid literal";
            return 0xe;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
        return 1;
      case 0x7b:
        return 9;
      case 0x7d:
        return 0xb;
      case -1:
      case 0:
        return 0xf;
      }
      *(char **)(param_1 + 0x70) = "invalid literal";
      return 0xe;
    }
    iVar2 = FUN_180162620(param_1);
    if (iVar2 == 0x2a) break;
    if (iVar2 != 0x2f) {
      pcVar5 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      goto LAB_1801614df;
    }
    uVar3 = FUN_180162620(param_1);
    while ((uVar3 != 0xffffffff && ((0xd < uVar3 || ((0x2401U >> (uVar3 & 0x1f) & 1) == 0))))) {
      uVar3 = FUN_180162620(param_1);
    }
LAB_180161427:
    do {
      do {
        FUN_180162620(param_1);
        iVar2 = *(int *)(param_1 + 0x14);
      } while (iVar2 == 0x20);
    } while (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xd));
    cVar1 = *(char *)(param_1 + 0x10);
  }
  iVar2 = FUN_180162620(param_1);
  if (iVar2 != -1) {
    do {
      if (iVar2 == 0) break;
      if (iVar2 == 0x2a) {
        iVar2 = FUN_180162620(param_1);
        if (iVar2 == 0x2f) goto LAB_180161427;
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
        *(undefined1 *)(param_1 + 0x18) = 1;
        if (*(longlong *)(param_1 + 0x28) == 0) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
          }
        }
        else {
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        }
        if (*(int *)(param_1 + 0x14) != -1) {
          *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
        }
      }
      iVar2 = FUN_180162620(param_1);
      if (iVar2 == -1) break;
    } while( true );
  }
  pcVar5 = "invalid comment; missing closing \'*/\'";
LAB_1801614df:
  *(char **)(param_1 + 0x70) = pcVar5;
  return 0xe;
}




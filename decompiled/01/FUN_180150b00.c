// FUN_180150b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180150b00 */

undefined8 FUN_180150b00(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined1 local_14;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar2 = FUN_180157250();
    if (iVar2 == 0xef) {
      iVar2 = FUN_180157250(param_1);
      if ((iVar2 != 0xbb) || (iVar2 = FUN_180157250(param_1), iVar2 != 0xbf)) {
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
  FUN_1801544b0(param_1);
  cVar1 = *(char *)(param_1 + 0x10);
  while( true ) {
    if ((cVar1 == '\0') || (*(int *)(param_1 + 0x14) != 0x2f)) {
      switch(*(undefined4 *)(param_1 + 0x14)) {
      default:
        *(char **)(param_1 + 0x70) = "invalid literal";
        return 0xe;
      case 0x22:
        uVar5 = FUN_180156160(param_1);
        return uVar5;
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
        uVar5 = FUN_180155b60(param_1);
        return uVar5;
      case 0x3a:
        return 0xc;
      case 0x5b:
        return 8;
      case 0x5d:
        return 10;
      case 0x66:
        local_18 = 0x736c6166;
        local_14 = 0x65;
        uVar5 = FUN_180154720(param_1,&local_18,5,2);
        return uVar5;
      case 0x6e:
        local_18 = 0x6c6c756e;
        uVar5 = 3;
        break;
      case 0x74:
        local_18 = 0x65757274;
        uVar5 = 1;
        break;
      case 0x7b:
        return 9;
      case 0x7d:
        return 0xb;
      case 0xffffffff:
      case 0:
        return 0xf;
      }
      uVar5 = FUN_180154720(param_1,&local_18,4,uVar5);
      return uVar5;
    }
    iVar2 = FUN_180157250(param_1);
    if (iVar2 == 0x2a) break;
    if (iVar2 != 0x2f) {
      pcVar4 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      goto LAB_180150c8e;
    }
    uVar3 = FUN_180157250(param_1);
    while ((uVar3 != 0xffffffff && ((0xd < uVar3 || ((0x2401U >> (uVar3 & 0x1f) & 1) == 0))))) {
      uVar3 = FUN_180157250(param_1);
    }
LAB_180150be7:
    FUN_1801544b0(param_1);
    cVar1 = *(char *)(param_1 + 0x10);
  }
  iVar2 = FUN_180157250(param_1);
  if (iVar2 != -1) {
    do {
      if (iVar2 == 0) break;
      if (iVar2 == 0x2a) {
        iVar2 = FUN_180157250(param_1);
        if (iVar2 == 0x2f) goto LAB_180150be7;
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
      iVar2 = FUN_180157250(param_1);
      if (iVar2 == -1) break;
    } while( true );
  }
  pcVar4 = "invalid comment; missing closing \'*/\'";
LAB_180150c8e:
  *(char **)(param_1 + 0x70) = pcVar4;
  return 0xe;
}




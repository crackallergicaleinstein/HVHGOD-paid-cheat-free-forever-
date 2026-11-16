// FUN_1801401f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801401f0 */

void FUN_1801401f0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((*(longlong *)(param_1 + 0x68) == 0) && (cVar1 = FUN_180154540(param_1 + 0x48), cVar1 == '\0')
     ) {
    pcVar3 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_1801403b0:
    *(char **)(param_1 + 0xb8) = pcVar3;
LAB_1801403b7:
    *(undefined4 *)(param_1 + 0x40) = 0xe;
    return;
  }
  FUN_1801544b0(param_1 + 0x48);
  cVar1 = *(char *)(param_1 + 0x58);
  while ((cVar1 != '\0' && (*(int *)(param_1 + 0x5c) == 0x2f))) {
    cVar1 = FUN_180154fc0(param_1 + 0x48);
    if (cVar1 == '\0') goto LAB_1801403b7;
    FUN_1801544b0(param_1 + 0x48);
    cVar1 = *(char *)(param_1 + 0x58);
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  default:
    pcVar3 = "invalid literal";
    goto LAB_1801403b0;
  case 0x22:
    uVar2 = FUN_180155220(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    return;
  case 0x2c:
    *(undefined4 *)(param_1 + 0x40) = 0xd;
    return;
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
    uVar2 = FUN_180154800(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    return;
  case 0x3a:
    *(undefined4 *)(param_1 + 0x40) = 0xc;
    return;
  case 0x5b:
    *(undefined4 *)(param_1 + 0x40) = 8;
    return;
  case 0x5d:
    *(undefined4 *)(param_1 + 0x40) = 10;
    return;
  case 0x66:
    local_18 = 0x736c6166;
    local_14 = 0x65;
    uVar2 = FUN_180154720(param_1 + 0x48,&local_18,5,2);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    return;
  case 0x6e:
    local_18 = 0x6c6c756e;
    uVar4 = 3;
    break;
  case 0x74:
    local_18 = 0x65757274;
    uVar4 = 1;
    break;
  case 0x7b:
    *(undefined4 *)(param_1 + 0x40) = 9;
    return;
  case 0x7d:
    *(undefined4 *)(param_1 + 0x40) = 0xb;
    return;
  case 0xffffffff:
  case 0:
    *(undefined4 *)(param_1 + 0x40) = 0xf;
    return;
  }
  uVar2 = FUN_180154720(param_1 + 0x48,&local_18,4,uVar4);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}




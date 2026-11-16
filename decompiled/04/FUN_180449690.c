// FUN_180449690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449690 */

int FUN_180449690(longlong param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  puVar2 = (undefined4 *)*param_3;
  lVar3 = param_3[2];
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7feffffc;
  }
  if (lVar3 == 0) {
    return -0x7feffffc;
  }
  if (*(int *)(lVar3 + 0x20) == 2) {
    if (*(char *)(lVar3 + 0x40) == '\0') {
      return -0x7feffffc;
    }
    iVar6 = *(int *)(lVar3 + 0x30);
    if (iVar6 == 0xc4) {
      uVar8 = (ulonglong)((uint)*(byte *)(puVar2 + 2) + *(int *)(lVar3 + 0x48));
    }
    else if (iVar6 == 0xc5) {
      uVar8 = (ulonglong)*(byte *)(puVar2 + 2) + *(longlong *)(lVar3 + 0x48);
    }
    else {
      if (iVar6 != 0) {
        return -0x7feffffc;
      }
      if (*(int *)(lVar3 + 0x34) != 0) {
        return -0x7feffffc;
      }
      cVar1 = *(char *)((longlong)puVar2 + 0x17);
      if (cVar1 == '\x10') {
        uVar8 = (ulonglong)*(ushort *)(lVar3 + 0x48);
      }
      else if (cVar1 == ' ') {
        uVar8 = (ulonglong)*(uint *)(lVar3 + 0x48);
      }
      else {
        if (cVar1 != '@') {
          return -0x7feffffc;
        }
        uVar8 = *(ulonglong *)(lVar3 + 0x48);
      }
    }
  }
  else {
    if (*(int *)(lVar3 + 0x20) != 4) {
      return -0x7feffffc;
    }
    if (*(char *)(lVar3 + 0x28) == '\0') {
      return -0x7feffffc;
    }
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return -0x7feffffc;
    }
    uVar8 = (ulonglong)*(byte *)(puVar2 + 2) + *(longlong *)(lVar3 + 0x30);
    switch(*puVar2) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ((*(char *)((longlong)puVar2 + 0x16) == '\x10') && (puVar2[1] != 0x6bb)) {
        uVar8 = uVar8 & 0xffff;
      }
      break;
    default:
      goto switchD_180449704_default;
    }
  }
  uVar9 = 0;
  if (*(uint *)(param_1 + 0x18) == 0xffffffff) {
    if (*(int *)(param_1 + 0xc) == 1) {
      cVar1 = *(char *)((longlong)puVar2 + 0x15);
      if (cVar1 == '\x10') {
        uVar9 = 4;
        uVar8 = uVar8 & 0xffff;
      }
      else if (cVar1 == ' ') {
        uVar9 = 8;
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        if (cVar1 != '@') {
          return -0x7feffffc;
        }
        uVar9 = 0x10;
      }
    }
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x18) & 0xff;
  }
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (*(ulonglong *)(param_2 + 0x30) < lVar3 + 1U) {
      return -0x7feffff7;
    }
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar3) = 0x24;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  }
  else {
    if (*(ulonglong *)(param_2 + 8) <= lVar3 + 4U) {
      return -0x7feffff7;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar3;
    *(undefined4 *)(lVar3 + *(longlong *)(param_2 + 0x48)) = 0x240009;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar3 + 2;
    uVar7 = *(longlong *)(param_2 + 8) - (lVar3 + 2);
    param_2[0x28] = '\x02';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    *(ulonglong *)(param_2 + 8) = uVar7;
    uVar5 = 0xff;
    if (uVar7 < 0xff) {
      uVar5 = uVar7;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar4 = FUN_180444450(param_2 + 0x10,uVar8,uVar9,1,*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0xa8));
    iVar6 = 0x100000;
    if (iVar4 < 0) {
      iVar6 = iVar4;
    }
    return iVar6;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar4 = FUN_180444570(param_2 + 0x10,uVar8,uVar9,*(undefined1 *)(param_1 + 0x49),
                          *(undefined1 *)(param_1 + 0x48),1,*(undefined8 *)(param_1 + 0x100),
                          *(undefined8 *)(param_1 + 0x158));
    iVar6 = 0x100000;
    if (iVar4 < 0) {
      iVar6 = iVar4;
    }
    return iVar6;
  }
switchD_180449704_default:
  return -0x7feffffc;
}




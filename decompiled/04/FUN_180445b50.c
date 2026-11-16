// FUN_180445b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445b50 */

int FUN_180445b50(longlong param_1,char *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  puVar3 = (undefined4 *)*param_3;
  lVar4 = param_3[3];
  lVar5 = param_3[2];
  if (puVar3 == (undefined4 *)0x0) {
    return -0x7feffffc;
  }
  if (lVar5 == 0) {
    return -0x7feffffc;
  }
  if (*(int *)(lVar5 + 0x20) == 2) {
    if (*(char *)(lVar5 + 0x40) == '\0') {
      return -0x7feffffc;
    }
    iVar8 = *(int *)(lVar5 + 0x30);
    if (iVar8 == 0xc4) {
      uVar11 = (ulonglong)((uint)*(byte *)(puVar3 + 2) + *(int *)(lVar5 + 0x48) + (int)lVar4);
    }
    else if (iVar8 == 0xc5) {
      uVar11 = (ulonglong)*(byte *)(puVar3 + 2) + *(longlong *)(lVar5 + 0x48) + lVar4;
    }
    else {
      if (iVar8 != 0) {
        return -0x7feffffc;
      }
      if (*(int *)(lVar5 + 0x34) != 0) {
        return -0x7feffffc;
      }
      cVar2 = *(char *)((longlong)puVar3 + 0x17);
      if (cVar2 == '\x10') {
        uVar11 = (ulonglong)*(ushort *)(lVar5 + 0x48);
      }
      else if (cVar2 == ' ') {
        uVar11 = (ulonglong)*(uint *)(lVar5 + 0x48);
      }
      else {
        if (cVar2 != '@') {
          return -0x7feffffc;
        }
        uVar11 = *(ulonglong *)(lVar5 + 0x48);
      }
    }
  }
  else {
    if (*(int *)(lVar5 + 0x20) != 4) {
      return -0x7feffffc;
    }
    if (*(char *)(lVar5 + 0x28) == '\0') {
      return -0x7feffffc;
    }
    if (*(char *)(lVar5 + 0x29) == '\0') {
      return -0x7feffffc;
    }
    uVar11 = (ulonglong)*(byte *)(puVar3 + 2) + *(longlong *)(lVar5 + 0x30) + lVar4;
    switch(*puVar3) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ((*(char *)((longlong)puVar3 + 0x16) == '\x10') && (puVar3[1] != 0x6bb)) {
        uVar11 = uVar11 & 0xffff;
      }
      break;
    default:
      goto switchD_180445bce_default;
    }
  }
  uVar10 = 0;
  if (*(uint *)(param_1 + 0x14) == 0xffffffff) {
    if (*(int *)(param_1 + 0xc) == 1) {
      cVar2 = *(char *)((longlong)puVar3 + 0x15);
      if (cVar2 == '\x10') {
        uVar10 = 4;
        uVar11 = uVar11 & 0xffff;
      }
      else if (cVar2 == ' ') {
        uVar10 = 8;
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        if (cVar2 != '@') {
          return -0x7feffffc;
        }
        uVar10 = 0x10;
      }
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x14) & 0xff;
  }
  if (*param_2 != '\0') {
    uVar1 = *(longlong *)(param_2 + 0x28) + 2;
    if (*(ulonglong *)(param_2 + 8) <= uVar1) {
      return -0x7feffff7;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
    uVar9 = *(longlong *)(param_2 + 8) - uVar1;
    param_2[0x28] = '\x01';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    lVar4 = *(longlong *)(param_2 + 0x48);
    *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar1 + lVar4);
    *(ulonglong *)(param_2 + 8) = uVar9;
    uVar7 = 0xff;
    if (uVar9 < 0xff) {
      uVar7 = uVar9;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    *(undefined1 *)(uVar1 + lVar4) = 0;
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 8;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar6 = FUN_180449ba0(param_2 + 0x10,uVar11,uVar10,*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0xa8));
    iVar8 = 0x100000;
    if (iVar6 < 0) {
      iVar8 = iVar6;
    }
    return iVar8;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar6 = FUN_180449d80(param_2 + 0x10,uVar11,uVar10,*(undefined1 *)(param_1 + 0x49),
                          *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x100),
                          *(undefined8 *)(param_1 + 0x158));
    iVar8 = 0x100000;
    if (iVar6 < 0) {
      iVar8 = iVar6;
    }
    return iVar8;
  }
switchD_180445bce_default:
  return -0x7feffffc;
}




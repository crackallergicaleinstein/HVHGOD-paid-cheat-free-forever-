// FUN_180448db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180448db0 */

int FUN_180448db0(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if ((iVar5 == 0) || (iVar5 == 1)) {
    lVar1 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(lVar1 + 0x48) < 0) {
      if ((*(int *)(lVar1 + 0x30) != 0) || (*(int *)(lVar1 + 0x34) != 0)) {
        lVar1 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar1 + 1U) {
            return -0x7feffff7;
          }
          *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x2d;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
        }
        else {
          if (*(ulonglong *)(param_2 + 8) <= lVar1 + 4U) {
            return -0x7feffff7;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
          *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x2d0002;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1 + 2;
          uVar6 = *(longlong *)(param_2 + 8) - (lVar1 + 2);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar6;
          uVar3 = 0xff;
          if (uVar6 < 0xff) {
            uVar3 = uVar6;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar3;
        }
      }
      if (*param_2 != '\0') {
        uVar3 = *(longlong *)(param_2 + 0x28) + 2;
        if (*(ulonglong *)(param_2 + 8) <= uVar3) {
          return -0x7feffff7;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
        uVar8 = *(longlong *)(param_2 + 8) - uVar3;
        param_2[0x28] = '\x01';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        lVar1 = *(longlong *)(param_2 + 0x48);
        *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar3 + lVar1);
        *(ulonglong *)(param_2 + 8) = uVar8;
        uVar6 = 0xff;
        if (uVar8 < 0xff) {
          uVar6 = uVar8;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        *(undefined1 *)(uVar3 + lVar1) = 0;
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 10;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48);
        lVar7 = -0x8000000000000000;
        if ((lVar1 != -0x8000000000000000) && (lVar7 = -lVar1, -lVar1 < 0)) {
          lVar7 = lVar1;
        }
        iVar2 = FUN_180449ba0(param_2 + 0x10,lVar7,*(undefined1 *)(param_1 + 0x24),
                              *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xa8));
        iVar5 = 0x100000;
        if (iVar2 < 0) {
          iVar5 = iVar2;
        }
        return iVar5;
      }
      if (*(int *)(param_1 + 0x1c) != 1) {
        return -0x7feffffc;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48);
      lVar7 = -0x8000000000000000;
      if ((lVar1 != -0x8000000000000000) && (lVar7 = -lVar1, -lVar1 < 0)) {
        lVar7 = lVar1;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x158);
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      goto LAB_18044908c;
    }
  }
  else if (iVar5 != 2) {
    return -0x7feffffc;
  }
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) != 0) ||
     (*(int *)(*(longlong *)(param_3 + 0x10) + 0x34) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (*param_2 == '\0') {
      if (*(ulonglong *)(param_2 + 0x30) < lVar1 + 1U) {
        return -0x7feffff7;
      }
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x2b;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
    }
    else {
      if (*(ulonglong *)(param_2 + 8) <= lVar1 + 4U) {
        return -0x7feffff7;
      }
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
      *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x2b0002;
      *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1 + 2;
      uVar6 = *(longlong *)(param_2 + 8) - (lVar1 + 2);
      param_2[0x28] = '\x02';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      *(ulonglong *)(param_2 + 8) = uVar6;
      uVar3 = 0xff;
      if (uVar6 < 0xff) {
        uVar3 = uVar6;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar3;
    }
  }
  if (*param_2 != '\0') {
    uVar3 = *(longlong *)(param_2 + 0x28) + 2;
    if (*(ulonglong *)(param_2 + 8) <= uVar3) {
      return -0x7feffff7;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
    uVar8 = *(longlong *)(param_2 + 8) - uVar3;
    param_2[0x28] = '\x01';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    lVar1 = *(longlong *)(param_2 + 0x48);
    *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar3 + lVar1);
    *(ulonglong *)(param_2 + 8) = uVar8;
    uVar6 = 0xff;
    if (uVar8 < 0xff) {
      uVar6 = uVar8;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    *(undefined1 *)(uVar3 + lVar1) = 0;
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 10;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = FUN_180449ba0(param_2 + 0x10,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x48),
                          *(undefined1 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0xa8));
    iVar5 = 0x100000;
    if (iVar2 < 0) {
      iVar5 = iVar2;
    }
    return iVar5;
  }
  if (*(int *)(param_1 + 0x1c) != 1) {
    return -0x7feffffc;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x158);
  lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
LAB_18044908c:
  iVar2 = FUN_180449d80(param_2 + 0x10,lVar7,*(undefined1 *)(param_1 + 0x24),
                        *(undefined1 *)(param_1 + 0x49),*(undefined1 *)(param_1 + 0x48),uVar4,uVar9)
  ;
  iVar5 = 0x100000;
  if (iVar2 < 0) {
    iVar5 = iVar2;
  }
  return iVar5;
}




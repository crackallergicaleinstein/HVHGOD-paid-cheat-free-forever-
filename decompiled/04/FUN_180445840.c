// FUN_180445840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445840 */

ulonglong FUN_180445840(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 uVar10;
  
  if (*param_2 != '\0') {
    uVar4 = *(longlong *)(param_2 + 0x28) + 2;
    if (uVar4 < *(ulonglong *)(param_2 + 8)) {
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
      uVar7 = *(longlong *)(param_2 + 8) - uVar4;
      param_2[0x28] = '\x01';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      lVar1 = *(longlong *)(param_2 + 0x48);
      *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar4 + lVar1);
      *(ulonglong *)(param_2 + 8) = uVar7;
      uVar6 = 0xff;
      if (uVar7 < 0xff) {
        uVar6 = uVar7;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar6;
      *(undefined1 *)(uVar4 + lVar1) = 0;
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 0xb;
      goto LAB_1804458b9;
    }
    goto LAB_180445ad4;
  }
LAB_1804458b9:
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = FUN_180449ba0(param_2 + 0x10,*(undefined2 *)(param_3[2] + 0x28),4,
                          *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xa8));
    iVar2 = (int)uVar4;
joined_r0x000180445947:
    if (iVar2 < 0) {
      return uVar4;
    }
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (*param_2 == '\0') {
      if (lVar1 + 1U <= *(ulonglong *)(param_2 + 0x30)) {
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x3a;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
        lVar8 = *(longlong *)(param_2 + 0x28);
        goto LAB_1804459d1;
      }
    }
    else if (lVar1 + 4U < *(ulonglong *)(param_2 + 8)) {
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
      *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x3a0002;
      *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1 + 2;
      lVar8 = 2;
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
      uVar4 = 0xff;
      if (uVar6 < 0xff) {
        uVar4 = uVar6;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar4;
LAB_1804459d1:
      if (*(char *)(*param_3 + 0x16) == '\x10') {
        uVar10 = 4;
      }
      else {
        if (*(char *)(*param_3 + 0x16) != ' ') goto LAB_180445a44;
        uVar10 = 8;
      }
      plVar9 = (longlong *)(param_2 + 0x48);
      if (*param_2 != '\0') {
        uVar4 = lVar8 + 2;
        if (*(ulonglong *)(param_2 + 8) <= uVar4) goto LAB_180445ad4;
        *(char *)(*plVar9 + -1) = (char)lVar8;
        uVar7 = *(longlong *)(param_2 + 8) - uVar4;
        param_2[0x28] = '\x01';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        lVar1 = *plVar9;
        *plVar9 = (longlong)(uVar4 + lVar1);
        *(ulonglong *)(param_2 + 8) = uVar7;
        uVar6 = 0xff;
        if (uVar7 < 0xff) {
          uVar6 = uVar7;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        *(undefined1 *)(uVar4 + lVar1) = 0;
        *(undefined2 *)(*plVar9 + -2) = 0xb;
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar3 = FUN_180449ba0(param_2 + 0x10,*(undefined4 *)(param_3[2] + 0x2c),uVar10,
                              *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xa8));
        uVar5 = 0x100000;
        if ((int)uVar3 < 0) {
          uVar5 = uVar3;
        }
        return (ulonglong)uVar5;
      }
      if (*(int *)(param_1 + 0xc) == 1) {
        uVar3 = FUN_180449d80(param_2 + 0x10,*(undefined4 *)(param_3[2] + 0x2c),uVar10,
                              *(undefined1 *)(param_1 + 0x49),*(undefined1 *)(param_1 + 0x48),
                              *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x158));
        uVar5 = 0x100000;
        if ((int)uVar3 < 0) {
          uVar5 = uVar3;
        }
        return (ulonglong)uVar5;
      }
      goto LAB_180445a44;
    }
LAB_180445ad4:
    uVar4 = 0x80100009;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 1) {
      uVar4 = FUN_180449d80(param_2 + 0x10,*(undefined2 *)(param_3[2] + 0x28),4,
                            *(undefined1 *)(param_1 + 0x49),*(undefined1 *)(param_1 + 0x48),
                            *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x158));
      iVar2 = (int)uVar4;
      goto joined_r0x000180445947;
    }
LAB_180445a44:
    uVar4 = 0x80100004;
  }
  return uVar4;
}




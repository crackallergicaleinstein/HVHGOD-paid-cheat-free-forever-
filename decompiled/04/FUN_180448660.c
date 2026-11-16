// FUN_180448660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180448660 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180448660(longlong param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  iVar2 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x28);
  if (((iVar2 == 1) || (iVar2 == 4)) &&
     (uVar4 = (**(code **)(param_1 + 0x228))(param_1), (int)uVar4 < 0)) {
    return uVar4;
  }
  uVar4 = (**(code **)(param_1 + 0x230))(param_1,param_2,param_3);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  lVar6 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (*(ulonglong *)(param_2 + 0x30) < lVar6 + 1U) {
      return 0x80100009;
    }
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar6) = 0x5b;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  }
  else {
    if (*(ulonglong *)(param_2 + 8) <= lVar6 + 4U) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar6;
    *(undefined4 *)(lVar6 + *(longlong *)(param_2 + 0x48)) = 0x5b0003;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar6 + 2;
    uVar5 = *(longlong *)(param_2 + 8) - (lVar6 + 2);
    param_2[0x28] = '\x02';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    *(ulonglong *)(param_2 + 8) = uVar5;
    uVar3 = 0xff;
    if (uVar5 < 0xff) {
      uVar3 = uVar5;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
  }
  if ((((*(char *)(param_1 + 8) == '\0') && (*(longlong *)(param_3 + 0x18) != -1)) &&
      ((lVar6 = *(longlong *)(param_3 + 0x10), *(char *)(lVar6 + 0x40) != '\0' &&
       (*(int *)(lVar6 + 0x34) == 0)))) &&
     ((*(int *)(lVar6 + 0x30) == 0 || (*(int *)(lVar6 + 0x30) - 0xc4U < 2)))) {
LAB_180448784:
    uVar4 = (**(code **)(param_1 + 0x208))(param_1,param_2,param_3);
    iVar2 = (int)uVar4;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x34);
    if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) == 0) {
      if (iVar2 != 0) goto LAB_1804487ce;
      goto LAB_180448784;
    }
    uVar4 = (**(code **)(param_1 + 0x200))(param_1,param_2,param_3);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (iVar2 != 0) {
LAB_1804487ce:
      if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) != 0) {
        lVar6 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar6 + 1U) {
            return 0x80100009;
          }
          *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar6) = 0x2b;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
        }
        else {
          if (*(ulonglong *)(param_2 + 8) <= lVar6 + 4U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar6;
          *(undefined4 *)(lVar6 + *(longlong *)(param_2 + 0x48)) = 0x2b0002;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar6 + 2;
          uVar5 = *(longlong *)(param_2 + 8) - (lVar6 + 2);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar5;
          uVar3 = 0xff;
          if (uVar5 < 0xff) {
            uVar3 = uVar5;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar3;
        }
      }
      uVar4 = (**(code **)(param_1 + 0x200))
                        (param_1,param_2,param_3,
                         *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x34));
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      bVar1 = *(byte *)(*(longlong *)(param_3 + 0x10) + 0x38);
      if (((bVar1 != 0) && (*(int *)(*(longlong *)(param_3 + 0x10) + 0x28) != 3)) &&
         ((1 < bVar1 || (*(char *)(param_1 + 6) != '\0')))) {
        lVar6 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar6 + 1U) {
            return 0x80100009;
          }
          *(undefined2 *)(lVar6 + -1 + *(longlong *)(param_2 + 0x48)) = 0x2a;
          lVar6 = *(longlong *)(param_2 + 0x28) + 1;
          *(longlong *)(param_2 + 0x28) = lVar6;
        }
        else {
          if (*(ulonglong *)(param_2 + 8) <= lVar6 + 4U) {
            return 0x80100009;
          }
          plVar8 = (longlong *)(param_2 + 0x48);
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar6;
          *(undefined4 *)(lVar6 + *plVar8) = 0x2a0002;
          *plVar8 = *plVar8 + lVar6 + 2;
          uVar5 = *(longlong *)(param_2 + 8) - (lVar6 + 2);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar5;
          uVar3 = 0xff;
          if (uVar5 < 0xff) {
            uVar3 = uVar5;
          }
          lVar6 = 2;
          *(ulonglong *)(param_2 + 0x30) = uVar3;
        }
        plVar8 = (longlong *)(param_2 + 0x48);
        if (*param_2 != '\0') {
          uVar3 = lVar6 + 2;
          if (*(ulonglong *)(param_2 + 8) <= uVar3) {
            return 0x80100009;
          }
          *(char *)(*plVar8 + -1) = (char)lVar6;
          uVar7 = *(longlong *)(param_2 + 8) - uVar3;
          param_2[0x28] = '\x01';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          lVar6 = *plVar8;
          *plVar8 = (longlong)(uVar3 + lVar6);
          *(ulonglong *)(param_2 + 8) = uVar7;
          uVar5 = 0xff;
          if (uVar7 < 0xff) {
            uVar5 = uVar7;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar5;
          *(undefined1 *)(uVar3 + lVar6) = 0;
          *(undefined2 *)(*plVar8 + -2) = 0xb;
        }
        uVar4 = FUN_180449ba0(param_2 + 0x10,*(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x38),0
                              ,0,0);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
    }
    if ((*(char *)(*(longlong *)(param_3 + 0x10) + 0x40) == '\0') ||
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48) == 0)) goto LAB_1804489c8;
    uVar4 = (**(code **)(param_1 + 0x218))(param_1,param_2,param_3);
    iVar2 = (int)uVar4;
  }
  if (iVar2 < 0) {
    return uVar4;
  }
LAB_1804489c8:
  lVar6 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (lVar6 + 1U <= *(ulonglong *)(param_2 + 0x30)) {
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar6) = 0x5d;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      return 0x100000;
    }
  }
  else if (lVar6 + 4U < *(ulonglong *)(param_2 + 8)) {
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar6;
    *(undefined4 *)(lVar6 + *(longlong *)(param_2 + 0x48)) = 0x5d0004;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar6 + 2;
    uVar5 = *(longlong *)(param_2 + 8) - (lVar6 + 2);
    *(ulonglong *)(param_2 + 8) = uVar5;
    param_2[0x28] = '\x02';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    uVar3 = 0xff;
    if (uVar5 < 0xff) {
      uVar3 = uVar5;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    return 0x100000;
  }
  return 0x80100009;
}




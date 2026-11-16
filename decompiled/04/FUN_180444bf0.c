// FUN_180444bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180444bf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180444bf0(longlong param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar5 = (**(code **)(param_1 + 0x230))();
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (((((*(char *)(param_1 + 8) != '\0') || (*(longlong *)(param_3 + 0x18) == -1)) ||
       (lVar7 = *(longlong *)(param_3 + 0x10), *(char *)(lVar7 + 0x40) == '\0')) ||
      (*(int *)(lVar7 + 0x34) != 0)) ||
     (((iVar2 = *(int *)(lVar7 + 0x30), iVar2 != 0 && (iVar2 != 0xc4)) && (iVar2 != 0xc5)))) {
    lVar7 = *(longlong *)(param_3 + 0x10);
    iVar2 = *(int *)(lVar7 + 0x30);
    iVar3 = *(int *)(lVar7 + 0x34);
    if ((iVar2 != 0) || (iVar3 != 0)) {
      if ((*(char *)(lVar7 + 0x40) != '\0') &&
         ((*(longlong *)(lVar7 + 0x48) != 0 &&
          (uVar5 = (**(code **)(param_1 + 0x218))(param_1,param_2,param_3), (int)uVar5 < 0)))) {
        return uVar5;
      }
      lVar7 = *(longlong *)(param_2 + 0x28);
      if (*param_2 == '\0') {
        if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 1U) {
          return 0x80100009;
        }
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar7) = 0x28;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      }
      else {
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 4U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        *(undefined4 *)(lVar7 + *(longlong *)(param_2 + 0x48)) = 0x280003;
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar7 + 2;
        uVar6 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
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
      }
      plVar9 = (longlong *)(param_2 + 0x48);
      if ((iVar2 != 0) &&
         (uVar5 = (**(code **)(param_1 + 0x200))
                            (param_1,param_2,param_3,
                             *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x30)), (int)uVar5 < 0)
         ) {
        return uVar5;
      }
      if (iVar3 != 0) {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 1U) {
            return 0x80100009;
          }
          *(undefined2 *)(*plVar9 + -1 + lVar7) = 0x2c;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
        }
        else {
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 4U) {
            return 0x80100009;
          }
          *(char *)(*plVar9 + -1) = (char)lVar7;
          *(undefined4 *)(lVar7 + *plVar9) = 0x2c0002;
          *plVar9 = *plVar9 + lVar7 + 2;
          uVar6 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
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
        }
        uVar5 = (**(code **)(param_1 + 0x200))
                          (param_1,param_2,param_3,
                           *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x34));
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        bVar1 = *(byte *)(*(longlong *)(param_3 + 0x10) + 0x38);
        if (((bVar1 != 0) && (*(int *)(*(longlong *)(param_3 + 0x10) + 0x28) != 3)) &&
           ((1 < bVar1 || (*(char *)(param_1 + 6) != '\0')))) {
          if (*param_2 != '\0') {
            uVar4 = *(longlong *)(param_2 + 0x28) + 2;
            if (*(ulonglong *)(param_2 + 8) <= uVar4) {
              return 0x80100009;
            }
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
            uVar8 = *(longlong *)(param_2 + 8) - uVar4;
            param_2[0x28] = '\x01';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            lVar7 = *(longlong *)(param_2 + 0x48);
            *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar4 + lVar7);
            *(ulonglong *)(param_2 + 8) = uVar8;
            uVar6 = 0xff;
            if (uVar8 < 0xff) {
              uVar6 = uVar8;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar6;
            *(undefined1 *)(uVar4 + lVar7) = 0;
            *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 2;
          }
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*param_2 == '\0') {
            if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 1U) {
              return 0x80100009;
            }
            *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar7) = 0x2c;
            lVar7 = *(longlong *)(param_2 + 0x28) + 1;
            *(longlong *)(param_2 + 0x28) = lVar7;
          }
          else {
            if (*(ulonglong *)(param_2 + 8) <= lVar7 + 4U) {
              return 0x80100009;
            }
            plVar9 = (longlong *)(param_2 + 0x48);
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
            *(undefined4 *)(lVar7 + *plVar9) = 0x2c0002;
            *plVar9 = *plVar9 + lVar7 + 2;
            uVar6 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
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
            lVar7 = 2;
            *(ulonglong *)(param_2 + 0x30) = uVar4;
          }
          plVar9 = (longlong *)(param_2 + 0x48);
          if (*param_2 != '\0') {
            uVar4 = lVar7 + 2;
            if (*(ulonglong *)(param_2 + 8) <= uVar4) {
              return 0x80100009;
            }
            *(char *)(*plVar9 + -1) = (char)lVar7;
            uVar8 = *(longlong *)(param_2 + 8) - uVar4;
            param_2[0x28] = '\x01';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            lVar7 = *plVar9;
            *plVar9 = (longlong)(uVar4 + lVar7);
            *(ulonglong *)(param_2 + 8) = uVar8;
            uVar6 = 0xff;
            if (uVar8 < 0xff) {
              uVar6 = uVar8;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar6;
            *(undefined1 *)(uVar4 + lVar7) = 0;
            *(undefined2 *)(*plVar9 + -2) = 0xb;
          }
          uVar5 = FUN_180449ba0(param_2 + 0x10,*(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x38)
                                ,0,0,0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
        }
      }
      lVar7 = *(longlong *)(param_2 + 0x28);
      if (*param_2 != '\0') {
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 4U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        *(undefined4 *)(lVar7 + *(longlong *)(param_2 + 0x48)) = 0x290004;
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar7 + 2;
        uVar6 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
        *(ulonglong *)(param_2 + 8) = uVar6;
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        uVar4 = 0xff;
        if (uVar6 < 0xff) {
          uVar4 = uVar6;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar4;
        return 0x100000;
      }
      if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 1U) {
        return 0x80100009;
      }
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar7) = 0x29;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      return 0x100000;
    }
  }
  uVar5 = (**(code **)(param_1 + 0x208))(param_1,param_2,param_3);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  return 0x100000;
}




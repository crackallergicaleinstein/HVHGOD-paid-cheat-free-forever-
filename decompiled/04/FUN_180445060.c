// FUN_180445060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445060 */

undefined8 FUN_180445060(longlong param_1,char *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((ulonglong)(longlong)*(int *)(*param_3 + 4) < 0x6db) {
    lVar10 = (longlong)&PTR_s_invalid_180764500 + (longlong)*(int *)(*param_3 + 4) * 9;
    cVar3 = *param_2;
    if (lVar10 != 0) {
      if (cVar3 != '\0') {
        uVar5 = *(longlong *)(param_2 + 0x28) + 2;
        if (*(ulonglong *)(param_2 + 8) <= uVar5) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
        uVar9 = *(longlong *)(param_2 + 8) - uVar5;
        param_2[0x28] = '\x01';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        lVar2 = *(longlong *)(param_2 + 0x48);
        *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar5 + lVar2);
        *(ulonglong *)(param_2 + 8) = uVar9;
        uVar7 = 0xff;
        if (uVar9 < 0xff) {
          uVar7 = uVar9;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar7;
        *(undefined1 *)(uVar5 + lVar2) = 0;
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 6;
      }
      if ((*(int *)(*param_3 + 0x68) == 3) &&
         (uVar6 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180769008,*(undefined4 *)(param_1 + 0x38)),
         (int)uVar6 < 0)) {
        return uVar6;
      }
      uVar6 = FUN_180444360(param_2 + 0x10,lVar10,*(undefined4 *)(param_1 + 0x38));
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      uVar5 = 0;
      if (*(byte *)(*param_3 + 0x19) != 0) {
        do {
          lVar10 = uVar5 * 0x50 + param_3[1];
          if ((*(int *)(lVar10 + 0x20) == 2) &&
             ((iVar1 = *(int *)(lVar10 + 0x28), iVar1 == 1 || (iVar1 == 4)))) {
            uVar4 = FUN_180445790(param_1,param_3);
            if (uVar4 < 0x41) {
              if (uVar4 == 0x40) {
                if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) break;
                *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28))
                     = 0x71;
              }
              else if (uVar4 == 8) {
                if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) break;
                *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28))
                     = 0x62;
              }
              else if (uVar4 == 0x10) {
                if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) break;
                *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28))
                     = 0x77;
              }
              else {
                if ((uVar4 != 0x20) ||
                   (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U)) break;
                *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28))
                     = 0x6c;
              }
            }
            else if (uVar4 == 0x80) {
              if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) break;
              *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28)) =
                   0x78;
            }
            else if (uVar4 == 0x100) {
              if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) break;
              *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28)) =
                   0x79;
            }
            else {
              if ((uVar4 != 0x200) ||
                 (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U)) break;
              *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28)) =
                   0x7a;
            }
            *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
            break;
          }
          bVar8 = (char)uVar5 + 1;
          uVar5 = (ulonglong)bVar8;
        } while (bVar8 < *(byte *)(*param_3 + 0x19));
      }
      if (*(char *)(param_1 + 9) == '\0') {
        return 0x100000;
      }
      iVar1 = *(int *)(*param_3 + 0x68);
      if (iVar1 == 0) {
        return 0x100000;
      }
      if (iVar1 == 1) {
        uVar6 = FUN_180444360(param_2 + 0x10,&PTR_s_short_180756e00,*(undefined4 *)(param_1 + 0x38))
        ;
        return uVar6;
      }
      if (iVar1 == 2) {
        uVar6 = FUN_180444360(param_2 + 0x10,&PTR_s_near_18072c890,*(undefined4 *)(param_1 + 0x38));
        return uVar6;
      }
      return 0x80100004;
    }
  }
  else {
    cVar3 = *param_2;
  }
  if (cVar3 == '\0') {
    uVar6 = FUN_180444360(param_2 + 0x10,&PTR_s_invalid_180753210,*(undefined4 *)(param_1 + 0x38));
    if ((int)uVar6 < 0) {
      return uVar6;
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x28);
    if (*(ulonglong *)(param_2 + 8) <= lVar10 + 10U) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar10;
    lVar2 = *(longlong *)(param_2 + 0x48);
    *(undefined8 *)(lVar2 + lVar10) = 0x696c61766e690006;
    *(undefined2 *)(lVar2 + 8 + lVar10) = 100;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar10 + 2;
    uVar7 = *(longlong *)(param_2 + 8) - (lVar10 + 2);
    param_2[0x28] = '\b';
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
  return 0x100000;
}




// FUN_180448a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180448a60 */

undefined8 FUN_180448a60(longlong param_1,char *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((ulonglong)(longlong)*(int *)(*param_3 + 4) < 0x6db) {
    lVar8 = (longlong)&PTR_s_invalid_180764500 + (longlong)*(int *)(*param_3 + 4) * 9;
    cVar3 = *param_2;
    if (lVar8 != 0) {
      if (cVar3 != '\0') {
        uVar4 = *(longlong *)(param_2 + 0x28) + 2;
        if (*(ulonglong *)(param_2 + 8) <= uVar4) {
          return 0x80100009;
        }
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
        lVar2 = *(longlong *)(param_2 + 0x48);
        *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar4 + lVar2);
        *(ulonglong *)(param_2 + 8) = uVar7;
        uVar6 = 0xff;
        if (uVar7 < 0xff) {
          uVar6 = uVar7;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        *(undefined1 *)(uVar4 + lVar2) = 0;
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 6;
      }
      param_2 = param_2 + 0x10;
      uVar5 = FUN_180444360(param_2,lVar8,*(undefined4 *)(param_1 + 0x38));
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      iVar1 = *(int *)(*param_3 + 0x68);
      if (iVar1 == 3) {
        uVar5 = FUN_180444360(param_2,&PTR_DAT_18077d768,*(undefined4 *)(param_1 + 0x38));
        return uVar5;
      }
      if (*(char *)(param_1 + 9) == '\0') {
        return 0x100000;
      }
      if (iVar1 == 0) {
        return 0x100000;
      }
      if (iVar1 == 1) {
        uVar5 = FUN_180444360(param_2,&PTR_s_short_180756e00,*(undefined4 *)(param_1 + 0x38));
        return uVar5;
      }
      if (iVar1 == 2) {
        uVar5 = FUN_180444360(param_2,&PTR_s_near_18072c890,*(undefined4 *)(param_1 + 0x38));
        return uVar5;
      }
      return 0x80100004;
    }
  }
  else {
    cVar3 = *param_2;
  }
  if (cVar3 == '\0') {
    uVar5 = FUN_180444360(param_2 + 0x10,&PTR_s_invalid_180753210,*(undefined4 *)(param_1 + 0x38));
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  else {
    lVar8 = *(longlong *)(param_2 + 0x28);
    if (*(ulonglong *)(param_2 + 8) <= lVar8 + 10U) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar8;
    lVar2 = *(longlong *)(param_2 + 0x48);
    *(undefined8 *)(lVar2 + lVar8) = 0x696c61766e690006;
    *(undefined2 *)(lVar2 + 8 + lVar8) = 100;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar8 + 2;
    uVar6 = *(longlong *)(param_2 + 8) - (lVar8 + 2);
    param_2[0x28] = '\b';
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
  return 0x100000;
}




// FUN_180448c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180448c70 */

undefined8 FUN_180448c70(longlong param_1,char *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((ulonglong)(longlong)param_4 < 0x10a) {
    lVar7 = (longlong)&PTR_DAT_1807410a0 + (longlong)param_4 * 9;
    cVar2 = *param_2;
    if (lVar7 != 0) {
      if (cVar2 != '\0') {
        uVar3 = *(longlong *)(param_2 + 0x28) + 2;
        if (*(ulonglong *)(param_2 + 8) <= uVar3) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
        uVar6 = *(longlong *)(param_2 + 8) - uVar3;
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
        *(ulonglong *)(param_2 + 8) = uVar6;
        uVar5 = 0xff;
        if (uVar6 < 0xff) {
          uVar5 = uVar6;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        *(undefined1 *)(uVar3 + lVar1) = 0;
        *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 7;
      }
      uVar4 = FUN_180444360(param_2 + 0x10,lVar7,*(undefined4 *)(param_1 + 0x3c));
      return uVar4;
    }
  }
  else {
    cVar2 = *param_2;
  }
  if (cVar2 == '\0') {
    uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_invalid_1807138f8,*(undefined4 *)(param_1 + 0x3c));
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    return 0x100000;
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  if (*(ulonglong *)(param_2 + 8) <= lVar7 + 10U) {
    return 0x80100009;
  }
  *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
  lVar1 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + lVar7) = 0x696c61766e690007;
  *(undefined2 *)(lVar1 + 8 + lVar7) = 100;
  *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar7 + 2;
  uVar5 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
  param_2[0x28] = '\b';
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
  return 0x100000;
}




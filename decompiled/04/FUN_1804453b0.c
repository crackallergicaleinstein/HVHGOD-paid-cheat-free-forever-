// FUN_1804453b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804453b0 */

undefined8 FUN_1804453b0(longlong param_1,char *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (*(ulonglong *)(param_2 + 0x30) < lVar1 + 1U) {
      return 0x80100009;
    }
    *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x25;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  }
  else {
    if (*(ulonglong *)(param_2 + 8) <= lVar1 + 4U) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
    *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x250007;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1 + 2;
    uVar4 = *(longlong *)(param_2 + 8) - (lVar1 + 2);
    param_2[0x28] = '\x02';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    *(ulonglong *)(param_2 + 8) = uVar4;
    uVar2 = 0xff;
    if (uVar4 < 0xff) {
      uVar2 = uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar2;
  }
  if ((0x109 < (ulonglong)(longlong)param_4) ||
     (ppuVar5 = (undefined **)((longlong)&PTR_DAT_1807410a0 + (longlong)param_4 * 9),
     ppuVar5 == (undefined **)0x0)) {
    ppuVar5 = &PTR_s_invalid_1807138f8;
  }
  uVar3 = FUN_180444360(param_2 + 0x10,ppuVar5,*(undefined4 *)(param_1 + 0x3c));
  return uVar3;
}




// FUN_18060e188 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e188 */

undefined8 FUN_18060e188(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar2 + 1;
  pwVar4 = (wchar_t *)*puVar2;
  iVar5 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar5 == -1) {
    iVar5 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar4;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"渨汵⥬";
      *(undefined1 **)(param_1 + 0x40) = &DAT_1808597dc;
    }
    uVar3 = FUN_18061ed10(pwVar4,(longlong)iVar5);
  }
  else {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar3 = FUN_18061eea0(pwVar4,(longlong)iVar5);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  return 1;
}




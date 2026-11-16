// FUN_1804faee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804faee0 */

void FUN_1804faee0(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_1804fae00(param_1,param_2,0,*(undefined4 *)(param_1 + 0x18),param_4);
  iVar1 = *(int *)(param_1 + 0x18);
  **(undefined1 **)(param_1 + 0x30) = (*(undefined1 **)(param_1 + 0x30))[iVar1];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar1;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (0 < param_4) {
    iVar1 = FUN_1804f9170(param_1,0,param_3,param_4);
    if (0 < iVar1) {
      param_2[2] = param_4;
      param_2[1] = param_4;
      *param_2 = param_4;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
    }
  }
  return;
}




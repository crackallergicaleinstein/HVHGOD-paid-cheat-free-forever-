// FUN_1801784f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801784f0 */

void FUN_1801784f0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x101) = 1;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0xfc) = 1;
    FUN_1805f6a54(param_1 + 0xb0);
    return;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_1805faa30(param_1 + 0xb0,uVar1,(undefined4 *)(param_1 + 0xfc));
  return;
}




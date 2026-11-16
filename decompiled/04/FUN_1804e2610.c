// FUN_1804e2610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2610 */

void FUN_1804e2610(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1804e26d0();
  *(int *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *(int *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x28) = param_4;
  if (param_2 == 0) {
    iVar1 = 4;
  }
  else if (param_2 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  uVar2 = FUN_1804b8110((longlong)(iVar1 * param_3 * param_4));
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_18063ab10(uVar2,0,(longlong)
                        (*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x28) *
                        *(int *)(param_1 + 0x2c)));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}




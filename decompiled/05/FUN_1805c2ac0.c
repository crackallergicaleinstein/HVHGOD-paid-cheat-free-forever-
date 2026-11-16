// FUN_1805c2ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2ac0 */

void FUN_1805c2ac0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x636d6170,param_2,param_1 + 0x298);
  if (iVar1 == 0) {
    iVar1 = FUN_180577d80(param_2,*(undefined4 *)(param_1 + 0x298),param_1 + 0x290);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return;
}




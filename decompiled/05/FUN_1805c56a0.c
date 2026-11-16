// FUN_1805c56a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c56a0 */

void FUN_1805c56a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    (**(code **)(lVar4 + 0x80))(param_1,lVar1 + 0x68);
    (**(code **)(lVar4 + 0x78))(param_1,lVar1 + 0x48);
    FUN_180578860(uVar2,lVar1 + 0x80);
    FUN_18057abd0(uVar3,lVar1);
  }
  return;
}




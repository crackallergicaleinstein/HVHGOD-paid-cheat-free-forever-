// FUN_18057dfd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057dfd0 */

undefined8 FUN_18057dfd0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(longlong *)(param_1 + 0x1180) = param_2;
  uVar2 = *(uint *)(param_2 + 0x24);
  *(uint *)(param_1 + 0x1178) = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x20c);
  uVar3 = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  if ((((iVar1 == 2) || (iVar1 == 3)) && (uVar3 = 1, iVar1 == 2)) || (iVar1 == 4)) {
    uVar3 = uVar3 | 2;
  }
  if ((iVar1 - 1U & 0xfffffffd) != 0) {
    uVar3 = uVar3 | 4;
  }
  *(uint *)(param_1 + 0x1178) = uVar2 | 4;
  uVar2 = uVar3 | 8;
  if (iVar1 != 2) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x117c) = uVar2;
  return 0;
}




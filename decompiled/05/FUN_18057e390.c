// FUN_18057e390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e390 */

undefined8 FUN_18057e390(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 0x1180) = param_2;
  uVar5 = *(uint *)(param_2 + 0x24);
  *(uint *)(param_1 + 0x1178) = uVar5;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x24c);
  uVar4 = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  if ((((iVar1 == 2) || (iVar1 == 3)) && (uVar4 = 1, iVar1 == 2)) || (iVar1 == 4)) {
    uVar4 = uVar4 | 2;
  }
  if ((iVar1 - 1U & 0xfffffffd) == 0) {
    uVar3 = uVar4 | 8;
    if (iVar1 != 2) {
      uVar3 = uVar4;
    }
    if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_18057e421;
  }
  else {
    uVar3 = uVar4 | 0xc;
    if (iVar1 != 2) {
      uVar3 = uVar4 | 4;
    }
LAB_18057e421:
    if ((*(byte *)(lVar2 + 0xc) & 1) == 0) goto LAB_18057e42c;
  }
  uVar5 = uVar5 | 1;
LAB_18057e42c:
  *(uint *)(param_1 + 0x117c) = uVar3;
  *(uint *)(param_1 + 0x1178) = uVar5;
  return 0;
}




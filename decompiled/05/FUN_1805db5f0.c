// FUN_1805db5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805db5f0 */

uint FUN_1805db5f0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar7 = *(uint *)(param_1 + 0x18);
  if (((*(char *)(param_1 + 0x20) == '\0') && (uVar7 < *(uint *)(param_1 + 0x1c))) &&
     (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44))) {
LAB_1805db6cc:
    *(uint *)(param_1 + 0x18) = uVar7 + uVar6;
    iVar3 = -(uVar7 & 7);
    iVar8 = iVar3 + 8;
    pbVar9 = (byte *)(param_1 + 9 + (ulonglong)(uVar7 >> 3));
    uVar6 = uVar6 - iVar8;
    uVar7 = (uint)(*(byte *)((ulonglong)(uVar7 >> 3) + 8 + param_1) >> (sbyte)(uVar7 & 7));
    if (7 < uVar6) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar7 = uVar7 | (uint)bVar1 << ((byte)iVar8 & 0x1f);
      iVar8 = iVar3 + 0x10;
      uVar6 = uVar6 - 8;
    }
    if (uVar6 != 0) {
      uVar7 = uVar7 | ((1 << ((byte)uVar6 & 0x1f)) - 1U & (uint)*pbVar9) << ((byte)iVar8 & 0x1f);
    }
    return uVar7;
  }
  if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0x3c) = uVar6;
    if (0x10 < uVar6) {
      return 0xffffffff;
    }
    if (uVar6 < *(uint *)(param_1 + 0x30)) {
      iVar3 = (1 << ((byte)uVar6 & 0x1f)) + -0x100;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38) + 1;
    }
    *(int *)(param_1 + 0x44) = iVar3;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x3c) = 9;
    uVar6 = 9;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = FUN_180578980(*(undefined8 *)(param_1 + 200),param_1 + 8,uVar6);
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar7 = 0;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar4;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 4) = (uint)(uVar4 < uVar2);
    uVar5 = uVar4 * 8;
    *(uint *)(param_1 + 0x1c) = uVar5;
    if ((uVar2 < uVar5) && (*(uint *)(param_1 + 0x1c) = (uVar5 - uVar2) + 1, uVar4 != 0))
    goto LAB_1805db6cc;
  }
  return 0xffffffff;
}




// FUN_1804282c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804282c0 */

void FUN_1804282c0(longlong param_1,float param_2,float param_3,byte param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    lVar9 = (longlong)iVar2 * 0x20;
    fVar4 = param_2 - *(float *)(lVar9 + -0x20 + lVar7);
    fVar5 = param_3 - *(float *)(lVar9 + -0x1c + lVar7);
    if (fVar5 * fVar5 + fVar4 * fVar4 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) {
      pbVar1 = (byte *)(lVar9 + -4 + lVar7);
      *pbVar1 = *pbVar1 | param_4;
      return;
    }
  }
  iVar8 = *(int *)(param_1 + 0x2c);
  if (iVar8 < iVar2 + 1) {
    if (iVar8 < 1) {
      iVar8 = 0x40;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    *(int *)(param_1 + 0x2c) = iVar8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)iVar8;
    uVar6 = SUB168(ZEXT816(0x20) * auVar3,0);
    if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar6);
    *(longlong *)(param_1 + 0x20) = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar9 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
  *(float *)(lVar9 + lVar7) = param_2;
  *(float *)(lVar9 + 4 + lVar7) = param_3;
  *(byte *)(lVar9 + 0x1c + lVar7) = param_4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}




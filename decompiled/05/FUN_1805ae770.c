// FUN_1805ae770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ae770 */

undefined8 FUN_1805ae770(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  short sVar13;
  ushort uStack_a;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return 0x23;
  }
  if (*(uint *)(lVar4 + 0x10) <= param_3) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = *(uint *)(lVar4 + 0xf8);
  }
  else {
    param_3 = param_3 - 1;
  }
  uVar12 = (ulonglong)param_3;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x38);
  puVar1 = (undefined8 *)(lVar5 + uVar12 * 0x30);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar12 * 0x30);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar2 = (undefined2 *)(lVar5 + 0x10 + uVar12 * 0x30);
  uVar6 = *puVar2;
  sVar7 = puVar2[2];
  sVar13 = puVar2[4];
  *(uint *)(param_1 + 0x68) = (uint)(ushort)puVar2[1];
  *(undefined2 *)(param_1 + 0x6c) = uVar6;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(int *)(param_1 + 0x70) = (int)uVar9;
  FUN_18057a2a0(param_1,uVar8,uVar12,param_4,uVar6,sVar13,uVar10);
  sVar3 = *(short *)(*(longlong *)(lVar4 + 0xe8) + 0x78);
  if (sVar3 == 1) {
    *(undefined1 *)(param_1 + 0x82) = 1;
  }
  else if (sVar3 == 2) {
    *(undefined1 *)(param_1 + 0x82) = 3;
  }
  else if (sVar3 == 4) {
    *(undefined1 *)(param_1 + 0x82) = 4;
  }
  else if (sVar3 == 8) {
    *(undefined1 *)(param_1 + 0x82) = 2;
    *(undefined2 *)(param_1 + 0x80) = 0x100;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x62697473;
  *(int *)(param_1 + 0x90) = (int)sVar7;
  uStack_a = (ushort)((ulonglong)uVar11 >> 0x30);
  *(int *)(param_1 + 0x38) = (int)sVar7 << 6;
  *(int *)(param_1 + 0x94) = (int)sVar13;
  *(int *)(param_1 + 0x3c) = (int)sVar13 << 6;
  *(uint *)(param_1 + 0x40) = (uint)uStack_a << 6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
  FUN_18057bc10((int *)(param_1 + 0x30),
                (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0xe8) + 10) << 6);
  return 0;
}




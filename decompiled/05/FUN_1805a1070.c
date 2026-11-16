// FUN_1805a1070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a1070 */

void FUN_1805a1070(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  
  FUN_18063ab10(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  *(byte *)(param_2 + 8) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    piVar6 = (int *)(param_1 + 0xbc);
    puVar4 = (undefined2 *)(param_2 + 0xc);
    do {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      *puVar4 = (short)((uint)(iVar3 + 0x8000) >> 0x10);
      uVar7 = uVar7 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xb9);
  *(byte *)(param_2 + 9) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    piVar6 = (int *)(param_1 + 0xf4);
    puVar4 = (undefined2 *)(param_2 + 0x28);
    do {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      *puVar4 = (short)((uint)(iVar3 + 0x8000) >> 0x10);
      uVar7 = uVar7 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xba);
  *(byte *)(param_2 + 10) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    piVar6 = (int *)(param_1 + 0x11c);
    puVar4 = (undefined2 *)(param_2 + 0x3c);
    do {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      *puVar4 = (short)((uint)(iVar3 + 0x8000) >> 0x10);
      uVar7 = uVar7 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0xbb);
  *(byte *)(param_2 + 0xb) = bVar1;
  if (bVar1 != 0) {
    uVar7 = (ulonglong)bVar1;
    piVar6 = (int *)(param_1 + 0x154);
    puVar4 = (undefined2 *)(param_2 + 0x58);
    do {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      *puVar4 = (short)((uint)(iVar3 + 0x8000) >> 0x10);
      uVar7 = uVar7 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x184);
  *(undefined2 *)(param_2 + 0x78) = *(undefined2 *)(param_1 + 0x188);
  *(undefined2 *)(param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x18c);
  bVar1 = *(byte *)(param_1 + 400);
  *(byte *)(param_2 + 0x7c) = bVar1;
  if (bVar1 != 0) {
    puVar5 = (undefined2 *)(param_2 + 0x80);
    uVar7 = (ulonglong)bVar1;
    puVar4 = (undefined2 *)(param_1 + 0x194);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar1 = *(byte *)(param_1 + 0x191);
  *(byte *)(param_2 + 0x7d) = bVar1;
  if (bVar1 != 0) {
    puVar5 = (undefined2 *)(param_2 + 0x9a);
    uVar7 = (ulonglong)bVar1;
    puVar4 = (undefined2 *)(param_1 + 0x1c8);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined1 *)(param_2 + 0x7e) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x204);
  return;
}




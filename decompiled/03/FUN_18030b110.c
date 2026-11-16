// FUN_18030b110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030b110 */

void FUN_18030b110(longlong param_1,uint *param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  uVar7 = uVar2 | 4;
  if (param_3 == '\0') {
    uVar7 = uVar2 & 0xfffffffffffffffb;
  }
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffb;
  *(ulonglong *)(param_1 + 0x60) = uVar7;
  *(ulonglong *)(param_1 + 0x68) =
       *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar2 ^ (uint)uVar7) & 4);
  iVar6 = 0;
  if (0 < (int)param_2[4]) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar8 + 8 + *(longlong *)(param_2 + 6));
      puVar5 = (uint *)0x0;
      if (lVar3 != 0) {
        puVar5 = (uint *)(lVar3 + 0x10);
      }
      if (puVar5 != (uint *)0x0) {
        *puVar5 = *puVar5 | 1;
        *(ulonglong *)(puVar5 + 2) = *(ulonglong *)(puVar5 + 2) & 0xfffffffffffffffb;
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar6 < (int)param_2[4]);
  }
  puVar5 = (uint *)0x0;
  if (*(longlong *)(param_2 + 10) != 0) {
    puVar5 = (uint *)(*(longlong *)(param_2 + 10) + 0x10);
  }
  if (puVar5 != (uint *)0x0) {
    *param_2 = *param_2 | 2;
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *puVar5 = *puVar5 | 1;
    uVar1 = *puVar5;
    *(undefined8 *)(puVar5 + 2) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *puVar5 = uVar1 | 2;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *puVar5 = uVar1 | 6;
    *(undefined8 *)(puVar5 + 6) = uVar4;
  }
  return;
}




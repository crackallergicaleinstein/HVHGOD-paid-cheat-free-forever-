// FUN_18031e380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e380 */

void FUN_18031e380(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffffd;
  *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffffffd;
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffd;
  iVar5 = 0;
  if (0 < (int)param_2[4]) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + 8 + *(longlong *)(param_2 + 6));
      puVar4 = (uint *)0x0;
      if (lVar2 != 0) {
        puVar4 = (uint *)(lVar2 + 0x10);
      }
      if (puVar4 != (uint *)0x0) {
        *puVar4 = *puVar4 | 1;
        *(ulonglong *)(puVar4 + 2) = *(ulonglong *)(puVar4 + 2) & 0xfffffffffffffffd;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < (int)param_2[4]);
  }
  puVar4 = (uint *)0x0;
  if (*(longlong *)(param_2 + 10) != 0) {
    puVar4 = (uint *)(*(longlong *)(param_2 + 10) + 0x10);
  }
  if (puVar4 != (uint *)0x0) {
    *param_2 = *param_2 | 2;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *puVar4 = *puVar4 | 1;
    uVar1 = *puVar4;
    *(undefined8 *)(puVar4 + 2) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *puVar4 = uVar1 | 2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar4 = uVar1 | 6;
    *(undefined8 *)(puVar4 + 6) = uVar3;
  }
  return;
}




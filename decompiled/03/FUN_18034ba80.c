// FUN_18034ba80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034ba80 */

void FUN_18034ba80(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 5) != '\0')) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    puVar7 = (uint *)0x0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      puVar7 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
    }
    if (puVar7 != (uint *)0x0) {
      uVar2 = *(ulonglong *)(param_2 + 0x60);
      iVar8 = 0;
      *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffb;
      uVar6 = uVar2 | 4;
      *(ulonglong *)(param_2 + 0x60) = uVar6;
      *(ulonglong *)(param_2 + 0x68) =
           *(ulonglong *)(param_2 + 0x68) | (ulonglong)(((uint)uVar6 ^ (uint)uVar2) & 4);
      if (0 < (int)puVar7[4]) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 8 + *(longlong *)(puVar7 + 6));
          puVar5 = (uint *)0x0;
          if (lVar3 != 0) {
            puVar5 = (uint *)(lVar3 + 0x10);
          }
          if (puVar5 != (uint *)0x0) {
            *puVar5 = *puVar5 | 1;
            *(ulonglong *)(puVar5 + 2) = *(ulonglong *)(puVar5 + 2) & 0xfffffffffffffffb;
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar8 < (int)puVar7[4]);
      }
      puVar5 = (uint *)0x0;
      if (*(longlong *)(puVar7 + 10) != 0) {
        puVar5 = (uint *)(*(longlong *)(puVar7 + 10) + 0x10);
      }
      if (puVar5 != (uint *)0x0) {
        *puVar7 = *puVar7 | 2;
        uVar4 = *(undefined8 *)(param_2 + 0x60);
        *puVar5 = *puVar5 | 1;
        uVar1 = *puVar5;
        *(undefined8 *)(puVar5 + 2) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x68);
        *puVar5 = uVar1 | 2;
        *(undefined8 *)(puVar5 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x70);
        *puVar5 = uVar1 | 6;
        *(undefined8 *)(puVar5 + 6) = uVar4;
      }
    }
  }
  return;
}




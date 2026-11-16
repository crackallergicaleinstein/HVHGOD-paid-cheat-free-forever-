// FUN_18059c520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c520 */

int FUN_18059c520(longlong param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  
  puVar1 = *(uint **)(param_1 + 0x2e0);
  bVar2 = 0;
  if (puVar1 == (uint *)0x0) {
    iVar5 = 6;
  }
  else {
    if (puVar1[1] < param_2) {
      param_2 = puVar1[1];
    }
    uVar9 = 0;
    bVar3 = 0;
    if (*puVar1 != 0) {
      do {
        bVar2 = bVar3;
        uVar4 = 0;
        uVar7 = 0x10000;
        iVar5 = 0x10000;
        if (puVar1[1] != 0) {
          piVar8 = param_3;
          do {
            if (uVar4 < param_2) {
              iVar5 = 0x10000 - *piVar8;
              if (((uint)uVar9 >> (uVar4 & 0x1f) & 1) != 0) {
                iVar5 = *piVar8;
              }
              if (iVar5 < 1) {
                iVar5 = 0;
                break;
              }
              if (iVar5 < 0x10000) {
                lVar6 = (longlong)iVar5 * (longlong)(int)uVar7;
                uVar7 = lVar6 + 0x8000 + (lVar6 >> 0x3f) >> 0x10;
              }
            }
            else {
              uVar7 = (ulonglong)(uint)((int)uVar7 >> 1);
            }
            iVar5 = (int)uVar7;
            uVar4 = uVar4 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar4 < puVar1[1]);
        }
        if (*(int *)(*(longlong *)(puVar1 + 0x42) + uVar9 * 4) != iVar5) {
          *(int *)(*(longlong *)(puVar1 + 0x42) + uVar9 * 4) = iVar5;
          bVar2 = 1;
        }
        uVar4 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar4;
        bVar3 = bVar2;
      } while (uVar4 < *puVar1);
    }
    iVar5 = bVar2 - 1;
  }
  return iVar5;
}




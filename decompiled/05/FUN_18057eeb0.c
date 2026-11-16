// FUN_18057eeb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057eeb0 */

void FUN_18057eeb0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  ushort uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar1 = *(ulonglong *)((longlong)param_2 * 0x898 + 0x60 + param_1);
  if (uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar1 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x58 + param_1) * 0x48;
  }
  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 0x117c) & 1;
joined_r0x00018057ef51:
    if (bVar2 != 0) {
      bVar3 = true;
      goto LAB_18057eeee;
    }
  }
  else if (param_2 == 1) {
    bVar2 = *(byte *)(param_1 + 0x117c) & 2;
    goto joined_r0x00018057ef51;
  }
  bVar3 = false;
LAB_18057eeee:
  if (uVar1 < uVar9) {
    plVar6 = (longlong *)(uVar1 + 0x38);
    lVar10 = ((uVar9 - uVar1) - 1) / 0x48 + 1;
    do {
      lVar7 = *plVar6;
      if (bVar3) {
        do {
          puVar4 = *(ushort **)(lVar7 + 0x38);
          while( true ) {
            if (param_2 == 0) {
              *(int *)(puVar4 + 8) = (int)plVar6[-6];
              uVar5 = 4;
            }
            else {
              *(int *)(puVar4 + 10) = (int)plVar6[-6];
              uVar5 = 8;
            }
            *puVar4 = *puVar4 | uVar5;
            if (puVar4 == *(ushort **)(lVar7 + 0x40)) break;
            puVar4 = *(ushort **)(puVar4 + 0x10);
          }
          lVar7 = *(longlong *)(lVar7 + 0x18);
        } while (lVar7 != *plVar6);
      }
      else {
        iVar8 = (int)plVar6[-6] - *(int *)((longlong)plVar6 + -0x34);
        do {
          puVar4 = *(ushort **)(lVar7 + 0x38);
          while( true ) {
            if (param_2 == 0) {
              *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + iVar8;
              uVar5 = 4;
            }
            else {
              *(int *)(puVar4 + 10) = *(int *)(puVar4 + 10) + iVar8;
              uVar5 = 8;
            }
            *puVar4 = *puVar4 | uVar5;
            if (puVar4 == *(ushort **)(lVar7 + 0x40)) break;
            puVar4 = *(ushort **)(puVar4 + 0x10);
          }
          lVar7 = *(longlong *)(lVar7 + 0x18);
        } while (lVar7 != *plVar6);
      }
      plVar6 = plVar6 + 9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}




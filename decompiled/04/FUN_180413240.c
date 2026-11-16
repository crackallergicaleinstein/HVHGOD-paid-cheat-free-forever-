// FUN_180413240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180413240 */

void FUN_180413240(longlong *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  
  plVar11 = (longlong *)param_1[1];
  lVar3 = param_1[3];
  lVar6 = param_1[4];
  lVar7 = param_1[5];
  iVar10 = 0;
  lVar4 = plVar11[1];
  lVar5 = plVar11[2];
  lVar12 = plVar11[3];
  *plVar11 = param_1[2];
  plVar11[1] = lVar3;
  plVar11[2] = lVar6;
  plVar11[3] = lVar7;
  lVar3 = param_1[7];
  lVar6 = param_1[8];
  lVar7 = param_1[9];
  plVar11[4] = param_1[6];
  plVar11[5] = lVar3;
  plVar11[6] = lVar6;
  plVar11[7] = lVar7;
  lVar3 = param_1[0xb];
  lVar6 = param_1[0xc];
  lVar7 = param_1[0xd];
  plVar11[8] = param_1[10];
  plVar11[9] = lVar3;
  plVar11[10] = lVar6;
  plVar11[0xb] = lVar7;
  lVar3 = param_1[0xf];
  plVar11[0xc] = param_1[0xe];
  plVar11[0xd] = lVar3;
  plVar11[0xe] = param_1[0x10];
  lVar3 = param_1[1];
  *(longlong *)(lVar3 + 8) = lVar4;
  *(longlong *)(lVar3 + 0x10) = lVar5;
  *(longlong *)(lVar3 + 0x18) = lVar12;
  *(int *)(param_1[1] + 0x10) = (int)param_1[0xbe];
  if (0 < (int)param_1[0xbe]) {
    lVar12 = 0;
    plVar11 = param_1 + 0x1e;
    do {
      lVar12 = lVar12 + 8;
      lVar5 = *plVar11;
      lVar6 = plVar11[1];
      lVar7 = plVar11[2];
      lVar8 = plVar11[3];
      lVar3 = plVar11[4];
      plVar11 = plVar11 + 5;
      lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x18) + lVar12);
      plVar9 = (longlong *)0x0;
      if (lVar4 != 0) {
        plVar9 = (longlong *)(lVar4 + 0x10);
      }
      iVar10 = iVar10 + 1;
      *plVar9 = lVar5;
      plVar9[1] = lVar6;
      plVar9[2] = lVar7;
      plVar9[3] = lVar8;
      plVar9[4] = lVar3;
    } while (iVar10 < (int)param_1[0xbe]);
  }
  lVar12 = param_1[0x17];
  lVar3 = param_1[0x18];
  plVar11 = (longlong *)0x0;
  if (*(longlong *)(param_1[1] + 0x30) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1[1] + 0x30) + 0x10);
  }
  *plVar11 = param_1[0x16];
  plVar11[1] = lVar12;
  *(int *)(plVar11 + 2) = (int)lVar3;
  plVar11 = (longlong *)0x0;
  if (*(longlong *)(param_1[1] + 0x28) != 0) {
    plVar11 = (longlong *)(*(longlong *)(param_1[1] + 0x28) + 0x10);
  }
  if (plVar11 != (longlong *)0x0) {
    lVar12 = param_1[0x1a];
    lVar3 = param_1[0x1b];
    lVar4 = param_1[0x1c];
    *plVar11 = param_1[0x19];
    plVar11[1] = lVar12;
    plVar11[2] = lVar3;
    plVar11[3] = lVar4;
  }
  lVar12 = *param_1;
  lVar3 = param_1[0x13];
  lVar4 = param_1[0x14];
  lVar5 = param_1[0x15];
  *(longlong *)(lVar12 + 0x58) = param_1[0x12];
  *(longlong *)(lVar12 + 0x60) = lVar3;
  *(longlong *)(lVar12 + 0x68) = lVar4;
  *(longlong *)(lVar12 + 0x70) = lVar5;
  *(char *)(*param_1 + 0x88) = (char)param_1[0xc0];
  *(undefined4 *)(*param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x5f4);
  lVar12 = *param_1;
  lVar3 = param_1[0xbf];
  puVar1 = (uint *)(lVar12 + 0x20);
  *puVar1 = *puVar1 | 0x20;
  *(int *)(lVar12 + 0x4c) = (int)lVar3;
  lVar12 = *param_1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x5fc);
  puVar1 = (uint *)(lVar12 + 0x20);
  *puVar1 = *puVar1 | 0x40;
  *(undefined4 *)(lVar12 + 0x50) = uVar2;
  *(int *)(*param_1 + 0x20) = (int)param_1[0x11];
  return;
}




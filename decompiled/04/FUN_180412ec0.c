// FUN_180412ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180412ec0 */

longlong * FUN_180412ec0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int local_18 [4];
  
  *param_1 = param_2;
  plVar12 = param_1 + 0x1e;
  plVar7 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  param_1[1] = (longlong)plVar7;
  lVar9 = plVar7[1];
  lVar2 = plVar7[2];
  lVar3 = plVar7[3];
  param_1[2] = *plVar7;
  param_1[3] = lVar9;
  param_1[4] = lVar2;
  param_1[5] = lVar3;
  lVar9 = plVar7[5];
  lVar2 = plVar7[6];
  lVar3 = plVar7[7];
  param_1[6] = plVar7[4];
  param_1[7] = lVar9;
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  lVar9 = plVar7[9];
  lVar2 = plVar7[10];
  lVar3 = plVar7[0xb];
  param_1[10] = plVar7[8];
  param_1[0xb] = lVar9;
  param_1[0xc] = lVar2;
  param_1[0xd] = lVar3;
  lVar9 = plVar7[0xd];
  param_1[0xe] = plVar7[0xc];
  param_1[0xf] = lVar9;
  param_1[0x10] = plVar7[0xe];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x20);
  lVar9 = *(longlong *)(param_2 + 0x60);
  lVar2 = *(longlong *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x70);
  param_1[0x12] = *(longlong *)(param_2 + 0x58);
  param_1[0x13] = lVar9;
  param_1[0x14] = lVar2;
  param_1[0x15] = lVar3;
  plVar11 = (longlong *)0x0;
  if (plVar7[6] != 0) {
    plVar11 = (longlong *)(plVar7[6] + 0x10);
  }
  lVar9 = plVar11[1];
  param_1[0x16] = *plVar11;
  param_1[0x17] = lVar9;
  *(int *)(param_1 + 0x18) = (int)plVar11[2];
  *(undefined1 (*) [16])((longlong)param_1 + 0xcc) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1d] = param_3;
  FUN_18063ab10(plVar12);
  lVar9 = 0x20;
  plVar7 = plVar12;
  do {
    *(undefined8 *)((longlong)plVar7 + 4) = 0;
    *(undefined8 *)((longlong)plVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
    *(undefined4 *)plVar7 = 0;
    lVar9 = lVar9 + -1;
    plVar7 = plVar7 + 5;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0xbf) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0x88);
  local_18[0] = 0;
  *(undefined1 *)((longlong)param_1 + 0x601) = 0;
  local_18[2] = 0x20;
  local_18[1] = *(int *)(param_1[1] + 0x10);
  piVar10 = local_18;
  if (-1 < local_18[1]) {
    piVar10 = local_18 + 1;
  }
  piVar8 = local_18 + 2;
  if (local_18[1] < 0x21) {
    piVar8 = piVar10;
  }
  iVar13 = 0;
  iVar1 = *piVar8;
  *(int *)(param_1 + 0xbe) = iVar1;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      lVar9 = lVar9 + 8;
      lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x18) + lVar9);
      plVar7 = (longlong *)0x0;
      if (lVar2 != 0) {
        plVar7 = (longlong *)(lVar2 + 0x10);
      }
      iVar13 = iVar13 + 1;
      lVar3 = plVar7[1];
      lVar4 = plVar7[2];
      lVar5 = plVar7[3];
      lVar2 = plVar7[4];
      *plVar12 = *plVar7;
      plVar12[1] = lVar3;
      plVar12[2] = lVar4;
      plVar12[3] = lVar5;
      plVar12[4] = lVar2;
      plVar12 = plVar12 + 5;
    } while (iVar13 < (int)param_1[0xbe]);
  }
  lVar9 = *(longlong *)(param_1[1] + 0x28);
  if ((lVar9 != 0) && ((longlong *)(lVar9 + 0x10) != (longlong *)0x0)) {
    lVar2 = *(longlong *)(lVar9 + 0x18);
    lVar3 = *(longlong *)(lVar9 + 0x20);
    lVar4 = *(longlong *)(lVar9 + 0x28);
    param_1[0x19] = *(longlong *)(lVar9 + 0x10);
    param_1[0x1a] = lVar2;
    param_1[0x1b] = lVar3;
    param_1[0x1c] = lVar4;
  }
  uVar6 = FUN_1804130e0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x601) = uVar6;
  return param_1;
}




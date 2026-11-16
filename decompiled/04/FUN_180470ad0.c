// FUN_180470ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470ad0 */

undefined8 FUN_180470ad0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ushort local_res8;
  ushort local_resa;
  
  uVar3 = *(uint *)(param_1 + 2);
  uVar10 = uVar3 & 7;
  plVar4 = param_1;
  if (uVar10 != 0) {
    if ((int)uVar3 < (int)uVar10) {
      FUN_180470340();
    }
    *(uint *)(plVar4 + 2) = (int)plVar4[2] - uVar10;
    *(uint *)(plVar4 + 3) = *(uint *)(plVar4 + 3) >> (uVar10 & 0x1f);
    uVar3 = *(uint *)(plVar4 + 2);
  }
  iVar9 = 0;
  if (0 < (int)uVar3) {
    uVar10 = *(uint *)(plVar4 + 3);
    puVar7 = &local_res8;
    do {
      uVar6 = (undefined1)uVar10;
      uVar10 = uVar10 >> 8;
      uVar3 = uVar3 - 8;
      *(undefined1 *)puVar7 = uVar6;
      puVar7 = (ushort *)((longlong)puVar7 + 1);
      iVar9 = iVar9 + 1;
      *(uint *)(param_1 + 3) = uVar10;
    } while (0 < (int)uVar3);
    *(uint *)(param_1 + 2) = uVar3;
  }
  if (-1 < (int)uVar3) {
    lVar5 = (longlong)iVar9;
    if (lVar5 < 4) {
      puVar1 = (undefined1 *)param_1[1];
      do {
        puVar2 = (undefined1 *)*param_1;
        if (puVar2 < puVar1) {
          uVar6 = *puVar2;
          *param_1 = (longlong)(puVar2 + 1);
        }
        else {
          uVar6 = 0;
        }
        *(undefined1 *)((longlong)&local_res8 + lVar5) = uVar6;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 4);
    }
    uVar3 = (uint)local_res8;
    if (((uint)local_resa == (uVar3 ^ 0xffff)) &&
       (uVar8 = (ulonglong)uVar3, *param_1 + uVar8 <= (ulonglong)param_1[1])) {
      if (((ulonglong)param_1[6] < param_1[4] + (ulonglong)uVar3) &&
         (iVar9 = FUN_180470480(param_1), iVar9 == 0)) {
        return 0;
      }
      FUN_18063aed0(param_1[4],*param_1,uVar8);
      *param_1 = *param_1 + uVar8;
      param_1[4] = param_1[4] + uVar8;
      return 1;
    }
  }
  return 0;
}




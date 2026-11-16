// FUN_18058dc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058dc30 */

int FUN_18058dc30(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  int *piVar4;
  ushort uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  lVar8 = param_1[3];
  iVar10 = 0;
  local_res8[0] = 0;
  piVar6 = (int *)0x0;
  uVar3 = *(undefined8 *)(*param_1 + 0x98);
  uVar2 = *(ushort *)(lVar8 + 0x62);
  uVar13 = (ulonglong)uVar2;
  lVar9 = (longlong)(int)(uint)uVar2;
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + lVar9 * 8) = param_1[0xb];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 8 + lVar9 * 8) = param_1[0xc];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x10 + lVar9 * 8) = param_1[0x1f];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x18 + lVar9 * 8) = param_1[0x20];
  if ((((*(uint *)(*param_1 + 4) & 0x7fff0000) == 0) && ((*(uint *)(*param_1 + 8) & 0x8000) == 0))
     || ((piVar6 = (int *)FUN_18057ac40(uVar3,8,0,uVar2 + 4,0,local_res8), local_res8[0] == 0 &&
         (local_res8[0] = FUN_180590570(param_1,lVar8 + 0x60,piVar6), local_res8[0] == 0)))) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      uVar5 = *(short *)(lVar8 + 0x62) + 4;
      *(ushort *)(param_1 + 0x14) = uVar5;
      *(undefined2 *)((longlong)param_1 + 0xa2) = *(undefined2 *)(lVar8 + 0x60);
      param_1[0x15] = *(longlong *)(lVar8 + 0x88);
      param_1[0x16] = *(longlong *)(lVar8 + 0x68);
      param_1[0x17] = *(longlong *)(lVar8 + 0x90);
      param_1[0x18] = *(longlong *)(lVar8 + 0x70);
      param_1[0x19] = *(longlong *)(lVar8 + 0x78);
      *(undefined2 *)(param_1 + 0x1a) = 0;
      FUN_18063aed0(param_1[0x17],param_1[0x16],(ulonglong)uVar5 << 3);
    }
    iVar12 = 0;
    piVar7 = *(int **)(lVar8 + 0x68);
    piVar1 = piVar7 + (ulonglong)(uVar2 + 4) * 2;
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      iVar10 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
      iVar12 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
      piVar4 = piVar6;
      if (((*(uint *)(*param_1 + 4) & 0x7fff0000) == 0) && ((*(uint *)(*param_1 + 8) & 0x8000) == 0)
         ) {
        for (; piVar7 < piVar1; piVar7 = piVar7 + 2) {
          lVar9 = (longlong)*piVar7 * (longlong)iVar10;
          *piVar7 = (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
          lVar9 = (longlong)piVar7[1] * (longlong)iVar12;
          piVar7[1] = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
        }
      }
      else {
        for (; piVar7 < piVar1; piVar7 = piVar7 + 2) {
          lVar9 = (longlong)*piVar4 * (longlong)iVar10;
          *piVar7 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + 0x20 >> 6;
          lVar9 = (longlong)piVar4[1] * (longlong)iVar12;
          piVar7[1] = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + 0x20 >> 6;
          piVar4 = piVar4 + 2;
        }
      }
    }
    if (((*(byte *)(*param_1 + 0x410) & 2) == 0) || ((*(uint *)(param_1 + 4) & 2) != 0)) {
      param_1[0xb] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + uVar13 * 8);
      param_1[0xc] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 8 + uVar13 * 8);
    }
    else {
      lVar9 = (longlong)(int)param_1[0xb] * (longlong)iVar10;
      *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
      lVar9 = (longlong)(int)param_1[0xc] * (longlong)iVar10;
      *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
    }
    uVar11 = *(uint *)(param_1 + 4) & 2;
    if (((*(byte *)(*param_1 + 0x410) & 0x10) == 0) || (uVar11 != 0)) {
      param_1[0x1f] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x10 + uVar13 * 8);
      param_1[0x20] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x18 + uVar13 * 8);
      if (uVar11 != 0) goto LAB_18058dff1;
    }
    else {
      lVar8 = (longlong)(int)param_1[0x1f] * (longlong)iVar10;
      *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      lVar8 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)iVar12;
      *(int *)((longlong)param_1 + 0xfc) =
           (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      lVar8 = (longlong)(int)param_1[0x20] * (longlong)iVar10;
      *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      lVar8 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)iVar12;
      *(int *)((longlong)param_1 + 0x104) =
           (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    }
    local_res8[0] = FUN_18058c8f0(param_1,0);
  }
LAB_18058dff1:
  FUN_18057abd0(uVar3,piVar6);
  return local_res8[0];
}




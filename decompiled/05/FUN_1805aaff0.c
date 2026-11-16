// FUN_1805aaff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaff0 */

int FUN_1805aaff0(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  int local_res8 [2];
  
  lVar4 = *param_2;
  local_res8[0] = 0;
  if (lVar4 == 0) {
    return 0x23;
  }
  lVar5 = *(longlong *)(lVar4 + 0xd8);
  if ((lVar5 == 0) || (*(uint *)(lVar4 + 0x10) <= param_3)) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = (uint)*(byte *)(lVar5 + 0x6a);
  }
  else {
    param_3 = param_3 - 1;
  }
  sVar1 = *(short *)(lVar5 + 4);
  iVar9 = 4;
  if (sVar1 == 0x300) {
    iVar9 = 6;
  }
  iVar7 = 0x76;
  if (sVar1 == 0x300) {
    iVar7 = 0x94;
  }
  uVar14 = iVar9 * param_3 + iVar7;
  iVar9 = -2;
  if (sVar1 == 0x300) {
    iVar9 = -4;
  }
  if (uVar14 < (uint)(iVar9 + *(int *)(lVar5 + 8) + -2)) {
    puVar11 = (ushort *)((ulonglong)uVar14 + *(longlong *)(lVar5 + 0xa0));
    *(uint *)(param_1 + 0x6c) = (uint)*puVar11;
    if (sVar1 == 0x300) {
      uVar14 = (uint)*(uint3 *)((longlong)puVar11 + 3);
    }
    else {
      uVar14 = (uint)*(byte *)((longlong)puVar11 + 3);
    }
    uVar14 = uVar14 << 8 | (uint)(byte)puVar11[1];
    if (uVar14 < *(uint *)(lVar5 + 8)) {
      uVar2 = *(ushort *)(lVar5 + 0x60);
      *(uint *)(param_1 + 0x68) = (uint)uVar2;
      *(undefined1 *)(param_1 + 0x82) = 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      uVar3 = *(ushort *)(lVar5 + 0x50);
      *(uint *)(param_1 + 0x94) = (uint)uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
      *(uint *)(param_1 + 0x34) = (uint)uVar2 << 6;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x6c) << 6;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(uint *)(param_1 + 0x3c) = (uint)uVar3 << 6;
      FUN_18057bc10();
      if ((param_4 >> 0x16 & 1) == 0) {
        puVar13 = (undefined1 *)((ulonglong)uVar14 + *(longlong *)(lVar5 + 0xa0));
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
        uVar15 = *(int *)(param_1 + 0x6c) + 7U >> 3;
        *(uint *)(param_1 + 0x70) = uVar15;
        if (uVar15 == 0) {
          return 3;
        }
        if (*(uint *)(lVar5 + 8) < *(int *)(param_1 + 0x68) * uVar15 + uVar14) {
          return 3;
        }
        puVar8 = (undefined1 *)FUN_18057ac40(uVar6,uVar15,0,*(int *)(param_1 + 0x68),0,local_res8);
        *(undefined1 **)(param_1 + 0x78) = puVar8;
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        do {
          puVar12 = puVar13 + *(uint *)(param_1 + 0x68);
          puVar10 = puVar8;
          for (; puVar13 < puVar12; puVar13 = puVar13 + 1) {
            *puVar10 = *puVar13;
            puVar10 = puVar10 + *(int *)(param_1 + 0x70);
          }
          puVar8 = puVar8 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
      }
      return local_res8[0];
    }
  }
  return 3;
}




// FUN_180596060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180596060 */

undefined8 FUN_180596060(longlong *param_1)

{
  ushort *puVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  
  lVar2 = *param_1;
  puVar1 = (ushort *)(param_1 + 9);
  uVar10 = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  if (((short)param_1[3] == 0) || (*(short *)((longlong)param_1 + 0x1a) == 0)) {
    uVar7 = 0x97;
  }
  else {
    *(int *)puVar1 = (int)param_1[3];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(int *)(param_1 + 10) = (int)param_1[4];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x24);
    param_1[0xb] = param_1[5];
    *(int *)(param_1 + 0xc) = (int)param_1[6];
    if ((*(byte *)(lVar2 + 0x110) & 8) != 0) {
      lVar11 = (longlong)(int)param_1[10];
      lVar8 = *(short *)(lVar2 + 0x6a) * lVar11;
      *(uint *)((longlong)param_1 + 0x54) =
           (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
      lVar8 = *(short *)(lVar2 + 0x6c) * lVar11;
      *(uint *)(param_1 + 0xb) =
           (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
      lVar11 = *(short *)(lVar2 + 0x6e) * lVar11;
      *(uint *)((longlong)param_1 + 0x5c) =
           (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
      if ((*(byte *)(lVar2 + 0x110) & 8) != 0) {
        uVar5 = FUN_180573310((ulonglong)*puVar1 << 6,*(undefined2 *)(lVar2 + 0x68));
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
        uVar5 = FUN_180573310((ulonglong)*(ushort *)((longlong)param_1 + 0x4a) << 6,
                              *(undefined2 *)(lVar2 + 0x68));
        *(undefined4 *)(param_1 + 10) = uVar5;
        lVar8 = (longlong)*(short *)(lVar2 + 0x70) * (longlong)*(int *)((longlong)param_1 + 0x4c);
        *(uint *)(param_1 + 0xc) =
             (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
      }
    }
    uVar4 = *puVar1;
    if (uVar4 < *(ushort *)((longlong)param_1 + 0x4a)) {
      *(int *)(param_1 + 0xe) = (int)param_1[10];
      *(ushort *)((longlong)param_1 + 0x74) = *(ushort *)((longlong)param_1 + 0x4a);
      uVar5 = FUN_180573310(uVar4,*(undefined2 *)((longlong)param_1 + 0x4a));
      *(undefined4 *)((longlong)param_1 + 100) = uVar5;
      uVar5 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(ushort *)((longlong)param_1 + 0x74) = uVar4;
      *(undefined4 *)((longlong)param_1 + 100) = 0x10000;
      uVar5 = FUN_180573310(*(undefined2 *)((longlong)param_1 + 0x4a),uVar4);
    }
    *(undefined4 *)(param_1 + 0xd) = uVar5;
    pbVar12 = (byte *)0x0;
    uVar9 = *(uint *)(lVar2 + 0x454);
    if (uVar9 != 0) {
      do {
        uVar6 = uVar9 + uVar10 >> 1;
        pbVar3 = *(byte **)(*(longlong *)(lVar2 + 0x460) + (ulonglong)uVar6 * 8);
        uVar4 = (ushort)*pbVar3;
        if (*puVar1 < uVar4) {
          uVar9 = uVar6;
        }
        else {
          if (*puVar1 <= uVar4) {
            pbVar12 = pbVar3 + 2;
            break;
          }
          uVar10 = uVar6 + 1;
        }
      } while (uVar10 < uVar9);
    }
    param_1[0xf] = (longlong)pbVar12;
    uVar7 = 0;
    param_1[8] = (longlong)puVar1;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  }
  return uVar7;
}




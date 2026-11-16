// FUN_180240dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180240dc0 */

ulonglong FUN_180240dc0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_38;
  uint uStack_34;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar9 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  puVar11 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar11 = puVar9;
  }
  if (puVar11 != (uint *)0x0) {
    local_38 = (uint)param_2;
    puVar9 = (uint *)thunk_FUN_180624430(param_2 & 0xffffffff);
    if ((short)puVar9 < 1) {
      uStack_34 = (uint)(param_2 >> 0x20);
      puVar9 = (uint *)thunk_FUN_180624430(uStack_34);
      if ((short)puVar9 < 1) {
        uVar1 = puVar11[4];
        puVar9 = (uint *)(ulonglong)uVar1;
        if (((uVar1 < 0x41) && (puVar11 != (uint *)0xfffffffffffffff8)) &&
           ((uVar1 == 0 || (*(longlong *)(puVar11 + 6) != 0)))) {
          uVar1 = puVar11[4];
          iVar13 = 0;
          if (0 < (int)uVar1) {
            plVar12 = *(longlong **)(puVar11 + 6);
            do {
              plVar12 = plVar12 + 1;
              puVar9 = (uint *)(*plVar12 + 0x10);
              puVar10 = (uint *)0x0;
              if (*plVar12 != 0) {
                puVar10 = puVar9;
              }
              if ((puVar10 == (uint *)0x0) ||
                 (uVar7 = puVar10[5] & 0x7f800000,
                 puVar9 = (uint *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000),
                 uVar7 == 0x7f800000)) goto LAB_180240f6d;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)uVar1);
          }
          uVar7 = 0;
          if (0 < (int)uVar1) {
            lVar14 = 0;
            lVar15 = 0;
            do {
              lVar3 = *(longlong *)(*(longlong *)(puVar11 + 6) + 8 + lVar14 * 8);
              puVar9 = (uint *)0x0;
              if (lVar3 != 0) {
                puVar9 = (uint *)(lVar3 + 0x10);
              }
              uVar4 = *(ulonglong *)(puVar9 + 2);
              uVar2 = *puVar9;
              uVar8 = uVar2 & 0xffffffe7;
              *puVar9 = uVar8;
              if ((uVar2 & 1) != 0) {
                uVar8 = uVar8 | 1;
                *(ulonglong *)(puVar9 + 2) = uVar4 & 0xfffffffffffff9e7;
                *puVar9 = uVar8;
              }
              puVar9 = (uint *)(ulonglong)uVar8;
              if (((uVar4 & 0xfffffffffffff9e7) != 0) || ((uVar8 & 0x60) != 0)) {
                lVar5 = *(longlong *)(puVar11 + 6);
                uVar7 = uVar7 + 1;
                uVar6 = *(undefined8 *)(lVar15 + 8 + lVar5);
                lVar3 = lVar15 + lVar5;
                lVar15 = lVar15 + 8;
                puVar9 = *(uint **)(lVar5 + 8 + lVar14 * 8);
                *(uint **)(lVar3 + 8) = puVar9;
                *(undefined8 *)(lVar5 + 8 + lVar14 * 8) = uVar6;
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)uVar1);
          }
          puVar11[4] = uVar7;
          *puVar11 = *puVar11 | 0xc0;
          puVar11[0x12] = local_38;
          puVar11[0x13] = uStack_34;
          *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
          *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 0x618;
          *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9e7;
          return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
        }
      }
    }
  }
LAB_180240f6d:
  return (ulonglong)puVar9 & 0xffffffffffffff00;
}




// FUN_1804e6ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6ef0 */

void FUN_1804e6ef0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong local_58;
  
  lVar5 = *(longlong *)(param_1 + 0xa0);
  *(undefined1 *)(lVar5 + 0xb8) = 1;
  puVar6 = *(undefined4 **)(param_1 + 0x38);
  puVar11 = (undefined4 *)FUN_1804e6dd0();
  *(undefined1 *)((longlong)puVar11 + 0x5e) = *(undefined1 *)((longlong)puVar6 + 0x5e);
  if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
    FUN_1804cf3e0("[font] Texture #%03d: resize+repack %dx%d => Texture #%03d: %dx%d\n",*puVar6,
                  puVar6[9],puVar6[10],*puVar11,puVar11[9],puVar11[10]);
  }
  FUN_1804e7d00(param_1);
  local_58 = 0;
  iVar13 = *(int *)(lVar5 + 0x70);
  if (0 < iVar13) {
    iVar14 = iVar13;
    if (iVar13 < 8) {
      iVar14 = 8;
    }
    if (0 < iVar14) {
      local_58 = FUN_1804b8110((longlong)iVar14 << 2);
    }
  }
  if ((local_58 != 0) && (*(longlong *)(lVar5 + 0x78) != 0)) {
    FUN_18063aed0(local_58,*(longlong *)(lVar5 + 0x78),(longlong)iVar13 << 2);
  }
  uVar3 = *(undefined4 *)(lVar5 + 0x60);
  *(undefined4 *)(lVar5 + 0x60) = 0;
  uVar4 = *(undefined4 *)(lVar5 + 100);
  *(undefined4 *)(lVar5 + 100) = 0;
  lVar7 = *(longlong *)(lVar5 + 0x68);
  *(undefined8 *)(lVar5 + 0x68) = 0;
  puVar23 = *(uint **)(lVar5 + 0x78);
  puVar1 = puVar23 + *(int *)(lVar5 + 0x70);
  do {
    if (puVar23 == puVar1) {
      uVar9 = 0;
      *(undefined8 *)(lVar5 + 0x9c) = 0;
      if (0 < *(int *)(lVar5 + 0xc0)) {
        do {
          uVar20 = uVar9 & 0x1f;
          uVar10 = uVar9;
          if ((int)uVar9 < 0) {
            uVar10 = uVar9 + 0x1f;
            uVar20 = uVar20 - 0x20;
          }
          lVar19 = *(longlong *)(*(longlong *)(lVar5 + 0xd0) + (longlong)((int)uVar10 >> 5) * 8);
          lVar22 = *(longlong *)(lVar19 + 0x38 + (longlong)(int)uVar20 * 0x68);
          lVar19 = (longlong)*(int *)(lVar19 + 0x30 + (longlong)(int)uVar20 * 0x68) * 0x2c + lVar22;
          for (; lVar22 != lVar19; lVar22 = lVar22 + 0x2c) {
            if (*(uint *)(lVar22 + 0x28) != 0xffffffff) {
              lVar21 = (longlong)
                       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                                (ulonglong)(*(uint *)(lVar22 + 0x28) & 0x7ffff) * 4) << 0xc) >> 0xc;
              lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
              *(float *)(lVar22 + 0x18) =
                   (float)*(ushort *)(lVar18 + lVar21 * 8) * *(float *)(param_1 + 0x54);
              *(float *)(lVar22 + 0x1c) =
                   (float)*(ushort *)(lVar18 + 2 + lVar21 * 8) * *(float *)(param_1 + 0x58);
              *(float *)(lVar22 + 0x20) =
                   (float)((uint)*(ushort *)(lVar18 + 4 + lVar21 * 8) +
                          (uint)*(ushort *)(lVar18 + lVar21 * 8)) * *(float *)(param_1 + 0x54);
              *(float *)(lVar22 + 0x24) =
                   (float)((uint)*(ushort *)(lVar18 + 6 + lVar21 * 8) +
                          (uint)*(ushort *)(lVar18 + 2 + lVar21 * 8)) * *(float *)(param_1 + 0x58);
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(lVar5 + 0xc0));
      }
      FUN_1804e42b0(param_1);
      FUN_1804e53b0(param_1);
      FUN_1804e4e20(param_1);
      *(undefined1 *)(lVar5 + 0xb8) = 0;
      puVar15 = *(undefined8 **)(param_1 + 0x98);
      puVar2 = puVar15 + *(int *)(param_1 + 0x90);
      for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
        puVar8 = (undefined8 *)*puVar15;
        if (puVar8[3] == param_1) {
          *puVar8 = *(undefined8 *)(param_1 + 0x5c);
          puVar8[1] = *(longlong *)(param_1 + 0xa0) + 0xfc;
          puVar8[2] = *(longlong *)(param_1 + 0xa0) + 0x3dc;
        }
      }
      lVar19 = lVar7;
LAB_1804e729b:
      lVar5 = DAT_180bb8ae8;
      if (local_58 != 0) {
        if (DAT_180bb8ae8 != 0) {
          piVar17 = (int *)(DAT_180bb8ae8 + 4);
          piVar16 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar16 != *piVar17) {
            iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar12 = (short)iVar13 + (short)(iVar13 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar12;
            piVar16 = (int *)(lVar5 + ((longlong)sVar12 + 0x533) * 8);
            *piVar16 = *piVar17;
            piVar16[1] = 0;
          }
          *(short *)((longlong)piVar16 + 6) = *(short *)((longlong)piVar16 + 6) + 1;
          piVar17 = (int *)(lVar5 + 0x2990);
          *piVar17 = *piVar17 + 1;
        }
        thunk_FUN_180621380(local_58);
      }
      lVar5 = DAT_180bb8ae8;
      if (lVar19 != 0) {
        if (DAT_180bb8ae8 != 0) {
          piVar17 = (int *)(DAT_180bb8ae8 + 4);
          piVar16 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar16 != *piVar17) {
            iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar12 = (short)iVar13 + (short)(iVar13 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar12;
            piVar16 = (int *)(lVar5 + ((longlong)sVar12 + 0x533) * 8);
            *piVar16 = *piVar17;
            piVar16[1] = 0;
          }
          *(short *)((longlong)piVar16 + 6) = *(short *)((longlong)piVar16 + 6) + 1;
          piVar17 = (int *)(lVar5 + 0x2990);
          *piVar17 = *piVar17 + 1;
        }
        thunk_FUN_180621380(lVar19);
      }
      return;
    }
    if ((*puVar23 >> 0x1e & 1) != 0) {
      lVar19 = (longlong)(int)(*puVar23 << 0xc) >> 0xc;
      sVar12 = *(short *)(lVar7 + 4 + lVar19 * 8);
      if ((sVar12 != 0) || (*(short *)(lVar7 + 6 + lVar19 * 8) != 0)) {
        uVar9 = FUN_1804e7f30(param_1,sVar12,*(undefined2 *)(lVar7 + 6 + lVar19 * 8),puVar23);
        if (uVar9 == 0xffffffff) {
          if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
            FUN_1804cf3e0("[font] Texture #%03d: resize failed. Will grow.\n",*puVar11);
          }
          lVar22 = DAT_180bb8ae8;
          *(undefined1 *)((longlong)puVar11 + 0x5f) = 1;
          *(undefined4 *)(lVar5 + 0x60) = uVar3;
          *(undefined4 *)(lVar5 + 100) = uVar4;
          lVar19 = *(longlong *)(lVar5 + 0x68);
          *(longlong *)(lVar5 + 0x68) = lVar7;
          lVar7 = *(longlong *)(lVar5 + 0x78);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar5 + 0x70) = 0;
            if (lVar22 != 0) {
              piVar17 = (int *)(lVar22 + ((longlong)*(short *)(lVar22 + 0x2994) + 0x533) * 8);
              if (*piVar17 != *(int *)(lVar22 + 4)) {
                iVar14 = *(short *)(lVar22 + 0x2994) + 1;
                sVar12 = (short)iVar14 + (short)(iVar14 / 6) * -6;
                *(short *)(lVar22 + 0x2994) = sVar12;
                piVar17 = (int *)(lVar22 + ((longlong)sVar12 + 0x533) * 8);
                *piVar17 = *(int *)(lVar22 + 4);
                piVar17[1] = 0;
              }
              *(short *)((longlong)piVar17 + 6) = *(short *)((longlong)piVar17 + 6) + 1;
              *(int *)(lVar22 + 0x2990) = *(int *)(lVar22 + 0x2990) + 1;
            }
            thunk_FUN_180621380(lVar7);
            *(undefined8 *)(lVar5 + 0x78) = 0;
          }
          FUN_1804eb9a0(lVar5 + 0x70,iVar13);
          if ((*(longlong *)(lVar5 + 0x78) != 0) && (local_58 != 0)) {
            FUN_18063aed0(*(longlong *)(lVar5 + 0x78),local_58,(longlong)*(int *)(lVar5 + 0x70) << 2
                         );
          }
          FUN_1804e6c00(param_1,puVar6);
          FUN_1804e74e0(param_1,param_2,param_3);
          goto LAB_1804e729b;
        }
        lVar18 = (longlong)
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                          (ulonglong)(uVar9 & 0x7ffff) * 4) << 0xc) >> 0xc;
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
        FUN_1804e3330(puVar6,*(undefined2 *)(lVar7 + lVar19 * 8),
                      *(undefined2 *)(lVar7 + 2 + lVar19 * 8),puVar11,
                      *(undefined2 *)(lVar22 + lVar18 * 8),*(undefined2 *)(lVar22 + 2 + lVar18 * 8),
                      *(undefined2 *)(lVar22 + 4 + lVar18 * 8),
                      *(undefined2 *)(lVar22 + 6 + lVar18 * 8));
      }
    }
    puVar23 = puVar23 + 1;
  } while( true );
}




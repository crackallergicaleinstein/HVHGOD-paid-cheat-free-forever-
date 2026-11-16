// FUN_1805ac8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac8e0 */

ulonglong FUN_1805ac8e0(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  uint uVar13;
  ulonglong uVar14;
  short *psVar15;
  ushort uVar16;
  int *piVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  ushort uVar20;
  ushort uVar21;
  int iVar22;
  ushort uVar23;
  uint local_res10 [2];
  
  puVar1 = (ushort *)(param_2 + 0x1b8);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar14 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    piVar17 = *(int **)(param_2 + 0x140);
    do {
      if (*piVar17 == 0x20) {
        uVar13 = (*(int **)(param_2 + 0x140))[uVar14 * 4 + 3];
        if ((uVar13 < *(uint *)(param_1 + 0xc)) ||
           (local_res10[0] = FUN_180578910(param_1,uVar13 - *(uint *)(param_1 + 0xc)),
           local_res10[0] != 0)) {
          return 0x53;
        }
        uVar13 = FUN_1805785e0(param_1,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        if ((uVar13 & 0xffffff00) != 0) {
          return 3;
        }
        puVar18 = &DAT_1806739b8;
        uVar13 = uVar13 & 4;
        if (uVar13 == 0) {
          puVar18 = &DAT_180673998;
        }
        uVar14 = FUN_180578280(param_1,puVar18,puVar1);
        local_res10[0] = (uint)uVar14;
        if (local_res10[0] != 0) {
          return uVar14;
        }
        uVar16 = *(ushort *)(param_2 + 0x1ba);
        uVar21 = *puVar1;
        if ((uVar21 <= uVar16) && (uVar16 < 0x100)) {
          uVar5 = *(ushort *)(param_2 + 0x1be);
          uVar6 = *(ushort *)(param_2 + 0x1bc);
          if ((uVar6 <= uVar5) && (uVar5 < 0x100)) {
            uVar20 = *(ushort *)(param_2 + 0x1c0) & 0xff;
            uVar23 = *(ushort *)(param_2 + 0x1c0) >> 8;
            if ((((uVar23 < uVar6) || (uVar5 < uVar23)) || (uVar20 < uVar21)) || (uVar16 < uVar20))
            {
              *(ushort *)(param_2 + 0x1c0) = uVar6 * 0x100 + uVar21;
              uVar23 = uVar6;
              uVar20 = uVar21;
            }
            iVar22 = (((uint)uVar16 - (uint)uVar21) + 1) * (((uint)uVar5 - (uint)uVar6) + 1);
            uVar14 = FUN_180577bf0(param_1,iVar22 * 2);
            local_res10[0] = (uint)uVar14;
            if (local_res10[0] != 0) {
              return uVar14;
            }
            puVar19 = (undefined1 *)
                      ((longlong)
                       (int)((((((uint)*(ushort *)(param_2 + 0x1ba) - (uint)*puVar1) + 1) *
                               ((uint)uVar23 - (uint)*(ushort *)(param_2 + 0x1bc)) - (uint)*puVar1)
                             + (uint)uVar20) * 2) + *(longlong *)(param_1 + 0x38));
            if (uVar13 == 0) {
              uVar3 = puVar19[1];
              uVar4 = *puVar19;
            }
            else {
              uVar3 = *puVar19;
              uVar4 = puVar19[1];
            }
            if ((CONCAT11(uVar3,uVar4) == -1) ||
               (uVar16 = CONCAT11(uVar3,uVar4) + 1, *(uint *)(param_2 + 0x1a8) <= (uint)uVar16)) {
              uVar16 = 1;
            }
            puVar8 = *(undefined4 **)(param_2 + 0x1b0);
            puVar2 = puVar8 + (ulonglong)uVar16 * 4;
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            *puVar8 = *puVar2;
            puVar8[1] = uVar9;
            puVar8[2] = uVar10;
            puVar8[3] = uVar11;
            psVar15 = (short *)FUN_18057ac40(uVar7,2,0,iVar22,0,local_res10);
            *(short **)(param_2 + 0x1c8) = psVar15;
            if (local_res10[0] != 0) {
              return (ulonglong)local_res10[0];
            }
            uVar16 = *(ushort *)(param_2 + 0x1bc);
            if (uVar16 <= *(ushort *)(param_2 + 0x1be)) {
              do {
                uVar21 = *puVar1;
                if (uVar21 <= *(ushort *)(param_2 + 0x1ba)) {
                  do {
                    if (uVar13 == 0) {
                      sVar12 = FUN_180577f10(param_1);
                    }
                    else {
                      sVar12 = FUN_180577ed0();
                    }
                    if (sVar12 == -1) {
                      sVar12 = -1;
                    }
                    else {
                      sVar12 = sVar12 + 1;
                    }
                    *psVar15 = sVar12;
                    uVar21 = uVar21 + 1;
                    psVar15 = psVar15 + 1;
                  } while (uVar21 <= *(ushort *)(param_2 + 0x1ba));
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 <= *(ushort *)(param_2 + 0x1be));
            }
            FUN_180577d30(param_1);
            return (ulonglong)local_res10[0];
          }
        }
        return 8;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      piVar17 = piVar17 + 4;
    } while (uVar13 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}




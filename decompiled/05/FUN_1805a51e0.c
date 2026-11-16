// FUN_1805a51e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a51e0 */

int FUN_1805a51e0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  int local_res10 [2];
  uint local_res18;
  uint local_res20;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  uVar12 = 0;
  lVar6 = *(longlong *)(param_1 + 0x1e8);
  puVar9 = (uint *)0x0;
  local_res18 = 0;
  puVar8 = (uint *)FUN_18057ad10(uVar5,0x10,0,*(undefined4 *)(param_1 + 0x1b0),0,local_res10);
  *(uint **)(param_1 + 0x1d0) = puVar8;
  if (local_res10[0] == 0) {
    uVar13 = 0;
    local_res20 = 0;
    if (*(int *)(param_1 + 0x1b0) != 0) {
      do {
        lVar16 = uVar13 * 0xfc + *(longlong *)(param_1 + 0x1b8);
        uVar2 = *(uint *)(lVar16 + 0xf0);
        uVar13 = (ulonglong)uVar2;
        iVar3 = *(int *)(lVar16 + 4);
        if (uVar2 != 0) {
          uVar14 = uVar2 + 1;
          if (uVar12 < uVar14) {
            uVar12 = uVar2 + 4 & 0xfffffffc;
            if (local_res18 < uVar12) {
              puVar9 = (uint *)FUN_18057ac40(uVar5,4,local_res18,uVar12,puVar9,local_res10);
              if (local_res10[0] == 0) {
                local_res18 = uVar12;
                goto LAB_1805a5302;
              }
            }
            else {
              local_res10[0] = 0xa0;
            }
          }
          else {
LAB_1805a5302:
            local_res10[0] =
                 FUN_1805788b0(lVar6,*(int *)(lVar16 + 0xf4) + *(int *)(param_1 + 0x1c0));
            if ((local_res10[0] == 0) &&
               (local_res10[0] = FUN_180577bf0(lVar6,uVar14 * *(int *)(lVar16 + 0xf8)),
               local_res10[0] == 0)) {
              pbVar11 = *(byte **)(lVar6 + 0x38);
              uVar19 = (ulonglong)uVar14;
              puVar17 = puVar9;
              do {
                uVar12 = 0;
                for (iVar18 = *(int *)(lVar16 + 0xf8); iVar18 != 0; iVar18 = iVar18 + -1) {
                  bVar1 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  uVar12 = uVar12 << 8 | (uint)bVar1;
                }
                *puVar17 = uVar12;
                puVar17 = puVar17 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
              FUN_180577d30(lVar6);
              uVar19 = 1;
              if (uVar2 != 0) {
                do {
                  if (puVar9[uVar19] < puVar9[(int)uVar19 - 1]) goto LAB_1805a554b;
                  uVar12 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar12;
                } while (uVar12 <= uVar2);
              }
              if ((uint)(*(int *)(lVar6 + 8) - *(int *)(param_1 + 0x1c0)) < puVar9[uVar13]) {
LAB_1805a554b:
                local_res10[0] = 3;
              }
              else {
                iVar18 = puVar9[uVar13] - *puVar9;
                uVar10 = FUN_18057ac40(uVar5,8,0,uVar14,0,local_res10);
                *(undefined8 *)(puVar8 + 2) = uVar10;
                if (local_res10[0] == 0) {
                  uVar10 = FUN_18057abe0(uVar5,iVar18,local_res10);
                  **(undefined8 **)(puVar8 + 2) = uVar10;
                  if (((local_res10[0] == 0) &&
                      (local_res10[0] = FUN_1805788b0(lVar6,*(int *)(param_1 + 0x1c0) + *puVar9),
                      local_res10[0] == 0)) &&
                     (local_res10[0] = FUN_180578100(lVar6,**(undefined8 **)(puVar8 + 2),iVar18),
                     local_res10[0] == 0)) {
                    uVar12 = 1;
                    if (uVar2 != 0) {
                      do {
                        uVar14 = uVar12 - 1;
                        uVar19 = (ulonglong)uVar12;
                        uVar12 = uVar12 + 1;
                        *(ulonglong *)(*(longlong *)(puVar8 + 2) + uVar19 * 8) =
                             (ulonglong)(puVar9[uVar19] - puVar9[uVar14]) +
                             *(longlong *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar14 * 8);
                      } while (uVar12 <= uVar2);
                    }
                    if ((-1 < iVar3) && (uVar2 != 0)) {
                      lVar16 = 0;
                      puVar17 = puVar9;
                      puVar15 = puVar9;
                      do {
                        puVar15 = puVar15 + 1;
                        (**(code **)(lVar4 + 0x20))
                                  (*(undefined8 *)(lVar16 + *(longlong *)(puVar8 + 2)),
                                   *puVar15 - *puVar17,0x10ea);
                        puVar17 = puVar17 + 1;
                        lVar16 = lVar16 + 8;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    *puVar8 = uVar2;
                    uVar12 = local_res18;
                    goto LAB_1805a5518;
                  }
                }
              }
            }
          }
          if (*(longlong *)(param_1 + 0x1d0) != 0) {
            uVar13 = 0;
            if (*(int *)(param_1 + 0x1b0) != 0) {
              do {
                puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar13 * 0x10);
                if (puVar7 != (undefined8 *)0x0) {
                  FUN_18057abd0(uVar5,*puVar7);
                  **(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar13 * 0x10) = 0;
                }
                FUN_18057abd0(uVar5,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x1d0) + 8 + uVar13 * 0x10));
                uVar12 = (int)uVar13 + 1;
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 8 + uVar13 * 0x10) = 0;
                uVar13 = (ulonglong)uVar12;
              } while (uVar12 < *(uint *)(param_1 + 0x1b0));
            }
            FUN_18057abd0(uVar5,*(undefined8 *)(param_1 + 0x1d0));
            *(undefined8 *)(param_1 + 0x1d0) = 0;
          }
          break;
        }
LAB_1805a5518:
        puVar8 = puVar8 + 4;
        local_res20 = local_res20 + 1;
        uVar13 = (ulonglong)local_res20;
      } while (local_res20 < *(uint *)(param_1 + 0x1b0));
    }
  }
  FUN_18057abd0(uVar5,puVar9);
  return local_res10[0];
}




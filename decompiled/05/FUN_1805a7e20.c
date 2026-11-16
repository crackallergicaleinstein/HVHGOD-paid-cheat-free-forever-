// FUN_1805a7e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a7e20 */

ulonglong FUN_1805a7e20(undefined8 *param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 *puVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  uint *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res18;
  
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar15;
  param_1[0x19] = param_1 + 0x18;
  *(uint *)(param_1 + 1) = param_3;
  param_1[0x18] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar13 = FUN_1805788b0(param_2,param_3);
  local_res8[0] = (uint)uVar13;
  if (local_res8[0] != 0) {
    return uVar13;
  }
  uVar13 = FUN_180577bf0(param_2,param_4 & 0xffffffff);
  if ((int)uVar13 != 0) {
    return uVar13;
  }
  param_1[0x1b] = *(undefined8 *)(param_2 + 0x38);
  puVar9 = *(undefined1 **)(param_2 + 0x38);
  pbVar17 = puVar9 + (param_4 & 0xffffffff);
  if (puVar9 + 0xf <= pbVar17) {
    pbVar20 = puVar9 + 0xf;
    *(uint *)((longlong)param_1 + 0xc) = (uint)CONCAT11(*puVar9,puVar9[1]);
    uVar3 = puVar9[3];
    uVar4 = puVar9[2];
    *(uint *)(param_1 + 2) = (uint)CONCAT11(uVar4,uVar3);
    uVar5 = puVar9[4];
    uVar6 = puVar9[5];
    *(uint *)((longlong)param_1 + 0x14) = (uint)CONCAT11(uVar5,uVar6);
    *(uint *)(param_1 + 3) = (int)(short)((ushort)(byte)puVar9[6] << 8) | (uint)(byte)puVar9[7];
    *(uint *)((longlong)param_1 + 0x1c) =
         (int)(short)((ushort)(byte)puVar9[8] << 8) | (uint)(byte)puVar9[9];
    *(uint *)(param_1 + 4) = (int)(short)((ushort)(byte)puVar9[10] << 8) | (uint)(byte)puVar9[0xb];
    *(uint *)((longlong)param_1 + 0x24) =
         (int)(short)((ushort)(byte)puVar9[0xc] << 8) | (uint)(byte)puVar9[0xd];
    bVar7 = puVar9[0xe];
    *(uint *)(param_1 + 5) = (uint)bVar7;
    if ((CONCAT11(uVar4,uVar3) != 0) && (CONCAT11(uVar5,uVar6) != 0)) {
      if ((bVar7 & 4) == 0) {
        pbVar20 = puVar9 + 0x11;
        if (pbVar17 < pbVar20) goto LAB_1805a83d3;
        *(uint *)((longlong)param_1 + 0x2c) =
             (int)(short)((ushort)(byte)puVar9[0xf] << 8) | (uint)(byte)puVar9[0x10];
      }
      local_res8[0] = 0;
      if ((char)bVar7 < '\0') {
        uVar19 = 0;
        pbVar22 = pbVar20 + 1;
        if (pbVar17 < pbVar22) goto LAB_1805a83d3;
        bVar8 = *pbVar20;
        uVar21 = (uint)bVar8;
        pbVar20 = pbVar22;
        if (bVar8 != 0) {
          local_res8[0] = 0;
          do {
            if (pbVar17 < pbVar22 + 2) goto LAB_1805a83d3;
            pbVar1 = pbVar22 + 1;
            pbVar20 = pbVar22 + 2;
            pbVar22 = pbVar20 + *pbVar22;
            if (pbVar17 < pbVar22) goto LAB_1805a83d3;
            puVar23 = &DAT_180672e80;
            do {
              if (*puVar23 == (uint)*pbVar1) {
                uVar19 = (**(code **)(puVar23 + 2))(pbVar20,pbVar22);
                if (uVar19 != 0) goto LAB_1805a802f;
                break;
              }
              puVar2 = puVar23 + 6;
              puVar23 = puVar23 + 4;
            } while (*(longlong *)puVar2 != 0);
            uVar21 = uVar21 - 1;
            pbVar20 = pbVar22;
          } while (uVar21 != 0);
        }
LAB_1805a802f:
        local_res8[0] = uVar19;
        if (uVar19 != 0) goto LAB_1805a83de;
      }
      pbVar22 = pbVar20 + 3;
      if (pbVar22 <= pbVar17) {
        uVar19 = (uint)CONCAT21(CONCAT11(*pbVar20,pbVar20[1]),pbVar20[2]);
        pbVar20 = pbVar22;
        if (uVar19 != 0) {
          pbVar20 = pbVar22 + uVar19;
          if (pbVar17 < pbVar20) goto LAB_1805a83d3;
          while (pbVar22 + 4 <= pbVar20) {
            pbVar1 = pbVar22 + 2;
            uVar21 = (uint)CONCAT11(*pbVar22,pbVar22[1]);
            if ((uVar21 < 4) || (uVar19 < uVar21)) break;
            sVar10 = CONCAT11(*pbVar1,pbVar22[3]);
            if (sVar10 == 1) {
              puVar24 = param_1 + 0xd;
LAB_1805a8127:
              uVar13 = FUN_1805a6a10(pbVar22 + 4,uVar21 - 4,uVar15,puVar24);
              local_res8[0] = (uint)uVar13;
              if (local_res8[0] != 0) {
                return uVar13;
              }
            }
            else if (sVar10 == 2) {
              if (pbVar22 + 0x24 <= pbVar1 + ((ulonglong)uVar21 - 2)) {
                *(uint *)(param_1 + 6) =
                     (int)(short)((ushort)pbVar22[0xe] << 8) | (uint)pbVar22[0xf];
                *(uint *)((longlong)param_1 + 0x34) =
                     (int)(short)((ushort)pbVar22[0x10] << 8) | (uint)pbVar22[0x11];
                *(uint *)(param_1 + 7) =
                     (int)(short)((ushort)pbVar22[0x12] << 8) | (uint)pbVar22[0x13];
              }
            }
            else if (sVar10 == 3) {
              puVar24 = param_1 + 0xe;
              goto LAB_1805a8127;
            }
            uVar19 = uVar19 - uVar21;
            pbVar22 = pbVar1 + ((ulonglong)uVar21 - 2);
            if (uVar19 == 0) break;
          }
        }
        pbVar22 = pbVar20 + 1;
        if (pbVar22 <= pbVar17) {
          bVar8 = *pbVar20;
          *(uint *)(param_1 + 0x11) = (uint)bVar8;
          if (pbVar22 + (uint)bVar8 * 2 <= pbVar17) {
            uVar14 = FUN_18057ac40(uVar15,4,0,(uint)bVar8,0,local_res8);
            param_1[0x12] = uVar14;
            if (local_res8[0] != 0) goto LAB_1805a83de;
            if (bVar8 != 0) {
              uVar13 = (ulonglong)(uint)bVar8;
              lVar25 = 0;
              do {
                bVar8 = *pbVar22;
                pbVar20 = pbVar22 + 1;
                pbVar22 = pbVar22 + 2;
                *(uint *)(lVar25 + param_1[0x12]) =
                     (int)(short)((ushort)bVar8 << 8) | (uint)*pbVar20;
                uVar13 = uVar13 - 1;
                lVar25 = lVar25 + 4;
              } while (uVar13 != 0);
            }
            if (pbVar22 + 8 <= pbVar17) {
              pbVar20 = pbVar22 + 8;
              *(uint *)(param_1 + 0x13) = (uint)*pbVar22;
              *(uint *)((longlong)param_1 + 0x9c) = (uint)pbVar22[1];
              *(uint *)(param_1 + 10) = (uint)CONCAT11(pbVar22[2],pbVar22[3]);
              *(uint *)(param_1 + 8) = (uint)CONCAT11(pbVar22[4],pbVar22[5]);
              uVar19 = (uint)CONCAT11(pbVar22[6],pbVar22[7]);
              *(uint *)(param_1 + 0x14) = uVar19;
              param_1[0x15] = pbVar20 + ((ulonglong)local_res18 - *(longlong *)(param_2 + 0x38));
              if (uVar19 != 0) {
                uVar21 = (uint)((bVar7 & 2) != 0);
                iVar18 = uVar21 + 6;
                if ((bVar7 & 4) == 0) {
                  iVar18 = uVar21 + 4;
                }
                iVar11 = iVar18 + 1;
                if ((bVar7 & 8) == 0) {
                  iVar11 = iVar18;
                }
                iVar18 = iVar11 + 1;
                if ((bVar7 & 0x10) == 0) {
                  iVar18 = iVar11;
                }
                iVar11 = iVar18 + 1;
                if ((bVar7 & 0x20) == 0) {
                  iVar11 = iVar18;
                }
                if (pbVar20 + iVar11 * uVar19 <= pbVar17) {
                  uVar15 = FUN_18057ac40(uVar15,0x10,0,uVar19,0,local_res8);
                  param_1[0x16] = uVar15;
                  if ((local_res8[0] == 0) && (uVar19 != 0)) {
                    lVar25 = 0;
                    uVar13 = (ulonglong)uVar19;
                    do {
                      puVar23 = (uint *)(param_1[0x16] + lVar25);
                      uVar19 = (uint)*pbVar20;
                      if ((bVar7 & 2) == 0) {
                        lVar16 = 1;
                      }
                      else {
                        uVar19 = (uint)CONCAT11(*pbVar20,pbVar20[1]);
                        lVar16 = 2;
                      }
                      pbVar20 = pbVar20 + lVar16;
                      *puVar23 = uVar19;
                      if ((bVar7 & 4) == 0) {
                        uVar19 = *(uint *)((longlong)param_1 + 0x2c);
                      }
                      else {
                        uVar19 = (int)(short)((ushort)*pbVar20 << 8) | (uint)pbVar20[1];
                        pbVar20 = pbVar20 + 2;
                      }
                      puVar23[1] = uVar19;
                      pbVar17 = pbVar20 + 1;
                      if ((bVar7 & 8) == 0) {
                        pbVar17 = pbVar20;
                      }
                      uVar19 = (uint)*pbVar17;
                      if ((bVar7 & 0x10) == 0) {
                        lVar16 = 1;
                      }
                      else {
                        uVar19 = (uint)CONCAT11(*pbVar17,pbVar17[1]);
                        lVar16 = 2;
                      }
                      pbVar17 = pbVar17 + lVar16;
                      puVar23[2] = uVar19;
                      uVar19 = (uint)*pbVar17 << 8;
                      if ((bVar7 & 0x20) == 0) {
                        uVar21 = (uint)pbVar17[1];
                        pbVar20 = pbVar17 + 2;
                      }
                      else {
                        pbVar20 = pbVar17 + 3;
                        uVar21 = (uint)CONCAT11(*pbVar17,pbVar17[1]) << 8;
                        uVar19 = (uint)pbVar17[2];
                      }
                      lVar25 = lVar25 + 0x10;
                      puVar23[3] = uVar21 | uVar19;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  goto LAB_1805a83de;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1805a83d3:
  local_res8[0] = 8;
LAB_1805a83de:
  FUN_180577d30(local_res10);
  uVar12 = FUN_1805780f0(local_res10);
  *(undefined4 *)(param_1 + 0x1a) = uVar12;
  param_1[0x1b] = 0;
  return (ulonglong)local_res8[0];
}




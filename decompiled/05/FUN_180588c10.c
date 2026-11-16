// FUN_180588c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588c10 */

int FUN_180588c10(longlong param_1,int param_2,uint *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  ushort uVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  int local_res20 [2];
  undefined4 *local_48;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar14 = *(longlong *)(param_1 + 0x408);
  local_48 = (undefined4 *)0x0;
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  local_res20[0] = FUN_1805788b0(lVar2);
  if ((local_res20[0] == 0) && (sVar4 = FUN_180578720(lVar2,local_res20), local_res20[0] == 0)) {
    if (sVar4 == 1) {
      iVar8 = FUN_180578540(lVar2,local_res20);
      if (local_res20[0] == 0) {
        uVar5 = FUN_180578720(lVar2,local_res20);
        uVar19 = (ulonglong)uVar5;
        uVar23 = (uint)uVar5;
        if (local_res20[0] == 0) {
          if (uVar23 != 0) {
            local_48 = (undefined4 *)FUN_18057ac40(uVar3,4,0,uVar5,0,local_res20);
            if ((local_res20[0] != 0) ||
               (local_res20[0] = FUN_180577bf0(lVar2,(uint)uVar5 * 4), local_res20[0] != 0))
            goto LAB_180589160;
            if (uVar5 != 0) {
              lVar11 = *(longlong *)(lVar2 + 0x38) + -3;
              puVar16 = local_48;
              do {
                *puVar16 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar11 + 3),
                                                      *(undefined1 *)(lVar11 + 4)),
                                             *(undefined1 *)(lVar11 + 5)),
                                    *(undefined1 *)(lVar11 + 6));
                uVar19 = uVar19 - 1;
                lVar11 = lVar11 + 4;
                puVar16 = puVar16 + 1;
              } while (uVar19 != 0);
            }
            FUN_180577d30(lVar2);
            local_res20[0] = FUN_1805788b0(lVar2,iVar8 + param_2);
            if (((local_res20[0] != 0) ||
                (uVar5 = FUN_180578720(lVar2,local_res20), local_res20[0] != 0)) ||
               (uVar6 = FUN_180578720(lVar2,local_res20), local_res20[0] != 0)) goto LAB_180589160;
            if (((uint)uVar5 == **(uint **)(lVar14 + 0x18)) &&
               (*(ushort *)(param_3 + 4) = uVar5, uVar6 < 0x8000)) {
              uVar10 = FUN_18057ad10(uVar3,8,0,uVar6,0,local_res20);
              *(undefined8 *)(param_3 + 6) = uVar10;
              if (local_res20[0] != 0) goto LAB_180589160;
              uVar9 = (uint)uVar6;
              param_3[5] = uVar9;
              iVar8 = FUN_180577bf0(lVar2,uVar5 * uVar9 * 6);
              if (iVar8 == 0) {
                pbVar25 = *(byte **)(lVar2 + 0x38);
                uVar22 = 0;
                local_res20[0] = 0;
                if (uVar9 != 0) {
                  lVar14 = 0;
                  do {
                    lVar11 = *(longlong *)(param_3 + 6);
                    uVar10 = FUN_18057ad10(uVar3,0xc,0,(uint)uVar5,0,local_res20);
                    *(undefined8 *)(lVar11 + lVar14) = uVar10;
                    if (local_res20[0] != 0) {
                      FUN_180577d30(lVar2);
                      goto LAB_180589160;
                    }
                    lVar11 = *(longlong *)(lVar14 + *(longlong *)(param_3 + 6));
                    uVar19 = 0;
                    pbVar24 = pbVar25;
                    if ((short)param_3[4] != 0) {
                      do {
                        pbVar25 = pbVar24 + 6;
                        uVar18 = (int)(short)((ushort)*pbVar24 << 8) | (uint)pbVar24[1];
                        uVar9 = (int)(short)((ushort)pbVar24[2] << 8) | (uint)pbVar24[3];
                        uVar15 = (int)(short)((ushort)pbVar24[4] << 8) | (uint)pbVar24[5];
                        if ((((int)uVar18 < 0) && (0 < (int)uVar15)) ||
                           (((int)uVar9 < (int)uVar18 || ((int)uVar15 < (int)uVar9)))) {
                          uVar9 = 0;
                        }
                        uVar21 = (int)uVar19 + 1;
                        *(uint *)(lVar11 + 4 + uVar19 * 0xc) = uVar9 * 4;
                        *(uint *)(lVar11 + uVar19 * 0xc) = uVar18 * 4;
                        *(uint *)(lVar11 + 8 + uVar19 * 0xc) = uVar15 * 4;
                        uVar19 = (ulonglong)uVar21;
                        pbVar24 = pbVar25;
                      } while (uVar21 < (ushort)param_3[4]);
                    }
                    uVar22 = uVar22 + 1;
                    lVar14 = lVar14 + 8;
                  } while (uVar22 < uVar6);
                }
                FUN_180577d30(lVar2);
                uVar10 = FUN_18057ad10(uVar3,0x20,0,uVar23,0,local_res20);
                *(undefined8 *)(param_3 + 2) = uVar10;
                if (local_res20[0] == 0) {
                  *param_3 = uVar23;
                  uVar19 = 0;
                  if (uVar23 != 0) {
                    do {
                      puVar12 = (uint *)(uVar19 * 0x20 + *(longlong *)(param_3 + 2));
                      local_res20[0] = FUN_1805788b0(lVar2,param_2 + local_48[uVar19]);
                      if ((((local_res20[0] != 0) ||
                           (uVar5 = FUN_180578720(lVar2,local_res20), local_res20[0] != 0)) ||
                          (uVar6 = FUN_180578720(lVar2,local_res20), local_res20[0] != 0)) ||
                         (uVar7 = FUN_180578720(lVar2,local_res20), local_res20[0] != 0))
                      goto LAB_180589160;
                      uVar13 = uVar6 & 0x7fff;
                      if (((uint)uVar7 < (uint)uVar13) ||
                         (uVar9 = (uint)uVar7, param_3[5] <= (uint)uVar7 && uVar9 != param_3[5]))
                      goto LAB_18058914c;
                      uVar10 = FUN_18057ad10(uVar3,4,0,uVar9,0,local_res20);
                      *(undefined8 *)(puVar12 + 2) = uVar10;
                      if (local_res20[0] != 0) goto LAB_180589160;
                      *(byte *)((longlong)puVar12 + 0x1a) = (byte)(uVar6 >> 0xf);
                      puVar12[1] = uVar9;
                      *(ushort *)(puVar12 + 6) = uVar13;
                      local_res20[0] = FUN_180577bf0(lVar2,(uint)uVar7 * 2);
                      if (local_res20[0] != 0) goto LAB_18058914c;
                      uVar17 = 0;
                      if (puVar12[1] != 0) {
                        lVar14 = *(longlong *)(puVar12 + 2);
                        puVar20 = (undefined1 *)(*(longlong *)(lVar2 + 0x38) + -1);
                        do {
                          puVar1 = puVar20 + 1;
                          puVar20 = puVar20 + 2;
                          *(uint *)(uVar17 * 4 + lVar14) = (uint)CONCAT11(*puVar1,*puVar20);
                          lVar14 = *(longlong *)(puVar12 + 2);
                          if (param_3[5] <= *(uint *)(uVar17 * 4 + lVar14)) {
                            FUN_180577d30(lVar2);
                            goto LAB_18058914c;
                          }
                          uVar22 = (int)uVar17 + 1;
                          uVar17 = (ulonglong)uVar22;
                        } while (uVar22 < puVar12[1]);
                      }
                      FUN_180577d30(lVar2);
                      iVar8 = (uVar13 + uVar9) * 2;
                      if (-1 < (short)uVar6) {
                        iVar8 = uVar13 + uVar9;
                      }
                      uVar10 = FUN_18057ac40(uVar3,iVar8,0,uVar5,0,local_res20);
                      *(undefined8 *)(puVar12 + 4) = uVar10;
                      if (local_res20[0] != 0) goto LAB_180589160;
                      iVar8 = FUN_180578100(lVar2,uVar10);
                      if (iVar8 != 0) goto LAB_18058914c;
                      uVar9 = (int)uVar19 + 1;
                      uVar19 = (ulonglong)uVar9;
                      *puVar12 = (uint)uVar5;
                      local_res20[0] = 0;
                    } while (uVar9 < uVar23);
                    local_res20[0] = 0;
                  }
                }
                goto LAB_180589160;
              }
            }
          }
LAB_18058914c:
          local_res20[0] = 8;
        }
      }
    }
    else {
      local_res20[0] = 8;
    }
  }
LAB_180589160:
  FUN_18057abd0(uVar3,local_48);
  return local_res20[0];
}




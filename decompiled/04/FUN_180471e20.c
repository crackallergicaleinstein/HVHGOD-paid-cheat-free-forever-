// FUN_180471e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180471e20 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180471e20(undefined8 *param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 uVar11;
  uint uVar12;
  short *psVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  undefined1 auStack_14c8 [32];
  undefined4 local_14a8;
  uint local_14a0;
  uint local_1498;
  byte local_1488;
  char local_1487;
  int local_1484;
  uint local_1480;
  uint local_147c;
  uint local_1478;
  uint local_1474;
  uint local_1470;
  int local_146c;
  undefined8 local_1468;
  longlong local_1458;
  longlong local_1450;
  longlong local_1438;
  longlong local_1430;
  longlong local_1428;
  undefined4 local_1420;
  char local_448 [4];
  short local_444 [6];
  undefined1 auStack_438 [1024];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x180471e4a;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_14c8;
  local_1488 = 0;
  local_1484 = 1;
  local_1480 = 0;
  local_1478 = 0;
  puVar2 = (uint *)*param_1;
  uVar21 = 0;
  local_1470 = 0;
  uVar24 = 0;
  local_1474 = 0;
  local_147c = 0;
  local_146c = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  local_1487 = '\0';
  uVar15 = 0;
  local_448[0] = '\0';
  local_448[1] = '\0';
  local_448[2] = '\0';
  iVar8 = FUN_180470d70(puVar2);
  if (iVar8 == 0) {
  }
  do {
    iVar8 = FUN_18046f710(puVar2);
    iVar9 = FUN_18046f710(puVar2);
    uVar19 = iVar8 * 0x10000 + iVar9;
    iVar8 = FUN_18046f710(puVar2);
    iVar9 = FUN_18046f710(puVar2);
    uVar12 = iVar9 + iVar8 * 0x10000;
    local_1468 = CONCAT44(uVar12,uVar19);
    if (uVar12 < 0x49484453) {
      if (uVar12 == 0x49484452) {
        if (local_1484 == 0) {
        }
        uVar24 = 0;
        local_1484 = 0;
        if (uVar19 != 0xd) {
        }
        iVar8 = FUN_18046f710(puVar2);
        iVar9 = FUN_18046f710(puVar2);
        *puVar2 = iVar9 + iVar8 * 0x10000;
        iVar8 = FUN_18046f710(puVar2);
        iVar9 = FUN_18046f710(puVar2);
        uVar12 = iVar9 + iVar8 * 0x10000;
        puVar2[1] = uVar12;
        if (0x1000000 < uVar12) {
        }
        if (0x1000000 < *puVar2) {
        }
        pbVar22 = *(byte **)(puVar2 + 0x30);
        if (*(byte **)(puVar2 + 0x32) <= pbVar22) {
          if (puVar2[0xc] == 0) {
            *(undefined4 *)(param_1 + 4) = 0;
          }
          FUN_18046f690(puVar2);
          pbVar22 = *(byte **)(puVar2 + 0x30);
        }
        bVar18 = *pbVar22;
        *(byte **)(puVar2 + 0x30) = pbVar22 + 1;
        *(uint *)(param_1 + 4) = (uint)bVar18;
        if ((((bVar18 != 1) && (bVar18 != 2)) && (bVar18 != 4)) &&
           ((bVar18 != 8 && (bVar18 != 0x10)))) {
        }
        pbVar22 = *(byte **)(puVar2 + 0x30);
        if (pbVar22 < *(byte **)(puVar2 + 0x32)) {
LAB_1804721ba:
          bVar18 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          local_147c = (uint)bVar18;
          *(byte **)(puVar2 + 0x30) = pbVar22;
          if (6 < bVar18) {
          }
          if (bVar18 == 3) {
            if (*(int *)(param_1 + 4) == 0x10) {
            }
            local_1488 = 3;
          }
          else if ((bVar18 & 1) != 0) {
          }
        }
        else {
          if (puVar2[0xc] != 0) {
            FUN_18046f690(puVar2);
            pbVar22 = *(byte **)(puVar2 + 0x30);
            goto LAB_1804721ba;
          }
          bVar18 = 0;
          local_147c = 0;
        }
        bVar1 = local_1488;
        if (pbVar22 < *(byte **)(puVar2 + 0x32)) {
LAB_180472229:
          bVar23 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          *(byte **)(puVar2 + 0x30) = pbVar22;
          if (bVar23 != 0) {
          }
        }
        else if (puVar2[0xc] != 0) {
          FUN_18046f690(puVar2);
          pbVar22 = *(byte **)(puVar2 + 0x30);
          goto LAB_180472229;
        }
        if (pbVar22 < *(byte **)(puVar2 + 0x32)) {
LAB_18047225c:
          bVar23 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          *(byte **)(puVar2 + 0x30) = pbVar22;
          if (bVar23 != 0) {
          }
        }
        else if (puVar2[0xc] != 0) {
          FUN_18046f690(puVar2);
          pbVar22 = *(byte **)(puVar2 + 0x30);
          goto LAB_18047225c;
        }
        if (pbVar22 < *(byte **)(puVar2 + 0x32)) {
LAB_18047228f:
          bVar23 = *pbVar22;
          uVar24 = (uint)bVar23;
          local_1474 = (uint)bVar23;
          *(byte **)(puVar2 + 0x30) = pbVar22 + 1;
          if (1 < bVar23) {
          }
        }
        else {
          if (puVar2[0xc] != 0) {
            FUN_18046f690(puVar2);
            pbVar22 = *(byte **)(puVar2 + 0x30);
            goto LAB_18047228f;
          }
          local_1474 = 0;
        }
        if (*puVar2 == 0) {
        }
        if (puVar2[1] == 0) {
        }
        uVar17 = 0x40000000 / (ulonglong)*puVar2;
        if (bVar1 == 0) {
          uVar12 = (bVar18 >> 2 & 1) + (bVar18 & 2 | 1);
          puVar2[2] = uVar12;
          uVar12 = (uint)(uVar17 / uVar12);
        }
        else {
          uVar12 = (uint)(uVar17 >> 2);
          puVar2[2] = 1;
        }
        if (uVar12 < puVar2[1]) {
        }
      }
      else {
        if (uVar12 == 0x43674249) {
          local_146c = 1;
          goto LAB_18047234d;
        }
        if (uVar12 != 0x49444154) {
          if (uVar12 == 0x49454e44) {
            if (local_1484 != 0) {
            }
            lVar10 = param_1[1];
            if (lVar10 == 0) {
            }
            lVar20 = (longlong)
                     (int)(((*(int *)(param_1 + 4) * *puVar2 + 7 >> 3) * puVar2[2] + 1) * puVar2[1])
            ;
            local_1438 = _malloc_base(lVar20);
            iVar8 = local_146c;
            if (local_1438 == 0) {
              param_1[2] = 0;
            }
            local_1450 = (int)local_1480 + lVar10;
            local_1428 = lVar20 + local_1438;
            local_1420 = 1;
            local_1458 = lVar10;
            local_1430 = local_1438;
            iVar9 = FUN_180470c10(&local_1458,local_146c == 0);
            if (iVar9 == 0) {
              thunk_FUN_180621380(local_1430);
              param_1[2] = 0;
            }
            iVar9 = (int)local_1438 - (int)local_1430;
            param_1[2] = local_1430;
            if (local_1430 == 0) {
            }
            thunk_FUN_180621380(param_1[1]);
            cVar4 = local_1487;
            bVar18 = local_1488;
            param_1[1] = 0;
            uVar15 = puVar2[2] + 1;
            if (((uVar15 != 4) || (local_1488 != 0)) && (local_1487 == '\0')) {
              uVar15 = puVar2[2];
            }
            puVar2[3] = uVar15;
            local_14a0 = local_147c;
            local_14a8 = *(undefined4 *)(param_1 + 4);
            local_1498 = uVar24;
            iVar9 = FUN_1804719c0(param_1,param_1[2],iVar9);
            if (iVar9 == 0) {
            }
            if (cVar4 != '\0') {
              psVar13 = (short *)param_1[3];
              uVar15 = ((int *)*param_1)[1] * *(int *)*param_1;
              uVar17 = (ulonglong)uVar15;
              if (*(int *)(param_1 + 4) == 0x10) {
                if (uVar15 != 0) {
                  if (puVar2[3] == 2) {
                    do {
                      sVar7 = -1;
                      if (*psVar13 == local_444[0]) {
                        sVar7 = 0;
                      }
                      psVar13[1] = sVar7;
                      uVar17 = uVar17 - 1;
                      psVar13 = psVar13 + 2;
                    } while (uVar17 != 0);
                  }
                  else {
                    do {
                      if (((*psVar13 == local_444[0]) && (psVar13[1] == local_444[1])) &&
                         (psVar13[2] == local_444[2])) {
                        psVar13[3] = 0;
                      }
                      psVar13 = psVar13 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                }
              }
              else if (uVar15 != 0) {
                if (puVar2[3] == 2) {
                  do {
                    cVar5 = -1;
                    if ((char)*psVar13 == local_448[0]) {
                      cVar5 = '\0';
                    }
                    *(char *)((longlong)psVar13 + 1) = cVar5;
                    uVar17 = uVar17 - 1;
                    psVar13 = psVar13 + 1;
                  } while (uVar17 != 0);
                }
                else {
                  do {
                    if ((((char)*psVar13 == local_448[0]) &&
                        (*(char *)((longlong)psVar13 + 1) == local_448[1])) &&
                       ((char)psVar13[1] == local_448[2])) {
                      *(char *)((longlong)psVar13 + 3) = '\0';
                    }
                    psVar13 = psVar13 + 2;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
              }
            }
            if (((iVar8 != 0) && (DAT_180bb8adc != 0)) && (2 < (int)puVar2[3])) {
              piVar3 = (int *)*param_1;
              pbVar22 = (byte *)param_1[3];
              uVar15 = piVar3[1] * *piVar3;
              if (uVar15 != 0) {
                if (piVar3[3] == 3) {
                  uVar17 = (ulonglong)uVar15;
                  do {
                    bVar1 = *pbVar22;
                    *pbVar22 = pbVar22[2];
                    pbVar22[2] = bVar1;
                    pbVar22 = pbVar22 + 3;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                else if (DAT_180bb8ad4 == 0) {
                  uVar17 = (ulonglong)uVar15;
                  do {
                    bVar1 = *pbVar22;
                    *pbVar22 = pbVar22[2];
                    pbVar22[2] = bVar1;
                    pbVar22 = pbVar22 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                else {
                  uVar17 = (ulonglong)uVar15;
                  do {
                    bVar1 = pbVar22[3];
                    bVar23 = *pbVar22;
                    bVar6 = pbVar22[2];
                    if (bVar1 != 0) {
                      uVar15 = (uint)bVar1;
                      uVar21 = (uint)(bVar1 >> 1);
                      pbVar22[1] = (byte)(((uint)pbVar22[1] * 0xff + uVar21) / uVar15);
                      bVar23 = (byte)(((uint)bVar23 * 0xff + uVar21) / uVar15);
                      bVar6 = (byte)(((uint)bVar6 * 0xff + uVar21) / uVar15);
                    }
                    *pbVar22 = bVar6;
                    pbVar22[2] = bVar23;
                    pbVar22 = pbVar22 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
              }
            }
            if (bVar18 == 0) {
              if (cVar4 != '\0') {
                puVar2[2] = puVar2[2] + 1;
              }
            }
            else {
              puVar2[2] = (uint)bVar18;
              puVar2[3] = 4;
              pbVar22 = (byte *)param_1[3];
              uVar15 = ((int *)*param_1)[1] * *(int *)*param_1;
              if ((int)uVar15 < 0) {
              }
              if (0x1fffffff < (int)uVar15) {
              }
              lVar10 = _malloc_base((longlong)(int)(uVar15 * 4));
              if (lVar10 == 0) {
              }
              if (uVar15 != 0) {
                uVar17 = (ulonglong)uVar15;
                puVar16 = (undefined1 *)(lVar10 + 2);
                do {
                  uVar14 = (ulonglong)*pbVar22;
                  pbVar22 = pbVar22 + 1;
                  puVar16[-2] = auStack_438[uVar14 * 4];
                  puVar16[-1] = auStack_438[uVar14 * 4 + 1];
                  uVar11 = auStack_438[uVar14 * 4 + 2];
                  puVar16[1] = auStack_438[uVar14 * 4 + 3];
                  *puVar16 = uVar11;
                  uVar17 = uVar17 - 1;
                  puVar16 = puVar16 + 4;
                } while (uVar17 != 0);
              }
              thunk_FUN_180621380(param_1[3]);
              param_1[3] = lVar10;
            }
            thunk_FUN_180621380(param_1[2]);
            param_1[2] = 0;
            FUN_18046f710(puVar2);
            FUN_18046f710(puVar2);
          }
          goto LAB_180472332;
        }
        if (local_1484 != 0) {
        }
        if ((local_1488 != 0) && (uVar21 == 0)) {
        }
        if (0x40000000 < uVar19) {
        }
        uVar17 = (ulonglong)local_1480;
        uVar21 = uVar19 + local_1480;
        if ((int)uVar21 < (int)local_1480) {
        }
        if (uVar15 < uVar21) {
          if (uVar15 == 0) {
            uVar15 = 0x1000;
            if (0x1000 < uVar19) {
              uVar15 = uVar19;
            }
            local_1478 = uVar15;
            if (uVar15 < uVar21) goto LAB_180471fe0;
          }
          else {
LAB_180471fe0:
            do {
              uVar15 = uVar15 * 2;
            } while (uVar15 < uVar21);
            local_1478 = uVar15;
          }
          uVar15 = local_1478;
          lVar10 = _realloc_base(param_1[1],local_1478);
          if (lVar10 == 0) {
          }
          param_1[1] = lVar10;
        }
        if ((*(longlong *)(puVar2 + 4) == 0) ||
           (iVar8 = puVar2[0x32] - puVar2[0x30], (int)uVar19 <= iVar8)) {
          if (*(ulonglong *)(puVar2 + 0x32) <
              (ulonglong)((longlong)(int)uVar19 + *(longlong *)(puVar2 + 0x30))) {
          }
          FUN_18063aed0(uVar17 + param_1[1]);
          *(longlong *)(puVar2 + 0x30) = *(longlong *)(puVar2 + 0x30) + (longlong)(int)uVar19;
          local_1480 = local_1480 + uVar19;
          uVar21 = local_1470;
          uVar24 = local_1474;
        }
        else {
          FUN_18063aed0(uVar17 + param_1[1],*(undefined8 *)(puVar2 + 0x30),(longlong)iVar8);
          iVar9 = (**(code **)(puVar2 + 4))(*(undefined8 *)(puVar2 + 10));
          *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar2 + 0x32);
          if (iVar9 != uVar19 - iVar8) {
          }
          local_1480 = local_1480 + uVar19;
          uVar15 = local_1478;
          uVar21 = local_1470;
          uVar24 = local_1474;
        }
      }
    }
    else if (uVar12 == 0x504c5445) {
      if (local_1484 != 0) {
      }
      if (0x300 < uVar19) {
      }
      uVar21 = uVar19 / 3;
      if (uVar21 * 3 != uVar19) {
      }
      uVar12 = 0;
      local_1470 = uVar21;
      if (uVar21 != 0) {
        do {
          puVar16 = *(undefined1 **)(puVar2 + 0x30);
          if (puVar16 < *(undefined1 **)(puVar2 + 0x32)) {
            uVar11 = *puVar16;
            puVar16 = puVar16 + 1;
            *(undefined1 **)(puVar2 + 0x30) = puVar16;
          }
          else if (puVar2[0xc] == 0) {
            uVar11 = 0;
          }
          else {
            FUN_18046f690(puVar2);
            uVar11 = **(undefined1 **)(puVar2 + 0x30);
            puVar16 = *(undefined1 **)(puVar2 + 0x30) + 1;
            *(undefined1 **)(puVar2 + 0x30) = puVar16;
          }
          uVar19 = uVar12 * 4;
          auStack_438[uVar19] = uVar11;
          if (puVar16 < *(undefined1 **)(puVar2 + 0x32)) {
            uVar11 = *puVar16;
            puVar16 = puVar16 + 1;
            *(undefined1 **)(puVar2 + 0x30) = puVar16;
          }
          else if (puVar2[0xc] == 0) {
            uVar11 = 0;
          }
          else {
            FUN_18046f690();
            uVar11 = **(undefined1 **)(puVar2 + 0x30);
            puVar16 = *(undefined1 **)(puVar2 + 0x30) + 1;
            *(undefined1 **)(puVar2 + 0x30) = puVar16;
          }
          auStack_438[uVar19 + 1] = uVar11;
          if (puVar16 < *(undefined1 **)(puVar2 + 0x32)) {
            uVar11 = *puVar16;
            *(undefined1 **)(puVar2 + 0x30) = puVar16 + 1;
          }
          else if (puVar2[0xc] == 0) {
            uVar11 = 0;
          }
          else {
            FUN_18046f690();
            uVar11 = **(undefined1 **)(puVar2 + 0x30);
            *(undefined1 **)(puVar2 + 0x30) = *(undefined1 **)(puVar2 + 0x30) + 1;
          }
          uVar12 = uVar12 + 1;
          auStack_438[uVar19 + 2] = uVar11;
          auStack_438[uVar19 + 3] = 0xff;
        } while (uVar12 < uVar21);
      }
    }
    else if (uVar12 == 0x74524e53) {
      if (local_1484 != 0) {
      }
      if (param_1[1] != 0) {
      }
      if (local_1488 == 0) {
        uVar12 = puVar2[2];
        if ((uVar12 & 1) == 0) {
        }
        if (uVar19 != uVar12 * 2) {
        }
        iVar8 = 0;
        local_1487 = '\x01';
        lVar10 = 0;
        if (*(int *)(param_1 + 4) == 0x10) {
          if (0 < (int)uVar12) {
            do {
              if (2 < lVar10) break;
              sVar7 = FUN_18046f710(puVar2);
              local_444[lVar10] = sVar7;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar8 < (int)puVar2[2]);
          }
        }
        else if (0 < (int)uVar12) {
          do {
            if (2 < lVar10) break;
            cVar4 = FUN_18046f710(puVar2);
            iVar8 = iVar8 + 1;
            local_448[lVar10] = (&DAT_18077f668)[*(int *)(param_1 + 4)] * cVar4;
            lVar10 = lVar10 + 1;
          } while (iVar8 < (int)puVar2[2]);
        }
      }
      else {
        if (uVar21 == 0) {
        }
        if (uVar21 < uVar19) {
        }
        uVar12 = 0;
        local_1488 = 4;
        if (uVar19 != 0) {
          do {
            puVar16 = *(undefined1 **)(puVar2 + 0x30);
            if (puVar16 < *(undefined1 **)(puVar2 + 0x32)) {
              uVar11 = *puVar16;
              *(undefined1 **)(puVar2 + 0x30) = puVar16 + 1;
            }
            else if (puVar2[0xc] == 0) {
              uVar11 = 0;
            }
            else {
              FUN_18046f690(puVar2);
              uVar11 = **(undefined1 **)(puVar2 + 0x30);
              *(undefined1 **)(puVar2 + 0x30) = *(undefined1 **)(puVar2 + 0x30) + 1;
            }
            iVar8 = uVar12 * 4;
            uVar12 = uVar12 + 1;
            auStack_438[iVar8 + 3] = uVar11;
          } while (uVar12 < uVar19);
        }
      }
    }
    else {
LAB_180472332:
      if (local_1484 != 0) {
      }
      if ((uVar12 >> 0x1d & 1) == 0) {
        s_XXXX_PNG_chunk_not_known_180b0a460[0] = (char)(uVar12 >> 0x18);
        s_XXXX_PNG_chunk_not_known_180b0a460[1] = (char)(uVar12 >> 0x10);
        s_XXXX_PNG_chunk_not_known_180b0a460[2] = (char)(uVar12 >> 8);
        s_XXXX_PNG_chunk_not_known_180b0a460[3] = (char)uVar12;
      }
LAB_18047234d:
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar2 + 0x32);
        }
        else if ((*(longlong *)(puVar2 + 4) == 0) ||
                ((int)uVar19 <= (int)(puVar2[0x32] - puVar2[0x30]))) {
          *(longlong *)(puVar2 + 0x30) = *(longlong *)(puVar2 + 0x30) + (longlong)(int)uVar19;
        }
        else {
          *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar2 + 0x32);
          (**(code **)(puVar2 + 6))(*(undefined8 *)(puVar2 + 10));
        }
      }
    }
    FUN_18046f710(puVar2);
    FUN_18046f710(puVar2);
  } while( true );
}




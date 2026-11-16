// FUN_180584f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180584f30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180584f30(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  uint *puVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 *puVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int *piVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auStack_2e8 [32];
  char local_2c8;
  ushort local_2c6;
  int local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  int local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  int *local_288;
  uint local_280;
  uint local_27c;
  uint local_278;
  longlong local_270;
  undefined8 *local_268;
  uint local_260;
  uint local_25c;
  longlong local_258;
  undefined8 *local_250;
  longlong local_248;
  char *local_240;
  uint *local_238;
  ushort local_228;
  ushort uStack_226;
  undefined2 uStack_224;
  undefined2 uStack_222;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined8 local_208;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_238 = (uint *)*param_1;
  puVar29 = param_1 + 0x49;
  local_288 = (int *)(&DAT_18066bd50 + (longlong)(int)local_238[3] * 8);
  iVar14 = *local_288;
  local_25c = *(uint *)(param_1 + 8) / 0xe;
  local_268 = param_1;
  local_250 = puVar29;
  local_248 = param_2;
  if (iVar14 == 0x159b) {
LAB_1805859c5:
    uVar33 = 1;
    uVar27 = 0;
    uVar37 = *(uint *)(puVar29 + 0x1b);
    if (uVar37 == 0) {
      lVar32 = param_1[6];
      lVar4 = *(longlong *)(lVar32 + 0x10);
      if (*(int *)(lVar32 + 8) != 0) {
        do {
          if ((*(ushort *)(lVar4 + uVar27 * 2) & 0x1fff) == *local_238) {
            *(undefined2 *)(lVar4 + uVar27 * 2) = 0x42;
          }
          uVar37 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar37;
        } while (uVar37 < *(uint *)(lVar32 + 8));
      }
    }
    else {
      puVar16 = &local_228;
      uVar26 = (ulonglong)uVar37;
      lVar32 = (longlong)puVar29 + 0xdc;
      do {
        *(longlong *)puVar16 = lVar32;
        puVar16 = puVar16 + 4;
        lVar32 = lVar32 + 0x24;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
      if (1 < uVar37) {
        do {
          iVar14 = (int)uVar33;
          piVar23 = local_1e8 + uVar33 * 2 + -0x10;
          do {
            uVar36 = (int)uVar33 - 1;
            uVar33 = (ulonglong)uVar36;
            piVar2 = *(int **)(local_1e8 + (ulonglong)uVar36 * 2 + -0x10);
            piVar22 = piVar2;
            if ((*(byte *)(piVar2 + 8) & 6) == 0) {
              piVar22 = piVar2 + 3;
            }
            piVar3 = *(int **)piVar23;
            piVar35 = piVar3;
            if ((*(byte *)(piVar3 + 8) & 6) == 0) {
              piVar35 = piVar3 + 3;
            }
            if (*piVar22 <= *piVar35) break;
            *(int **)piVar23 = piVar2;
            piVar23 = piVar23 + -2;
            *(int **)(local_1e8 + (ulonglong)uVar36 * 2 + -0x10) = piVar3;
          } while (uVar36 != 0);
          uVar36 = iVar14 + 1;
          uVar33 = (ulonglong)uVar36;
        } while (uVar36 < uVar37);
      }
      if (uVar37 != 1) {
        do {
          piVar23 = *(int **)(local_1e8 + uVar27 * 2 + -0x10);
          if ((*(byte *)(piVar23 + 8) & 6) != 0) {
            piVar23 = piVar23 + 3;
          }
          uVar37 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar37;
          piVar22 = *(int **)(local_1e8 + uVar27 * 2 + -0x10);
          if ((*(byte *)(piVar22 + 8) & 6) != 0) {
            piVar22 = piVar22 + 3;
          }
          if (*piVar22 < *piVar23) {
            *piVar23 = *piVar22;
          }
        } while (uVar37 < *(int *)(puVar29 + 0x1b) - 1U);
      }
    }
  }
LAB_180584ff0:
  uVar26 = 0;
  local_2a0 = 0;
  local_278 = 0;
  local_290 = 0;
  local_29c = 0;
  cVar8 = (&DAT_18066a7b0)[iVar14];
  pcVar20 = &DAT_18066a7b0 + iVar14;
  piVar23 = local_288;
  uVar27 = uVar26;
  uVar33 = uVar26;
  if (cVar8 != '\0') {
LAB_180585020:
    local_2c8 = '\0';
    while (cVar8 == ' ') {
      pcVar20 = pcVar20 + 1;
      cVar8 = *pcVar20;
    }
    local_240 = (char *)FUN_1805871d0(pcVar20,param_1,&local_2c4,&local_27c);
    uVar34 = uVar27;
    if (local_27c != 0) {
      local_2a4 = 0;
      iVar14 = -0x80000000;
      if ((*(byte *)(piVar23 + 1) & 1) == 0) {
        iVar14 = 0x7fffffff;
      }
      cVar8 = '\0';
      if (local_27c != 0) {
        iVar9 = local_2c4;
        local_2b4 = iVar14;
LAB_180585090:
        lVar32 = local_248;
        uVar37 = local_2a4;
        uVar27 = 0;
        cVar8 = '\0';
        local_2c6 = local_2c6 & 0xff00;
        if (iVar9 != 0) {
          iVar10 = FUN_180574690(local_248,iVar9,1);
          lVar32 = *(longlong *)(lVar32 + 0x78);
          local_208 = *(undefined8 *)(lVar32 + 0xb8);
          local_228 = *(ushort *)(lVar32 + 0x98);
          plVar5 = (longlong *)(lVar32 + 0xa0);
          lVar15 = *plVar5;
          lVar7 = *plVar5;
          lVar4 = *(longlong *)(lVar32 + 0xa8);
          uStack_226 = *(ushort *)(lVar32 + 0x9a);
          uStack_224 = *(undefined2 *)(lVar32 + 0x9c);
          uStack_222 = *(undefined2 *)(lVar32 + 0x9e);
          uStack_220 = *(undefined2 *)plVar5;
          uStack_21e = *(undefined2 *)(lVar32 + 0xa2);
          uStack_21c = *(undefined2 *)(lVar32 + 0xa4);
          uStack_21a = *(undefined2 *)(lVar32 + 0xa6);
          iVar9 = local_2c4;
          if (iVar10 != 0) goto LAB_180585712;
          if (*(ushort *)(lVar32 + 0x9a) < 3) goto LAB_180585712;
          uVar24 = 0xffffffff;
          local_2c0 = 0xffffffff;
          uVar36 = 0xffffffff;
          uVar38 = 0xffffffff;
          uVar30 = 0xffffffff;
          uVar34 = uVar27;
          piVar23 = local_288;
          if ((ulonglong)local_228 != 0) {
            do {
              uVar37 = uVar30 + 1;
              uVar30 = (uint)*(ushort *)(*(longlong *)(lVar32 + 0xb0) + uVar27 * 2);
              if ((int)uVar37 < (int)uVar30) {
                puVar21 = (uint *)(*plVar5 + 4 + (longlong)(int)uVar37 * 8);
                uVar24 = uVar37;
                if ((*(byte *)(local_288 + 1) & 3) == 0) {
                  do {
                    if (((int)uVar36 < 0) || (uVar28 = *puVar21, (int)uVar28 < (int)uVar34)) {
                      uVar28 = *puVar21;
                      uVar34 = (ulonglong)uVar28;
                      uVar36 = uVar24;
                      if ((int)uVar28 <= (int)uVar33) {
                        uVar33 = (ulonglong)uVar28;
                      }
                    }
                    else if ((int)uVar26 <= (int)uVar28) {
                      uVar26 = (ulonglong)uVar28;
                    }
                    uVar24 = uVar24 + 1;
                    puVar21 = puVar21 + 2;
                  } while ((int)uVar24 <= (int)uVar30);
                }
                else {
                  do {
                    if (((int)uVar36 < 0) || (uVar28 = *puVar21, (int)uVar34 < (int)uVar28)) {
                      uVar28 = *puVar21;
                      uVar34 = (ulonglong)uVar28;
                      uVar36 = uVar24;
                      if ((int)uVar26 <= (int)uVar28) {
                        uVar26 = (ulonglong)uVar28;
                      }
                    }
                    else if ((int)uVar28 <= (int)uVar33) {
                      uVar33 = (ulonglong)uVar28;
                    }
                    uVar24 = uVar24 + 1;
                    puVar21 = puVar21 + 2;
                  } while ((int)uVar24 <= (int)uVar30);
                }
                local_290 = (uint)uVar26;
                local_29c = (uint)uVar33;
                if ((int)uVar38 < (int)uVar36) {
                  uVar38 = uVar30;
                  uVar24 = uVar37;
                  local_2c0 = uVar37;
                }
                else {
                  uVar24 = local_2c0;
                }
              }
              uVar27 = uVar27 + 1;
            } while ((longlong)uVar27 < (longlong)(ulonglong)local_228);
            cVar8 = (char)local_2c6;
            uVar37 = local_2a4;
            iVar14 = local_2b4;
            local_2b0 = uVar38;
            if ((int)uVar36 < 0) goto LAB_1805856c8;
            lVar32 = (longlong)(int)uVar36;
            local_258 = (longlong)(int)uVar38;
            iVar10 = *(int *)(*plVar5 + lVar32 * 8);
            uVar30 = 0xffffffff;
            if ((*(byte *)(lVar4 + lVar32) & 3) == 1) {
              uVar30 = uVar36;
            }
            uVar28 = uVar30;
            local_2bc = uVar30;
            local_2b8 = uVar30;
            local_2a8 = uVar36;
            do {
              if ((int)uVar24 < (int)local_2a8) {
                lVar32 = lVar32 + -1;
                uVar17 = local_2a8 - 1;
              }
              else {
                lVar32 = local_258;
                uVar17 = uVar38;
              }
              iVar31 = *(int *)(*plVar5 + 4 + lVar32 * 8);
              iVar13 = (int)uVar34;
              iVar11 = iVar31 - iVar13;
              if (iVar11 < 0) {
                iVar11 = iVar13 - iVar31;
              }
              if (5 < iVar11) {
                iVar31 = *(int *)(*plVar5 + lVar32 * 8);
                iVar25 = iVar31 - iVar10;
                if (iVar25 < 0) {
                  iVar25 = iVar10 - iVar31;
                }
                uVar30 = local_2bc;
                if (iVar25 <= iVar11 * 0x14) break;
              }
              if ((*(byte *)(lVar32 + lVar4) & 3) == 1) {
                if ((int)uVar28 < 0) {
                  uVar28 = uVar17;
                }
                uVar30 = uVar17;
                local_2bc = uVar17;
                local_2b8 = uVar28;
              }
              uVar24 = local_2c0;
              local_2a8 = uVar17;
            } while (uVar17 != uVar36);
            lVar32 = (longlong)(int)uVar36;
            local_294 = uVar36;
            do {
              if (lVar32 < local_258) {
                lVar32 = lVar32 + 1;
                local_298 = local_294 + 1;
              }
              else {
                lVar32 = (longlong)(int)local_2c0;
                local_298 = local_2c0;
              }
              iVar31 = *(int *)(*plVar5 + 4 + lVar32 * 8);
              iVar11 = iVar31 - iVar13;
              if (iVar11 < 0) {
                iVar11 = iVar13 - iVar31;
              }
              if (5 < iVar11) {
                iVar31 = *(int *)(*plVar5 + lVar32 * 8);
                iVar25 = iVar31 - iVar10;
                if (iVar25 < 0) {
                  iVar25 = iVar10 - iVar31;
                }
                if (iVar25 <= iVar11 * 0x14) break;
              }
              if ((*(byte *)(lVar32 + lVar4) & 3) == 1) {
                local_2b8 = local_298;
                if ((int)uVar30 < 0) {
                  uVar30 = local_298;
                }
              }
              local_294 = local_298;
            } while (local_298 != uVar36);
            uVar26 = (ulonglong)local_290;
            local_2c6 = *(ushort *)(local_288 + 1);
            uVar24 = local_294;
            uVar28 = local_2b8;
            uVar17 = local_2a8;
            local_2bc = uVar30;
            local_270 = lVar4;
            if ((local_2c6 & 0x10) == 0) {
              uVar12 = uVar30;
              goto LAB_180585568;
            }
            local_260 = *(uint *)(local_268 + 8) / 0x19;
            iVar31 = *(int *)(*plVar5 + (longlong)(int)local_294 * 8);
            iVar11 = *(int *)(*plVar5 + (longlong)(int)local_2a8 * 8);
            iVar25 = iVar31 - iVar11;
            iVar31 = iVar11 - iVar31;
            if (-1 < iVar25) {
              iVar31 = iVar25;
            }
            if (((int)local_260 <= iVar31) ||
               ((int)(uVar38 - local_2c0) < (int)((local_294 - local_2a8) + 2))) {
LAB_180585552:
              uVar12 = uVar30;
              uVar24 = local_294;
              goto LAB_180585562;
            }
            uVar12 = 0;
            local_2ac = 0;
            lVar32 = (longlong)(int)uVar36;
            uVar18 = uVar36;
            do {
              if ((int)local_2c0 < lVar32) {
                lVar32 = lVar32 + -1;
                uVar18 = uVar18 - 1;
              }
              else {
                lVar32 = local_258;
                uVar18 = uVar38;
              }
              iVar31 = *(int *)(*plVar5 + lVar32 * 8);
            } while ((iVar31 == iVar10) && (lVar32 != (int)uVar36));
            if (uVar18 != uVar36) {
              lVar15 = (longlong)(int)local_294;
              bVar6 = false;
              lVar32 = lVar15;
              local_280 = local_294;
              do {
                if (!bVar6) {
                  bVar6 = true;
                  uVar12 = 0xffffffff;
                  if ((*(byte *)(lVar15 + lVar4) & 3) == 1) {
                    uVar12 = uVar24;
                  }
                  lVar32 = lVar15;
                  local_2ac = uVar12;
                  local_280 = uVar24;
                }
                if (lVar15 < local_258) {
                  lVar15 = lVar15 + 1;
                  uVar24 = uVar24 + 1;
                }
                else {
                  lVar15 = (longlong)(int)local_2c0;
                  uVar24 = local_2c0;
                }
                iVar11 = *(int *)(lVar7 + 4 + lVar32 * 8);
                iVar25 = iVar13 - iVar11;
                if (iVar25 < 0) {
                  iVar25 = iVar11 - iVar13;
                }
                if ((int)(*(uint *)(local_268 + 8) >> 2) < iVar25) {
                  bVar6 = false;
                }
                else {
                  iVar25 = *(int *)(lVar7 + 4 + lVar15 * 8) - iVar11;
                  iVar11 = iVar11 - *(int *)(lVar7 + 4 + lVar15 * 8);
                  if (-1 < iVar25) {
                    iVar11 = iVar25;
                  }
                  if (5 < iVar11) {
                    iVar25 = *(int *)(lVar7 + lVar15 * 8);
                    iVar1 = *(int *)(lVar7 + lVar32 * 8);
                    iVar19 = iVar25 - iVar1;
                    iVar25 = iVar1 - iVar25;
                    if (-1 < iVar19) {
                      iVar25 = iVar19;
                    }
                    if (iVar25 <= iVar11 * 0x14) {
                      bVar6 = false;
                      goto LAB_18058553a;
                    }
                  }
                  if ((*(byte *)(lVar15 + lVar4) & 3) == 1) {
                    local_2ac = uVar24;
                    if ((int)uVar12 < 0) {
                      uVar12 = uVar24;
                    }
                  }
                  iVar25 = *(int *)(*plVar5 + lVar32 * 8);
                  iVar1 = *(int *)(*plVar5 + lVar15 * 8);
                  if (iVar25 < iVar1 == iVar31 < iVar10) {
                    iVar19 = iVar25 - iVar1;
                    if (-1 < iVar1 - iVar25) {
                      iVar19 = iVar1 - iVar25;
                    }
                    if ((int)local_260 <= iVar19) {
                      piVar22 = (int *)(*plVar5 + (longlong)(int)local_280 * 8);
                      iVar10 = piVar22[1];
                      piVar2 = (int *)(*plVar5 + (longlong)(int)local_298 * 8);
                      goto LAB_1805855d0;
                    }
                  }
                }
LAB_18058553a:
              } while (uVar24 != local_2a8);
              goto LAB_180585552;
            }
            goto LAB_180585701;
          }
          goto LAB_1805856c8;
        }
        goto LAB_180585716;
      }
      goto LAB_18058573b;
    }
    goto LAB_180585769;
  }
  goto LAB_180585986;
LAB_1805855d0:
  do {
    if (lVar15 < local_258) {
      lVar15 = lVar15 + 1;
      uVar24 = uVar24 + 1;
    }
    else {
      lVar15 = (longlong)(int)local_2c0;
      uVar24 = local_2c0;
    }
    iVar31 = *(int *)(*plVar5 + 4 + lVar15 * 8);
    iVar13 = iVar31 - iVar10;
    if (iVar13 < 0) {
      iVar13 = iVar10 - iVar31;
    }
    if (5 < iVar13) {
      iVar31 = *piVar22;
      iVar13 = *piVar2 - iVar31;
      iVar31 = iVar31 - *piVar2;
      if (-1 < iVar13) {
        iVar31 = iVar13;
      }
      if (iVar31 <= iVar11 * 0x14) {
        if ((int)local_2c0 < (int)uVar24) {
          uVar24 = uVar24 - 1;
        }
        else {
          uVar24 = uVar38;
        }
        break;
      }
    }
    if (((*(byte *)(lVar15 + lVar4) & 3) == 1) && ((int)uVar12 < 0)) {
      uVar12 = uVar24;
    }
    local_2ac = uVar24;
  } while (uVar24 != local_2a8);
  uVar34 = (ulonglong)*(uint *)(*plVar5 + 4 + (longlong)(int)local_280 * 8);
  uVar28 = local_2ac;
  uVar17 = local_280;
LAB_180585562:
  lVar15 = *plVar5;
LAB_180585568:
  uVar33 = (ulonglong)local_29c;
  if (((int)uVar12 < 0) || ((int)uVar28 < 0)) {
LAB_180585690:
    if (((*(byte *)((int)uVar17 + lVar4) & 3) == 1) && ((*(byte *)((int)uVar24 + lVar4) & 3) == 1))
    {
      cVar8 = '\0';
      goto LAB_1805856c8;
    }
    cVar8 = '\x01';
    if ((local_2c6 & 4) == 0) goto LAB_1805856c8;
LAB_180585701:
    uVar33 = (ulonglong)local_29c;
LAB_180585712:
    local_2a4 = uVar37;
  }
  else {
    iVar10 = *(int *)(lVar15 + (longlong)(int)uVar28 * 8);
    iVar31 = *(int *)(lVar15 + (longlong)(int)uVar12 * 8);
    iVar11 = iVar10 - iVar31;
    iVar10 = iVar31 - iVar10;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar10 <= (int)local_25c) goto LAB_180585690;
    cVar8 = '\0';
LAB_1805856c8:
    local_2a4 = uVar37;
    iVar10 = (int)uVar34;
    if ((*(byte *)(local_288 + 1) & 1) == 0) {
      if (iVar10 < iVar14) {
        iVar14 = iVar10;
        local_2c8 = cVar8;
        local_2b4 = iVar10;
        goto LAB_18058571b;
      }
    }
    else if (iVar14 < iVar10) {
      iVar14 = iVar10;
      local_2c8 = cVar8;
      local_2b4 = iVar10;
      goto LAB_18058571b;
    }
  }
LAB_180585716:
LAB_18058571b:
  local_2a4 = local_2a4 + 1;
  if (local_27c <= local_2a4) goto code_r0x00018058572e;
  goto LAB_180585090;
code_r0x00018058572e:
  uVar27 = (ulonglong)local_278;
  cVar8 = local_2c8;
LAB_18058573b:
  uVar34 = uVar27;
  if (iVar14 + 0x7fffffffU < 0xfffffffe) {
    if (cVar8 == '\0') {
      local_118[local_2a0] = iVar14;
      local_2a0 = local_2a0 + 1;
      goto LAB_18058576e;
    }
    local_278 = (int)uVar27 + 1;
    uVar34 = (ulonglong)local_278;
    local_1e8[uVar27] = iVar14;
  }
LAB_180585769:
  uVar27 = uVar34;
LAB_18058576e:
  cVar8 = *local_240;
  pcVar20 = local_240;
  param_1 = local_268;
  if (cVar8 == '\0') goto code_r0x000180585786;
  goto LAB_180585020;
code_r0x000180585786:
  uVar37 = (uint)uVar27;
  puVar29 = local_250;
  if ((local_2a0 != 0) || (uVar37 != 0)) {
    uVar36 = 1;
    if (1 < uVar37) {
      do {
        if (uVar36 != 0) {
          piVar22 = local_1e8 + uVar36;
          uVar38 = uVar36;
          do {
            iVar14 = *piVar22;
            uVar38 = uVar38 - 1;
            if (local_1e8[uVar38] <= iVar14) break;
            *piVar22 = local_1e8[uVar38];
            piVar22 = piVar22 + -1;
            local_1e8[uVar38] = iVar14;
          } while (uVar38 != 0);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < uVar37);
    }
    uVar36 = 1;
    if (1 < local_2a0) {
      do {
        if (uVar36 != 0) {
          piVar22 = local_118 + uVar36;
          uVar38 = uVar36;
          do {
            iVar14 = *piVar22;
            uVar38 = uVar38 - 1;
            if (local_118[uVar38] <= iVar14) break;
            *piVar22 = local_118[uVar38];
            piVar22 = piVar22 + -1;
            local_118[uVar38] = iVar14;
          } while (uVar38 != 0);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < local_2a0);
    }
    uVar36 = *(uint *)(local_250 + 0x1b);
    *(uint *)(local_250 + 0x1b) = uVar36 + 1;
    piVar22 = (int *)((longlong)local_250 + ((ulonglong)uVar36 * 9 + 0x37) * 4);
    if (local_2a0 == 0) {
      iVar14 = local_1e8[uVar27 >> 1];
      piVar22[3] = iVar14;
      *piVar22 = iVar14;
    }
    else {
      iVar14 = local_118[local_2a0 >> 1];
      if (uVar37 == 0) {
        piVar22[3] = iVar14;
        *piVar22 = iVar14;
      }
      else {
        *piVar22 = iVar14;
        piVar22[3] = local_1e8[uVar27 >> 1];
      }
    }
    iVar14 = *piVar22;
    iVar9 = piVar22[3];
    if ((iVar9 != iVar14) && (iVar14 < iVar9 != ((*(byte *)(piVar23 + 1) & 3) != 0))) {
      iVar14 = (iVar9 + iVar14) / 2;
      piVar22[3] = iVar14;
      *piVar22 = iVar14;
    }
    piVar22[6] = (int)uVar26;
    uVar37 = 0;
    piVar22[7] = (int)uVar33;
    piVar22[8] = 0;
    if ((*(byte *)(piVar23 + 1) & 1) != 0) {
      piVar22[8] = 2;
      uVar37 = 2;
    }
    if ((*(byte *)(piVar23 + 1) & 2) != 0) {
      uVar37 = uVar37 | 4;
      piVar22[8] = uVar37;
    }
    if ((*(byte *)(piVar23 + 1) & 4) != 0) {
      uVar37 = uVar37 | 8;
      piVar22[8] = uVar37;
    }
    if ((*(byte *)(piVar23 + 1) & 0x20) != 0) {
      uVar37 = uVar37 | 0x20;
      piVar22[8] = uVar37;
    }
    if ((*(byte *)(piVar23 + 1) & 0x40) != 0) {
      uVar37 = uVar37 | 0x40;
      piVar22[8] = uVar37;
    }
    if ((*(byte *)(piVar23 + 1) & 8) != 0) {
      piVar22[8] = uVar37 | 0x10;
    }
  }
LAB_180585986:
  iVar14 = piVar23[2];
  local_288 = piVar23 + 2;
  if (iVar14 == 0x159b) goto LAB_1805859c5;
  goto LAB_180584ff0;
}




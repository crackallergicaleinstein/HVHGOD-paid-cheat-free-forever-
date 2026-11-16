// FUN_18021bde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021bde0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18021bde0(undefined8 param_1,ushort *****param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  ushort *****pppppuVar16;
  ULONGLONG UVar17;
  int iVar18;
  ulonglong uVar19;
  short *psVar20;
  undefined8 *puVar21;
  int *piVar22;
  ushort uVar23;
  uint uVar24;
  undefined *puVar25;
  ushort *****pppppuVar26;
  ushort *****pppppuVar27;
  ushort *****pppppuVar28;
  short sVar29;
  ushort *****pppppuVar30;
  ushort *****pppppuVar31;
  char *pcVar32;
  short *psVar33;
  int iVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar35;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auStack_7b8 [32];
  ushort *****local_798;
  ushort *****local_790;
  undefined4 local_788;
  longlong local_780;
  int local_778;
  uint local_768 [2];
  ushort *****local_760;
  undefined8 local_758;
  ushort *****local_750;
  char local_748;
  ushort *****local_740;
  ushort ***local_738;
  ushort *****pppppuStack_730;
  undefined8 local_728;
  ushort *****local_720;
  short *local_718;
  int local_710;
  int local_70c;
  int local_708 [2];
  ushort *****local_700 [3];
  ushort ****local_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined1 local_69c [4];
  ushort *****local_698;
  ushort *****local_690;
  ushort *****local_688;
  undefined1 *local_680;
  int local_678 [2];
  undefined8 local_670;
  float local_668 [4];
  undefined1 local_658 [16];
  ushort *****local_648;
  ushort *****local_640;
  short local_638;
  undefined1 local_630 [24];
  undefined1 local_618 [216];
  undefined8 local_540;
  undefined2 local_538;
  ULONGLONG local_530;
  undefined1 local_528;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_7b8;
  uVar23 = *(ushort *)param_2;
  uVar19 = (((ulonglong)uVar23 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)(uVar23 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
  lVar15 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar19 * 0x10);
  if (lVar15 == DAT_180cc9c90) {
LAB_18021be91:
    lVar15 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar15 + 0x10);
    while (uVar23 != uVar1) {
      if (lVar15 == *(longlong *)(DAT_180cc9ca0 + uVar19 * 0x10)) goto LAB_18021be91;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar1 = *(ushort *)(lVar15 + 0x10);
    }
  }
  lVar14 = DAT_180cc9c90;
  if (lVar15 != 0) {
    lVar14 = lVar15;
  }
  if (lVar14 == DAT_180cc9c90) {
  }
  psVar33 = (short *)(*(longlong *)(lVar14 + 0x18) * 0xb8 + DAT_180cc9bf8);
  if (psVar33 == (short *)0x0) {
  }
  cVar7 = (char)psVar33[0x58];
  if (cVar7 == '\x04') {
  }
  cVar8 = *(char *)(param_2 + 0x21);
  if ((cVar8 != '\0') && (cVar7 == '\0')) {
  }
  iVar10 = *(int *)(param_2 + 0x1f);
  if ((iVar10 != 0) && (1 < iVar10 - 2U)) {
  }
  local_750 = param_2;
  local_718 = psVar33;
  if ((cVar8 == '\0') && (cVar7 != '\0')) {
    if ((iVar10 != 0) && (uVar24 = *(uint *)(psVar33 + 0x56), ((byte)uVar24 & 0xc) != 0xc)) {
      if ((uVar24 & 4) == 0) {
        if ((uVar24 & 8) == 0) goto LAB_18021bf42;
        iVar11 = 3;
      }
      else {
        iVar11 = 2;
      }
      if (iVar11 != iVar10) {
      }
    }
LAB_18021bf42:
    if (cVar7 == '\x01') {
      sVar29 = *psVar33;
      if (499 < sVar29) {
        piVar13 = (int *)FUN_180208890(&DAT_180cc9bb0,*(undefined4 *)(param_2 + 1));
        uVar35 = extraout_XMM0_Qa;
        goto LAB_18021c0bd;
      }
LAB_18021bf91:
      FUN_18063ab10(&local_648,0,0x600);
      local_798 = (ushort *****)CONCAT44(local_798._4_4_,(int)sVar29);
      FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,"definition=%d");
      local_798 = (ushort *****)&PTR_180700558;
      if ((char)local_648 != '\0') {
        local_798 = (ushort *****)&DAT_1806bcfc0;
      }
      pppppuVar30 = (ushort *****)&local_648;
      pcVar32 = "NATIVE_DEFAULT_SELECTION_IGNORED";
LAB_18021bfeb:
      local_790 = (ushort *****)&local_648;
      FUN_1800f6900(2,pppppuVar30,"Inventory",pcVar32);
    }
    if (cVar7 == '\x02') {
      sVar29 = *psVar33;
      if ((ushort)(sVar29 + 0xec5cU) < 2) goto LAB_18021bf91;
    }
    else if ((cVar7 == '\x03') && ((char)psVar33[0x59] == '\0')) {
      FUN_18063ab10(&local_648,0,0x600);
      local_798 = (ushort *****)CONCAT44(local_798._4_4_,(int)(short)uVar23);
      FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,"definition=%d action=not_equipped");
      pppppuVar30 = (ushort *****)&DAT_1806bcfc0;
      local_798 = (ushort *****)&PTR_180700558;
      if ((char)local_648 != '\0') {
        local_798 = (ushort *****)&DAT_1806bcfc0;
      }
      pcVar32 = "AGENT_MODEL_UNAVAILABLE";
      goto LAB_18021bfeb;
    }
  }
  piVar13 = (int *)FUN_180208890(&DAT_180cc9bb0,*(undefined4 *)(param_2 + 1));
  uVar35 = extraout_XMM0_Qa_00;
  if (cVar8 == '\0') {
LAB_18021c0bd:
    pppppuVar30 = param_2 + 10;
    pppppuVar27 = pppppuVar30;
joined_r0x00018021c0ce:
    if (pppppuVar27 != (ushort *****)((longlong)param_2 + 0xdc)) {
      if (*(int *)pppppuVar27 < 1) goto code_r0x00018021c0d5;
      if (cVar7 != '\0') {
      }
      do {
        piVar22 = DAT_180cc9bc8;
        if (*(int *)pppppuVar30 != 0) {
          while( true ) {
            if (piVar22 == DAT_180cc9bd0) {
            }
            if (*piVar22 == *(int *)pppppuVar30) break;
            piVar22 = piVar22 + 0x32;
          }
        }
        pppppuVar30 = (ushort *****)((longlong)pppppuVar30 + 0x1c);
      } while (pppppuVar30 != (ushort *****)((longlong)param_2 + 0xdc));
    }
    if (*(int *)((longlong)param_2 + 0xdc) != 0) {
      piVar22 = DAT_180cc9be0;
      if (cVar7 != '\0') {
      }
      while( true ) {
        if (piVar22 == DAT_180cc9be8) {
        }
        if (*piVar22 == *(int *)((longlong)param_2 + 0xdc)) break;
        piVar22 = piVar22 + 0x32;
      }
    }
    if ((cVar8 == '\0') && (*(int *)(param_2 + 1) != 0)) {
      if (piVar13 == (int *)0x0) {
      }
      if (DAT_180cc9c70 == DAT_180cc9c78) {
      }
      psVar20 = DAT_180cc9c70;
      while ((*psVar20 != *psVar33 || (*(int *)(psVar20 + 2) != *piVar13))) {
        psVar20 = psVar20 + 4;
        if (psVar20 == DAT_180cc9c78) {
        }
      }
    }
  }
  pppppuVar30 = (ushort *****)param_2[0x20];
  local_740 = pppppuVar30;
  if (*(char *)(param_2 + 0x21) == '\0') {
    if (pppppuVar30 != (ushort *****)0x0) {
      iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
      if (iVar10 != 0) goto LAB_18021da96;
      if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18021daa1;
      puVar21 = DAT_180cca000;
      if (DAT_180cca000 == DAT_180cca008) {
LAB_18021c30d:
        FUN_1805f68fc(&DAT_180cc9e50);
      }
      do {
        if ((ushort *****)*puVar21 == pppppuVar30) break;
        puVar21 = puVar21 + 0x25;
      } while (puVar21 != DAT_180cca008);
      if ((((puVar21 == DAT_180cca008) || (*(char *)(puVar21 + 0x22) == '\0')) ||
          (*(char *)((longlong)puVar21 + 0x111) != '\0')) ||
         ((*(ushort *)(puVar21 + 2) != *(ushort *)param_2 ||
          (cVar7 = FUN_1801d8910(puVar21 + 3,param_2 + 1), cVar7 == '\0')))) goto LAB_18021c30d;
      uVar35 = FUN_1805f68fc(&DAT_180cc9e50);
    }
    if ((*(char *)(param_2 + 0x21) == '\0') && (pppppuVar30 == (ushort *****)0x0)) {
      iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
      puVar21 = DAT_180cca008;
      if (iVar10 != 0) goto LAB_18021da96;
      puVar5 = DAT_180cca000;
      if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18021daa1;
      for (; puVar5 != puVar21; puVar5 = puVar5 + 0x25) {
        if ((((*(char *)(puVar5 + 0x22) != '\0') && (*(char *)((longlong)puVar5 + 0x111) == '\0'))
            && (*(short *)(puVar5 + 2) == *psVar33)) &&
           (cVar7 = FUN_1801d8910(puVar5 + 3,param_2 + 1), cVar7 != '\0')) {
          pppppuVar30 = (ushort *****)*puVar5;
          local_740 = pppppuVar30;
          break;
        }
      }
      uVar35 = FUN_1805f68fc(&DAT_180cc9e50);
      lVar15 = DAT_180cca0e0;
      if (pppppuVar30 == (ushort *****)0x0) {
        if (((*(char *)((longlong)param_2 + 0x109) != '\0') &&
            (*(char *)((longlong)param_2 + 0x10a) == '\0')) && (0x7f < DAT_180cc9fe0)) {
        }
        lVar14 = FUN_18017ea70();
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
        if (lVar15 + 8 == 0) {
          bVar4 = false;
          uVar24 = (uint)local_670;
        }
        else {
          local_768[0] = 0;
          cVar7 = FUN_1804514f0(local_768,lVar15 + 8,4);
          if (cVar7 == '\0') {
            bVar4 = false;
            uVar24 = (uint)local_670;
          }
          else {
            bVar4 = true;
            uVar24 = local_768[0];
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        lVar15 = DAT_180cca0e0;
        uVar12 = 0xffffffff;
        if (bVar4) {
          uVar12 = uVar24;
        }
        local_688 = (ushort *****)CONCAT44(local_688._4_4_,uVar12);
        lVar14 = FUN_18017ea70();
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
        if (lVar15 + 0x10 == 0) {
          bVar4 = false;
          pppppuVar30 = local_760;
        }
        else {
          local_670 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_670,lVar15 + 0x10,8);
          if (cVar7 == '\0') {
            bVar4 = false;
            pppppuVar30 = local_760;
          }
          else {
            bVar4 = true;
            pppppuVar30 = local_670;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        local_760 = (ushort *****)0x0;
        if (bVar4) {
          local_760 = pppppuVar30;
        }
        if (10000 < uVar12) {
        }
        if ((uVar12 != 0) && (local_760 == (ushort *****)0x0)) {
        }
        pppppuVar30 = (ushort *****)0x0;
        local_768[0] = 0;
        iVar10 = 0;
        if (0 < (int)uVar12) {
          iVar11 = 0;
          local_670 = (ushort *****)((ulonglong)local_670 & 0xffffffff00000000);
          pppppuVar27 = local_750;
          pppppuVar31 = local_750;
          do {
            puVar25 = (undefined *)((longlong)iVar11 + (longlong)local_760);
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            bVar4 = false;
            if (puVar25 != (undefined *)0x0) {
              local_758 = (ushort *****)0x0;
              cVar7 = FUN_1804514f0(&local_758,puVar25,8);
              if (cVar7 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
                pppppuVar31 = local_758;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            if (bVar4) {
              pppppuVar26 = pppppuVar31 + 2;
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              pppppuVar28 = pppppuVar31;
              if (pppppuVar26 != (ushort *****)0x0) goto LAB_18021c4d9;
              bVar4 = false;
            }
            else {
              pppppuVar28 = (ushort *****)0x0;
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              pppppuVar26 = (ushort *****)&DAT_00000010;
LAB_18021c4d9:
              local_758 = (ushort *****)0x0;
              cVar7 = FUN_1804514f0(&local_758,pppppuVar26,8);
              if (cVar7 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
                pppppuVar27 = local_758;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            if ((ushort *)((longlong)pppppuVar28 + 0x2c) == (ushort *)0x0) {
              bVar6 = false;
              uVar24 = (uint)local_740;
            }
            else {
              local_758 = (ushort *****)((ulonglong)local_758 & 0xffffffff00000000);
              cVar7 = FUN_1804514f0(&local_758,(ushort *)((longlong)pppppuVar28 + 0x2c),4);
              if (cVar7 == '\0') {
                bVar6 = false;
                uVar24 = (uint)local_740;
              }
              else {
                local_740 = (ushort *****)CONCAT44(local_740._4_4_,(uint)local_758);
                bVar6 = true;
                uVar24 = (uint)local_758;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            if (!bVar4) {
            }
            if (!bVar6) {
            }
            if (pppppuVar27 < (ushort *****)0xf000000000000000) {
              if (pppppuVar30 < pppppuVar27) {
                pppppuVar30 = pppppuVar27;
              }
              if (local_768[0] < (uVar24 & 0x3fffffff)) {
                local_768[0] = uVar24 & 0x3fffffff;
              }
            }
            iVar10 = iVar10 + 1;
            iVar11 = (uint)local_670 + 8;
            local_670 = (ushort *****)CONCAT44(local_670._4_4_,iVar11);
          } while (iVar10 < (int)local_688);
          psVar33 = local_718;
        }
        uVar24 = local_768[0];
        iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
        if (iVar10 != 0) goto LAB_18021da8b;
        puVar21 = DAT_180cca000;
        if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18021da76;
        for (; puVar21 != DAT_180cca008; puVar21 = puVar21 + 0x25) {
          if (pppppuVar30 < (ushort *****)*puVar21) {
            pppppuVar30 = (ushort *****)*puVar21;
          }
        }
        FUN_1805f68fc(&DAT_180cc9e50);
        lVar15 = DAT_180c63938;
        if ((ushort *****)0xeffffffffffffffe < pppppuVar30) {
        }
        if (0x3ffffffd < uVar24) {
        }
        pppppuVar30 = (ushort *****)((longlong)pppppuVar30 + 1);
        local_760 = pppppuVar30;
        local_740 = pppppuVar30;
        lVar14 = FUN_18017ea70();
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
        if (lVar15 == 0) {
          bVar4 = false;
          pppppuVar27 = local_760;
        }
        else {
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,lVar15,8);
          if (cVar7 == '\0') {
            bVar4 = false;
            pppppuVar27 = local_760;
          }
          else {
            bVar4 = true;
            pppppuVar27 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (bVar4) {
          pppppuVar27 = pppppuVar27 + 1;
          if (pppppuVar27 != (ushort *****)0x0) goto LAB_18021c6ca;
          bVar4 = false;
          pppppuVar27 = local_760;
        }
        else {
          pppppuVar27 = (ushort *****)&DAT_00000008;
LAB_18021c6ca:
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,pppppuVar27,8);
          if (cVar7 == '\0') {
            bVar4 = false;
            pppppuVar27 = local_760;
          }
          else {
            bVar4 = true;
            pppppuVar27 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        if (bVar4) {
          uVar35 = FUN_1802196a0(pppppuVar27,0x1b);
          pppppuVar31 = pppppuVar27 + 0x2b;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          if (pppppuVar31 != (ushort *****)0x0) goto LAB_18021c753;
          bVar4 = false;
          pppppuVar31 = local_760;
        }
        else {
          pppppuVar27 = (ushort *****)0x0;
          uVar35 = FUN_1802196a0(0,0x1b);
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          pppppuVar31 = (ushort *****)0x158;
LAB_18021c753:
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,pppppuVar31,8);
          if (cVar7 == '\0') {
            bVar4 = false;
            pppppuVar31 = local_760;
          }
          else {
            bVar4 = true;
            pppppuVar31 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        local_690 = (ushort *****)0x0;
        if (bVar4) {
          local_690 = pppppuVar31;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (pppppuVar27 + 0x2a == (ushort *****)0x0) {
          bVar4 = false;
          iVar10 = (int)local_688;
        }
        else {
          local_670 = (ushort *****)((ulonglong)local_670 & 0xffffffff00000000);
          cVar7 = FUN_1804514f0(&local_670,pppppuVar27 + 0x2a,4);
          if (cVar7 == '\0') {
            bVar4 = false;
            iVar10 = (int)local_688;
          }
          else {
            bVar4 = true;
            iVar10 = (uint)local_670;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        local_678[0] = 0;
        if (bVar4) {
          local_678[0] = iVar10;
        }
        local_738 = (ushort ***)0xffffffff000000e9;
        pppppuStack_730 = (ushort *****)0xffffffffffffffff;
        local_728 = (undefined *)CONCAT44(local_728._4_4_,0xffffffff);
        local_688 = (ushort *****)&local_738;
        local_680 = (undefined1 *)((longlong)&local_728 + 4);
        cVar7 = FUN_1802197b0(uVar35,&local_688);
        if (cVar7 == '\0') {
          uVar35 = 0;
        }
        else {
          uVar35 = FUN_180219870(uVar35,1,5);
        }
        local_6e8 = (ushort ****)0xd200000085;
        uStack_6e0 = 0xffffffff00000078;
        uStack_6d8 = 0x910000003b;
        uStack_6d0 = 0x100000050;
        local_6c8 = 0;
        uStack_6c0 = 0xffffffff0000007d;
        uStack_6b8 = 0x8b00000048;
        uStack_6b0 = 0x5800000081;
        local_6a8 = 1;
        local_6a0 = 0;
        local_688 = (ushort *****)(local_700 + 3);
        local_680 = local_69c;
        cVar7 = FUN_1802197b0(uVar35,&local_688);
        if (cVar7 == '\0') {
        }
        if (local_690 == (ushort *****)0x0) {
        }
        if (0xff7 < local_678[0] - 9U) {
        }
        pppppuVar27 = local_690 + 6;
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (pppppuVar27 == (ushort *****)0x0) {
          bVar4 = false;
          pppppuVar27 = local_760;
        }
        else {
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,pppppuVar27,8);
          if (cVar7 == '\0') {
            bVar4 = false;
            pppppuVar27 = local_760;
          }
          else {
            bVar4 = true;
            pppppuVar27 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        pppppuVar31 = local_690;
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        local_700[0] = (ushort *****)0x0;
        if (bVar4) {
          local_700[0] = pppppuVar27;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        bVar4 = false;
        if (pppppuVar31 + 7 != (ushort *****)0x0) {
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,pppppuVar31 + 7,8);
          if (cVar7 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            pppppuVar27 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        pppppuVar31 = local_690;
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        local_700[1] = (ushort *****)0x0;
        if (bVar4) {
          local_700[1] = pppppuVar27;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        bVar4 = false;
        if (pppppuVar31 + 8 != (ushort *****)0x0) {
          local_688 = (ushort *****)0x0;
          cVar7 = FUN_1804514f0(&local_688,pppppuVar31 + 8,8);
          if (cVar7 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            pppppuVar27 = local_688;
          }
        }
        lVar15 = FUN_18017ea70();
        param_2 = local_750;
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        uVar35 = DAT_180cca0e8;
        local_700[2] = (ushort *****)0x0;
        if (bVar4) {
          local_700[2] = pppppuVar27;
        }
        if (*(int *)(local_750 + 1) != 0) {
          pppppuVar27 = (ushort *****)local_700;
          do {
            if (*pppppuVar27 == (ushort ****)0x0) {
            }
            pppppuVar27 = pppppuVar27 + 1;
          } while ((ushort ******)pppppuVar27 != local_700 + 3);
        }
        cVar8 = FUN_1804513c0(DAT_180cca0e8,1,2);
        cVar7 = '\0';
        if (cVar8 != '\0') {
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          FUN_1801adde0(&local_750,uVar35);
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          cVar7 = local_748;
        }
        pppppuVar27 = local_750;
        if (cVar7 == '\0') {
          pppppuVar27 = (ushort *****)0x0;
        }
        if (pppppuVar27 == (ushort *****)0x0) {
        }
        local_698 = pppppuVar27;
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        local_688 = (ushort *****)0x0;
        cVar7 = FUN_1804514f0(&local_688,pppppuVar27,8);
        pppppuVar27 = local_750;
        if (cVar7 != '\0') {
          pppppuVar27 = local_688;
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        pppppuVar31 = (ushort *****)0x0;
        if (cVar7 != '\0') {
          pppppuVar31 = pppppuVar27;
        }
        if (pppppuVar31 != DAT_180cca100) {
        }
        if (*(char *)((longlong)param_2 + 0x14) == '\0') {
          if (((char)psVar33[0x58] == '\x01') || (uVar23 = 0x88, (char)psVar33[0x58] == '\x02')) {
            uVar23 = 0x68;
          }
        }
        else {
          uVar23 = 0x128;
        }
        local_708[0] = 7;
        local_710 = 0;
        local_70c = FUN_180208c70(&DAT_180cc9bb0,*psVar33,*(undefined4 *)(param_2 + 1));
        pppppuVar27 = local_698;
        piVar13 = &local_710;
        if (-1 < local_70c) {
          piVar13 = &local_70c;
        }
        piVar22 = local_708;
        if (local_70c < 8) {
          piVar22 = piVar13;
        }
        local_758 = (ushort *****)CONCAT62(local_758._2_6_,(short)*piVar22 << 0xb | uVar23);
        cVar7 = FUN_1804513c0(local_698 + 2,8,1);
        if (cVar7 == '\0') {
LAB_18021ccf4:
          cVar7 = '\0';
        }
        else {
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801fde60(pppppuVar27 + 2,&local_760);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if ((cVar7 == '\0') || (cVar7 = FUN_1804513c0(local_698 + 3,8,1), cVar7 == '\0'))
          goto LAB_18021ccf4;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801fde60(pppppuVar27 + 3,&local_760);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if ((cVar7 == '\0') || (cVar7 = FUN_1804513c0(local_698 + 5,4,1), cVar7 == '\0'))
          goto LAB_18021ccf4;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801ad800(pppppuVar27 + 5,&DAT_180cca110);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if (cVar7 == '\0') goto LAB_18021ccf4;
          local_688 = (ushort *****)CONCAT44(local_688._4_4_,local_768[0] + 1);
          cVar7 = FUN_1804513c0((ushort *)((longlong)local_698 + 0x2c),4,1);
          if (cVar7 == '\0') goto LAB_18021ccf4;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801ad800((ushort *)((longlong)pppppuVar27 + 0x2c),&local_688);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if (cVar7 == '\0') goto LAB_18021ccf4;
          local_768[0] = CONCAT22(local_768[0]._2_2_,*psVar33);
          cVar7 = FUN_1804513c0(local_698 + 6,2,1);
          if (cVar7 == '\0') goto LAB_18021ccf4;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801aec90(pppppuVar27 + 6,local_768);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if ((cVar7 == '\0') ||
             (cVar7 = FUN_1804513c0((ushort *)((longlong)local_698 + 0x32),2,1), cVar7 == '\0'))
          goto LAB_18021ccf4;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801aec90((ushort *)((longlong)pppppuVar27 + 0x32),&local_758);
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if (cVar7 == '\0') goto LAB_18021ccf4;
          cVar7 = '\x01';
        }
        local_668[0] = (float)*(int *)(param_2 + 1);
        local_668[1] = (float)*(int *)(param_2 + 2);
        local_668[2] = (float)*(undefined4 *)((longlong)param_2 + 0xc);
        if (*(int *)(param_2 + 1) != 0) {
          uVar24 = 0;
          pppppuVar27 = (ushort *****)local_700;
          do {
            pppppuVar31 = local_698;
            uVar35 = DAT_180cca0f0;
            if (cVar7 == '\0') goto LAB_18021d53b;
            cVar7 = FUN_1804513c0(DAT_180cca0f0,1,2);
            if (cVar7 == '\0') {
              cVar7 = '\0';
            }
            else {
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              cVar7 = FUN_1801ad750(uVar35,pppppuVar31,*pppppuVar27,local_668 + uVar24);
              lVar15 = FUN_18017ea70();
              if (*(int *)(lVar15 + 4) != 0) {
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
              }
            }
            uVar24 = uVar24 + 1;
            pppppuVar27 = pppppuVar27 + 1;
          } while ((int)uVar24 < 3);
        }
        pppppuVar27 = local_690;
        if (cVar7 == '\0') goto LAB_18021d53b;
        if (*(char *)((longlong)param_2 + 0x14) != '\0') {
          if (local_678[0] < 0x52) {
            pppppuVar27 = (ushort *****)0x0;
          }
          else {
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            if (pppppuVar27 + 0x50 == (ushort *****)0x0) {
              bVar4 = false;
              pppppuVar31 = local_750;
            }
            else {
              local_760 = (ushort *****)0x0;
              cVar7 = FUN_1804514f0(&local_760,pppppuVar27 + 0x50,8);
              if (cVar7 == '\0') {
                bVar4 = false;
                pppppuVar31 = local_750;
              }
              else {
                bVar4 = true;
                pppppuVar31 = local_760;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            pppppuVar27 = (ushort *****)0x0;
            if (bVar4) {
              pppppuVar27 = pppppuVar31;
            }
          }
          pppppuVar31 = local_690;
          if (local_678[0] < 0x52) {
            pppppuVar31 = (ushort *****)0x0;
          }
          else {
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            if (pppppuVar31 + 0x51 == (ushort *****)0x0) {
              bVar4 = false;
              pppppuVar26 = local_750;
            }
            else {
              local_760 = (ushort *****)0x0;
              cVar7 = FUN_1804514f0(&local_760,pppppuVar31 + 0x51,8);
              if (cVar7 == '\0') {
                bVar4 = false;
                pppppuVar26 = local_750;
              }
              else {
                bVar4 = true;
                pppppuVar26 = local_760;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            pppppuVar31 = (ushort *****)0x0;
            if (bVar4) {
              pppppuVar31 = pppppuVar26;
            }
          }
          pppppuVar26 = local_698;
          uVar35 = DAT_180cca0f0;
          local_670 = (ushort *****)CONCAT44(local_670._4_4_,999999);
          uVar19 = (ulonglong)local_688 >> 0x20;
          local_688 = (ushort *****)((ulonglong)local_688 & 0xffffffff00000000);
          iVar10 = *(int *)(param_2 + 3);
          pppppuVar28 = (ushort *****)&local_688;
          if (-1 < iVar10) {
            pppppuVar28 = param_2 + 3;
          }
          pppppuVar16 = (ushort *****)&local_670;
          if (iVar10 < 1000000) {
            pppppuVar16 = pppppuVar28;
          }
          local_688 = (ushort *****)CONCAT44((int)uVar19,*(undefined4 *)pppppuVar16);
          local_670 = (ushort *****)((ulonglong)local_670._4_4_ << 0x20);
          if (((pppppuVar27 == (ushort *****)0x0) || (pppppuVar31 == (ushort *****)0x0)) ||
             (cVar7 = FUN_1804513c0(DAT_180cca0f0,1,2), cVar7 == '\0')) goto LAB_18021d53b;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801ad750(uVar35,pppppuVar26,pppppuVar27,&local_688);
          lVar15 = FUN_18017ea70();
          pppppuVar27 = local_698;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          uVar35 = DAT_180cca0f0;
          if ((cVar7 == '\0') || (cVar7 = FUN_1804513c0(DAT_180cca0f0,1,2), cVar7 == '\0'))
          goto LAB_18021d53b;
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          cVar7 = FUN_1801ad750(uVar35,pppppuVar27,pppppuVar31,&local_670);
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if (cVar7 == '\0') goto LAB_18021d53b;
        }
        local_738 = (ushort ***)local_678;
        pppppuStack_730 = (ushort *****)&local_690;
        local_728 = &DAT_180cc9e50;
        local_720 = (ushort *****)&local_698;
        iVar34 = 0;
        lVar15 = 0;
        iVar10 = 0x117;
        iVar11 = 0x72;
        do {
          iVar2 = *(int *)(lVar15 + 0x50 + (longlong)param_2);
          if (iVar2 != 0) {
            local_688 = (ushort *****)CONCAT44(local_688._4_4_,iVar2);
            cVar7 = FUN_18022ef70(&local_738,iVar11 + -1,&local_688);
            if (cVar7 != '\0') {
              cVar7 = FUN_18022ef70(&local_738,iVar11,
                                    (undefined *)((longlong)param_2 + lVar15 + 0x54));
              if (cVar7 != '\0') {
                cVar7 = FUN_18022ef70(&local_738,iVar11 + 1,
                                      (undefined *)((longlong)param_2 + lVar15 + 0x58));
                if (cVar7 != '\0') {
                  cVar7 = FUN_18022ef70(&local_738,iVar11 + 2,
                                        (undefined *)((longlong)param_2 + lVar15 + 0x5c));
                  if (cVar7 != '\0') {
                    cVar7 = FUN_18022ef70(&local_738,iVar10 + -1,
                                          (undefined *)((longlong)param_2 + lVar15 + 0x60));
                    if (cVar7 != '\0') {
                      cVar7 = FUN_18022ef70(&local_738,iVar10,
                                            (undefined *)((longlong)param_2 + lVar15 + 100));
                      if (cVar7 != '\0') {
                        iVar2 = *(int *)(lVar15 + 0x68 + (longlong)param_2);
                        iVar18 = iVar34;
                        if (-1 < iVar2) {
                          iVar18 = iVar2;
                        }
                        local_688 = (ushort *****)CONCAT44(local_688._4_4_,iVar18);
                        cVar7 = FUN_18022ef70(&local_738,iVar34 + 0x122,&local_688);
                        if (cVar7 != '\0') goto LAB_18021d09b;
                      }
                    }
                  }
                }
              }
            }
            bVar4 = false;
            goto LAB_18021d0b6;
          }
LAB_18021d09b:
          iVar34 = iVar34 + 1;
          iVar11 = iVar11 + 4;
          iVar10 = iVar10 + 2;
          lVar15 = lVar15 + 0x1c;
        } while (iVar11 < 0x86);
        bVar4 = true;
LAB_18021d0b6:
        if (!bVar4) goto LAB_18021d53b;
        local_738 = (ushort ***)local_678;
        pppppuStack_730 = (ushort *****)&local_690;
        local_728 = &DAT_180cc9e50;
        local_720 = (ushort *****)&local_698;
        if (*(int *)((longlong)param_2 + 0xdc) != 0) {
          local_688 = (ushort *****)CONCAT44(local_688._4_4_,*(int *)((longlong)param_2 + 0xdc));
          cVar7 = FUN_18022ef70(&local_738,299,&local_688);
          if (cVar7 == '\0') goto LAB_18021d53b;
          local_688 = (ushort *****)CONCAT44(local_688._4_4_,*(undefined4 *)(param_2 + 0x1c));
          cVar7 = FUN_18022ef70(&local_738,0x132,&local_688);
          if (cVar7 == '\0') goto LAB_18021d53b;
          if ((*(char *)(param_2 + 0x1e) == '\0') ||
             (((cVar7 = FUN_18022ef70(&local_738,300,(ushort *)((longlong)param_2 + 0xe4)),
               cVar7 != '\0' &&
               (cVar7 = FUN_18022ef70(&local_738,0x12d,param_2 + 0x1d), cVar7 != '\0')) &&
              (cVar7 = FUN_18022ef70(&local_738,0x12e,(ushort *)((longlong)param_2 + 0xec)),
              cVar7 != '\0')))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) goto LAB_18021d53b;
        }
        pppppuVar27 = local_698;
        lVar15 = DAT_180cca0e0;
        uVar35 = FUN_1802196a0(DAT_180cca0e0,1);
        cVar7 = FUN_1804513c0(uVar35,1,2);
        if (cVar7 == '\0') {
          cVar7 = '\0';
        }
        else {
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          FUN_1801ae0e0(&local_758,uVar35,lVar15,pppppuVar27);
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          cVar7 = local_758._1_1_;
        }
        cVar8 = (byte)local_758;
        if (cVar7 == '\0') {
          cVar8 = '\0';
        }
        if (cVar8 == '\0') {
LAB_18021d53b:
          pppppuVar30 = local_698;
          uVar35 = FUN_1802196a0(local_698,0);
          FUN_1801a9000(uVar35,pppppuVar30,1);
        }
        local_750 = (ushort *****)&DAT_180cc9e50;
        iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
        if (iVar10 != 0) {
LAB_18021da8b:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180cc9e9c == 0x7fffffff) {
LAB_18021da76:
          DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_640 = local_698;
        local_638 = *psVar33;
        local_648 = pppppuVar30;
        FUN_18019f170(local_630,param_2 + 1);
        local_540 = 0;
        local_538 = 1;
        local_530 = GetTickCount64();
        local_528 = 0;
        if (DAT_180cca008 == DAT_180cca010) {
          FUN_180231550(&DAT_180cca000,DAT_180cca008,&local_648);
        }
        else {
          FUN_180232910(DAT_180cca008,&local_648);
          DAT_180cca008 = DAT_180cca008 + 0x25;
        }
        FUN_18015c010(local_618);
        FUN_1805f68fc(&DAT_180cc9e50);
        lVar15 = DAT_180cca0d8;
        if ((*(char *)((longlong)param_2 + 0x109) != '\0') &&
           (*(char *)((longlong)param_2 + 0x10a) == '\0')) {
          DAT_180cc9fe0 = DAT_180cc9fe0 + 1;
        }
        local_658 = (undefined1  [16])0x0;
        lVar14 = FUN_18017ea70();
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
        cVar7 = FUN_1804514f0(local_658,lVar15 + 0x10,0x10);
        lVar15 = FUN_18017ea70();
        pppppuVar27 = local_698;
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        lVar15 = DAT_180cca0d8;
        if (cVar7 == '\0') {
        }
        uVar35 = FUN_1802196a0(DAT_180cca0d8,0);
        cVar7 = FUN_1804513c0(uVar35,1,2);
        if (cVar7 == '\0') {
        }
        lVar14 = FUN_18017ea70();
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
        cVar7 = FUN_18022ff30(uVar35,lVar15,local_658,pppppuVar27);
        lVar15 = FUN_18017ea70();
        iVar10 = *(int *)(lVar15 + 4);
        if (iVar10 != 0) {
          iVar10 = iVar10 + -1;
          *(int *)(lVar15 + 4) = iVar10;
        }
        if (cVar7 == '\0') {
        }
        lVar15 = FUN_18021b630(iVar10,pppppuVar30);
        if (lVar15 == 0) {
          local_750._0_5_ = (uint5)(uint)local_750;
          pppppuVar27 = local_750;
        }
        else {
          uVar35 = FUN_1802196a0(lVar15,3);
          cVar7 = FUN_1804513c0(uVar35,1,2);
          if (cVar7 == '\0') {
            local_760._0_5_ = (uint5)(uint)local_760;
            pppppuVar27 = local_760;
          }
          else {
            lVar14 = FUN_18017ea70();
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
            FUN_1801aec50(&local_760,uVar35,lVar15);
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            pppppuVar27 = local_760;
          }
        }
        cVar7 = (char)((ulonglong)pppppuVar27 >> 0x20);
        iVar10 = (int)pppppuVar27;
        if (cVar7 == '\0') {
          cVar7 = '\0';
          iVar10 = -1;
        }
        FUN_18063ab10(&local_648,0,0x600);
        local_788 = *(undefined4 *)(param_2 + 1);
        local_790 = (ushort *****)CONCAT44(local_790._4_4_,(int)*psVar33);
        local_798 = pppppuVar30;
        local_780 = lVar15;
        local_778 = iVar10;
        FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                      "id=%llu definition=%d paint=%d view=%p paint_readback=%d");
        local_798 = (ushort *****)&PTR_180700558;
        if ((char)local_648 != '\0') {
          local_798 = (ushort *****)&DAT_1806bcfc0;
        }
        local_790 = (ushort *****)&local_648;
        FUN_1800f6900(1,&DAT_1806bcfc0,"Inventory","ITEM_ADDED");
        if (lVar15 == 0) {
        }
        if (cVar7 == '\0') {
        }
        if ((int)pppppuVar27 != *(int *)(param_2 + 1)) {
        }
        cVar7 = FUN_180219160(lVar15,param_2 + 4,1);
        uVar35 = extraout_XMM0_Qa_01;
        if (cVar7 == '\0') {
        }
      }
      lVar15 = FUN_18021b630(uVar35,pppppuVar30);
      if (lVar15 == 0) {
        local_750._0_5_ = (uint5)(uint)local_750;
        pppppuVar27 = local_750;
        uVar35 = extraout_XMM0_Qa_02;
      }
      else {
        uVar35 = FUN_1802196a0(lVar15,3);
        cVar7 = FUN_1804513c0(uVar35,1,2);
        if (cVar7 == '\0') {
          local_760._0_5_ = (uint5)(uint)local_760;
          pppppuVar27 = local_760;
          uVar35 = extraout_XMM0_Qa_03;
        }
        else {
          lVar14 = FUN_18017ea70();
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
          FUN_1801aec50(&local_760,uVar35,lVar15);
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          pppppuVar27 = local_760;
          uVar35 = extraout_XMM0_Qa_04;
        }
      }
      if ((char)((ulonglong)pppppuVar27 >> 0x20) == '\0') {
      }
      if ((int)pppppuVar27 != *(int *)(param_2 + 1)) {
      }
    }
  }
  if (*(char *)(param_2 + 0x21) == '\0') {
    uVar35 = FUN_18021b630(uVar35,pppppuVar30);
    cVar7 = FUN_180219160(uVar35,param_2 + 4,1);
    if (cVar7 == '\0') {
    }
    if (*(char *)(param_2 + 0x21) == '\0') {
      iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
      puVar21 = DAT_180cca008;
      if (iVar10 != 0) goto LAB_18021da96;
      puVar5 = DAT_180cca000;
      if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18021daa1;
      for (; puVar5 != puVar21; puVar5 = puVar5 + 0x25) {
        if ((ushort *****)*puVar5 == pppppuVar30) {
          *(undefined1 *)(puVar5 + 0x24) = 1;
        }
      }
      FUN_1805f68fc(&DAT_180cc9e50);
    }
  }
  if (*(char *)((longlong)param_2 + 0x109) == '\0') {
    if ((char)psVar33[0x58] != '\0') {
      bVar4 = true;
      iVar10 = 2;
      sVar29 = (ushort)local_678[0];
LAB_18021d6d0:
      if ((*(int *)(param_2 + 0x1f) != 0) && (iVar10 != *(int *)(param_2 + 0x1f)))
      goto LAB_18021da40;
      uVar24 = *(uint *)(local_718 + 0x56);
      if (((byte)uVar24 & 0xc) != 0xc) {
        if ((uVar24 & 4) == 0) {
          if ((uVar24 & 8) == 0) goto LAB_18021d714;
          iVar11 = 3;
        }
        else {
          iVar11 = 2;
        }
        if (iVar10 != iVar11) goto LAB_18021da40;
      }
LAB_18021d714:
      uVar24 = *(uint *)((longlong)param_2 + 0xfc);
      if ((int)*(uint *)((longlong)param_2 + 0xfc) < 0) {
        uVar12 = 0;
        uVar24 = *(uint *)(local_718 + 0x54);
        do {
          if (iVar10 - 2U < 2) {
            lVar14 = DAT_180cca0d8 + 0x98 + (longlong)(int)((iVar10 * 0x3a + uVar12) * 0x10);
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            if (lVar14 != 0) goto LAB_18021d745;
            bVar6 = false;
          }
          else {
            lVar14 = 8;
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
LAB_18021d745:
            local_768[0] = local_768[0] & 0xffff0000;
            cVar7 = FUN_1804514f0(local_768,lVar14,2);
            if (cVar7 == '\0') {
              bVar6 = false;
            }
            else {
              bVar6 = true;
              sVar29 = (short)local_768[0];
            }
          }
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          if (bVar6) {
            sVar9 = sVar29;
          }
          else {
            sVar9 = 0;
          }
          if (sVar9 == *local_718) {
            uVar24 = uVar12;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < 0x3a);
      }
      uVar35 = DAT_180cca108;
      if ((iVar10 - 2U < 2) && (uVar24 < 0x3a)) {
        uVar3 = *(undefined4 *)(local_718 + 0x54);
        cVar7 = FUN_1804513c0(DAT_180cca108,1,2);
        if (cVar7 == '\0') {
          local_758._0_2_ = (ushort)(byte)local_758;
          uVar35 = extraout_XMM0_Qa_05;
        }
        else {
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          FUN_18022fe90(&local_758,uVar35,uVar3,uVar24);
          lVar15 = FUN_18017ea70();
          uVar35 = extraout_XMM0_Qa_06;
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
        }
        cVar7 = (byte)local_758;
        if (local_758._1_1_ == '\0') {
          cVar7 = '\0';
        }
        if (cVar7 != '\0') {
          if (*(char *)(param_2 + 0x21) != '\0') {
            if (iVar10 - 2U < 2) {
              lVar14 = DAT_180cca0d8 + 0x90 + (longlong)(int)((iVar10 * 0x3a + uVar24) * 0x10);
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              bVar6 = false;
              if (lVar14 != 0) {
                local_760 = (ushort *****)0x0;
                cVar7 = FUN_1804514f0(&local_760,lVar14,8);
                if (cVar7 == '\0') {
                  bVar6 = false;
                }
                else {
                  local_750 = local_760;
                  bVar6 = true;
                }
              }
            }
            else {
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              bVar6 = false;
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            pppppuVar30 = (ushort *****)0x0;
            if (bVar6) {
              pppppuVar30 = local_750;
            }
            if (iVar10 - 2U < 2) {
              lVar14 = DAT_180cca0d8 + 0x98 + (longlong)(int)((iVar10 * 0x3a + uVar24) * 0x10);
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              if (lVar14 != 0) goto LAB_18021d8f9;
              bVar6 = false;
            }
            else {
              lVar14 = 8;
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
LAB_18021d8f9:
              local_768[0] = local_768[0] & 0xffff0000;
              cVar7 = FUN_1804514f0(local_768,lVar14,2);
              if (cVar7 == '\0') {
                bVar6 = false;
              }
              else {
                local_678[0] = CONCAT22(local_678[0]._2_2_,(short)local_768[0]);
                bVar6 = true;
              }
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            if (bVar6) {
              uVar23 = (ushort)local_678[0];
            }
            else {
              uVar23 = 0;
            }
            iVar11 = FUN_1805f68d0(&DAT_180cc9e50);
            if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            puVar21 = DAT_180cca000;
            if (DAT_180cc9e9c == 0x7fffffff) {
              DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            for (; puVar21 != DAT_180cca008; puVar21 = puVar21 + 0x25) {
              if ((ushort *****)*puVar21 == pppppuVar30) {
                uVar35 = FUN_1805f68fc(&DAT_180cc9e50);
                if ((uVar23 != *(ushort *)param_2) ||
                   (piVar13 = DAT_180cca020, DAT_180cca020 == DAT_180cca028)) goto LAB_18021da40;
                goto LAB_18021d9f0;
              }
            }
            FUN_1805f68fc(&DAT_180cc9e50);
            goto LAB_18021da40;
          }
          sVar9 = *local_718;
          pppppuVar30 = local_740;
          goto LAB_18021da20;
        }
      }
    }
  }
  else {
    iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
    if (iVar10 != 0) {
LAB_18021da96:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180cc9e9c == 0x7fffffff) {
LAB_18021daa1:
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_180cc9eb8 == *(ushort *)param_2) {
      cVar7 = FUN_1801d8910(&DAT_180cc9ec0,param_2 + 1);
      uVar19 = DAT_180cc9fd0;
      if (cVar7 != '\0') {
        UVar17 = GetTickCount64();
        if (UVar17 < uVar19) {
          DAT_180cc9fc8 = pppppuVar30;
        }
      }
    }
    FUN_1805f68fc(&DAT_180cc9e50);
  }
code_r0x00018021c0d5:
  pppppuVar27 = (ushort *****)((longlong)pppppuVar27 + 0x1c);
  goto joined_r0x00018021c0ce;
  while (piVar13 = piVar13 + 6, piVar13 != DAT_180cca028) {
LAB_18021d9f0:
    if ((*piVar13 == iVar10) && (piVar13[1] == uVar24)) break;
  }
  if (piVar13 != DAT_180cca028) {
    sVar9 = (short)piVar13[4];
    pppppuVar30 = *(ushort ******)(piVar13 + 2);
LAB_18021da20:
    local_798 = (ushort *****)CONCAT62(local_798._2_6_,sVar9);
    cVar7 = FUN_18021b9b0(uVar35,iVar10,uVar24,pppppuVar30);
    if ((cVar7 == '\0') || (!bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
LAB_18021da40:
  iVar10 = iVar10 + 1;
  if (3 < iVar10) {
  }
  goto LAB_18021d6d0;
}




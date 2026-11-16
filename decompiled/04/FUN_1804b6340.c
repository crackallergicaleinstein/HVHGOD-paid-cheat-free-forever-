// FUN_1804b6340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b6340 */

void FUN_1804b6340(void)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  char *pcVar16;
  longlong *plVar17;
  undefined8 local_res8;
  
  pcVar6 = DAT_180bb8ae8;
  if (*(longlong *)(DAT_180bb8ae8 + 200) != 0) {
    FUN_1804c5a40("Forgot to shutdown Platform backend?");
  }
  if (*(longlong *)(pcVar6 + 0xd0) != 0) {
    FUN_1804c5a40("Forgot to shutdown Renderer backend?");
  }
  plVar17 = *(longlong **)(pcVar6 + 0x11c8);
  plVar2 = plVar17 + *(int *)(pcVar6 + 0x11c0);
  pcVar16 = DAT_180bb8ae8;
  do {
    DAT_180bb8ae8 = pcVar16;
    if (plVar17 == plVar2) {
      FUN_1804aeee0(pcVar6 + 0x1248);
      if (*pcVar6 != '\0') {
        if ((pcVar6[0x277a] != '\0') && (lVar10 = *(longlong *)(pcVar6 + 0x48), lVar10 != 0)) {
          pcVar16 = DAT_180bb8ae8;
          pcVar16[0x277c] = '\0';
          pcVar16[0x277d] = '\0';
          pcVar16[0x277e] = '\0';
          pcVar16[0x277f] = '\0';
          local_res8 = 0;
          uVar9 = FUN_1804ce360(&local_res8);
          lVar10 = FUN_1804b0b10(lVar10,&DAT_18085b164);
          if (lVar10 != 0) {
            FUN_180610c34(uVar9,1,local_res8,lVar10);
            FUN_1806116f4(lVar10);
          }
        }
        FUN_1804b6f10(pcVar6,6);
        iVar12 = 0;
        if (0 < *(int *)(pcVar6 + 0x1470)) {
          lVar10 = 0;
          do {
            lVar15 = *(longlong *)(lVar10 + *(longlong *)(pcVar6 + 0x1478));
            if (lVar15 != 0) {
              FUN_1804b7410(lVar15);
              pcVar16 = DAT_180bb8ae8;
              if (DAT_180bb8ae8 != (char *)0x0) {
                piVar1 = (int *)(DAT_180bb8ae8 + 4);
                piVar14 = (int *)(DAT_180bb8ae8 +
                                 (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
                if (*piVar14 != *piVar1) {
                  iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                  sVar11 = (short)iVar13 + (short)(iVar13 / 6) * -6;
                  *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
                  piVar14 = (int *)(pcVar16 + (longlong)sVar11 * 8 + 0x2998);
                  *piVar14 = *piVar1;
                  pcVar3 = pcVar16 + (longlong)sVar11 * 8 + 0x299c;
                  pcVar3[0] = '\0';
                  pcVar3[1] = '\0';
                  pcVar3[2] = '\0';
                  pcVar3[3] = '\0';
                }
                *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
                *(int *)(pcVar16 + 0x2990) = *(int *)(pcVar16 + 0x2990) + 1;
              }
              thunk_FUN_180621380(lVar15);
            }
            iVar12 = iVar12 + 1;
            lVar10 = lVar10 + 8;
          } while (iVar12 < *(int *)(pcVar6 + 0x1470));
        }
        FUN_1804aeee0(pcVar6 + 0x1470);
        FUN_1804aeee0(pcVar6 + 0x1480);
        FUN_1804aeee0(pcVar6 + 0x1490);
        pcVar6[0x14d0] = '\0';
        pcVar6[0x14d1] = '\0';
        pcVar6[0x14d2] = '\0';
        pcVar6[0x14d3] = '\0';
        pcVar6[0x14d4] = '\0';
        pcVar6[0x14d5] = '\0';
        pcVar6[0x14d6] = '\0';
        pcVar6[0x14d7] = '\0';
        lVar10 = *(longlong *)(pcVar6 + 0x14a8);
        if (lVar10 != 0) {
          pcVar6[0x14a0] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x14a1] = '\0';
          pcVar6[0x14a2] = '\0';
          pcVar6[0x14a3] = '\0';
          pcVar6[0x14a4] = '\0';
          pcVar6[0x14a5] = '\0';
          pcVar6[0x14a6] = '\0';
          pcVar6[0x14a7] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x14a8] = '\0';
          pcVar6[0x14a9] = '\0';
          pcVar6[0x14aa] = '\0';
          pcVar6[0x14ab] = '\0';
          pcVar6[0x14ac] = '\0';
          pcVar6[0x14ad] = '\0';
          pcVar6[0x14ae] = '\0';
          pcVar6[0x14af] = '\0';
        }
        FUN_1804aeee0(pcVar6 + 0x14b0);
        pcVar6[0x2040] = '\0';
        pcVar6[0x2041] = '\0';
        pcVar6[0x2042] = '\0';
        pcVar6[0x2043] = '\0';
        pcVar6[0x2044] = '\0';
        pcVar6[0x2045] = '\0';
        pcVar6[0x2046] = '\0';
        pcVar6[0x2047] = '\0';
        pcVar6[0x14e0] = '\0';
        pcVar6[0x14e1] = '\0';
        pcVar6[0x14e2] = '\0';
        pcVar6[0x14e3] = '\0';
        pcVar6[0x14e4] = '\0';
        pcVar6[0x14e5] = '\0';
        pcVar6[0x14e6] = '\0';
        pcVar6[0x14e7] = '\0';
        pcVar6[0x14d8] = '\0';
        pcVar6[0x14d9] = '\0';
        pcVar6[0x14da] = '\0';
        pcVar6[0x14db] = '\0';
        pcVar6[0x14dc] = '\0';
        pcVar6[0x14dd] = '\0';
        pcVar6[0x14de] = '\0';
        pcVar6[0x14df] = '\0';
        pcVar6[0x1578] = '\0';
        pcVar6[0x1579] = '\0';
        pcVar6[0x157a] = '\0';
        pcVar6[0x157b] = '\0';
        pcVar6[0x157c] = '\0';
        pcVar6[0x157d] = '\0';
        pcVar6[0x157e] = '\0';
        pcVar6[0x157f] = '\0';
        pcVar6[0x14f0] = '\0';
        pcVar6[0x14f1] = '\0';
        pcVar6[0x14f2] = '\0';
        pcVar6[0x14f3] = '\0';
        pcVar6[0x14f4] = '\0';
        pcVar6[0x14f5] = '\0';
        pcVar6[0x14f6] = '\0';
        pcVar6[0x14f7] = '\0';
        pcVar16 = pcVar6 + 0x1d18;
        for (lVar10 = 0x9b; lVar10 != 0; lVar10 = lVar10 + -1) {
          pcVar16[0] = -1;
          pcVar16[1] = -1;
          pcVar16 = pcVar16 + 2;
        }
        FUN_1804aeee0(pcVar6 + 0x1e50);
        FUN_1804aeee0(pcVar6 + 0x1e60);
        lVar10 = *(longlong *)(pcVar6 + 0x1fa0);
        if (lVar10 != 0) {
          pcVar6[0x1f98] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x1f99] = '\0';
          pcVar6[0x1f9a] = '\0';
          pcVar6[0x1f9b] = '\0';
          pcVar6[0x1f9c] = '\0';
          pcVar6[0x1f9d] = '\0';
          pcVar6[0x1f9e] = '\0';
          pcVar6[0x1f9f] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x1fa0] = '\0';
          pcVar6[0x1fa1] = '\0';
          pcVar6[0x1fa2] = '\0';
          pcVar6[0x1fa3] = '\0';
          pcVar6[0x1fa4] = '\0';
          pcVar6[0x1fa5] = '\0';
          pcVar6[0x1fa6] = '\0';
          pcVar6[0x1fa7] = '\0';
        }
        lVar10 = *(longlong *)(pcVar6 + 0x1fb0);
        if (lVar10 != 0) {
          pcVar6[0x1fa8] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x1fa9] = '\0';
          pcVar6[0x1faa] = '\0';
          pcVar6[0x1fab] = '\0';
          pcVar6[0x1fac] = '\0';
          pcVar6[0x1fad] = '\0';
          pcVar6[0x1fae] = '\0';
          pcVar6[0x1faf] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x1fb0] = '\0';
          pcVar6[0x1fb1] = '\0';
          pcVar6[0x1fb2] = '\0';
          pcVar6[0x1fb3] = '\0';
          pcVar6[0x1fb4] = '\0';
          pcVar6[0x1fb5] = '\0';
          pcVar6[0x1fb6] = '\0';
          pcVar6[0x1fb7] = '\0';
        }
        lVar10 = *(longlong *)(pcVar6 + 0x1fc0);
        if (lVar10 != 0) {
          pcVar6[0x1fb8] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x1fb9] = '\0';
          pcVar6[0x1fba] = '\0';
          pcVar6[0x1fbb] = '\0';
          pcVar6[0x1fbc] = '\0';
          pcVar6[0x1fbd] = '\0';
          pcVar6[0x1fbe] = '\0';
          pcVar6[0x1fbf] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x1fc0] = '\0';
          pcVar6[0x1fc1] = '\0';
          pcVar6[0x1fc2] = '\0';
          pcVar6[0x1fc3] = '\0';
          pcVar6[0x1fc4] = '\0';
          pcVar6[0x1fc5] = '\0';
          pcVar6[0x1fc6] = '\0';
          pcVar6[0x1fc7] = '\0';
        }
        FUN_1804aeee0(pcVar6 + 0x1ff8);
        FUN_1804aeee0(pcVar6 + 0x2008);
        lVar10 = *(longlong *)(pcVar6 + 0x2020);
        if (lVar10 != 0) {
          pcVar6[0x2018] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x2019] = '\0';
          pcVar6[0x201a] = '\0';
          pcVar6[0x201b] = '\0';
          pcVar6[0x201c] = '\0';
          pcVar6[0x201d] = '\0';
          pcVar6[0x201e] = '\0';
          pcVar6[0x201f] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x2020] = '\0';
          pcVar6[0x2021] = '\0';
          pcVar6[0x2022] = '\0';
          pcVar6[0x2023] = '\0';
          pcVar6[0x2024] = '\0';
          pcVar6[0x2025] = '\0';
          pcVar6[0x2026] = '\0';
          pcVar6[0x2027] = '\0';
        }
        FUN_1804d0280(pcVar6 + 0x2028);
        FUN_1804cfd70(pcVar6 + 0x23a8);
        lVar10 = *(longlong *)(pcVar6 + 0x23d8);
        if (lVar10 != 0) {
          pcVar6[0x23d0] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x23d1] = '\0';
          pcVar6[0x23d2] = '\0';
          pcVar6[0x23d3] = '\0';
          pcVar6[0x23d4] = '\0';
          pcVar6[0x23d5] = '\0';
          pcVar6[0x23d6] = '\0';
          pcVar6[0x23d7] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x23d8] = '\0';
          pcVar6[0x23d9] = '\0';
          pcVar6[0x23da] = '\0';
          pcVar6[0x23db] = '\0';
          pcVar6[0x23dc] = '\0';
          pcVar6[0x23dd] = '\0';
          pcVar6[0x23de] = '\0';
          pcVar6[0x23df] = '\0';
        }
        lVar10 = *(longlong *)(pcVar6 + 0x23e8);
        if (lVar10 != 0) {
          pcVar6[0x23e0] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x23e1] = '\0';
          pcVar6[0x23e2] = '\0';
          pcVar6[0x23e3] = '\0';
          pcVar6[0x23e4] = '\0';
          pcVar6[0x23e5] = '\0';
          pcVar6[0x23e6] = '\0';
          pcVar6[0x23e7] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x23e8] = '\0';
          pcVar6[0x23e9] = '\0';
          pcVar6[0x23ea] = '\0';
          pcVar6[0x23eb] = '\0';
          pcVar6[0x23ec] = '\0';
          pcVar6[0x23ed] = '\0';
          pcVar6[0x23ee] = '\0';
          pcVar6[0x23ef] = '\0';
        }
        iVar12 = 0;
        if (0 < *(int *)(pcVar6 + 9000)) {
          do {
            FUN_180473ca0(*(longlong *)(pcVar6 + 0x2330) + ((longlong)iVar12 * 5 + 3) * 8);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(pcVar6 + 9000));
        }
        lVar10 = *(longlong *)(pcVar6 + 0x2330);
        if (lVar10 != 0) {
          pcVar6[9000] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x2329] = '\0';
          pcVar6[0x232a] = '\0';
          pcVar6[0x232b] = '\0';
          pcVar6[0x232c] = '\0';
          pcVar6[0x232d] = '\0';
          pcVar6[0x232e] = '\0';
          pcVar6[0x232f] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x2330] = '\0';
          pcVar6[0x2331] = '\0';
          pcVar6[0x2332] = '\0';
          pcVar6[0x2333] = '\0';
          pcVar6[0x2334] = '\0';
          pcVar6[0x2335] = '\0';
          pcVar6[0x2336] = '\0';
          pcVar6[0x2337] = '\0';
        }
        FUN_1804cfeb0(pcVar6 + 0x2358);
        iVar12 = 0;
        if (0 < *(int *)(pcVar6 + 0x2348)) {
          do {
            lVar15 = (longlong)iVar12 * 0xb0;
            lVar10 = *(longlong *)(pcVar6 + 0x2350);
            FUN_1804e17d0(lVar15 + lVar10 + 0x50);
            FUN_180473ca0(lVar15 + lVar10 + 0x58);
            FUN_180473ca0(lVar10 + 0x20 + lVar15);
            FUN_180473ca0(lVar10 + 0x10 + lVar15);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(pcVar6 + 0x2348));
        }
        lVar10 = *(longlong *)(pcVar6 + 0x2350);
        if (lVar10 != 0) {
          pcVar6[0x2348] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x2349] = '\0';
          pcVar6[0x234a] = '\0';
          pcVar6[0x234b] = '\0';
          pcVar6[0x234c] = '\0';
          pcVar6[0x234d] = '\0';
          pcVar6[0x234e] = '\0';
          pcVar6[0x234f] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x2350] = '\0';
          pcVar6[0x2351] = '\0';
          pcVar6[0x2352] = '\0';
          pcVar6[0x2353] = '\0';
          pcVar6[0x2354] = '\0';
          pcVar6[0x2355] = '\0';
          pcVar6[0x2356] = '\0';
          pcVar6[0x2357] = '\0';
        }
        FUN_1804aeee0(pcVar6 + 0x2390);
        FUN_1804cfbc0(pcVar6 + 0x2498);
        FUN_1804cfca0(pcVar6 + 0x2488);
        FUN_1804aeee0(pcVar6 + 0x26b8);
        FUN_1804aeee0(pcVar6 + 0x26c8);
        FUN_1804aeee0(pcVar6 + 0x2510);
        FUN_1804aeee0(pcVar6 + 0x2520);
        FUN_1804aeee0(pcVar6 + 0x2568);
        pcVar6[0x2578] = '\0';
        pcVar6[0x2579] = '\0';
        pcVar6[0x257a] = '\0';
        pcVar6[0x257b] = '\0';
        pcVar6[0x2580] = '\0';
        pcVar6[0x2581] = '\0';
        pcVar6[0x2582] = '\0';
        pcVar6[0x2583] = '\0';
        pcVar6[0x2584] = '\0';
        pcVar6[0x2585] = '\0';
        pcVar6[0x2586] = '\0';
        pcVar6[0x2587] = '\0';
        FUN_1804aeee0(pcVar6 + 0x2588);
        FUN_1804aeee0(pcVar6 + 0x27a0);
        lVar10 = *(longlong *)(pcVar6 + 0x2798);
        if (lVar10 != 0) {
          pcVar6[0x2790] = '\0';
          pcVar16 = DAT_180bb8ae8;
          pcVar6[0x2791] = '\0';
          pcVar6[0x2792] = '\0';
          pcVar6[0x2793] = '\0';
          pcVar6[0x2794] = '\0';
          pcVar6[0x2795] = '\0';
          pcVar6[0x2796] = '\0';
          pcVar6[0x2797] = '\0';
          if (DAT_180bb8ae8 != (char *)0x0) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar14 = (int *)(DAT_180bb8ae8 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
            if (*piVar14 != *piVar1) {
              iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
              piVar14 = (int *)(pcVar16 + ((longlong)sVar11 + 0x533) * 8);
              *piVar14 = *piVar1;
              piVar14[1] = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            piVar1 = (int *)(pcVar16 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar10);
          pcVar6[0x2798] = '\0';
          pcVar6[0x2799] = '\0';
          pcVar6[0x279a] = '\0';
          pcVar6[0x279b] = '\0';
          pcVar6[0x279c] = '\0';
          pcVar6[0x279d] = '\0';
          pcVar6[0x279e] = '\0';
          pcVar6[0x279f] = '\0';
        }
        lVar10 = *(longlong *)(pcVar6 + 0x2850);
        if (lVar10 != 0) {
          lVar15 = FUN_1806114c0(1);
          if (lVar10 != lVar15) {
            FUN_1806116f4(lVar10);
          }
          pcVar6[0x2850] = '\0';
          pcVar6[0x2851] = '\0';
          pcVar6[0x2852] = '\0';
          pcVar6[0x2853] = '\0';
          pcVar6[0x2854] = '\0';
          pcVar6[0x2855] = '\0';
          pcVar6[0x2856] = '\0';
          pcVar6[0x2857] = '\0';
        }
        FUN_1804aeee0(pcVar6 + 0x2858);
        FUN_1804aeee0(pcVar6 + 0x28d0);
        FUN_1804aeee0(pcVar6 + 0x28e0);
        pcVar6[0x28f0] = '\0';
        pcVar6[0x28f1] = '\0';
        pcVar6[0x28f2] = '\0';
        pcVar6[0x28f3] = '\0';
        *pcVar6 = '\0';
      }
      return;
    }
    lVar10 = *plVar17;
    puVar4 = *(undefined8 **)(lVar10 + 0x98);
    for (puVar7 = puVar4; puVar7 < puVar4 + *(int *)(lVar10 + 0x90); puVar7 = puVar7 + 1) {
      if ((char *)*puVar7 == pcVar16 + 0x11f8) {
        lVar15 = (longlong)puVar7 - (longlong)puVar4 >> 3;
        FUN_18063aed0(puVar4 + lVar15,puVar4 + lVar15 + 1,
                      (*(int *)(lVar10 + 0x90) - lVar15) * 8 + -8);
        *(int *)(lVar10 + 0x90) = *(int *)(lVar10 + 0x90) + -1;
        break;
      }
    }
    plVar5 = *(longlong **)(pcVar16 + 0x11c8);
    for (plVar8 = plVar5; plVar8 < plVar5 + *(int *)(pcVar16 + 0x11c0); plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar10) {
        lVar15 = (longlong)plVar8 - (longlong)plVar5 >> 3;
        FUN_18063aed0(plVar5 + lVar15,plVar5 + lVar15 + 1,
                      (*(int *)(pcVar16 + 0x11c0) - lVar15) * 8 + -8);
        *(int *)(pcVar16 + 0x11c0) = *(int *)(pcVar16 + 0x11c0) + -1;
        break;
      }
    }
    *(int *)(lVar10 + 0xc4) = *(int *)(lVar10 + 0xc4) + -1;
    plVar8 = *(longlong **)(lVar10 + 0x48);
    plVar5 = plVar8 + *(int *)(lVar10 + 0x40);
    for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
      *(undefined2 *)(*plVar8 + 0x5c) = *(undefined2 *)(lVar10 + 0xc4);
    }
    if ((*(char **)(lVar10 + 200) == pcVar6) && (*(int *)(lVar10 + 0xc4) == 0)) {
      *(undefined2 *)(lVar10 + 0x50) = 0;
      FUN_1804e2790(lVar10);
      puVar7 = *(undefined8 **)(lVar10 + 0x48);
      puVar4 = puVar7 + *(int *)(lVar10 + 0x40);
      for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
        FUN_1804e26d0(*puVar7);
      }
      FUN_1804ebe90(lVar10 + 0x40);
      *(undefined8 *)(lVar10 + 0x38) = 0;
      FUN_180473ca0(lVar10 + 0x90);
      FUN_180473ca0(lVar10 + 0x78);
      FUN_180473ca0(lVar10 + 0x68);
      FUN_180473ca0(lVar10 + 0x40);
      pcVar16 = DAT_180bb8ae8;
      if (DAT_180bb8ae8 != (char *)0x0) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar14 = (int *)(DAT_180bb8ae8 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998)
        ;
        if (*piVar14 != *piVar1) {
          iVar12 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
          piVar14 = (int *)(pcVar16 + (longlong)sVar11 * 8 + 0x2998);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar11 * 8 + 0x299c;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x2990) = *(int *)(pcVar16 + 0x2990) + 1;
      }
      thunk_FUN_180621380(lVar10);
    }
    plVar17 = plVar17 + 1;
    pcVar16 = DAT_180bb8ae8;
  } while( true );
}




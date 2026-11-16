// FUN_1804e42b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e42b0 */

void FUN_1804e42b0(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined1 (*pauVar9) [32];
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined1 (*pauVar17) [32];
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 local_40 [16];
  
  lVar22 = 0x1b;
  uVar7 = 2;
  if ((*param_1 & 2) == 0) {
    uVar7 = 0xf5;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar16 = 2;
  if ((*param_1 & 2) == 0) {
    uVar16 = 0x1b;
  }
  local_40 = (undefined1  [16])0x0;
  puVar8 = (ushort *)FUN_1804e8220(param_1,*(undefined4 *)(lVar2 + 0xec));
  if (puVar8 == (ushort *)0x0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_1804e7950(param_1);
    }
    uVar6 = FUN_1804e7f30(param_1,uVar7,uVar16,0);
    if ((uVar6 != 0xffffffff) &&
       (FUN_1804e3ed0(param_1,uVar6,local_40), *(byte *)((longlong)param_1 + 0x51) != 0)) {
      lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
      lVar18 = (longlong)
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78) +
                        (ulonglong)(uVar6 & 0x7ffff) * 4) << 0xc) >> 0xc;
      FUN_1804e33e0(*(undefined8 *)(param_1 + 0xe),*(undefined2 *)(lVar23 + lVar18 * 8),
                    *(undefined2 *)(lVar23 + 2 + lVar18 * 8),
                    *(undefined2 *)(lVar23 + 4 + lVar18 * 8),
                    *(undefined2 *)(lVar23 + 6 + lVar18 * 8));
      *(byte *)((longlong)param_1 + 0x52) = 0;
    }
    uVar20 = (uint)(ushort)local_40._0_2_;
    *(uint *)(lVar2 + 0xec) = uVar6;
    auVar4 = (undefined1  [32])s__________________________________18086ed40._0_32_;
    lVar2 = *(longlong *)(param_1 + 0xe);
    iVar1 = *(int *)(lVar2 + 0x20);
    if ((*param_1 & 2) == 0) {
      pcVar15 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      pcVar10 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      uVar6 = (uint)(ushort)local_40._2_2_;
      if (iVar1 == 0) {
        lVar23 = 0x1b;
        puVar21 = (undefined4 *)
                  ((longlong)
                   (int)((uVar6 * *(int *)(lVar2 + 0x24) + uVar20) * *(int *)(lVar2 + 0x2c)) +
                  *(longlong *)(lVar2 + 0x30));
        do {
          lVar18 = 0x3d;
          puVar12 = puVar21;
          do {
            uVar7 = 0;
            if (*pcVar10 == '.') {
              uVar7 = 0xffffffff;
            }
            *puVar12 = uVar7;
            uVar7 = 0;
            if (pcVar10[1] == '.') {
              uVar7 = 0xffffffff;
            }
            pcVar10 = pcVar10 + 2;
            puVar12[1] = uVar7;
            lVar18 = lVar18 + -1;
            puVar12 = puVar12 + 2;
          } while (lVar18 != 0);
          puVar21 = puVar21 + *(int *)(lVar2 + 0x24);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      else if (iVar1 == 1) {
        lVar23 = 0x1b;
        pauVar17 = (undefined1 (*) [32])
                   ((longlong)
                    (int)((uVar6 * *(int *)(lVar2 + 0x24) + uVar20) * *(int *)(lVar2 + 0x2c)) +
                   *(longlong *)(lVar2 + 0x30));
        do {
          lVar18 = 0;
          if (((undefined1 (*) [32])(pcVar10 + 0x79) < pauVar17) || (pauVar17[3] + 0x19 < pcVar10))
          {
            lVar18 = 0x60;
            lVar19 = 3;
            pauVar9 = pauVar17;
            do {
              auVar3 = vpcmpeqb_avx2(auVar4,*(undefined1 (*) [32])
                                             ((longlong)pauVar9 +
                                             ((longlong)pcVar10 - (longlong)pauVar17)));
              *pauVar9 = auVar3;
              pauVar9 = pauVar9 + 1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          lVar19 = 0x7a - lVar18;
          puVar11 = *pauVar17 + lVar18;
          do {
            uVar5 = 0;
            if (puVar11[(longlong)pcVar10 - (longlong)pauVar17] == '.') {
              uVar5 = 0xff;
            }
            *puVar11 = uVar5;
            lVar19 = lVar19 + -1;
            puVar11 = puVar11 + 1;
          } while (lVar19 != 0);
          pcVar10 = pcVar10 + 0x7a;
          pauVar17 = (undefined1 (*) [32])(*pauVar17 + *(int *)(lVar2 + 0x24));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      auVar4 = (undefined1  [32])s_BXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX_18086efdf._1_32_;
      lVar2 = *(longlong *)(param_1 + 0xe);
      if (*(int *)(lVar2 + 0x20) == 0) {
        puVar21 = (undefined4 *)
                  ((longlong)
                   (int)((uVar6 * *(int *)(lVar2 + 0x24) + (ushort)local_40._0_2_ + 0x7b) *
                        *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
        do {
          lVar23 = 0x3d;
          puVar12 = puVar21;
          do {
            uVar7 = 0;
            if (*pcVar15 == 'X') {
              uVar7 = 0xffffffff;
            }
            *puVar12 = uVar7;
            uVar7 = 0;
            if (pcVar15[1] == 'X') {
              uVar7 = 0xffffffff;
            }
            pcVar15 = pcVar15 + 2;
            puVar12[1] = uVar7;
            lVar23 = lVar23 + -1;
            puVar12 = puVar12 + 2;
          } while (lVar23 != 0);
          puVar21 = puVar21 + *(int *)(lVar2 + 0x24);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      else if (*(int *)(lVar2 + 0x20) == 1) {
        pauVar17 = (undefined1 (*) [32])
                   ((longlong)
                    (int)((uVar6 * *(int *)(lVar2 + 0x24) + (ushort)local_40._0_2_ + 0x7b) *
                         *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
        do {
          lVar23 = 0;
          if (((undefined1 (*) [32])(pcVar15 + 0x79) < pauVar17) || (pauVar17[3] + 0x19 < pcVar15))
          {
            lVar18 = 3;
            lVar23 = 0x60;
            pauVar9 = pauVar17;
            do {
              auVar3 = vpcmpeqb_avx2(auVar4,*(undefined1 (*) [32])
                                             (((longlong)pcVar15 - (longlong)pauVar17) +
                                             (longlong)pauVar9));
              *pauVar9 = auVar3;
              pauVar9 = pauVar9 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          lVar18 = 0x7a - lVar23;
          puVar11 = *pauVar17 + lVar23;
          do {
            uVar5 = 0;
            if (puVar11[(longlong)pcVar15 - (longlong)pauVar17] == 'X') {
              uVar5 = 0xff;
            }
            *puVar11 = uVar5;
            lVar18 = lVar18 + -1;
            puVar11 = puVar11 + 1;
          } while (lVar18 != 0);
          pcVar15 = pcVar15 + 0x7a;
          pauVar17 = (undefined1 (*) [32])(*pauVar17 + *(int *)(lVar2 + 0x24));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      uVar20 = (uint)(ushort)local_40._0_2_;
    }
    else if (iVar1 == 0) {
      puVar14 = (undefined8 *)
                ((longlong)
                 (int)(((uint)(ushort)local_40._2_2_ * *(int *)(lVar2 + 0x24) +
                       (uint)(ushort)local_40._0_2_) * *(int *)(lVar2 + 0x2c)) +
                *(longlong *)(lVar2 + 0x30));
      *puVar14 = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar14 + (longlong)*(int *)(lVar2 + 0x24) * 4) = 0xffffffffffffffff
      ;
    }
    else if (iVar1 == 1) {
      puVar13 = (undefined2 *)
                ((longlong)
                 (int)(((uint)(ushort)local_40._2_2_ * *(int *)(lVar2 + 0x24) + uVar20) *
                      *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
      *puVar13 = 0xffff;
      *(undefined2 *)((longlong)*(int *)(lVar2 + 0x24) + (longlong)puVar13) = 0xffff;
    }
  }
  else {
    uVar20 = (uint)*puVar8;
    local_40._2_2_ = puVar8[1];
  }
  param_1[0x17] = (uint)(((float)uVar20 + 0.5) * (float)param_1[0x15]);
  param_1[0x18] = (uint)(((float)(ushort)local_40._2_2_ + 0.5) * (float)param_1[0x16]);
  return;
}




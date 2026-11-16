// FUN_1804f1a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f1a30 */

void FUN_1804f1a30(longlong param_1,uint param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  float fVar28;
  int local_res20;
  
  lVar7 = DAT_180bb8ae8;
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd1) != '\0') {
    return;
  }
  sVar5 = *(short *)(param_1 + 0x22a);
  lVar11 = (longlong)sVar5;
  lVar24 = 0;
  bVar26 = false;
  if ((sVar5 < 0) || (*(int *)(param_1 + 0x6c) <= (int)sVar5)) {
    lVar11 = 0xffffffff;
  }
  else if (sVar5 != -1) {
    pbVar13 = (byte *)(lVar11 * 0x78 + *(longlong *)(param_1 + 0x18));
    goto LAB_1804f1a9d;
  }
  pbVar13 = (byte *)0x0;
LAB_1804f1a9d:
  if ((param_2 & 1) != 0) {
    if (pbVar13 != (byte *)0x0) {
      if (((*pbVar13 & 0x20) == 0) && (pbVar13[0x6a] != 0)) {
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
      }
      pcVar16 = *(char **)(DAT_180bb8ae8 + 0x27e8);
      pcVar15 = "*Missing Text*";
      if (pcVar16 != (char *)0x0) {
        pcVar15 = pcVar16;
      }
      cVar8 = FUN_1805027a0(pcVar15,pcVar16,0,0,uVar22);
      if (cVar8 != '\0') {
        lVar14 = (longlong)(int)lVar11 * 0x78;
        lVar21 = *(longlong *)(param_1 + 0x18);
        if (*(char *)(lVar14 + 0x6a + lVar21) != '\0') {
          pbVar13 = (byte *)(lVar14 + 0x73 + lVar21);
          *pbVar13 = *pbVar13 & 0xf;
          pbVar13 = (byte *)(lVar14 + 0x73 + lVar21);
          *pbVar13 = *pbVar13 | 0x10;
          *(short *)(param_1 + 0x214) = (short)lVar11;
        }
      }
    }
    if ((*(short *)(param_1 + 0x208) == *(short *)(param_1 + 0x206)) &&
       ((*(uint *)(param_1 + 4) & 0xe000) != 0x4000)) {
      pcVar16 = "*Missing Text*";
      if (*(char **)(DAT_180bb8ae8 + 0x27f0) != (char *)0x0) {
        pcVar16 = *(char **)(DAT_180bb8ae8 + 0x27f0);
      }
    }
    else {
      pcVar16 = "*Missing Text*";
      if (*(char **)(DAT_180bb8ae8 + 0x27f8) != (char *)0x0) {
        pcVar16 = *(char **)(DAT_180bb8ae8 + 0x27f8);
      }
    }
    cVar8 = FUN_1805027a0(pcVar16);
    if ((cVar8 != '\0') && (iVar17 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      lVar11 = 0;
      do {
        lVar21 = *(longlong *)(param_1 + 0x18);
        if ((*(char *)(lVar21 + 0x6a + lVar11) != '\0') || ((*(byte *)(lVar21 + lVar11) & 8) != 0))
        {
          *(undefined1 *)(lVar21 + 0x73 + lVar11) = 0x12;
        }
        iVar17 = iVar17 + 1;
        lVar11 = lVar11 + 0x78;
      } while (iVar17 < *(int *)(param_1 + 0x6c));
    }
    bVar26 = true;
  }
  if ((param_2 & 6) != 0) {
    pcVar16 = "*Missing Text*";
    if (*(char **)(DAT_180bb8ae8 + 0x2800) != (char *)0x0) {
      pcVar16 = *(char **)(DAT_180bb8ae8 + 0x2800);
    }
    cVar8 = FUN_180501aa0(pcVar16,0,1);
    if (cVar8 != '\0') {
      if ((param_2 & 2) != 0) {
        pcVar16 = *(char **)(DAT_180bb8ae8 + 0x2808);
        pcVar15 = "*Missing Text*";
        if (pcVar16 != (char *)0x0) {
          pcVar15 = pcVar16;
        }
        cVar8 = FUN_1805027a0(pcVar15,pcVar16,0,0,*(char *)(param_1 + 0x248) == '\0');
        if (cVar8 != '\0') {
          *(undefined1 *)(param_1 + 0x24b) = 1;
        }
      }
      if ((param_2 & 4) != 0) {
        pcVar16 = *(char **)(DAT_180bb8ae8 + 0x2810);
        pcVar15 = "*Missing Text*";
        if (pcVar16 != (char *)0x0) {
          pcVar15 = pcVar16;
        }
        cVar8 = FUN_1805027a0(pcVar15,pcVar16,0,0,*(char *)(param_1 + 0x249) == '\0');
        if (cVar8 != '\0') {
          *(undefined1 *)(param_1 + 0x24c) = 1;
        }
      }
      lVar11 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      if ((*(uint *)(lVar11 + 0x14) & 0x14000000) == 0x14000000) {
        if ((((((*(short *)(lVar11 + 0xda) == *(short *)(lVar11 + 0xdc)) &&
               (*(int *)(DAT_180bb8ae8 + 0x20f0) == 0)) &&
              (*(char *)(DAT_180bb8ae8 + 0x20e1) != '\0')) &&
             ((*(int *)(DAT_180bb8ae8 + 0x2130) == 0 && (*(int *)(DAT_180bb8ae8 + 0x21a0) == 0))))
            && (*(longlong *)(DAT_180bb8ae8 + 0x2040) != 0)) &&
           ((*(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x3f0) == lVar11 &&
            (*(int *)(*(longlong *)(lVar11 + 0x3c8) + 0x1d4) == 1)))) {
          FUN_1804c7a50(*(int *)(DAT_180bb8ae8 + 0x2008) + -1,
                        CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
          lVar11 = DAT_180bb8ae8;
          pcVar16 = (char *)(DAT_180bb8ae8 + 0x20a2);
          *(undefined2 *)(DAT_180bb8ae8 + 0x20e0) = 0;
          *(bool *)(lVar11 + 0x20a1) = *pcVar16 != '\0';
        }
        FUN_1804c7e80();
      }
      else {
        FUN_1804c5a40("Calling EndMenu() in wrong window!");
      }
    }
  }
  if ((param_2 & 4) != 0) {
    if ((bVar26) &&
       (lVar11 = *(longlong *)(DAT_180bb8ae8 + 0x14d0), *(char *)(lVar11 + 0xd1) == '\0')) {
      iVar17 = *(int *)(lVar11 + 0x1d4);
      iVar12 = 2 - (uint)(iVar17 != 0);
      if (*(longlong *)(lVar11 + 0x1c8) != 0) {
        bVar26 = iVar17 != 0;
        iVar17 = -iVar17;
        iVar12 = 6 - (uint)bVar26;
      }
      auVar27 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xd84)),ZEXT416(0x3f800000));
      FUN_1804f7030(iVar12,auVar27._0_8_,iVar17);
    }
    if ((((*(int *)(lVar7 + 0x1550) == 0) ||
         (*(longlong *)(lVar7 + 0x1578) != *(longlong *)(lVar7 + 0x14d0))) ||
        (*(short *)(param_1 + 0x21e) == -1)) || (*(char *)(lVar7 + 0x1562) == '\0')) {
      local_res20 = *(int *)(param_1 + 0x6c) + -1;
      bVar26 = false;
      iVar17 = 0;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x6c) + -1;
      bVar26 = true;
      iVar17 = 0;
      if (iVar12 < 0) {
        iVar17 = iVar12;
      }
      sVar5 = *(short *)((longlong)*(short *)(param_1 + 0x21e) * 0x78 + 0x5a +
                        *(longlong *)(param_1 + 0x18));
      uVar20 = (ulonglong)sVar5;
      iVar12 = (int)sVar5;
      if (sVar5 != iVar17) {
        iVar10 = (int)*(short *)(param_1 + 0x230);
        if (0 < *(short *)(param_1 + 0x230)) {
          if (sVar5 < iVar10) {
            iVar19 = iVar10 + -1;
            if (iVar17 < iVar10 + -1) {
              iVar19 = iVar17;
            }
          }
          else {
            iVar19 = iVar10;
            if (iVar10 <= iVar17) {
              iVar19 = iVar17;
            }
          }
          iVar17 = iVar19;
        }
        lVar11 = (longlong)iVar17;
        uVar23 = uVar20 & 0xffffffff;
        iVar10 = -1;
        if (iVar12 < iVar17) {
          iVar10 = 1;
        }
        uVar18 = uVar20;
        while( true ) {
          if (((lVar11 <= (longlong)uVar20) || (lVar11 < (longlong)uVar18)) &&
             (((longlong)uVar20 <= lVar11 || ((longlong)uVar18 < lVar11)))) goto LAB_1804f1e70;
          iVar19 = (int)uVar23;
          if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + uVar18 * 2) * 0x78 +
                        *(longlong *)(param_1 + 0x18)) & 0x40) != 0) break;
          uVar23 = (ulonglong)(uint)(iVar19 + iVar10);
          uVar18 = uVar18 + (longlong)iVar10;
        }
        iVar17 = iVar19 - iVar10;
        if (iVar19 == iVar12) {
          iVar17 = iVar12;
        }
      }
LAB_1804f1e70:
      local_res20 = FUN_1804ec5f0(param_1,uVar20 & 0xffffffff,*(int *)(param_1 + 0x6c) + -1);
    }
    lVar11 = DAT_180bb8ae8;
    piVar1 = (int *)(DAT_180bb8ae8 + 0x1fd8);
    uVar25 = *(uint *)(DAT_180bb8ae8 + 0x1e80) & 0xffffffef;
    *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar25;
    iVar12 = *(int *)(lVar11 + 0x1fdc);
    if (*piVar1 == iVar12) {
      iVar10 = *piVar1 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar10 < iVar12) {
        iVar10 = iVar12;
      }
      FUN_1804d14d0(piVar1,iVar10);
    }
    iVar12 = 0;
    *(uint *)(*(longlong *)(lVar11 + 0x1fe0) + (longlong)*piVar1 * 4) = uVar25;
    *piVar1 = *piVar1 + 1;
    if (0 < *(int *)(param_1 + 0x6c)) {
      fVar28 = 0.5;
      do {
        lVar11 = *(longlong *)(param_1 + 0x18);
        sVar5 = *(short *)(*(longlong *)(param_1 + 0x28) + lVar24);
        lVar21 = (longlong)sVar5 * 0x78;
        uVar25 = *(uint *)(lVar21 + lVar11);
        if ((uVar25 & 1) == 0) {
          if (((*(char *)(param_1 + 0x23d) == '\0') && (*(short *)(param_1 + 0x20a) <= sVar5)) ||
             ((sVar6 = *(short *)(lVar21 + 0x58 + lVar11), sVar6 == -1 ||
              ((pcVar16 = (char *)((longlong)sVar6 + *(longlong *)(param_1 + 0x1a0)),
               pcVar16 == (char *)0x0 || (*pcVar16 == '\0')))))) {
            pcVar16 = "<Unknown>";
          }
          cVar8 = *(char *)(lVar21 + 0x6b + lVar11);
          uVar25 = CONCAT31((uint3)(uVar25 >> 0xf),~(byte)(uVar25 >> 7)) & 0xffffff01;
          if (cVar8 != '\0') {
            bVar9 = (byte)uVar25;
            if (*(short *)(param_1 + 0x206) < 2) {
              bVar9 = 0;
            }
            uVar25 = (uint)bVar9;
          }
          if ((bVar26) &&
             ((iVar10 = (int)*(short *)(lVar21 + 0x5a + lVar11), iVar10 < iVar17 ||
              (local_res20 < iVar10)))) {
            uVar25 = uVar25 & 0xffffff00;
          }
          cVar8 = FUN_1804f1690(pcVar16,cVar8,uVar25);
          if (cVar8 != '\0') {
            *(bool *)(lVar21 + 0x6c + lVar11) = *(char *)(lVar21 + 0x6b + lVar11) == '\0';
          }
          if ((((*(int *)(DAT_180bb8ae8 + 0x1550) != 0) &&
               (*(int *)(DAT_180bb8ae8 + 0x1550) == *(int *)(DAT_180bb8ae8 + 0x1ec0))) &&
              (*(char *)(DAT_180bb8ae8 + 0x118) != '\0')) &&
             (((*(float *)(DAT_180bb8ae8 + 0xa0) * *(float *)(DAT_180bb8ae8 + 0xa0) <=
                *(float *)(DAT_180bb8ae8 + 0xbc4) && (*(int *)(lVar7 + 0x1574) == 1)) &&
              ((*(byte *)(param_1 + 4) & 2) != 0)))) {
            *(undefined1 *)(lVar7 + 0x1562) = 1;
            *(short *)(param_1 + 0x21e) = sVar5;
            cVar8 = FUN_1804b7b20(0);
            if (cVar8 == '\0') {
              fVar2 = *(float *)(lVar7 + 0x1ed0);
              fVar3 = *(float *)(lVar7 + 0x1ed8);
              fVar4 = *(float *)(lVar7 + 0x114);
              iVar10 = 1;
              if (fVar4 < (fVar3 + fVar2) * fVar28) {
                iVar10 = -1;
              }
              if (iVar10 < 0) {
                fVar4 = fVar2 - fVar4;
              }
              else {
                fVar4 = fVar4 - fVar3;
              }
              auVar27._0_4_ = fVar4 / (fVar3 - fVar2);
              auVar27._4_12_ = SUB6012((undefined1  [60])0x0,0);
              auVar27 = vroundss_avx(ZEXT816(0),auVar27,2);
              sVar6 = *(short *)(lVar21 + 0x5a + lVar11);
              iVar19 = (int)*(short *)((longlong)sVar5 * 0x78 + 0x5a + *(longlong *)(param_1 + 0x18)
                                      );
              *(undefined2 *)(param_1 + 0x220) = 0xffff;
              *(short *)(param_1 + 0x21e) = sVar5;
              iVar10 = FUN_1804ec5f0(param_1,iVar19,(int)auVar27._0_4_ * iVar10 + (int)sVar6);
              if ((*(char *)(param_1 + 0x23d) == '\0') || (iVar10 != iVar19)) {
                *(short *)(param_1 + 0x220) = (short)iVar10;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
        lVar24 = lVar24 + 2;
      } while (iVar12 < *(int *)(param_1 + 0x6c));
    }
    lVar7 = DAT_180bb8ae8;
    iVar17 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    if (iVar17 < 2) {
      FUN_1804c5a40("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar17 + -1;
      *(undefined4 *)(lVar7 + 0x1e80) =
           *(undefined4 *)(*(longlong *)(lVar7 + 0x1fe0) + -8 + (longlong)iVar17 * 4);
    }
  }
  return;
}




// FUN_1804c4b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c4b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c4b50(char param_1)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint unaff_ESI;
  uint uVar17;
  char cVar18;
  longlong lVar19;
  int iVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  char local_54;
  uint local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  ulonglong local_30;
  
  lVar7 = DAT_180bb8ae8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)(DAT_180bb8ae8 + 0x28);
  if ((param_1 == '\0') || (*(int *)(DAT_180bb8ae8 + 0x2acc) != 1)) {
    local_55 = '\0';
  }
  else {
    local_55 = '\x01';
  }
  cVar9 = '\0';
  cVar21 = '\0';
  local_57 = '\0';
  local_56 = '\0';
  local_50 = unaff_ESI & 0xffffff00;
  local_54 = '\0';
  cVar12 = '\0';
  local_58 = '\0';
  uVar25 = 0;
  local_38 = 0;
  iVar24 = 0;
  local_48 = (undefined1  [16])0x0;
  if (0 < *(int *)(DAT_180bb8ae8 + 0x1448)) {
    lVar15 = 0;
    cVar18 = local_55;
    uVar17 = local_50;
    do {
      lVar19 = *(longlong *)(lVar7 + 0x1450);
      iVar8 = *(int *)(lVar15 + lVar19);
      if (iVar8 == 1) {
        if (*(char *)(lVar7 + 0xe3) == '\0') {
          uVar4 = *(undefined4 *)(lVar15 + 0x10 + lVar19);
          if ((param_1 != '\0') &&
             ((((uVar25 != 0 || (cVar21 != '\0')) || (local_54 != '\0')) || (cVar12 != '\0'))))
          break;
          *(undefined4 *)(lVar7 + 0x110) = *(undefined4 *)(lVar15 + 0xc + lVar19);
          *(undefined4 *)(lVar7 + 0x114) = uVar4;
          *(undefined4 *)(lVar7 + 0x128) = *(undefined4 *)(lVar15 + 0x14 + lVar19);
          local_57 = '\x01';
          cVar9 = '\x01';
        }
      }
      else if (iVar8 == 3) {
        uVar23 = *(uint *)(lVar15 + 0xc + lVar19);
        if ((param_1 != '\0') &&
           ((((uVar25 >> (uVar23 & 0x1f) & 1) != 0 || (cVar21 != '\0')) ||
            ((*(int *)(lVar15 + 0x14 + lVar19) == 1 && (cVar9 != '\0')))))) break;
        uVar25 = uVar25 | 1 << (uVar23 & 0x1f);
        pbVar1[(longlong)(int)uVar23 + 0xf0] = *(byte *)(lVar15 + 0x10 + lVar19);
        *(undefined4 *)(lVar7 + 0x128) = *(undefined4 *)(lVar15 + 0x14 + lVar19);
LAB_1804c4cc1:
        cVar12 = local_58;
LAB_1804c4cc6:
        cVar9 = local_57;
      }
      else if (iVar8 == 2) {
        if ((param_1 != '\0') && ((cVar9 != '\0' || (uVar25 != 0)))) break;
        *(float *)(lVar7 + 0x124) = *(float *)(lVar15 + 0xc + lVar19) + *(float *)(lVar7 + 0x124);
        *(float *)(lVar7 + 0x120) = *(float *)(lVar15 + 0x10 + lVar19) + *(float *)(lVar7 + 0x120);
        cVar21 = '\x01';
        *(undefined4 *)(lVar7 + 0x128) = *(undefined4 *)(lVar15 + 0x14 + lVar19);
        local_56 = '\x01';
      }
      else if (iVar8 == 4) {
        if ((*pbVar1 & 0x40) == 0) {
          uVar23 = *(uint *)(lVar15 + 0xc + lVar19);
          pcVar11 = (char *)FUN_1804af1b0();
          uVar13 = (uint)((longlong)(pcVar11 + (-0x134 - lVar7)) >> 4);
          if (((param_1 == '\0') || (*pcVar11 == *(char *)(lVar15 + 0x10 + lVar19))) ||
             (((*(uint *)(local_48 + ((longlong)(int)uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1) == 0
              && (uVar25 == 0)))) {
            uVar10 = -(uint)(*(char *)(DAT_180bb8ae8 + 0xaa4) != '\0') & 0x1000;
            uVar22 = uVar10 | 0x4000;
            if (*(char *)(DAT_180bb8ae8 + 0xac4) == '\0') {
              uVar22 = uVar10;
            }
            uVar10 = (uVar22 | uVar23) & 0x1000;
            if (((uVar10 == 0) || (((uVar22 | uVar23) >> 0xe & 1) != 0)) &&
               ((*(char *)(DAT_180bb8ae8 + 0x78) == '\0' || (uVar10 == 0)))) {
              bVar26 = false;
              if ((uVar23 & 0xffff0fff) != 0) {
                bVar26 = (*(uint *)(DAT_180bb8ae8 + 0x15c0 +
                                   ((longlong)(int)(uVar23 & 0xffff0fff) + -0x200 >> 5) * 4) >>
                          (uVar23 & 0x1f) & 1) != 0;
              }
            }
            else {
              bVar26 = false;
            }
            if (((cVar18 == '\0') || (local_58 == '\0')) || (bVar26)) {
              cVar9 = *(char *)(lVar15 + 0x10 + lVar19);
              if (*pcVar11 != cVar9) {
                local_54 = '\x01';
                *(uint *)(local_48 + ((longlong)(int)uVar13 >> 5) * 4) =
                     *(uint *)(local_48 + ((longlong)(int)uVar13 >> 5) * 4) | 1 << (uVar13 & 0x1f);
                if (cVar18 != '\0') {
                  local_50 = uVar17 & 0xff;
                  if (!bVar26) {
                    local_50 = 1;
                  }
                  uVar17 = local_50;
                }
              }
              *pcVar11 = cVar9;
              *(undefined4 *)(pcVar11 + 0xc) = *(undefined4 *)(lVar15 + 0x14 + lVar19);
              cVar21 = local_56;
              goto LAB_1804c4cc1;
            }
          }
          break;
        }
      }
      else if (iVar8 == 5) {
        if ((*pbVar1 & 0x40) == 0) {
          if (((param_1 == '\0') || (((uVar25 == 0 && (cVar9 == '\0')) && (cVar21 == '\0')))) &&
             ((cVar18 == '\0' || ((char)uVar17 == '\0')))) {
            uVar17 = *(uint *)(lVar15 + 0xc + lVar19);
            piVar2 = (int *)(lVar7 + 0xbe0);
            iVar8 = *(int *)(lVar7 + 0xbe4);
            uVar16 = 0xfffd;
            if (uVar17 < 0x10000) {
              uVar16 = (short)uVar17;
            }
            if (*piVar2 == iVar8) {
              iVar20 = *piVar2 + 1;
              if (iVar8 == 0) {
                iVar8 = 8;
              }
              else {
                iVar8 = iVar8 / 2 + iVar8;
              }
              if (iVar20 < iVar8) {
                iVar20 = iVar8;
              }
              FUN_1804d1090(piVar2,iVar20);
              cVar21 = local_56;
              cVar12 = local_58;
            }
            *(undefined2 *)(*(longlong *)(lVar7 + 0xbe8) + (longlong)*piVar2 * 2) = uVar16;
            *piVar2 = *piVar2 + 1;
            cVar18 = local_55;
            uVar17 = local_50;
            if (local_55 != '\0') {
              cVar12 = '\x01';
              local_58 = '\x01';
            }
            goto LAB_1804c4cc6;
          }
          break;
        }
      }
      else if (iVar8 == 6) {
        *(bool *)(lVar7 + 0xbdc) = *(char *)(lVar15 + 0xc + lVar19) == '\0';
      }
      iVar24 = iVar24 + 1;
      lVar15 = lVar15 + 0x1c;
    } while (iVar24 < *(int *)(lVar7 + 0x1448));
  }
  lVar15 = (longlong)iVar24;
  if (0 < iVar24) {
    piVar2 = (int *)(lVar7 + 0x1458);
    lVar19 = 0;
    do {
      iVar8 = *(int *)(lVar7 + 0x145c);
      lVar5 = *(longlong *)(lVar7 + 0x1450);
      if (*piVar2 == iVar8) {
        iVar20 = *piVar2 + 1;
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        if (iVar20 < iVar8) {
          iVar20 = iVar8;
        }
        FUN_1804d1310(piVar2,iVar20);
      }
      lVar6 = *(longlong *)(lVar7 + 0x1460);
      lVar14 = (longlong)*piVar2 * 0x1c;
      *(undefined1 (*) [16])(lVar14 + lVar6) = *(undefined1 (*) [16])(lVar19 + lVar5);
      *(undefined8 *)(lVar14 + 0x10 + lVar6) = *(undefined8 *)(lVar19 + 0x10 + lVar5);
      lVar3 = lVar19 + 0x18;
      lVar19 = lVar19 + 0x1c;
      *(undefined4 *)(lVar14 + 0x18 + lVar6) = *(undefined4 *)(lVar3 + lVar5);
      *piVar2 = *piVar2 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (((iVar24 != 0) && ((*(byte *)(lVar7 + 0x28cc) & 0x80) != 0)) &&
     (iVar8 = 0, 0 < *(int *)(lVar7 + 0x1448))) {
    do {
      pcVar11 = "Remaining";
      if (iVar8 < iVar24) {
        pcVar11 = "Processed";
      }
      FUN_1804c4850(pcVar11,(longlong)iVar8 * 0x1c + *(longlong *)(lVar7 + 0x1450));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar7 + 0x1448));
  }
  if (iVar24 == *(int *)(lVar7 + 0x1448)) {
    iVar24 = *(int *)(lVar7 + 0x144c);
    if (iVar24 < 0) {
      iVar24 = iVar24 + iVar24 / 2;
      iVar8 = 0;
      if (0 < iVar24) {
        iVar8 = iVar24;
      }
      FUN_1804d1310(lVar7 + 0x1448,iVar8);
    }
    *(undefined4 *)(lVar7 + 0x1448) = 0;
  }
  else {
    FUN_18063aed0(*(longlong *)(lVar7 + 0x1450),
                  (longlong)iVar24 * 0x1c + *(longlong *)(lVar7 + 0x1450),
                  ((longlong)*(int *)(lVar7 + 0x1448) - (longlong)iVar24) * 0x1c);
    *(int *)(lVar7 + 0x1448) = *(int *)(lVar7 + 0x1448) - iVar24;
  }
  if (*(char *)(lVar7 + 0xbdc) != '\0') {
    FUN_1804aff50(pbVar1);
    FUN_1804affe0(pbVar1);
  }
}




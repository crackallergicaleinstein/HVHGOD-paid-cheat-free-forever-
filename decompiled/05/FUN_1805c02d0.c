// FUN_1805c02d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c02d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c02d0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [4];
  ulonglong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  uVar11 = *(ulonglong *)(param_1 + 2);
  uVar12 = *param_1;
  uVar3 = *(undefined8 *)(param_1 + 6);
  uVar7 = (ulonglong)uVar12 * 0x40 + uVar11;
  iVar1 = *(int *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
  uVar9 = uVar11;
  uVar5 = 0;
  if (uVar11 < uVar7) {
    do {
      uVar15 = uVar5 + 1;
      if ((*(byte *)(uVar9 + 0x1c) & 0x10) == 0) {
        uVar15 = uVar5;
      }
      uVar9 = uVar9 + 0x40;
      uVar5 = uVar15;
    } while (uVar9 < uVar7);
    if (uVar15 != 0) {
      if (uVar15 < 0x11) {
        puVar6 = local_b8;
      }
      else {
        local_d0 = local_c8;
        local_d8 = 0;
        puVar6 = (ulonglong *)FUN_18057ac40(uVar3,8,0);
        if (local_c8[0] != 0) {
        }
      }
      uVar13 = 0;
      uVar9 = uVar11;
      do {
        if ((*(byte *)(uVar9 + 0x1c) & 0x10) != 0) {
          puVar4 = puVar6 + uVar13;
          while (puVar6 < puVar4) {
            if (*(int *)(puVar4[-1] + 0x30) <= *(int *)(uVar9 + 0x30)) break;
            *puVar4 = puVar4[-1];
            puVar4 = puVar4 + -1;
          }
          *puVar4 = uVar9;
          uVar13 = (ulonglong)((int)uVar13 + 1);
        }
        uVar9 = uVar9 + 0x40;
      } while (uVar9 < uVar7);
      piVar14 = (int *)(uVar11 + 0x30);
      lVar17 = ((ulonglong)uVar12 * 0x40 - 1 >> 6) + 1;
      do {
        if ((piVar14[-5] & 0x10U) == 0) {
          if ((piVar14[-6] & 2U) != 0) {
            if (((piVar14[-4] == 0) || (piVar14[-4] != piVar14[-3])) || ((piVar14[-5] & 0x40U) == 0)
               ) goto LAB_1805c04f4;
            piVar14[-6] = piVar14[-6] & 0xfffffffd;
          }
          uVar7 = 0;
          uVar12 = (uint)uVar13;
          if (uVar12 == 0) {
LAB_1805c04c6:
            uVar7 = *puVar6;
            iVar16 = *piVar14 - *(int *)(uVar7 + 0x30);
LAB_1805c04d1:
            lVar10 = (longlong)iVar16 * (longlong)iVar1;
            iVar8 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) +
                    *(int *)(uVar7 + 0x38);
          }
          else {
            iVar16 = *piVar14;
            do {
              if (iVar16 < *(int *)(puVar6[uVar7] + 0x30)) break;
              uVar5 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < uVar12);
            if ((int)uVar7 == 0) goto LAB_1805c04c6;
            uVar7 = puVar6[(int)uVar7 - 1];
            uVar11 = uVar13;
            do {
              uVar5 = (uint)uVar11;
              uVar15 = uVar5 - 1;
              uVar11 = (ulonglong)uVar15;
              if (*(int *)(puVar6[uVar11] + 0x30) < iVar16) break;
              uVar5 = 0;
            } while (uVar15 != 0);
            if (uVar5 == uVar12) {
              uVar7 = puVar6[uVar5 - 1];
              iVar16 = iVar16 - *(int *)(uVar7 + 0x30);
              goto LAB_1805c04d1;
            }
            uVar11 = puVar6[uVar5];
            iVar2 = *(int *)(uVar7 + 0x30);
            if (iVar16 == iVar2) {
              iVar8 = *(int *)(uVar7 + 0x38);
            }
            else if (iVar16 == *(int *)(uVar11 + 0x30)) {
              iVar8 = *(int *)(uVar11 + 0x38);
            }
            else {
              iVar8 = *(int *)(uVar7 + 0x38);
              iVar16 = FUN_1805753e0(iVar16 - iVar2,*(int *)(uVar11 + 0x38) - iVar8,
                                     *(int *)(uVar11 + 0x30) - iVar2);
              iVar8 = iVar8 + iVar16;
            }
          }
          piVar14[2] = iVar8;
          piVar14[-5] = piVar14[-5] | 0x20;
        }
LAB_1805c04f4:
        piVar14 = piVar14 + 0x10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if (puVar6 != local_b8) {
        FUN_18057abd0(uVar3,puVar6);
      }
    }
  }
}




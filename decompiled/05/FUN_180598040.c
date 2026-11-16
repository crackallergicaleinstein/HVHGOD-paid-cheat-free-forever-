// FUN_180598040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180598040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180598040(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_b8 [32];
  int local_98 [4];
  undefined4 local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  uVar14 = 4;
  if (param_2 < 5) {
    uVar14 = param_2;
  }
  if (uVar14 != 0) {
    uVar16 = (ulonglong)uVar14;
    piVar13 = local_98;
    do {
      iVar6 = FUN_1805778f0();
      *piVar13 = iVar6 >> 0x10;
      piVar13 = piVar13 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 != 0) {
    uVar12 = *(uint *)(lVar3 + 4);
    uVar17 = uVar12;
    if (uVar14 <= uVar12) {
      uVar17 = uVar14;
    }
    uVar16 = 0;
    uVar14 = 0;
    if (uVar12 != 0) {
      do {
        lVar15 = -1;
        iVar6 = -1;
        piVar13 = *(int **)(lVar3 + 8 + (uVar16 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar16 + 7) * 0x18);
        puVar4 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar16 < uVar17) {
          iVar7 = local_98[uVar16];
        }
        else {
          iVar7 = (piVar13[(ulonglong)*pbVar1 - 1] - *piVar13) / 2;
        }
        bVar2 = *pbVar1;
        lVar5 = 0;
        iVar11 = 0;
        if (bVar2 == 0) {
LAB_18059819a:
          uVar8 = *puVar4;
        }
        else {
          do {
            iVar10 = iVar11;
            lVar9 = lVar5;
            if (iVar7 == piVar13[lVar9]) {
              uVar8 = puVar4[lVar9];
              goto LAB_18059819c;
            }
            if (iVar7 < piVar13[lVar9]) {
              if (iVar6 < 0) goto LAB_18059819a;
              if (lVar9 < 0) {
                uVar8 = puVar4[(ulonglong)bVar2 - 1];
              }
              else {
                uVar8 = FUN_1805753e0(iVar7 - piVar13[lVar15],puVar4[lVar9] - puVar4[lVar15],
                                      piVar13[lVar9] - piVar13[lVar15]);
              }
              goto LAB_18059819c;
            }
            iVar11 = iVar10 + 1;
            lVar5 = lVar9 + 1;
            lVar15 = lVar9;
            iVar6 = iVar10;
          } while (iVar11 < (int)(uint)bVar2);
          uVar8 = puVar4[(ulonglong)bVar2 - 1];
        }
LAB_18059819c:
        uVar14 = *(uint *)(lVar3 + 4);
        uVar12 = (uint)uVar16 + 1;
        local_88[uVar16] = uVar8;
        uVar16 = (ulonglong)uVar12;
      } while (uVar12 < uVar14);
    }
    FUN_18059c520(param_1,uVar14,local_88);
  }
}




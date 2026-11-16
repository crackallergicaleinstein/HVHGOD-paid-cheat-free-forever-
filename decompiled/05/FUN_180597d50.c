// FUN_180597d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597d50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180597d50(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x2e0);
  if (lVar4 != 0) {
    uVar13 = *(uint *)(lVar4 + 4);
    if (uVar13 < param_2) {
      param_2 = uVar13;
    }
    uVar14 = 0;
    uVar3 = 0;
    local_98 = param_1;
    if (uVar13 != 0) {
      do {
        lVar15 = -1;
        iVar16 = -1;
        piVar5 = *(int **)(lVar4 + 0xb0 + uVar14 * 0x18);
        pbVar1 = (byte *)(lVar4 + 0xa8 + uVar14 * 0x18);
        puVar6 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar14 < param_2) {
          iVar8 = *(int *)(uVar14 * 4 + param_3);
        }
        else {
          iVar8 = (piVar5[(ulonglong)*pbVar1 - 1] - *piVar5) / 2;
        }
        bVar2 = *pbVar1;
        lVar7 = 0;
        iVar12 = 0;
        if (bVar2 == 0) {
LAB_180597e8a:
          uVar9 = *puVar6;
        }
        else {
          do {
            iVar11 = iVar12;
            lVar10 = lVar7;
            if (iVar8 == piVar5[lVar10]) {
              uVar9 = puVar6[lVar10];
              goto LAB_180597e8c;
            }
            if (iVar8 < piVar5[lVar10]) {
              if (iVar16 < 0) goto LAB_180597e8a;
              if (lVar10 < 0) {
                uVar9 = puVar6[(ulonglong)bVar2 - 1];
              }
              else {
                uVar9 = FUN_1805753e0(iVar8 - piVar5[lVar15],puVar6[lVar10] - puVar6[lVar15],
                                      piVar5[lVar10] - piVar5[lVar15]);
              }
              goto LAB_180597e8c;
            }
            iVar12 = iVar11 + 1;
            lVar7 = lVar10 + 1;
            lVar15 = lVar10;
            iVar16 = iVar11;
          } while (iVar12 < (int)(uint)bVar2);
          uVar9 = puVar6[(ulonglong)bVar2 - 1];
        }
LAB_180597e8c:
        uVar3 = *(uint *)(lVar4 + 4);
        uVar13 = (uint)uVar14 + 1;
        local_88[uVar14] = uVar9;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < uVar3);
    }
    FUN_18059c520(local_98,uVar3,local_88);
  }
}




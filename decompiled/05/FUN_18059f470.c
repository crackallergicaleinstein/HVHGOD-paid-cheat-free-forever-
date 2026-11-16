// FUN_18059f470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059f470 */

int FUN_18059f470(longlong param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  int local_res20 [2];
  
  uVar14 = 0;
  local_res20[0] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  uVar10 = 0;
  if (param_2 != 0) {
    if ((0xf < param_2) && (1 < DAT_1808d5f60)) {
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      do {
        iVar12 = (int)uVar10;
        puVar11 = (ushort *)(*(longlong *)(param_1 + 8) + uVar10 * 2);
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar6 = puVar11[5];
        uVar7 = puVar11[6];
        uVar8 = puVar11[7];
        uVar13 = iVar12 + 0x10;
        uVar10 = (ulonglong)uVar13;
        uVar14 = (uVar14 < uVar1) * uVar1 | (uVar14 >= uVar1) * uVar14;
        uVar15 = (uVar15 < uVar2) * uVar2 | (uVar15 >= uVar2) * uVar15;
        uVar16 = (uVar16 < uVar3) * uVar3 | (uVar16 >= uVar3) * uVar16;
        uVar17 = (uVar17 < uVar4) * uVar4 | (uVar17 >= uVar4) * uVar17;
        uVar18 = (uVar18 < uVar5) * uVar5 | (uVar18 >= uVar5) * uVar18;
        uVar19 = (uVar19 < uVar6) * uVar6 | (uVar19 >= uVar6) * uVar19;
        uVar20 = (uVar20 < uVar7) * uVar7 | (uVar20 >= uVar7) * uVar20;
        uVar21 = (uVar21 < uVar8) * uVar8 | (uVar21 >= uVar8) * uVar21;
        puVar11 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)(iVar12 + 8) * 2);
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar6 = puVar11[5];
        uVar7 = puVar11[6];
        uVar8 = puVar11[7];
        uVar22 = (uVar22 < uVar1) * uVar1 | (uVar22 >= uVar1) * uVar22;
        uVar23 = (uVar23 < uVar2) * uVar2 | (uVar23 >= uVar2) * uVar23;
        uVar24 = (uVar24 < uVar3) * uVar3 | (uVar24 >= uVar3) * uVar24;
        uVar25 = (uVar25 < uVar4) * uVar4 | (uVar25 >= uVar4) * uVar25;
        uVar26 = (uVar26 < uVar5) * uVar5 | (uVar26 >= uVar5) * uVar26;
        uVar27 = (uVar27 < uVar6) * uVar6 | (uVar27 >= uVar6) * uVar27;
        uVar28 = (uVar28 < uVar7) * uVar7 | (uVar28 >= uVar7) * uVar28;
        uVar29 = (uVar29 < uVar8) * uVar8 | (uVar29 >= uVar8) * uVar29;
      } while (uVar13 < (param_2 & 0xfffffff0));
      uVar14 = (uVar14 < uVar22) * uVar22 | (uVar14 >= uVar22) * uVar14;
      uVar15 = (uVar15 < uVar23) * uVar23 | (uVar15 >= uVar23) * uVar15;
      uVar16 = (uVar16 < uVar24) * uVar24 | (uVar16 >= uVar24) * uVar16;
      uVar17 = (uVar17 < uVar25) * uVar25 | (uVar17 >= uVar25) * uVar17;
      uVar18 = (uVar18 < uVar26) * uVar26 | (uVar18 >= uVar26) * uVar18;
      uVar19 = (uVar19 < uVar27) * uVar27 | (uVar19 >= uVar27) * uVar19;
      uVar20 = (uVar20 < uVar28) * uVar28 | (uVar20 >= uVar28) * uVar20;
      uVar21 = (uVar21 < uVar29) * uVar29 | (uVar21 >= uVar29) * uVar21;
      uVar14 = (uVar14 < uVar18) * uVar18 | (uVar14 >= uVar18) * uVar14;
      uVar15 = (uVar15 < uVar19) * uVar19 | (uVar15 >= uVar19) * uVar15;
      uVar16 = (uVar16 < uVar20) * uVar20 | (uVar16 >= uVar20) * uVar16;
      uVar17 = (uVar17 < uVar21) * uVar21 | (uVar17 >= uVar21) * uVar17;
      uVar14 = (uVar14 < uVar16) * uVar16 | (uVar14 >= uVar16) * uVar14;
      uVar15 = (uVar15 < uVar17) * uVar17 | (uVar15 >= uVar17) * uVar15;
      uVar14 = (uVar14 < uVar15) * uVar15 | (uVar14 >= uVar15) * uVar14;
      if (param_2 <= uVar13) goto LAB_18059f55a;
    }
    puVar11 = (ushort *)(*(longlong *)(param_1 + 8) + uVar10 * 2);
    uVar10 = (ulonglong)(param_2 - (int)uVar10);
    do {
      uVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      uVar14 = uVar15;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_18059f55a:
  uVar9 = FUN_18057ad10(param_3,2,0,uVar14 + 1,0,local_res20);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar13 = param_2;
  if (local_res20[0] == 0) {
    while (uVar13 = uVar13 - 1, uVar13 < param_2) {
      *(short *)(*(longlong *)(param_1 + 0x10) +
                (ulonglong)*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar13 * 2) * 2) =
           (short)uVar13;
    }
    *(uint *)(param_1 + 0x18) = (uint)uVar14;
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  return local_res20[0];
}




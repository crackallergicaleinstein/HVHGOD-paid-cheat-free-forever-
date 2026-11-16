// FUN_1805d0b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d0b40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d0b40(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  short local_98 [2];
  undefined1 auStack_94 [92];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  iVar6 = *(int *)(param_1 + 0x18);
  uVar12 = *(uint *)(param_1 + 0x70) & 2;
  uVar13 = 0x80000000;
  if (uVar12 != 0) {
    uVar13 = 0x100;
  }
  uVar10 = 0;
  if (iVar6 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar7 = 0;
      iVar8 = *(int *)(param_1 + 0x10);
      piVar5 = *(int **)(*(longlong *)(param_1 + 0x40) +
                        (longlong)(iVar6 - *(int *)(param_1 + 0x18)) * 8);
      uVar11 = uVar10;
      if (piVar5 != *(int **)(param_1 + 0x38)) {
        do {
          uVar9 = uVar10;
          if ((iVar7 != 0) && (iVar8 < *piVar5)) {
            uVar2 = iVar7 >> 9;
            uVar4 = ~uVar2;
            if ((uVar13 & uVar2) == 0) {
              uVar4 = uVar2;
            }
            if ((0xff < (int)uVar4) && (uVar12 == 0)) {
              uVar4 = 0xff;
            }
            uVar2 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar2;
            uVar9 = uVar10 + 1;
            auStack_94[uVar10 * 6] = (char)uVar4;
            local_98[uVar10 * 3] = (short)iVar8;
            local_98[uVar10 * 3 + 1] = (short)*piVar5 - (short)iVar8;
            if (uVar2 == 0x10) {
              (**(code **)(param_1 + 0x88))(iVar6,0x10,local_98);
              uVar11 = 0;
              uVar9 = 0;
            }
          }
          iVar7 = iVar7 + piVar5[1] * 0x200;
          uVar10 = uVar9;
          if ((iVar7 - piVar5[2] != 0) && (*(int *)(param_1 + 0x10) <= *piVar5)) {
            uVar2 = iVar7 - piVar5[2] >> 9;
            uVar4 = ~uVar2;
            if ((uVar13 & uVar2) == 0) {
              uVar4 = uVar2;
            }
            if ((0xff < (int)uVar4) && (uVar12 == 0)) {
              uVar4 = 0xff;
            }
            uVar2 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar2;
            uVar10 = uVar9 + 1;
            auStack_94[uVar9 * 6] = (char)uVar4;
            local_98[uVar9 * 3] = (short)*piVar5;
            local_98[uVar9 * 3 + 1] = 1;
            if (uVar2 == 0x10) {
              (**(code **)(param_1 + 0x88))(iVar6,0x10,local_98);
              uVar11 = 0;
              uVar10 = 0;
            }
          }
          iVar8 = *piVar5;
          piVar5 = *(int **)(piVar5 + 4);
          iVar8 = iVar8 + 1;
        } while (piVar5 != *(int **)(param_1 + 0x38));
        if (iVar7 != 0) {
          uVar2 = iVar7 >> 9;
          uVar4 = ~uVar2;
          if ((uVar13 & uVar2) == 0) {
            uVar4 = uVar2;
          }
          if ((0xff < (int)uVar4) && (uVar12 == 0)) {
            uVar4 = 0xff;
          }
          lVar3 = (longlong)(int)uVar11;
          sVar1 = *(short *)(param_1 + 0x14);
          auStack_94[lVar3 * 6] = (char)uVar4;
          local_98[lVar3 * 3 + 1] = sVar1 - (short)iVar8;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          local_98[lVar3 * 3] = (short)iVar8;
        }
      }
      if ((int)uVar11 != 0) {
        (**(code **)(param_1 + 0x88))(iVar6,uVar11,local_98,*(undefined8 *)(param_1 + 0x90));
        uVar11 = 0;
      }
      iVar6 = iVar6 + 1;
      uVar10 = uVar11;
    } while (iVar6 < *(int *)(param_1 + 0x1c));
  }
}




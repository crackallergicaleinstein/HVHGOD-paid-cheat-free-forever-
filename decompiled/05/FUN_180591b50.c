// FUN_180591b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180591b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180591b50(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_58;
  uint local_54;
  int local_50;
  ushort local_4c;
  ushort local_4a;
  int local_48;
  ushort local_44;
  ushort local_42;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  lVar4 = *(longlong *)(param_1 + 0x408);
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  local_58 = (**(code **)(param_1 + 0x2a0))(param_1,0x67766172,lVar3,&local_54);
  if (local_58 != 0) {
  }
  iVar7 = FUN_1805780f0(lVar3);
  local_58 = FUN_180578280(lVar3,&DAT_18066f7f0,&local_50);
  if (local_58 != 0) {
  }
  if (local_50 != 0x10000) {
  }
  if (local_4c != **(ushort **)(lVar4 + 0x18)) {
  }
  if (local_54 >> 1 < (uint)local_4a * (uint)local_4c) {
  }
  if (local_54 < ((local_42 & 1) + 1) * (local_44 + 1) * 2) {
  }
  *(uint *)(lVar4 + 0x90) = local_54;
  local_58 = FUN_180577bf0(lVar3);
  if (local_58 != 0) {
  }
  local_60 = &local_58;
  lVar6 = *(longlong *)(lVar3 + 0x38);
  local_68 = 0;
  lVar8 = FUN_18057ac40(uVar5,4);
  *(longlong *)(lVar4 + 0x88) = lVar8;
  if (local_58 == 0) {
    if ((local_42 & 1) == 0) {
      uVar15 = 0;
      if ((longlong)(ulonglong)((uint)local_44 * 2) <=
          *(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38)) {
        uVar14 = 0;
        puVar10 = (undefined1 *)(lVar6 + -1);
        do {
          puVar1 = puVar10 + 1;
          puVar10 = puVar10 + 2;
          lVar6 = uVar14 * 4;
          *(uint *)(lVar6 + lVar8) = local_40 + iVar7 + (uint)CONCAT11(*puVar1,*puVar10) * 2;
          uVar13 = *(uint *)(*(longlong *)(lVar4 + 0x88) + lVar6);
          if (uVar13 < uVar15) {
            *(uint *)(*(longlong *)(lVar4 + 0x88) + lVar6) = uVar15;
          }
          else {
            uVar15 = uVar13;
          }
          lVar8 = *(longlong *)(lVar4 + 0x88);
          if (local_54 + iVar7 < *(uint *)(lVar8 + lVar6)) {
            *(uint *)(lVar8 + lVar6) = local_54 + iVar7;
            lVar8 = *(longlong *)(lVar4 + 0x88);
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 <= local_44);
        goto LAB_180591de1;
      }
    }
    else {
      uVar15 = 0;
      if ((longlong)((ulonglong)local_44 * 4) <=
          *(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38)) {
        uVar14 = 0;
        puVar10 = (undefined1 *)(lVar6 + -3);
        do {
          lVar6 = uVar14 * 4;
          *(int *)(lVar6 + lVar8) =
               CONCAT31(CONCAT21(CONCAT11(puVar10[3],puVar10[4]),puVar10[5]),puVar10[6]) +
               local_40 + iVar7;
          uVar13 = *(uint *)(*(longlong *)(lVar4 + 0x88) + lVar6);
          if (uVar13 < uVar15) {
            *(uint *)(*(longlong *)(lVar4 + 0x88) + lVar6) = uVar15;
          }
          else {
            uVar15 = uVar13;
          }
          lVar8 = *(longlong *)(lVar4 + 0x88);
          if (local_54 + iVar7 < *(uint *)(lVar8 + lVar6)) {
            *(uint *)(lVar8 + lVar6) = local_54 + iVar7;
            lVar8 = *(longlong *)(lVar4 + 0x88);
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          puVar10 = puVar10 + 4;
        } while (uVar13 <= local_44);
LAB_180591de1:
        *(uint *)(lVar4 + 0x80) = (uint)local_44;
        FUN_180577d30(lVar3);
        if (local_4a == 0) {
        }
        local_58 = FUN_1805788b0(lVar3,local_48 + iVar7);
        if ((local_58 != 0) ||
           (local_58 = FUN_180577bf0(lVar3,(uint)local_4a * (uint)local_4c * 2), local_58 != 0))
        goto LAB_180591f4e;
        pbVar12 = *(byte **)(lVar3 + 0x38);
        local_60 = &local_58;
        local_68 = 0;
        uVar9 = FUN_18057ac40(uVar5,4,0,(uint)local_4a * (uint)local_4c);
        *(undefined8 *)(lVar4 + 0x70) = uVar9;
        if (local_58 == 0) {
          uVar15 = 0;
          if (local_4a != 0) {
            do {
              uVar13 = 0;
              pbVar11 = pbVar12;
              if (local_4c != 0) {
                do {
                  pbVar12 = pbVar11 + 2;
                  uVar2 = uVar13 + local_4c * uVar15;
                  uVar13 = uVar13 + 1;
                  *(uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar2 * 4) =
                       ((int)(short)((ushort)*pbVar11 << 8) | (uint)pbVar11[1]) << 2;
                  pbVar11 = pbVar12;
                } while (uVar13 < local_4c);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_4a);
          }
          local_60 = &local_58;
          local_68 = 0;
          uVar9 = FUN_18057ad10(uVar5,4,0,local_4a);
          *(undefined8 *)(lVar4 + 0x78) = uVar9;
          if (local_58 == 0) {
            *(uint *)(lVar4 + 0x68) = (uint)local_4a;
            FUN_180577d30(lVar3);
          }
        }
        goto LAB_180591f46;
      }
    }
    local_58 = 8;
  }
  else {
LAB_180591f46:
    FUN_180577d30(lVar3);
  }
LAB_180591f4e:
  FUN_18057abd0(uVar5,*(undefined8 *)(lVar4 + 0x88));
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x80) = 0;
}




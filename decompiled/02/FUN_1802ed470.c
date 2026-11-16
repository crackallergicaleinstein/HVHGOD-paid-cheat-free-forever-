// FUN_1802ed470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ed470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ed470(byte *param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  sbyte sVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auStack_608 [32];
  uint *local_5e8;
  char local_5d8;
  int local_5d4;
  byte *local_5d0;
  uint *local_5c8;
  byte *local_5c0;
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  uint auStack_3e4 [115];
  uint local_218 [116];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_608;
  uVar10 = 0;
  uVar7 = *(uint *)(param_1 + 8);
  uVar12 = 0;
  if (0 < (int)*(uint *)(param_1 + 4)) {
    uVar12 = *(uint *)(param_1 + 4);
  }
  local_5b8 = 0;
  pbVar19 = param_1 + 0xc;
  uVar13 = uVar12;
  if (uVar7 < uVar12) {
    uVar13 = uVar7;
  }
  uVar11 = 0;
  pbVar20 = param_1 + (ulonglong)uVar13 + 0xc;
  local_5d0 = param_1 + (ulonglong)uVar7 + 0xc;
  uVar8 = 0;
  iVar6 = 0;
  local_5d4 = (int)local_5d0 - (int)pbVar20;
  local_5d8 = param_3;
  local_5c8 = param_2;
  local_5c0 = param_1;
  if (pbVar19 != pbVar20) {
    do {
      uVar7 = (uint)uVar8;
      if (iVar6 == 9) {
        if (uVar11 != 0) {
          uVar15 = 0;
          uVar16 = 0;
          do {
            uVar17 = (int)uVar16 + 1;
            uVar14 = uVar15 + (ulonglong)local_5b4[uVar16] * 1000000000;
            local_5b4[uVar16] = (uint)uVar14;
            uVar15 = uVar14 >> 0x20;
            uVar16 = (ulonglong)uVar17;
          } while (uVar17 != uVar11);
          uVar11 = (uint)(uVar14 >> 0x20);
          if (uVar11 == 0) {
            uVar11 = local_5b8;
          }
          else if (local_5b8 < 0x73) {
            local_5b4[local_5b8] = uVar11;
            local_5b8 = local_5b8 + 1;
            uVar11 = local_5b8;
          }
          else {
            local_5b8 = 0;
            uVar11 = 0;
          }
        }
        if (uVar7 != 0) {
          uVar16 = 0;
          uVar17 = 0;
          if (uVar11 != 0) {
            do {
              uVar11 = (int)uVar16 + 1;
              uVar15 = uVar8 + local_5b4[uVar16];
              local_5b4[uVar16] = (uint)uVar15;
              uVar8 = uVar15 >> 0x20;
              uVar7 = (uint)(uVar15 >> 0x20);
              uVar16 = (ulonglong)uVar11;
            } while (uVar11 != local_5b8);
            uVar11 = local_5b8;
            uVar17 = local_5b8;
            if (uVar7 == 0) goto LAB_1802ed5c3;
          }
          if (uVar17 < 0x73) {
            local_5b4[uVar17] = uVar7;
            uVar11 = local_5b8 + 1;
            local_5b8 = uVar11;
          }
          else {
            uVar11 = 0;
            local_5b8 = 0;
          }
        }
LAB_1802ed5c3:
        uVar7 = 0;
        iVar6 = 0;
      }
      bVar4 = *pbVar19;
      iVar6 = iVar6 + 1;
      pbVar19 = pbVar19 + 1;
      uVar7 = (uint)bVar4 + uVar7 * 10;
      uVar8 = (ulonglong)uVar7;
    } while (pbVar19 != pbVar20);
    if ((iVar6 != 0) && (FUN_1802ecc60(&local_5b8), uVar11 = local_5b8, uVar7 != 0)) {
      uVar16 = 0;
      if (local_5b8 != 0) {
        do {
          uVar17 = (int)uVar16 + 1;
          uVar7 = local_5b4[uVar16];
          local_5b4[uVar16] = (uint)(uVar8 + uVar7);
          uVar7 = (uint)(uVar8 + uVar7 >> 0x20);
          uVar8 = (ulonglong)uVar7;
          uVar16 = (ulonglong)uVar17;
        } while (uVar17 != local_5b8);
        if (uVar7 == 0) goto LAB_1802ed647;
      }
      if (local_5b8 < 0x73) {
        local_5b4[local_5b8] = uVar7;
        uVar11 = local_5b8 + 1;
        local_5b8 = uVar11;
      }
      else {
        uVar11 = 0;
        local_5b8 = 0;
      }
    }
  }
LAB_1802ed647:
  if (uVar12 - uVar13 != 0) {
    cVar3 = FUN_1802ecc60(&local_5b8,uVar12 - uVar13);
    if (cVar3 == '\0') {
      *param_2 = (uint)*param_1 << 0x1f | 0x7f800000;
    }
    uVar11 = local_5b8;
  }
  if (uVar11 == 0) {
    uVar7 = 0;
  }
  else {
    iVar6 = 0x1f;
    if (local_5b4[uVar11 - 1] != 0) {
      for (; local_5b4[uVar11 - 1] >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar7 = iVar6 + 1 + (uVar11 - 1) * 0x20;
  }
  if ((local_5d4 == 0) && (local_5d8 != '\0')) {
    bVar21 = true;
    bVar4 = 0;
  }
  else {
    bVar21 = false;
    bVar4 = 1;
  }
  if ((0x18 < uVar7) || (bVar21)) {
    if (uVar7 < 0x41) {
      uVar12 = 0x17;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = (ulonglong)local_5b4[0];
      }
      uVar7 = 0;
      if (1 < uVar11) {
        uVar7 = local_5b4[1];
      }
      lVar5 = ((ulonglong)uVar7 << 0x20) + uVar10;
      bVar21 = (bool)(bVar4 ^ 1);
    }
    else {
      uVar11 = uVar7 >> 5;
      uVar13 = uVar11 - 2;
      uVar12 = uVar13 * 0x20 + 0x17;
      uVar7 = uVar7 & 0x1f;
      if (uVar7 == 0) {
        lVar5 = CONCAT44(local_5b4[uVar11 - 1],local_5b4[uVar13]);
        bVar21 = (bool)(bVar4 ^ 1);
        if (bVar4 != 1) {
          do {
            if ((uint)uVar10 == uVar13) break;
            puVar1 = local_5b4 + uVar10;
            bVar21 = *puVar1 == 0;
            uVar10 = (ulonglong)((uint)uVar10 + 1);
          } while (*puVar1 == 0);
        }
      }
      else {
        uVar12 = uVar12 + uVar7;
        uVar17 = (1 << uVar7) - 1;
        lVar5 = ((ulonglong)local_5b4[uVar11 - 1] << ((ulonglong)(-uVar7 + 0x20) & 0x3f)) +
                ((ulonglong)(local_5b4[uVar11] & uVar17) << ((ulonglong)(-uVar7 + 0x40) & 0x3f)) +
                (ulonglong)((~uVar17 & local_5b4[uVar13]) >> uVar7);
        if ((bVar4 == 0) && ((uVar17 & local_5b4[uVar13]) == 0)) {
          bVar21 = true;
          do {
            if ((uint)uVar10 == uVar13) break;
            puVar1 = local_5b4 + uVar10;
            bVar21 = *puVar1 == 0;
            uVar10 = (ulonglong)((uint)uVar10 + 1);
          } while (*puVar1 == 0);
        }
        else {
          bVar21 = false;
        }
      }
    }
    bVar4 = *param_1;
    goto LAB_1802edb66;
  }
  uVar12 = 0;
  local_3e8 = 0;
  uVar10 = 0;
  iVar6 = 0;
  if (pbVar20 != local_5d0) {
    do {
      uVar13 = (uint)uVar10;
      if (iVar6 == 9) {
        if (uVar12 != 0) {
          uVar8 = 0;
          uVar17 = 0;
          do {
            uVar18 = uVar17 + 1;
            uVar16 = uVar8 + (ulonglong)auStack_3e4[uVar17] * 1000000000;
            auStack_3e4[uVar17] = (uint)uVar16;
            uVar8 = uVar16 >> 0x20;
            uVar17 = uVar18;
          } while (uVar18 != uVar12);
          uVar12 = (uint)(uVar16 >> 0x20);
          if (uVar12 == 0) {
            uVar12 = local_3e8;
          }
          else if (local_3e8 < 0x73) {
            auStack_3e4[local_3e8] = uVar12;
            local_3e8 = local_3e8 + 1;
            uVar12 = local_3e8;
          }
          else {
            local_3e8 = 0;
            uVar12 = 0;
          }
        }
        if (uVar13 != 0) {
          uVar18 = 0;
          uVar17 = 0;
          if (uVar12 != 0) {
            do {
              uVar12 = uVar18 + 1;
              uVar8 = uVar10 + auStack_3e4[uVar18];
              auStack_3e4[uVar18] = (uint)uVar8;
              uVar10 = uVar8 >> 0x20;
              uVar13 = (uint)(uVar8 >> 0x20);
              uVar18 = uVar12;
            } while (uVar12 != local_3e8);
            uVar12 = local_3e8;
            uVar17 = local_3e8;
            if (uVar13 == 0) goto LAB_1802ed7cf;
          }
          if (uVar17 < 0x73) {
            auStack_3e4[uVar17] = uVar13;
            uVar12 = local_3e8 + 1;
          }
          else {
            uVar12 = 0;
          }
          local_3e8 = uVar12;
        }
LAB_1802ed7cf:
        uVar13 = 0;
        iVar6 = 0;
      }
      bVar4 = *pbVar20;
      iVar6 = iVar6 + 1;
      pbVar20 = pbVar20 + 1;
      uVar13 = (uint)bVar4 + uVar13 * 10;
      uVar10 = (ulonglong)uVar13;
    } while (pbVar20 != local_5d0);
    if ((iVar6 != 0) && (FUN_1802ecc60(&local_3e8), uVar12 = local_3e8, uVar13 != 0)) {
      uVar8 = 0;
      if (local_3e8 != 0) {
        do {
          uVar17 = (int)uVar8 + 1;
          uVar13 = auStack_3e4[uVar8];
          auStack_3e4[uVar8] = (uint)(uVar13 + uVar10);
          uVar13 = (uint)(uVar13 + uVar10 >> 0x20);
          uVar10 = (ulonglong)uVar13;
          uVar8 = (ulonglong)uVar17;
        } while (uVar17 != local_3e8);
        if (uVar13 == 0) goto LAB_1802ed861;
      }
      if (local_3e8 < 0x73) {
        auStack_3e4[local_3e8] = uVar13;
        uVar12 = local_3e8 + 1;
      }
      else {
        uVar12 = 0;
      }
      local_3e8 = uVar12;
    }
  }
LAB_1802ed861:
  local_218[1] = 1;
  local_218[0] = 1;
  iVar6 = local_5d4 - *(int *)(param_1 + 4);
  if (-1 < *(int *)(param_1 + 4)) {
    iVar6 = local_5d4;
  }
  cVar3 = FUN_1802ecc60(local_218,iVar6);
  uVar13 = local_218[0];
  if (cVar3 == '\0') {
    *local_5c8 = (uint)*param_1 << 0x1f;
  }
  if (uVar12 == 0) {
    uVar17 = 0;
  }
  else {
    iVar6 = 0x1f;
    if (auStack_3e4[uVar12 - 1] != 0) {
      for (; auStack_3e4[uVar12 - 1] >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar17 = iVar6 + 1 + (uVar12 - 1) * 0x20;
  }
  if (local_218[0] == 0) {
    uVar18 = 0;
  }
  else {
    iVar6 = 0x1f;
    if (local_218[(ulonglong)(local_218[0] - 1) + 1] != 0) {
      for (; local_218[(ulonglong)(local_218[0] - 1) + 1] >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar18 = iVar6 + (local_218[0] - 1) * 0x20 + 1;
  }
  uVar9 = uVar18 - uVar17;
  if (uVar18 <= uVar17) {
    uVar9 = 0;
  }
  if (uVar9 != 0) {
    FUN_1802ecdc0(&local_3e8,uVar9);
    uVar12 = local_3e8;
  }
  uVar17 = 0x19 - uVar7;
  uVar10 = (ulonglong)uVar17;
  if (uVar7 != 0) {
    if (uVar17 < uVar9) {
      if ((local_5d4 == 0) && (local_5d8 != '\0')) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      uVar12 = 0x17;
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = (ulonglong)local_5b4[0];
      }
      uVar7 = 0;
      if (1 < uVar11) {
        uVar7 = local_5b4[1];
      }
      bVar21 = (bool)(bVar4 ^ 1);
      bVar4 = *local_5c0;
      lVar5 = ((ulonglong)uVar7 << 0x20) + uVar10;
      goto LAB_1802edb66;
    }
    uVar10 = (ulonglong)(uVar17 - uVar9);
  }
  bVar21 = uVar12 < uVar13;
  if (uVar12 == uVar13) {
    do {
      uVar12 = uVar12 - 1;
      if (uVar12 == 0xffffffff) goto LAB_1802ed9b2;
      bVar21 = auStack_3e4[uVar12] < local_218[(ulonglong)uVar12 + 1];
    } while (auStack_3e4[uVar12] == local_218[(ulonglong)uVar12 + 1]);
  }
  if (bVar21) {
    uVar9 = uVar9 + 1;
  }
LAB_1802ed9b2:
  FUN_1802ecdc0(&local_3e8,uVar10);
  uVar10 = FUN_1802ecf10(&local_3e8,local_218);
  if ((local_5d8 == '\0') || (local_3e8 != 0)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  lVar5 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  if ((uVar10 != 0) && (uVar12 = (int)lVar5 + 1, uVar17 < uVar12)) {
    uVar12 = uVar12 - uVar17;
    if ((bVar21 == false) ||
       (bVar4 = (byte)uVar12, sVar2 = (bVar4 < 0x41) * ('@' - bVar4),
       (uVar10 << sVar2) >> sVar2 != 0)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    uVar10 = uVar10 >> ((ulonglong)uVar12 & 0x3f);
  }
  uVar8 = 0;
  if (uVar11 != 0) {
    uVar8 = (ulonglong)local_5b4[0];
  }
  uVar13 = 0;
  if (1 < uVar11) {
    uVar13 = local_5b4[1];
  }
  uVar12 = uVar7 - 2;
  if (uVar7 == 0) {
    uVar12 = ~uVar9;
  }
  lVar5 = (((ulonglong)uVar13 << 0x20) + uVar8 << ((ulonglong)uVar17 & 0x3f)) + uVar10;
  bVar4 = *local_5c0;
LAB_1802edb66:
  local_5e8 = local_5c8;
  FUN_1802ed390(lVar5,uVar12,bVar4,bVar21);
}




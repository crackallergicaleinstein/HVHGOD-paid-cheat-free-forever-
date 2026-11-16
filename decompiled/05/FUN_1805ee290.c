// FUN_1805ee290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ee290 */

undefined1 *
FUN_1805ee290(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ushort *param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong local_58;
  longlong local_48;
  uint local_40;
  longlong *local_38;
  longlong *local_30;
  
  if (param_5[1] == 0) {
    puVar13 = param_5;
    puVar7 = (undefined1 *)FUN_1805edea0(&local_48,param_3,param_4);
    if (puVar7 < (undefined1 *)0xffffffffffffff89) {
      uVar2 = *puVar13;
      bVar9 = ~(byte)uVar2 & 0x3f;
      uVar14 = ((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >> bVar9;
      local_40 = local_40 + uVar2;
      FUN_1805e9920(&local_48);
      local_58 = ((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >> bVar9;
      local_40 = local_40 + uVar2;
      FUN_1805e9920(&local_48);
      puVar7 = param_1;
      while (iVar15 = (int)local_30, local_40 < 0x41) {
        if (local_38 < local_30 + 1) {
          if (local_38 == local_30) break;
          uVar8 = (ulonglong)(local_40 >> 3);
          if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
            uVar12 = (int)local_38 - iVar15;
            local_38 = (longlong *)((longlong)local_38 - (ulonglong)uVar12);
            local_48 = *local_38;
            local_40 = local_40 + uVar12 * -8;
            break;
          }
          local_40 = local_40 + (local_40 >> 3) * -8;
        }
        else {
          uVar8 = (ulonglong)(local_40 >> 3);
          local_40 = local_40 & 7;
        }
        local_38 = (longlong *)((longlong)local_38 - uVar8);
        local_48 = *local_38;
        if (param_1 + param_2 + -3 <= puVar7) break;
        uVar12 = *(uint *)(param_5 + uVar14 * 2 + 2);
        *puVar7 = (char)(uVar12 >> 0x10);
        uVar10 = *(uint *)(param_5 + local_58 * 2 + 2);
        iVar15 = local_40 + (uVar12 >> 0x18);
        puVar7[1] = (char)(uVar10 >> 0x10);
        bVar9 = (byte)iVar15;
        bVar6 = (byte)(uVar10 >> 0x18);
        uVar12 = *(uint *)(param_5 +
                          ((((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >>
                           (~(byte)(uVar12 >> 0x18) & 0x3f)) + (ulonglong)(uVar12 & 0xffff)) * 2 + 2
                          );
        puVar7[2] = (char)(uVar12 >> 0x10);
        uVar14 = (((ulonglong)(local_48 << (bVar9 + bVar6 & 0x3f)) >> 1) >>
                 (~(byte)(uVar12 >> 0x18) & 0x3f)) + (ulonglong)(uVar12 & 0xffff);
        iVar1 = (uVar12 >> 0x18) + (uVar10 >> 0x18);
        uVar12 = *(uint *)(param_5 +
                          ((((ulonglong)(local_48 << (bVar9 & 0x3f)) >> 1) >> (~bVar6 & 0x3f)) +
                          (ulonglong)(uVar10 & 0xffff)) * 2 + 2);
        puVar7[3] = (char)(uVar12 >> 0x10);
        local_58 = (((ulonglong)(local_48 << ((char)iVar1 + bVar9 & 0x3f)) >> 1) >>
                   (~(byte)(uVar12 >> 0x18) & 0x3f)) + (ulonglong)(uVar12 & 0xffff);
        puVar7 = puVar7 + 4;
        local_40 = iVar1 + iVar15 + (uVar12 >> 0x18);
      }
joined_r0x0001805ee80b:
      if (puVar7 <= param_1 + param_2 + -2) {
        uVar10 = *(uint *)(param_5 + uVar14 * 2 + 2);
        uVar12 = local_40 + (uVar10 >> 0x18);
        *puVar7 = (char)(uVar10 >> 0x10);
        uVar14 = (ulonglong)(uVar10 & 0xffff) +
                 (((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >>
                 (~(byte)(uVar10 >> 0x18) & 0x3f));
        puVar11 = puVar7 + 1;
        if (0x40 < uVar12) {
          *puVar11 = (char)param_5[local_58 * 2 + 3];
          return puVar11 + (1 - (longlong)param_1);
        }
        if (local_38 < local_30 + 1) {
          if (local_38 != local_30) {
            uVar10 = uVar12 >> 3;
            uVar8 = (ulonglong)uVar10;
            if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
              uVar10 = (int)local_38 - iVar15;
              uVar8 = (ulonglong)uVar10;
            }
            uVar12 = uVar12 + uVar10 * -8;
            goto LAB_1805ee89b;
          }
        }
        else {
          uVar8 = (ulonglong)(uVar12 >> 3);
          uVar12 = uVar12 & 7;
LAB_1805ee89b:
          local_38 = (longlong *)((longlong)local_38 - uVar8);
          local_48 = *local_38;
        }
        if (puVar11 <= param_1 + param_2 + -2) {
          uVar10 = *(uint *)(param_5 + local_58 * 2 + 2);
          local_40 = uVar12 + (uVar10 >> 0x18);
          *puVar11 = (char)(uVar10 >> 0x10);
          local_58 = (ulonglong)(uVar10 & 0xffff) +
                     (((ulonglong)(local_48 << ((byte)uVar12 & 0x3f)) >> 1) >>
                     (~(byte)(uVar10 >> 0x18) & 0x3f));
          puVar7 = puVar7 + 2;
          if (0x40 < local_40) {
            *puVar7 = (char)param_5[uVar14 * 2 + 3];
            return puVar7 + (1 - (longlong)param_1);
          }
          if (local_38 < local_30 + 1) goto LAB_1805ee8f7;
          uVar8 = (ulonglong)(local_40 >> 3);
          local_40 = local_40 & 7;
          goto LAB_1805ee929;
        }
      }
      goto LAB_1805ee968;
    }
  }
  else {
    puVar13 = param_5;
    puVar7 = (undefined1 *)FUN_1805edea0(&local_48,param_3,param_4);
    if (puVar7 < (undefined1 *)0xffffffffffffff89) {
      uVar2 = *puVar13;
      bVar9 = ~(byte)uVar2 & 0x3f;
      uVar14 = ((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >> bVar9;
      local_40 = local_40 + uVar2;
      FUN_1805e9920(&local_48);
      local_58 = ((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >> 1) >> bVar9;
      local_40 = local_40 + uVar2;
      FUN_1805e9920(&local_48);
      puVar7 = param_1;
      while (iVar15 = (int)local_30, local_40 < 0x41) {
        if (local_38 < local_30 + 1) {
          if (local_38 == local_30) break;
          uVar8 = (ulonglong)(local_40 >> 3);
          if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
            uVar12 = (int)local_38 - iVar15;
            local_38 = (longlong *)((longlong)local_38 - (ulonglong)uVar12);
            local_48 = *local_38;
            local_40 = local_40 + uVar12 * -8;
            break;
          }
          local_40 = local_40 + (local_40 >> 3) * -8;
        }
        else {
          uVar8 = (ulonglong)(local_40 >> 3);
          local_40 = local_40 & 7;
        }
        local_38 = (longlong *)((longlong)local_38 - uVar8);
        local_48 = *local_38;
        if (param_1 + param_2 + -3 <= puVar7) break;
        uVar12 = *(uint *)(param_5 + uVar14 * 2 + 2);
        *puVar7 = (char)(uVar12 >> 0x10);
        uVar10 = *(uint *)(param_5 + local_58 * 2 + 2);
        iVar15 = (uVar12 >> 0x18) + local_40;
        puVar7[1] = (char)(uVar10 >> 0x10);
        bVar9 = (byte)iVar15;
        cVar4 = (char)(uVar10 >> 0x18);
        uVar12 = *(uint *)(param_5 +
                          (((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >>
                           (-(char)(uVar12 >> 0x18) & 0x3fU)) + (ulonglong)(uVar12 & 0xffff)) * 2 +
                          2);
        cVar5 = (char)(uVar12 >> 0x18);
        puVar7[2] = (char)(uVar12 >> 0x10);
        uVar14 = ((ulonglong)(local_48 << (bVar9 + cVar4 & 0x3f)) >> (-cVar5 & 0x3fU)) +
                 (ulonglong)(uVar12 & 0xffff);
        uVar3 = *(uint *)(param_5 +
                         (((ulonglong)(local_48 << (bVar9 & 0x3f)) >> (-cVar4 & 0x3fU)) +
                         (ulonglong)(uVar10 & 0xffff)) * 2 + 2);
        local_58 = ((ulonglong)(local_48 << (bVar9 + cVar5 + cVar4 & 0x3f)) >>
                   (-(char)(uVar3 >> 0x18) & 0x3fU)) + (ulonglong)(uVar3 & 0xffff);
        puVar7[3] = (char)(uVar3 >> 0x10);
        puVar7 = puVar7 + 4;
        local_40 = iVar15 + (uVar3 >> 0x18) + (uVar12 >> 0x18) + (uVar10 >> 0x18);
      }
joined_r0x0001805ee4ba:
      if (puVar7 <= param_1 + param_2 + -2) {
        uVar10 = *(uint *)(param_5 + uVar14 * 2 + 2);
        *puVar7 = (char)(uVar10 >> 0x10);
        uVar12 = (uVar10 >> 0x18) + local_40;
        uVar14 = (ulonglong)(uVar10 & 0xffff) +
                 ((ulonglong)(local_48 << ((byte)local_40 & 0x3f)) >>
                 (-(char)(uVar10 >> 0x18) & 0x3fU));
        puVar11 = puVar7 + 1;
        if (0x40 < uVar12) {
          *puVar11 = (char)param_5[local_58 * 2 + 3];
          return puVar11 + (1 - (longlong)param_1);
        }
        if (local_38 < local_30 + 1) {
          if (local_38 != local_30) {
            uVar10 = uVar12 >> 3;
            uVar8 = (ulonglong)uVar10;
            if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
              uVar10 = (int)local_38 - iVar15;
              uVar8 = (ulonglong)uVar10;
            }
            uVar12 = uVar12 + uVar10 * -8;
            goto LAB_1805ee547;
          }
        }
        else {
          uVar8 = (ulonglong)(uVar12 >> 3);
          uVar12 = uVar12 & 7;
LAB_1805ee547:
          local_38 = (longlong *)((longlong)local_38 - uVar8);
          local_48 = *local_38;
        }
        if (puVar11 <= param_1 + param_2 + -2) {
          uVar10 = *(uint *)(param_5 + local_58 * 2 + 2);
          *puVar11 = (char)(uVar10 >> 0x10);
          puVar7 = puVar7 + 2;
          local_58 = (ulonglong)(uVar10 & 0xffff) +
                     ((ulonglong)(local_48 << ((byte)uVar12 & 0x3f)) >>
                     (-(char)(uVar10 >> 0x18) & 0x3fU));
          local_40 = (uVar10 >> 0x18) + uVar12;
          if (0x40 < local_40) {
            *puVar7 = (char)param_5[uVar14 * 2 + 3];
            return puVar7 + (1 - (longlong)param_1);
          }
          if (local_38 < local_30 + 1) goto LAB_1805ee5a2;
          uVar8 = (ulonglong)(local_40 >> 3);
          local_40 = local_40 & 7;
          goto LAB_1805ee5d6;
        }
      }
LAB_1805ee968:
      puVar7 = (undefined1 *)0xffffffffffffffba;
    }
  }
  return puVar7;
LAB_1805ee8f7:
  if (local_38 != local_30) {
    uVar12 = local_40 >> 3;
    uVar8 = (ulonglong)uVar12;
    if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
      uVar12 = (int)local_38 - iVar15;
      uVar8 = (ulonglong)uVar12;
    }
    local_40 = local_40 + uVar12 * -8;
LAB_1805ee929:
    local_38 = (longlong *)((longlong)local_38 - uVar8);
    local_48 = *local_38;
  }
  goto joined_r0x0001805ee80b;
LAB_1805ee5a2:
  if (local_38 != local_30) {
    uVar12 = local_40 >> 3;
    uVar8 = (ulonglong)uVar12;
    if ((longlong *)((longlong)local_38 - uVar8) < local_30) {
      uVar12 = (int)local_38 - iVar15;
      uVar8 = (ulonglong)uVar12;
    }
    local_40 = local_40 + uVar12 * -8;
LAB_1805ee5d6:
    local_38 = (longlong *)((longlong)local_38 - uVar8);
    local_48 = *local_38;
  }
  goto joined_r0x0001805ee4ba;
}




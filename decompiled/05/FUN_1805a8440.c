// FUN_1805a8440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a8440 */

int FUN_1805a8440(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined4 *local_res8;
  uint local_res18 [2];
  char local_res20;
  undefined8 in_stack_ffffffffffffff78;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  longlong local_40;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar10 = 0;
  local_res8 = (undefined4 *)((param_3 & 0xffffffff) * 0x10 + *(longlong *)(lVar2 + 0x228));
  local_40 = *(longlong *)(lVar2 + 0xa0);
  puVar13 = *(uint **)(lVar2 + 0x1f8);
  if (*(uint *)(lVar2 + 0x1f0) != 0) {
    do {
      if ((*puVar13 == (uint)*(ushort *)(param_2 + 0x18)) &&
         (puVar13[1] == (uint)*(ushort *)(param_2 + 0x1a))) {
        uVar10 = puVar13[2];
        iVar7 = (uVar10 & 1) + 5;
        if ((uVar10 & 2) == 0) {
          iVar7 = (uVar10 & 1) + 4;
        }
        local_res20 = param_4;
        iVar6 = FUN_1805788b0(local_40,*(int *)(lVar2 + 0x248) + puVar13[6]);
        lVar18 = local_40;
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = iVar7 + 1;
        if ((uVar10 & 4) == 0) {
          iVar6 = iVar7;
        }
        iVar7 = FUN_180577bf0(local_40,iVar6 * puVar13[7]);
        puVar5 = local_res8;
        if (iVar7 != 0) {
          return iVar7;
        }
        FUN_1805a7c70(*(undefined8 *)(lVar18 + 0x38),*(undefined8 *)(lVar18 + 0x40),puVar13[7],
                      puVar13 + 2,CONCAT44(uVar8,*local_res8),&local_48,local_res18);
        FUN_180577d30(lVar18);
        uVar10 = local_res18[0];
        if (local_res18[0] == 0) {
          return 6;
        }
        local_50 = 0;
        local_54 = 0;
        local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
        local_res18[0] = 0;
        local_58 = 0;
        uVar8 = puVar5[1];
        if (*(int *)(lVar2 + 0x18c) != *(int *)(lVar2 + 0x188)) {
          uVar8 = FUN_1805753e0(uVar8);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar8;
        iVar7 = FUN_1805753e0((ulonglong)*(ushort *)(param_2 + 0x18) << 8,puVar5[1],
                              *(undefined4 *)(lVar2 + 0x18c));
        local_4c = iVar7;
        iVar6 = FUN_1805788b0(lVar18,*(int *)(lVar2 + 0x110) + (int)local_48);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_180577bf0(lVar18,uVar10);
        if (iVar6 != 0) {
          return iVar6;
        }
        local_48 = *(byte **)(lVar18 + 0x38);
        iVar6 = FUN_1805a76f0(&local_48,*(undefined8 *)(lVar18 + 0x40),iVar7,&local_50,&local_54,
                              &local_res8,local_res18,&local_4c,&local_58);
        iVar7 = local_58;
        if (iVar6 != 0) goto LAB_1805a89ed;
        if (local_58 == 0) {
          if (uVar10 < local_res18[0] * (int)local_res8 + 7 >> 3) {
            iVar6 = 8;
            goto LAB_1805a89ed;
          }
        }
        else if (local_58 == 1) {
          if (uVar10 * 0xf < local_res18[0] * (int)local_res8) {
            iVar6 = 8;
            goto LAB_1805a89ed;
          }
        }
        else if ((local_58 != 2) || ((uVar10 + 1 >> 1) * 0xff < local_res18[0] * (int)local_res8)) {
          iVar6 = 8;
          goto LAB_1805a89ed;
        }
        if ((0x7fffffff < local_res18[0]) || ((int)(0x7fffffff - local_res18[0]) < local_54)) {
          iVar6 = 0x17;
          goto LAB_1805a89ed;
        }
        *(int *)(param_1 + 0x70) = (int)local_res8 + 7 >> 3;
        *(uint *)(param_1 + 0x34) = local_res18[0] << 6;
        *(int *)(param_1 + 0x38) = local_50 << 6;
        *(int *)(param_1 + 0x3c) = local_54 << 6;
        *(int *)(param_1 + 0x6c) = (int)local_res8;
        *(int *)(param_1 + 0x30) = (int)local_res8 * 0x40;
        *(uint *)(param_1 + 0x40) = (local_4c >> 2) + 0x20U & 0xffffffc0;
        *(undefined4 *)(param_1 + 0x60) = 0x62697473;
        *(uint *)(param_1 + 0x68) = local_res18[0];
        *(undefined1 *)(param_1 + 0x82) = 1;
        *(int *)(param_1 + 0x44) = (int)local_res8 * -0x40 >> 1;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
        *(uint *)(param_1 + 0x94) = local_res18[0] + local_54;
        *(int *)(param_1 + 0x90) = local_50;
        if (local_res20 != '\0') goto LAB_1805a89ed;
        iVar6 = FUN_180579c50(param_1);
        if (iVar6 != 0) goto LAB_1805a89ed;
        iVar6 = *(int *)(param_1 + 0x68);
        pbVar12 = *(byte **)(lVar18 + 0x40);
        if (iVar6 == 0) goto LAB_1805a89e4;
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) goto LAB_1805a89e4;
        puVar19 = *(undefined1 **)(param_1 + 0x78);
        local_res18[0] = *(uint *)(param_1 + 0x70);
        uVar10 = iVar6 * iVar1;
        if ((*(uint *)(lVar2 + 0x124) & 2) == 0) {
          puVar19 = puVar19 + (int)((iVar6 + -1) * local_res18[0]);
          local_res18[0] = -local_res18[0];
        }
        lVar18 = local_40;
        if (iVar7 != 0) {
          if (iVar7 == 1) {
            uVar17 = 0;
            uVar15 = 0;
            uVar11 = 0;
            uVar14 = 0x80;
            bVar4 = true;
            bVar3 = true;
            if (uVar10 == 0) goto LAB_1805a89e4;
            pbVar9 = local_48;
            puVar20 = puVar19;
            iVar7 = iVar1;
            goto LAB_1805a88c4;
          }
          if (iVar7 != 2) goto LAB_1805a89e4;
          uVar17 = 0;
          uVar11 = 0;
          uVar14 = 0x80;
          if (uVar10 == 0) goto LAB_1805a89e4;
          bVar4 = true;
          bVar3 = true;
          pbVar9 = local_48;
          puVar20 = puVar19;
          iVar7 = iVar1;
          goto LAB_1805a8820;
        }
        bVar16 = 0;
        uVar17 = 0;
        uVar11 = ((int)pbVar12 - (int)local_48) * 8;
        uVar14 = 0x80;
        if (uVar10 < uVar11) {
          uVar11 = uVar10;
        }
        uVar10 = uVar11 & 7;
        if (uVar11 == 0) goto LAB_1805a89e4;
        pbVar12 = local_48;
        puVar20 = puVar19;
        iVar7 = iVar1;
        goto LAB_1805a8980;
      }
      puVar13 = puVar13 + 10;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(lVar2 + 0x1f0));
  }
  return 6;
LAB_1805a8980:
  do {
    if ((uVar11 & 7) == uVar10) {
      bVar16 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    }
    if ((char)bVar16 < '\0') {
      uVar17 = uVar17 | uVar14;
    }
    bVar16 = bVar16 * '\x02';
    uVar14 = uVar14 >> 1;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      *puVar19 = (char)uVar17;
      puVar19 = puVar20 + (int)local_res18[0];
      puVar20 = puVar19;
      iVar7 = iVar1;
LAB_1805a89c2:
      uVar17 = 0;
      uVar14 = 0x80;
    }
    else if (uVar14 == 0) {
      *puVar19 = (char)uVar17;
      puVar19 = puVar19 + 1;
      goto LAB_1805a89c2;
    }
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (uVar14 != 0x80) {
    *puVar19 = (char)uVar17;
    iVar6 = 0;
    goto LAB_1805a89ed;
  }
  goto LAB_1805a89e4;
LAB_1805a88c4:
  do {
    if (bVar3) {
      do {
        if (bVar4) {
          if (pbVar12 <= pbVar9) goto LAB_1805a88f6;
          bVar16 = *pbVar9;
          bVar4 = false;
          pbVar9 = pbVar9 + 1;
          uVar15 = bVar16 & 0xf;
          uVar11 = (uint)(bVar16 >> 4);
        }
        else {
          bVar4 = true;
          uVar11 = uVar15;
        }
      } while (uVar11 == 0);
    }
    if (bVar4) {
LAB_1805a88f6:
      uVar17 = uVar17 | uVar14;
    }
    uVar14 = uVar14 >> 1;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      puVar21 = puVar20 + (int)local_res18[0];
      *puVar19 = (char)uVar17;
      puVar20 = puVar21;
      iVar7 = iVar1;
LAB_1805a8920:
      uVar17 = 0;
      uVar14 = 0x80;
      puVar19 = puVar21;
    }
    else if (uVar14 == 0) {
      *puVar19 = (char)uVar17;
      puVar21 = puVar19 + 1;
      goto LAB_1805a8920;
    }
    uVar11 = uVar11 - 1;
    bVar3 = (int)uVar11 < 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (uVar14 != 0x80) {
    *puVar19 = (char)uVar17;
    iVar6 = 0;
    goto LAB_1805a89ed;
  }
  goto LAB_1805a89e4;
LAB_1805a8820:
  do {
    if (bVar3) {
      do {
        if (pbVar12 <= pbVar9) break;
        bVar16 = *pbVar9;
        uVar11 = (uint)bVar16;
        bVar4 = (bool)(bVar4 ^ 1);
        pbVar9 = pbVar9 + 1;
      } while (bVar16 == 0);
    }
    if (bVar4) {
      uVar17 = uVar17 | uVar14;
    }
    uVar14 = uVar14 >> 1;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      *puVar19 = (char)uVar17;
      puVar19 = puVar20 + (int)local_res18[0];
      puVar20 = puVar19;
      iVar7 = iVar1;
LAB_1805a8869:
      uVar17 = 0;
      uVar14 = 0x80;
    }
    else if (uVar14 == 0) {
      *puVar19 = (char)uVar17;
      puVar19 = puVar19 + 1;
      goto LAB_1805a8869;
    }
    uVar11 = uVar11 - 1;
    bVar3 = (int)uVar11 < 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (uVar14 != 0x80) {
    *puVar19 = (char)uVar17;
    iVar6 = 0;
    goto LAB_1805a89ed;
  }
LAB_1805a89e4:
  iVar6 = 0;
LAB_1805a89ed:
  FUN_180577d30(lVar18);
  return iVar6;
}




// FUN_18059d4e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059d4e0 */

uint FUN_18059d4e0(undefined8 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  size_t sVar17;
  char *pcVar18;
  longlong *plVar19;
  uint uVar20;
  short sVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined4 *local_res10;
  uint local_res18;
  char local_68;
  char local_67;
  uint local_64;
  uint local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_68 = '\x01';
  local_67 = '\0';
  uVar24 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  local_res10 = param_2;
  local_res18 = param_3;
  lVar11 = FUN_180573a90(uVar24,&DAT_18066f8b4);
  if (lVar11 == 0) {
    return 0xb;
  }
  lVar12 = FUN_18057ae80(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  local_50 = FUN_180573a90(uVar24,"pshinter");
  lVar13 = FUN_180573a90(uVar24,"psaux");
  if (lVar13 == 0) {
    return 0xb;
  }
  *(longlong *)(param_2 + 0xbe) = lVar13;
  local_48 = (undefined4 *)FUN_18057ae80(*(undefined8 *)(param_2 + 0x24),"cff-load",1);
  local_64 = FUN_1805788b0(param_1,0);
  if (local_64 != 0) {
    return local_64;
  }
  local_64 = (**(code **)(lVar11 + 8))(param_1,param_2,local_res18,param_4,param_5);
  if (local_64 == 0) {
    if (param_2[0x3c] != 0x4f54544f) {
      return 2;
    }
    if ((int)local_res18 < 0) {
      return 0;
    }
    local_64 = (**(code **)(param_2 + 0xa8))(param_2,0x68656164,param_1,0);
    if (local_64 == 0) {
      local_68 = '\0';
      local_64 = (**(code **)(lVar11 + 0x10))(param_1,param_2,local_res18,param_4,param_5);
      bVar25 = local_64 == 0;
LAB_18059d655:
      if (!bVar25) {
        return local_64;
      }
    }
    else {
      local_64 = (**(code **)(lVar11 + 0x40))(param_2,param_1);
      if ((char)local_64 != -0x72) {
        bVar25 = (char)local_64 == '\0';
        goto LAB_18059d655;
      }
    }
    local_64 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,param_1,0);
    if (local_64 == 0) {
      local_67 = '\x01';
      *(undefined1 *)(param_2 + 0x100) = 1;
      local_60 = 0x819;
    }
    else {
      if ((char)local_64 != -0x72) {
        return local_64;
      }
      uVar20 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,param_1,0);
      local_67 = '\0';
      if (uVar20 != 0) {
        return uVar20;
      }
      local_60 = 0x819;
    }
  }
  else {
    uVar20 = FUN_1805788b0(param_1,0);
    if (uVar20 != 0) {
      return uVar20;
    }
    local_60 = 0x811;
  }
  local_64 = 0;
  local_58 = *(undefined8 *)(param_2 + 0x26);
  lVar11 = FUN_18057aad0(local_58,0x1138,&local_64);
  uVar20 = local_res18;
  if (local_64 != 0) {
    return local_64;
  }
  *(longlong *)(param_2 + 0xf8) = lVar11;
  local_64 = FUN_18059fff0(uVar24,param_1,local_res18,lVar11,param_2,local_68,local_67);
  if (local_64 != 0) {
    return local_64;
  }
  if ((int)uVar20 < 0) {
    *param_2 = *(undefined4 *)(lVar11 + 0x1c);
    return 0;
  }
  *(undefined8 *)(lVar11 + 0x10d0) = local_50;
  *(undefined4 **)(lVar11 + 0x10e0) = local_48;
  *(longlong *)(lVar11 + 0x10d8) = lVar12;
  param_2[1] = uVar20 & 0xffff;
  param_2[4] = *(undefined4 *)(lVar11 + 0x20);
  if ((*(int *)(lVar11 + 0x660) == 0xffff) && (lVar12 == 0)) {
    return 0xb;
  }
  uVar8 = 0;
  if (((param_2[2] & 0x100) != 0) && (uVar8 = FUN_1805d7560(param_2,uVar20 >> 0x10), uVar8 != 0)) {
    return uVar8;
  }
  local_64 = uVar8;
  if (*(char *)(lVar11 + 0x61c) == '\0') {
    uVar8 = 1000;
    if (local_68 == '\0') {
      uVar8 = (uint)*(ushort *)(param_2 + 0x1a);
    }
    *(uint *)(lVar11 + 0x620) = uVar8;
  }
  iVar22 = *(int *)(lVar11 + 0x618);
  if (iVar22 == 0) {
    iVar10 = *(int *)(lVar11 + 0x614);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
  }
  else {
    iVar10 = -iVar22;
    if (-iVar22 < 0) {
      iVar10 = iVar22;
    }
  }
  if (iVar10 != 0x10000) {
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x620),iVar10);
    *(undefined4 *)(lVar11 + 0x620) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x60c),iVar10);
    *(undefined4 *)(lVar11 + 0x60c) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x614),iVar10);
    *(undefined4 *)(lVar11 + 0x614) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x610),iVar10);
    *(undefined4 *)(lVar11 + 0x610) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x618),iVar10);
    *(undefined4 *)(lVar11 + 0x618) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x624),iVar10);
    *(undefined4 *)(lVar11 + 0x624) = uVar9;
    uVar9 = FUN_180573310(*(undefined4 *)(lVar11 + 0x628),iVar10);
    *(undefined4 *)(lVar11 + 0x628) = uVar9;
  }
  *(int *)(lVar11 + 0x624) = (int)*(short *)(lVar11 + 0x626);
  *(int *)(lVar11 + 0x628) = (int)*(short *)(lVar11 + 0x62a);
  iVar22 = *(int *)(lVar11 + 0x8a8);
  if (iVar22 != 0) {
    do {
      lVar12 = *(longlong *)(lVar11 + 0x8b0 + (ulonglong)(iVar22 - 1) * 8);
      if (*(char *)(lVar12 + 0x3c) == '\0') {
        uVar9 = *(undefined4 *)(lVar11 + 0x610);
        uVar6 = *(undefined4 *)(lVar11 + 0x614);
        uVar7 = *(undefined4 *)(lVar11 + 0x618);
        *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)(lVar11 + 0x60c);
        *(undefined4 *)(lVar12 + 0x30) = uVar9;
        *(undefined4 *)(lVar12 + 0x34) = uVar6;
        *(undefined4 *)(lVar12 + 0x38) = uVar7;
        *(undefined8 *)(lVar12 + 0x44) = *(undefined8 *)(lVar11 + 0x624);
        uVar9 = *(undefined4 *)(lVar11 + 0x620);
LAB_18059d95e:
        *(undefined4 *)(lVar12 + 0x40) = uVar9;
      }
      else if (*(char *)(lVar11 + 0x61c) != '\0') {
        uVar20 = *(uint *)(lVar11 + 0x620);
        if ((uVar20 < 2) || (uVar8 = *(uint *)(lVar12 + 0x40), uVar8 < 2)) {
          uVar8 = 1;
        }
        else if (uVar20 < uVar8) {
          uVar8 = uVar20;
        }
        FUN_1805752b0(lVar11 + 0x60c,lVar12 + 0x2c,uVar8);
        FUN_180578d70(lVar12 + 0x44,lVar11 + 0x60c,uVar8);
        uVar9 = FUN_1805753e0(*(undefined4 *)(lVar12 + 0x40),*(undefined4 *)(lVar11 + 0x620),uVar8);
        goto LAB_18059d95e;
      }
      iVar10 = *(int *)(lVar12 + 0x38);
      if (iVar10 == 0) {
        iVar23 = *(int *)(lVar12 + 0x34);
        if (iVar23 < 0) {
          iVar23 = -iVar23;
        }
      }
      else {
        iVar23 = -iVar10;
        if (-1 < iVar10) {
          iVar23 = iVar10;
        }
      }
      if (iVar23 != 0x10000) {
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x40),iVar23);
        *(undefined4 *)(lVar12 + 0x40) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x2c),iVar23);
        *(undefined4 *)(lVar12 + 0x2c) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x34),iVar23);
        *(undefined4 *)(lVar12 + 0x34) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x30),iVar23);
        *(undefined4 *)(lVar12 + 0x30) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x38),iVar23);
        *(undefined4 *)(lVar12 + 0x38) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x44),iVar23);
        *(undefined4 *)(lVar12 + 0x44) = uVar9;
        uVar9 = FUN_180573310(*(undefined4 *)(lVar12 + 0x48),iVar23);
        *(undefined4 *)(lVar12 + 0x48) = uVar9;
      }
      *(int *)(lVar12 + 0x44) = (int)*(short *)(lVar12 + 0x46);
      *(int *)(lVar12 + 0x48) = (int)*(short *)(lVar12 + 0x4a);
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    param_2 = local_res10;
    uVar20 = local_res18;
  }
  if (local_68 != '\0') {
    *param_2 = *(undefined4 *)(lVar11 + 0x1c);
    if (*(int *)(lVar11 + 0x660) == 0xffff) {
      iVar22 = *(int *)(lVar11 + 0x500);
    }
    else {
      iVar22 = *(int *)(lVar11 + 0x4e8) + 1;
    }
    param_2[4] = iVar22;
    param_2[0x16] = (int)*(short *)(lVar11 + 0x632);
    sVar3 = *(short *)(lVar11 + 0x636);
    param_2[0x17] = (int)sVar3;
    param_2[0x18] = *(int *)(lVar11 + 0x638) + 0xffff >> 0x10;
    iVar22 = *(int *)(lVar11 + 0x63c) + 0xffff;
    param_2[0x19] = iVar22 >> 0x10;
    uVar4 = *(ushort *)(lVar11 + 0x620);
    *(ushort *)(param_2 + 0x1a) = uVar4;
    sVar21 = (short)((uint)iVar22 >> 0x10);
    *(short *)((longlong)param_2 + 0x6a) = sVar21;
    *(short *)(param_2 + 0x1b) = sVar3;
    sVar5 = (short)(((uint)uVar4 * 0xc) / 10);
    *(short *)((longlong)param_2 + 0x6e) = sVar5;
    if ((int)sVar5 < (int)sVar21 - (int)sVar3) {
      *(short *)((longlong)param_2 + 0x6e) = sVar21 - sVar3;
    }
    *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(lVar11 + 0x600);
    *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(lVar11 + 0x602);
    if (*(int *)(lVar11 + 0x5f0) == 0) {
      uVar24 = local_58;
    }
    else {
      lVar12 = FUN_1805a0c60(lVar11);
      uVar24 = local_58;
      if (lVar12 != 0) {
        uVar14 = FUN_18057ade0(local_58,lVar12);
        *(undefined8 *)(param_2 + 6) = uVar14;
      }
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      pcVar15 = (char *)FUN_1805a09a0(lVar11,uVar20 & 0xffff);
      *(char **)(param_2 + 6) = pcVar15;
      if (pcVar15 != (char *)0x0) {
        uVar16 = 0;
        uVar20 = 0;
        if ('@' < *pcVar15) {
          while( true ) {
            iVar22 = (int)uVar16;
            if (((((('Z' < pcVar15[uVar16]) || (pcVar15[iVar22 + 1] < 'A')) ||
                  ('Z' < pcVar15[iVar22 + 1])) ||
                 (((pcVar15[iVar22 + 2] < 'A' || ('Z' < pcVar15[iVar22 + 2])) ||
                  ((pcVar15[iVar22 + 3] < 'A' ||
                   (('Z' < pcVar15[iVar22 + 3] || (pcVar15[iVar22 + 4] < 'A')))))))) ||
                ('Z' < pcVar15[iVar22 + 4])) ||
               ((pcVar15[iVar22 + 5] < 'A' || ('Z' < pcVar15[iVar22 + 5])))) break;
            uVar8 = iVar22 + 7;
            uVar16 = (ulonglong)uVar8;
            if ((pcVar15[iVar22 + 6] != '+') || (uVar20 = uVar8, pcVar15[uVar16] < 'A')) break;
          }
          if (uVar20 != 0) {
            sVar17 = strlen(pcVar15 + uVar20);
            FUN_18063aed0(pcVar15,pcVar15 + uVar20,sVar17 + 1);
          }
        }
      }
      if (*(longlong *)(param_2 + 6) != 0) goto LAB_18059dc02;
      lVar12 = FUN_1805a0c60(lVar11,*(undefined4 *)(lVar11 + 0x688));
      if (lVar12 != 0) {
        uVar14 = FUN_18057ade0(uVar24,lVar12,&local_res10);
        *(undefined8 *)(param_2 + 6) = uVar14;
      }
    }
    else {
LAB_18059dc02:
      pcVar18 = (char *)FUN_1805a0c60(lVar11,*(undefined4 *)(lVar11 + 0x5ec));
      pcVar15 = *(char **)(param_2 + 6);
      if ((pcVar18 != (char *)0x0) && (pcVar15 != (char *)0x0)) {
        cVar1 = *pcVar18;
        while (cVar1 != '\0') {
          cVar2 = *pcVar15;
          if (cVar1 == cVar2) {
            pcVar15 = pcVar15 + 1;
LAB_18059dc3d:
            pcVar18 = pcVar18 + 1;
          }
          else {
            if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_18059dc3d;
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if (((cVar2 == '\0') && (*pcVar18 != '\0')) &&
                 (lVar12 = FUN_18057ade0(uVar24,pcVar18,&local_res10), lVar12 != 0)) {
                FUN_1805a31e0(*(undefined8 *)(param_2 + 6),lVar12);
                goto LAB_18059dccf;
              }
              break;
            }
            pcVar15 = pcVar15 + 1;
          }
          cVar1 = *pcVar18;
        }
      }
    }
    lVar12 = FUN_18057ade0(uVar24,"Regular",&local_res10);
LAB_18059dccf:
    *(longlong *)(param_2 + 8) = lVar12;
    uVar20 = local_60 | 4;
    if (*(char *)(lVar11 + 0x5f8) == '\0') {
      uVar20 = local_60;
    }
    param_2[2] = param_2[2] | uVar20;
    uVar20 = (uint)(*(int *)(lVar11 + 0x5fc) != 0);
    pcVar15 = (char *)FUN_1805a0c60(lVar11,*(undefined4 *)(lVar11 + 0x5f4));
    if ((pcVar15 != (char *)0x0) &&
       ((iVar22 = strcmp(pcVar15,"Bold"), iVar22 == 0 ||
        (iVar22 = strcmp(pcVar15,"Black"), iVar22 == 0)))) {
      uVar20 = uVar20 | 2;
    }
    if ((((uVar20 & 2) == 0) && (*(char **)(param_2 + 8) != (char *)0x0)) &&
       ((iVar22 = strncmp(*(char **)(param_2 + 8),"Bold",4), iVar22 == 0 ||
        (iVar22 = strncmp(*(char **)(param_2 + 8),"Black",5), iVar22 == 0)))) {
      uVar20 = uVar20 | 2;
    }
    param_2[3] = uVar20;
  }
  if (*(int *)(lVar11 + 0x660) == 0xffff) {
    if (local_67 == '\0') {
      param_2[2] = param_2[2] | 0x200;
    }
    if (*(int *)(lVar11 + 0x660) == 0xffff) goto LAB_18059ddc3;
  }
  if (local_68 != '\0') {
    param_2[2] = param_2[2] | 0x1000;
  }
LAB_18059ddc3:
  iVar22 = param_2[0xe];
  iVar10 = 0;
  if (0 < iVar22) {
    plVar19 = *(longlong **)(param_2 + 0x10);
    do {
      sVar3 = *(short *)(*plVar19 + 0xc);
      if (sVar3 == 3) {
        bVar25 = *(short *)(*plVar19 + 0xe) == 1;
      }
      else {
        bVar25 = sVar3 == 0;
      }
      if (bVar25) goto LAB_18059de93;
      iVar10 = iVar10 + 1;
      plVar19 = plVar19 + 1;
    } while (iVar10 < iVar22);
  }
  if ((local_68 != '\0') && (*(int *)(lVar11 + 0x660) != 0xffff)) {
    return local_64;
  }
  local_3c = 0x10003;
  local_40 = 0x756e6963;
  local_48 = param_2;
  uVar20 = FUN_180573150(&DAT_180670940,0,&local_48,0);
  if (((uVar20 != 0) && ((uVar20 & 0xff) != 0xa3)) && ((uVar20 & 0xff) != 7)) {
    return uVar20;
  }
  local_64 = 0;
  if ((*(longlong *)(param_2 + 0x22) == 0) && (iVar22 != param_2[0xe])) {
    *(undefined8 *)(param_2 + 0x22) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar22 * 8);
  }
LAB_18059de93:
  if (*(int *)(lVar11 + 200) == 0) {
    return local_64;
  }
  if (*(int *)(lVar11 + 0xc4) == 0) {
    local_3c = 7;
    local_40 = 0x41444f42;
  }
  else if (*(int *)(lVar11 + 0xc4) == 1) {
    local_3c = 0x10007;
    local_40 = 0x41444245;
  }
  else {
    local_40 = 0x41444243;
    local_3c = 0x20007;
  }
  local_48 = param_2;
  uVar20 = FUN_180573150(&DAT_1806708f0,0,&local_48,0);
  return uVar20;
}




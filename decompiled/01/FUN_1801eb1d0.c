// FUN_1801eb1d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801eb1d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eb1d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  char *_Size;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *_Buf1;
  char **ppcVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  byte bVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  byte local_118;
  byte local_117;
  ulonglong local_110;
  uint local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  char *local_d8 [5];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  size_t local_78;
  longlong lStack_70;
  longlong local_68;
  undefined1 local_60 [16];
  char *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  if (param_2 != (undefined8 *)0x0) {
    param_2[2] = 0;
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar7 = 0;
  }
  local_f0 = param_3;
  local_e8 = param_2;
  if (param_3 != (longlong *)0x0) {
    lVar15 = param_3[1];
    lVar11 = *param_3;
    if (lVar11 != lVar15) {
      do {
        FUN_18015c010(lVar11);
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != lVar15);
      param_3[1] = *param_3;
    }
  }
  uVar17 = param_1[1];
  if (((uVar17 < 4) ||
      (uVar22 = *(uint *)*param_1 & 0xff, (*(uint *)*param_1 & 0xffffff00) != 0x4b563300)) ||
     (3 < uVar22 - 2)) {
    if (param_2 == (undefined8 *)0x0) {
    }
    uVar16 = 0x1e;
    pcVar9 = "Unsupported model DATA version";
    goto LAB_1801eb929;
  }
  if (uVar22 == 5) {
    uVar12 = 0x78;
  }
  else {
    uVar12 = 0x40;
    if (uVar22 == 4) {
      uVar12 = 0x48;
    }
  }
  if ((uVar17 < uVar12) || ((0x1b < uVar17 && (*(short *)(*param_1 + 0x18) != 0)))) {
    if (param_2 == (undefined8 *)0x0) {
    }
    uVar16 = 0x2d;
    pcVar9 = "Invalid DATA header or compression dictionary";
    goto LAB_1801eb929;
  }
  iVar6 = 0;
  if (0x17 < uVar17) {
    iVar6 = *(int *)(*param_1 + 0x14);
  }
  uVar14 = 0;
  if (uVar22 == 5) {
    if (0x4b < uVar17) {
      uVar14 = *(uint *)(*param_1 + 0x48);
    }
    uVar5 = 0;
    if (0x4f < uVar17) {
      uVar5 = *(uint *)(*param_1 + 0x4c);
    }
  }
  else {
    if (0x33 < uVar17) {
      uVar14 = *(uint *)(*param_1 + 0x30);
    }
    uVar5 = 0;
    if (0x37 < uVar17) {
      uVar5 = *(uint *)(*param_1 + 0x34);
    }
  }
  if (((uVar14 == 0) || (0x800000 < uVar14)) || (uVar17 - uVar12 < (ulonglong)uVar5)) {
    if (param_2 == (undefined8 *)0x0) {
    }
    uVar16 = 0x1a;
    pcVar9 = "Invalid DATA buffer bounds";
    goto LAB_1801eb929;
  }
  if ((iVar6 == 2) && (uVar22 < 5)) {
    uVar8 = 0;
    if (0x3f < uVar17) {
      uVar8 = (ulonglong)*(uint *)(*param_1 + 0x3c);
    }
    if ((uint)uVar8 < 0x800001) goto LAB_1801eb388;
  }
  else {
    uVar8 = 0;
LAB_1801eb388:
    local_110 = uVar8 + uVar14;
    if (local_110 < 0x1000001) {
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      if (local_110 != 0) {
        local_78 = FUN_18015bca0(local_110);
        local_110 = local_78 + local_110;
        local_68 = local_110;
        FUN_18063ab10(local_78,0);
        lStack_70 = local_110;
      }
      local_110 = lStack_70;
      if (iVar6 == 0) {
        if (param_1[1] - uVar12 < (ulonglong)uVar14) {
          if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
          uVar16 = 0x15;
          pcVar9 = "Truncated DATA buffer";
        }
        else {
          lVar15 = *param_1;
          FUN_18063aed0(local_78,uVar12 + lVar15);
LAB_1801eb4d7:
          uVar5 = 0;
          uVar17 = param_1[1];
          if (0x1f < uVar17) {
            uVar5 = *(uint *)(lVar15 + 0x1c);
          }
          if (uVar22 < 4) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if (0x43 < uVar17) {
              uVar12 = (ulonglong)*(uint *)(lVar15 + 0x40);
            }
          }
          uVar18 = 0;
          if (0x23 < uVar17) {
            uVar18 = *(uint *)(lVar15 + 0x20);
          }
          uVar19 = 0;
          if (0x27 < uVar17) {
            uVar19 = *(uint *)(lVar15 + 0x24);
          }
          uVar17 = (ulonglong)uVar5;
          if (uVar12 != 0) {
            uVar17 = (uVar17 + 1 & 0xfffffffffffffffe) + uVar12 * 2;
          }
          uVar17 = uVar17 + 3 & 0xfffffffffffffffc;
          if ((uVar18 == 0) || (lStack_70 - local_78 < uVar17 + 4)) {
            if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
            uVar16 = 0x1e;
            pcVar9 = "Invalid DATA string count lane";
          }
          else {
            uVar2 = *(uint *)(local_78 + uVar17);
            local_110 = CONCAT44(local_110._4_4_,uVar2);
            uVar17 = uVar17 + (ulonglong)uVar18 * 4;
            if ((uVar19 != 0) || (uVar22 < 5)) {
              uVar17 = (uVar17 + 7 & 0xfffffffffffffff8) + (ulonglong)uVar19 * 8;
            }
            uVar18 = uVar14;
            uVar12 = uVar17;
            if (uVar22 == 5) {
              uVar12 = 0;
              uVar18 = uVar5;
            }
            local_e0 = (ulonglong)uVar18;
            if (((uVar14 < uVar17) || (uVar14 < local_e0)) || (0x10000 < uVar2)) {
              if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
              uVar16 = 0x20;
              pcVar9 = "Invalid DATA string table bounds";
            }
            else {
              uVar22 = 0;
              local_118 = 0;
              local_d8[0] = "pelvis";
              local_d8[1] = (char *)0x6;
              local_d8[2] = "head_0";
              local_d8[3] = (char *)0x6;
              local_d8[4] = "leg_upper_l";
              local_b0 = 0xb;
              local_a8 = "leg_upper_r";
              local_a0 = 0xb;
              local_98 = "leg_lower_l";
              local_90 = 0xb;
              local_88 = "leg_lower_r";
              local_80 = 0xb;
              local_108 = 0;
              bVar21 = 0;
              uVar17 = uVar12;
              if (uVar2 != 0) {
joined_r0x0001801eb656:
                do {
                  plVar4 = local_f0;
                  if (uVar12 < local_e0) {
                    if (*(char *)(local_78 + uVar12) != '\0') {
                      uVar12 = uVar12 + 1;
                      goto joined_r0x0001801eb656;
                    }
                  }
                  else if (uVar12 == local_e0) {
                    if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
                    uVar16 = 0x1b;
                    pcVar9 = "Truncated DATA string table";
                    goto LAB_1801eb8d7;
                  }
                  _Buf1 = (longlong *)(local_78 + uVar17);
                  lVar15 = uVar12 - uVar17;
                  uVar12 = uVar12 + 1;
                  local_100 = _Buf1;
                  local_f8 = lVar15;
                  if (local_f0 != (longlong *)0x0) {
                    pauVar3 = (undefined1 (*) [16])local_f0[1];
                    if (pauVar3 == (undefined1 (*) [16])local_f0[2]) {
                      FUN_180152020(local_f0,pauVar3,&local_100);
                      _Buf1 = local_100;
                      lVar15 = local_f8;
                    }
                    else {
                      *pauVar3 = (undefined1  [16])0x0;
                      *(undefined8 *)pauVar3[1] = 0;
                      *(undefined8 *)(pauVar3[1] + 8) = 0;
                      FUN_18015ba30(pauVar3,_Buf1,lVar15);
                      plVar4[1] = plVar4[1] + 0x20;
                    }
                  }
                  if (lVar15 == 0xf) {
                    iVar6 = memcmp(_Buf1,"m_modelSkeleton",0xf);
                    bVar23 = iVar6 == 0;
                  }
                  else {
                    bVar23 = false;
                  }
                  local_117 = bVar21 | bVar23;
                  if (lVar15 == 10) {
                    lVar15 = *_Buf1 + -0x614e656e6f625f6d;
                    if (lVar15 == 0) {
                      lVar15 = (ulonglong)*(ushort *)(_Buf1 + 1) - 0x656d;
                    }
                    bVar23 = lVar15 == 0;
                  }
                  else {
                    bVar23 = false;
                  }
                  local_118 = local_118 | bVar23;
                  local_60 = (undefined1  [16])0x0;
                  local_50 = (char *)0x0;
                  local_48 = 0;
                  FUN_18015ba30(local_60,_Buf1);
                  pcVar9 = local_60;
                  if (0xf < local_48) {
                    pcVar9 = (char *)local_60._0_8_;
                  }
                  pcVar10 = pcVar9 + (longlong)local_50;
                  pcVar20 = (char *)local_60._0_8_;
                  if (pcVar9 != pcVar10) {
                    do {
                      cVar1 = *pcVar9;
                      if (('@' < cVar1) && (cVar1 < '[')) {
                        *pcVar9 = cVar1 + ' ';
                      }
                      pcVar9 = pcVar9 + 1;
                    } while (pcVar9 != pcVar10);
                    pcVar20 = (char *)local_60._0_8_;
                  }
                  uVar17 = local_48;
                  pcVar9 = local_50;
                  uVar14 = 0;
                  ppcVar13 = local_d8;
                  do {
                    pcVar10 = local_60;
                    if (0xf < uVar17) {
                      pcVar10 = pcVar20;
                    }
                    _Size = ppcVar13[1];
                    if ((_Size == pcVar9) &&
                       ((_Size == (char *)0x0 ||
                        (iVar6 = memcmp(*ppcVar13,pcVar10,(size_t)_Size), iVar6 == 0)))) {
                      uVar22 = uVar22 | 1 << (uVar14 & 0x1f);
                    }
                    param_2 = local_e8;
                    uVar14 = uVar14 + 1;
                    ppcVar13 = ppcVar13 + 2;
                  } while (uVar14 < 6);
                  FUN_18015c010(local_60);
                  local_108 = local_108 + 1;
                  bVar21 = local_117;
                  uVar17 = uVar12;
                } while (local_108 < (uint)local_110);
                if (((local_117 != 0) && (local_118 != 0)) && (uVar22 == 0x3f)) goto LAB_1801eb8e1;
              }
              if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
              uVar16 = 0x25;
              pcVar9 = "Not a full compatible player skeleton";
            }
          }
        }
      }
      else if (iVar6 == 1) {
        if (uVar5 != 0) {
          lVar15 = *param_1;
          uVar5 = FUN_1804207a0(uVar12 + lVar15,local_78,uVar5,uVar14);
          if (uVar5 == uVar14) goto LAB_1801eb4d7;
        }
        if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
        uVar16 = 0x17;
        pcVar9 = "Invalid LZ4 DATA buffer";
      }
      else if (iVar6 == 2) {
        if ((uVar5 == 0) || ((0x1b < (ulonglong)param_1[1] && (*(int *)(*param_1 + 0x18) != 0)))) {
          if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
          uVar16 = 0x17;
          pcVar9 = "Invalid Zstd DATA frame";
        }
        else {
          lVar15 = *param_1;
          lVar11 = FUN_1805dc2e0(local_78,lStack_70 - local_78,uVar12 + lVar15,uVar5);
          iVar6 = FUN_1805dd570(lVar11);
          if ((iVar6 == 0) && (lVar11 == lStack_70 - local_78)) goto LAB_1801eb4d7;
          if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
          uVar16 = 0x18;
          pcVar9 = "Invalid Zstd DATA buffer";
        }
      }
      else {
        if (param_2 == (undefined8 *)0x0) goto LAB_1801eb8e1;
        uVar16 = 0x1c;
        pcVar9 = "Unsupported DATA compression";
      }
LAB_1801eb8d7:
      FUN_180113930(param_2,pcVar9,uVar16);
LAB_1801eb8e1:
      FUN_180113710(&local_78);
    }
  }
  if (param_2 == (undefined8 *)0x0) {
  }
  uVar16 = 0x14;
  pcVar9 = "Oversized DATA blobs";
LAB_1801eb929:
  FUN_180113930(param_2,pcVar9,uVar16);
}




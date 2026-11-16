// FUN_18022e4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022e4c0 */

/* WARNING: Removing unreachable block (ram,0x00018022ea32) */

longlong FUN_18022e4c0(ulonglong param_1)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar16 [64];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong local_res8;
  undefined *local_res10;
  undefined *local_res18;
  char *local_158;
  longlong local_150;
  char *local_148;
  undefined1 *local_140;
  char *local_138;
  undefined8 local_130;
  uint local_128 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [80];
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    local_res8 = param_1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808eb5b0;
  lVar9 = DAT_1808da460;
  auVar15 = in_ZMM6._0_16_;
  local_res8 = DAT_180c63cf8;
  if ((DAT_1808eb5b0 != DAT_1808da460) || (uVar12 = DAT_180c63cf8, DAT_180c63cf8 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar8 == lVar9) && (UVar7 < DAT_180c63cf0)) {
      lVar9 = 0;
      goto LAB_18022e579;
    }
    local_res10 = &DAT_1808eb560;
    iVar14 = FUN_1805f68d0(&DAT_1808eb560);
    if (iVar14 != 0) {
LAB_18022ea53:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808eb5ac == 0x7fffffff) {
      DAT_1808eb5ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_res8 = DAT_180c63cf8;
    if (DAT_1808eb5b0 == lVar9) {
      if ((DAT_180c63cf8 == 0) && (DAT_180c63cf0 <= UVar7)) goto LAB_18022e66a;
    }
    else {
      DAT_1808eb550 = 1000;
LAB_18022e66a:
      lVar8 = -1;
      do {
        local_150 = lVar8 + 1;
        lVar11 = lVar8 + 1;
        lVar8 = local_150;
      } while ("client.dll:4883EC??E8????????4885C00F84????????488B10"[lVar11] != '\0');
      local_158 = "client.dll:4883EC??E8????????4885C00F84????????488B10";
      local_148 = "patterns::weapon_regenerate_skins";
      local_140 = (undefined1 *)0x21;
      local_res8 = FUN_1800e5d20(&local_148,&local_158);
      DAT_1808eb5b0 = lVar9;
      DAT_180c63cf0 = 0xffffffffffffffff;
      if (local_res8 == 0) {
        DAT_180c63cf0 = DAT_1808eb550 + UVar7;
        if (DAT_1808eb550 < 60000) {
          DAT_1808eb550 = DAT_1808eb550 * 2;
        }
        else {
          DAT_1808eb550 = 60000;
        }
      }
      else {
        DAT_1808eb550 = 1000;
      }
    }
    uVar12 = local_res8;
    DAT_180c63cf8 = local_res8;
    FUN_1805f68fc(&DAT_1808eb560);
    auVar15 = in_ZMM6._0_16_;
    lVar9 = 0;
    if (uVar12 == 0) goto LAB_18022e579;
  }
  iVar14 = 0;
  lVar9 = 0;
  auVar15 = vpcmpeqd_avx(auVar15,auVar15);
  auVar16 = ZEXT1664(auVar15);
  uVar17 = 0x8b00000048;
  uVar18 = 0xe8000000cb;
  uVar19 = 0xffffffffffffffff;
  uVar20 = 0xd200000033;
  uVar21 = 0xe800000001;
  uVar22 = 0xffffffffffffffff;
  uVar23 = 6;
  uVar24 = 0xb200000000;
  uVar25 = 0x8d00000048;
  uVar26 = 0x100000008b;
  for (; iVar14 < 0x149; iVar14 = iVar14 + 1) {
    local_res10 = (undefined *)((longlong)iVar14 + uVar12);
    local_a8 = auVar16._0_16_;
    local_148 = (char *)&local_f8;
    local_140 = local_98;
    local_f8 = uVar25;
    uStack_f0 = uVar26;
    local_e8 = uVar23;
    uStack_e0 = uVar24;
    local_d8 = uVar21;
    uStack_d0 = uVar22;
    local_c8 = uVar19;
    uStack_c0 = uVar20;
    local_b8 = uVar17;
    uStack_b0 = uVar18;
    cVar5 = FUN_1802197b0(local_res10,&local_148);
    if (cVar5 != '\0') {
      if (lVar9 != 0) {
        return 0;
      }
      if ((DAT_180cce330 & 1) == 0) {
        DAT_180cce330 = DAT_180cce330 | 1;
        atexit(FUN_180662340);
      }
      lVar8 = DAT_1808eb548;
      lVar9 = DAT_1808da460;
      if (DAT_1808eb548 == DAT_1808da460) {
        lVar11 = DAT_180c63ce8;
        if (DAT_180c63ce8 == 0) goto LAB_18022e82b;
      }
      else {
LAB_18022e82b:
        UVar7 = GetTickCount64();
        if ((lVar8 == lVar9) && (UVar7 < DAT_180c63ce0)) {
          lVar11 = 0;
        }
        else {
          local_res18 = &DAT_1808eb4f0;
          iVar6 = FUN_1805f68d0(&DAT_1808eb4f0);
          if (iVar6 != 0) goto LAB_18022ea53;
          if (DAT_1808eb53c == 0x7fffffff) {
            DAT_1808eb53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if (DAT_1808eb548 == lVar9) {
            if ((DAT_180c63ce8 == 0) && (DAT_180c63ce0 <= UVar7)) goto LAB_18022e8b5;
          }
          else {
            DAT_1808eb540 = 1000;
LAB_18022e8b5:
            lVar8 = -1;
            do {
              local_150 = lVar8 + 1;
              pcVar1 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9" +
                       lVar8;
              lVar8 = local_150;
            } while (*pcVar1 != '\0');
            local_158 = "client.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9";
            local_138 = "patterns::weapon_update_composite_material";
            local_130 = 0x2a;
            DAT_180c63ce8 = FUN_1800e5d20(&local_138,&local_158);
            DAT_1808eb548 = lVar9;
            DAT_180c63ce0 = 0xffffffffffffffff;
            if (DAT_180c63ce8 == 0) {
              DAT_180c63ce0 = DAT_1808eb540 + UVar7;
              if (DAT_1808eb540 < 60000) {
                DAT_1808eb540 = DAT_1808eb540 * 2;
              }
              else {
                DAT_1808eb540 = 60000;
              }
            }
            else {
              DAT_1808eb540 = 1000;
            }
          }
          lVar11 = DAT_180c63ce8;
          FUN_1805f68fc(&DAT_1808eb4f0);
        }
        uVar12 = local_res8;
      }
      puVar4 = local_res10;
      lVar9 = FUN_180219870(local_res10 + 9,1,5);
      if (lVar9 != lVar11) {
        return 0;
      }
      lVar9 = FUN_180219870(puVar4 + 0x13,1,5);
    }
  }
LAB_18022e579:
  local_128[0] = 0x40;
  local_128[1] = 0x55;
  local_128[2] = 0x56;
  local_128[3] = 0x41;
  local_128[4] = 0x57;
  local_128[5] = 0x48;
  local_128[6] = 0x8d;
  local_128[7] = 0x6c;
  local_128[8] = 0x24;
  local_128[9] = 0xb9;
  puVar10 = local_128;
  lVar8 = lVar9;
  bVar13 = (byte)local_res8;
  while( true ) {
    uVar2 = *puVar10;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    bVar3 = false;
    if (lVar8 != 0) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      cVar5 = FUN_1804514f0(&local_res8,lVar8,1);
      if (cVar5 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        bVar13 = (byte)local_res8;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    if ((!bVar3) || ((-1 < (int)uVar2 && (bVar13 != uVar2)))) break;
    puVar10 = puVar10 + 1;
    lVar8 = lVar8 + 1;
    if (puVar10 == local_128 + 10) {
      return lVar9;
    }
  }
  return 0;
}




// FUN_18033cc00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033cc00 */

void FUN_18033cc00(longlong param_1,longlong param_2,char param_3,float param_4,float param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  short sVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  uint *puVar8;
  ULONGLONG UVar9;
  undefined **ppuVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float local_res20 [2];
  undefined4 local_98 [2];
  undefined *local_90 [11];
  
  uVar15 = *(ulonglong *)(param_1 + 0x60);
  uVar6 = uVar15 & 0xfffffffffffff1e1;
  *(ulonglong *)(param_1 + 0x60) = uVar6;
  if (param_3 != '\0') {
    uVar6 = uVar6 | 4;
    *(ulonglong *)(param_1 + 0x60) = uVar6;
  }
  if (param_4 <= 0.001) {
    if (param_4 < -0.001) {
      uVar6 = uVar6 | 0x10;
      goto LAB_18033cc85;
    }
  }
  else {
    uVar6 = uVar6 | 8;
LAB_18033cc85:
    *(ulonglong *)(param_1 + 0x60) = uVar6;
  }
  if (param_5 <= 0.001) {
    if (param_5 < -0.001) {
      uVar6 = uVar6 | 0x400;
      goto LAB_18033ccaa;
    }
  }
  else {
    uVar6 = uVar6 | 0x200;
LAB_18033ccaa:
    *(ulonglong *)(param_1 + 0x60) = uVar6;
  }
  *(ulonglong *)(param_1 + 0x68) =
       *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar15 ^ (uint)uVar6) & 0xe1e);
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff1e1;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar12 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar12 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if (puVar12 == (uint *)0x0) {
    return;
  }
  local_90[0] = (undefined *)CONCAT44(local_90[0]._4_4_,0x3f800000);
  local_98[0] = 0xbf800000;
  ppuVar10 = (undefined **)local_98;
  if (-1.0 <= param_4) {
    ppuVar10 = (undefined **)local_res20;
  }
  ppuVar7 = local_90;
  if (param_4 <= 1.0) {
    ppuVar7 = ppuVar10;
  }
  fVar19 = *(float *)ppuVar7;
  local_98[0] = 0x3f800000;
  local_90[0] = (undefined *)CONCAT44(local_90[0]._4_4_,0xbf800000);
  ppuVar10 = local_90;
  if (-1.0 <= param_5) {
    ppuVar10 = (undefined **)&param_5;
  }
  ppuVar7 = (undefined **)local_98;
  if (param_5 <= 1.0) {
    ppuVar7 = ppuVar10;
  }
  fVar20 = *(float *)ppuVar7;
  puVar12[0x12] = (uint)fVar19;
  *puVar12 = *puVar12 | 0xc0;
  puVar12[0x13] = (uint)fVar20;
  puVar8 = (uint *)0x0;
  iVar13 = 0;
  auVar18 = ZEXT864(0);
  local_res20[0] = param_4;
  if ((int)puVar12[4] < 1) {
LAB_18033cdde:
    puVar8 = (uint *)FUN_1803dfb00(0xbf800000,puVar12 + 2);
    if (puVar8 == (uint *)0x0) goto LAB_18033cfce;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0;
    *puVar8 = *puVar8 | 7;
    puVar8[5] = 0;
  }
  else {
    lVar14 = 0;
    do {
      lVar2 = *(longlong *)(lVar14 + 8 + *(longlong *)(puVar12 + 6));
      puVar11 = (uint *)0x0;
      if (lVar2 != 0) {
        puVar11 = (uint *)(lVar2 + 0x10);
      }
      if (puVar11 != (uint *)0x0) {
        uVar15 = *(ulonglong *)(puVar11 + 2);
        *(ulonglong *)(puVar11 + 2) = uVar15 & 0xfffffffffffff1e1;
        puVar11[6] = 0;
        puVar11[7] = 0;
        *puVar11 = *puVar11 | 0x19;
        if (((puVar8 == (uint *)0x0) && ((uVar15 & 0xfffffffffffff1e1) == 0)) &&
           ((float)puVar11[5] <= 0.0)) {
          puVar8 = puVar11;
        }
      }
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 8;
    } while (iVar13 < (int)puVar12[4]);
    if (puVar8 == (uint *)0x0) goto LAB_18033cdde;
  }
  if (param_2 != 0) {
    uVar15 = 0xffffffffffffffff;
    iVar13 = DAT_180c6f728;
    if (DAT_180c6f728 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c6f720) {
        iVar13 = 0;
      }
      else {
        local_90[0] = &DAT_180900b00;
        iVar13 = FUN_1805f68d0(&DAT_180900b00);
        if (iVar13 != 0) goto LAB_18033d05a;
        if (DAT_180900b4c == 0x7fffffff) {
          DAT_180900b4c = 0x7ffffffe;
          goto LAB_18033d04f;
        }
        if ((DAT_180c6f728 == 0) && (DAT_180c6f720 <= UVar9)) {
          DAT_180c6f728 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
          if (DAT_180c6f728 == 0) {
            DAT_180c6f720 = UVar9 + 1000;
          }
          else {
            DAT_180c6f720 = 0xffffffffffffffff;
          }
        }
        iVar13 = DAT_180c6f728;
        FUN_1805f68fc(&DAT_180900b00);
      }
    }
    auVar16 = ZEXT464(*(uint *)(iVar13 + param_2));
    iVar13 = DAT_180c6f718;
    if (DAT_180c6f718 == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c6f710) {
        iVar13 = 0;
      }
      else {
        local_90[0] = &DAT_180900ab0;
        iVar13 = FUN_1805f68d0(&DAT_180900ab0);
        if (iVar13 != 0) {
LAB_18033d05a:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180900afc == 0x7fffffff) {
          DAT_180900afc = 0x7ffffffe;
LAB_18033d04f:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f718 == 0) && (DAT_180c6f710 <= UVar9)) {
          DAT_180c6f718 = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
          if (DAT_180c6f718 == 0) {
            uVar15 = UVar9 + 1000;
          }
          DAT_180c6f710 = uVar15;
        }
        iVar13 = DAT_180c6f718;
        FUN_1805f68fc(&DAT_180900ab0);
      }
    }
    auVar17 = ZEXT464(*(uint *)(iVar13 + param_2));
    sVar5 = thunk_FUN_180624430(auVar16._0_8_);
    auVar4 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(auVar16._0_16_,auVar18._0_16_,auVar4);
    auVar16 = ZEXT1664(auVar4);
    sVar5 = thunk_FUN_180624430(auVar17._0_8_);
    auVar4 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(auVar17._0_16_,auVar18._0_16_,auVar4);
    puVar8[6] = (uint)(fVar19 - auVar16._0_4_);
    *puVar8 = *puVar8 | 0x18;
    puVar8[7] = (uint)(fVar20 - auVar4._0_4_);
  }
LAB_18033cfce:
  puVar8 = (uint *)0x0;
  if (*(longlong *)(puVar12 + 10) != 0) {
    puVar8 = (uint *)(*(longlong *)(puVar12 + 10) + 0x10);
  }
  if (puVar8 != (uint *)0x0) {
    *puVar12 = *puVar12 | 2;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *puVar8 = *puVar8 | 1;
    uVar1 = *puVar8;
    *(undefined8 *)(puVar8 + 2) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *puVar8 = uVar1 | 2;
    *(undefined8 *)(puVar8 + 4) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar8 = uVar1 | 6;
    *(undefined8 *)(puVar8 + 6) = uVar3;
  }
  return;
}




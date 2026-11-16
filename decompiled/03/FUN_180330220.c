// FUN_180330220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180330220 */

void FUN_180330220(uint *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  short sVar4;
  uint *puVar5;
  ULONGLONG UVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  FUN_18030b2f0();
  fVar17 = *param_3;
  *param_1 = *param_1 | 0x40;
  param_1[0x12] = (uint)fVar17;
  fVar17 = param_3[1];
  *param_1 = *param_1 | 0x80;
  param_1[0x13] = (uint)fVar17;
  puVar5 = (uint *)0x0;
  auVar15 = ZEXT864(0);
  if ((int)param_1[4] < 1) {
LAB_1803302f3:
    if ((param_1 != (uint *)0xfffffffffffffff8) &&
       (puVar5 = (uint *)FUN_1803dfb00(), puVar5 != (uint *)0x0)) {
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      *puVar5 = *puVar5 | 0x67;
    }
  }
  else {
    plVar10 = *(longlong **)(param_1 + 6);
    uVar11 = (ulonglong)param_1[4];
    do {
      plVar10 = plVar10 + 1;
      puVar7 = (uint *)0x0;
      if (*plVar10 != 0) {
        puVar7 = (uint *)(*plVar10 + 0x10);
      }
      if ((((puVar7 != (uint *)0x0) && (puVar5 == (uint *)0x0)) && (*(longlong *)(puVar7 + 2) == 0))
         && ((float)puVar7[5] <= 0.0)) {
        puVar5 = puVar7;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (puVar5 == (uint *)0x0) goto LAB_1803302f3;
  }
  fVar16 = auVar15._0_4_;
  fVar17 = fVar16;
  if (param_2 != 0) {
    uVar11 = 0xffffffffffffffff;
    iVar9 = DAT_180c6f390;
    if (DAT_180c6f390 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f388) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_1805f68d0(&DAT_1808ff8d0);
        if (iVar9 != 0) goto LAB_180330610;
        if (DAT_1808ff91c == 0x7fffffff) {
          DAT_1808ff91c = 0x7ffffffe;
          goto LAB_180330605;
        }
        if ((DAT_180c6f390 == 0) && (DAT_180c6f388 <= UVar6)) {
          DAT_180c6f390 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
          if (DAT_180c6f390 == 0) {
            DAT_180c6f388 = UVar6 + 1000;
          }
          else {
            DAT_180c6f388 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6f390;
        FUN_1805f68fc(&DAT_1808ff8d0);
      }
    }
    auVar18 = ZEXT464(*(uint *)(iVar9 + param_2));
    iVar9 = DAT_180c6f380;
    if (DAT_180c6f380 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f398) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_1805f68d0(&DAT_1808ff920);
        if (iVar9 != 0) {
LAB_180330610:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff96c == 0x7fffffff) {
          DAT_1808ff96c = 0x7ffffffe;
LAB_180330605:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f380 == 0) && (DAT_180c6f398 <= UVar6)) {
          DAT_180c6f380 = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
          if (DAT_180c6f380 == 0) {
            uVar11 = UVar6 + 1000;
          }
          DAT_180c6f398 = uVar11;
        }
        iVar9 = DAT_180c6f380;
        FUN_1805f68fc(&DAT_1808ff920);
      }
    }
    auVar13 = ZEXT464(*(uint *)(iVar9 + param_2));
    sVar4 = thunk_FUN_180624430(auVar18._0_8_);
    auVar3 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar4),SUB6416(ZEXT464(0),0));
    auVar3 = vblendvps_avx(auVar18._0_16_,auVar15._0_16_,auVar3);
    auVar18 = ZEXT1664(auVar3);
    sVar4 = thunk_FUN_180624430(auVar13._0_8_);
    fVar17 = auVar13._0_4_;
    fVar16 = auVar18._0_4_;
    if (0 < sVar4) {
      fVar17 = auVar15._0_4_;
    }
  }
  if (puVar5 != (uint *)0x0) {
    fVar14 = *param_3;
    *puVar5 = *puVar5 | 8;
    puVar5[6] = (uint)(fVar14 - fVar16);
    fVar16 = param_3[1];
    *puVar5 = *puVar5 | 0x10;
    puVar5[7] = (uint)(fVar16 - fVar17);
  }
  fVar17 = *param_3;
  fVar16 = param_3[1];
  iVar9 = 1;
  uVar12 = 0x7fffffff;
  fVar14 = 0.0001;
  fVar19 = 0.125;
  do {
    pfVar8 = param_3 + 2;
    if ((fVar14 <= (float)((uint)(*pfVar8 - fVar17) & uVar12)) ||
       (fVar14 <= (float)((uint)(param_3[3] - fVar16) & uVar12))) {
      if (param_1 == (uint *)0xfffffffffffffff8) {
        return;
      }
      puVar5 = (uint *)FUN_1803dfb00();
      if (puVar5 == (uint *)0x0) {
        return;
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[5] = (uint)((float)iVar9 * fVar19);
      puVar5[8] = 0;
      puVar5[9] = 0;
      *puVar5 = *puVar5 | 0x67;
      uVar2 = *puVar5;
      fVar1 = *pfVar8;
      *puVar5 = uVar2 | 8;
      puVar5[6] = (uint)(fVar1 - fVar17);
      fVar17 = param_3[3];
      *puVar5 = uVar2 | 0x18;
      puVar5[7] = (uint)(fVar17 - fVar16);
      fVar17 = *pfVar8;
      fVar16 = param_3[3];
    }
    iVar9 = iVar9 + 1;
    param_3 = pfVar8;
    if (7 < iVar9) {
      return;
    }
  } while( true );
}




// FUN_18034c990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034c990 */

void FUN_18034c990(uint *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  short sVar5;
  ULONGLONG UVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar12 = 0;
  uVar14 = param_1[4];
  if (0 < (int)uVar14) {
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar10 + 8 + *(longlong *)(param_1 + 6));
      puVar8 = (uint *)0x0;
      if (lVar3 != 0) {
        puVar8 = (uint *)(lVar3 + 0x10);
      }
      if (puVar8 != (uint *)0x0) {
        *(ulonglong *)(puVar8 + 2) = *(ulonglong *)(puVar8 + 2) & 0xfffffffffffff1e1;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *puVar8 = *puVar8 | 0x19;
      }
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 8;
      uVar14 = param_1[4];
    } while (iVar12 < (int)uVar14);
  }
  uVar13 = (ulonglong)uVar14;
  fVar19 = *param_3;
  *param_1 = *param_1 | 0x40;
  param_1[0x12] = (uint)fVar19;
  fVar19 = param_3[1];
  *param_1 = *param_1 | 0x80;
  param_1[0x13] = (uint)fVar19;
  puVar8 = (uint *)0x0;
  auVar15 = ZEXT864(0);
  if ((int)uVar14 < 1) {
LAB_18034ca99:
    if ((param_1 != (uint *)0xfffffffffffffff8) &&
       (puVar8 = (uint *)FUN_1803dfb00(), puVar8 != (uint *)0x0)) {
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      *puVar8 = *puVar8 | 0x67;
    }
  }
  else {
    plVar11 = *(longlong **)(param_1 + 6);
    do {
      plVar11 = plVar11 + 1;
      puVar7 = (uint *)0x0;
      if (*plVar11 != 0) {
        puVar7 = (uint *)(*plVar11 + 0x10);
      }
      if ((((puVar7 != (uint *)0x0) && (puVar8 == (uint *)0x0)) && (*(longlong *)(puVar7 + 2) == 0))
         && ((float)puVar7[5] <= 0.0)) {
        puVar8 = puVar7;
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (puVar8 == (uint *)0x0) goto LAB_18034ca99;
  }
  fVar18 = auVar15._0_4_;
  fVar19 = fVar18;
  if (param_2 != 0) {
    uVar13 = 0xffffffffffffffff;
    iVar12 = DAT_180c6f64c;
    if (DAT_180c6f64c == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f638) {
        iVar12 = 0;
      }
      else {
        iVar12 = FUN_1805f68d0(&DAT_1809005a0);
        if (iVar12 != 0) goto LAB_18034cdc0;
        if (DAT_1809005ec == 0x7fffffff) {
          DAT_1809005ec = 0x7ffffffe;
          goto LAB_18034cdb5;
        }
        if ((DAT_180c6f64c == 0) && (DAT_180c6f638 <= UVar6)) {
          DAT_180c6f64c = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
          if (DAT_180c6f64c == 0) {
            DAT_180c6f638 = UVar6 + 1000;
          }
          else {
            DAT_180c6f638 = 0xffffffffffffffff;
          }
        }
        iVar12 = DAT_180c6f64c;
        FUN_1805f68fc(&DAT_1809005a0);
      }
    }
    auVar20 = ZEXT464(*(uint *)(iVar12 + param_2));
    iVar12 = DAT_180c6f630;
    if (DAT_180c6f630 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6f628) {
        iVar12 = 0;
      }
      else {
        iVar12 = FUN_1805f68d0(&DAT_180900640);
        if (iVar12 != 0) {
LAB_18034cdc0:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_18090068c == 0x7fffffff) {
          DAT_18090068c = 0x7ffffffe;
LAB_18034cdb5:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f630 == 0) && (DAT_180c6f628 <= UVar6)) {
          DAT_180c6f630 = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
          if (DAT_180c6f630 == 0) {
            uVar13 = UVar6 + 1000;
          }
          DAT_180c6f628 = uVar13;
        }
        iVar12 = DAT_180c6f630;
        FUN_1805f68fc(&DAT_180900640);
      }
    }
    auVar17 = ZEXT464(*(uint *)(iVar12 + param_2));
    sVar5 = thunk_FUN_180624430(auVar20._0_8_);
    auVar4 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(auVar20._0_16_,auVar15._0_16_,auVar4);
    auVar20 = ZEXT1664(auVar4);
    sVar5 = thunk_FUN_180624430(auVar17._0_8_);
    fVar19 = auVar17._0_4_;
    fVar18 = auVar20._0_4_;
    if (0 < sVar5) {
      fVar19 = auVar15._0_4_;
    }
  }
  if (puVar8 != (uint *)0x0) {
    fVar16 = *param_3;
    *puVar8 = *puVar8 | 8;
    puVar8[6] = (uint)(fVar16 - fVar18);
    fVar18 = param_3[1];
    *puVar8 = *puVar8 | 0x10;
    puVar8[7] = (uint)(fVar18 - fVar19);
  }
  fVar19 = *param_3;
  fVar18 = param_3[1];
  iVar12 = 1;
  uVar14 = 0x7fffffff;
  fVar16 = 0.0001;
  fVar21 = 0.125;
  do {
    pfVar9 = param_3 + 2;
    if ((fVar16 <= (float)((uint)(*pfVar9 - fVar19) & uVar14)) ||
       (fVar16 <= (float)((uint)(param_3[3] - fVar18) & uVar14))) {
      if (param_1 == (uint *)0xfffffffffffffff8) {
        return;
      }
      puVar8 = (uint *)FUN_1803dfb00();
      if (puVar8 == (uint *)0x0) {
        return;
      }
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = (uint)((float)iVar12 * fVar21);
      puVar8[8] = 0;
      puVar8[9] = 0;
      *puVar8 = *puVar8 | 0x67;
      uVar2 = *puVar8;
      fVar1 = *pfVar9;
      *puVar8 = uVar2 | 8;
      puVar8[6] = (uint)(fVar1 - fVar19);
      fVar19 = param_3[3];
      *puVar8 = uVar2 | 0x18;
      puVar8[7] = (uint)(fVar19 - fVar18);
      fVar19 = *pfVar9;
      fVar18 = param_3[3];
    }
    iVar12 = iVar12 + 1;
    param_3 = pfVar9;
    if (7 < iVar12) {
      return;
    }
  } while( true );
}




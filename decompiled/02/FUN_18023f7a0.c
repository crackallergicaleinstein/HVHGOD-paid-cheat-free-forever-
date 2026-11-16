// FUN_18023f7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023f7a0 */

void FUN_18023f7a0(longlong param_1,undefined8 param_2,float *param_3,longlong param_4,char param_5,
                  longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  int *piVar10;
  undefined **ppuVar11;
  int *piVar12;
  undefined **ppuVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  int local_88 [2];
  undefined *local_80;
  undefined *local_78;
  int local_70 [18];
  
  iVar7 = DAT_180c640b8;
  if (DAT_180c640b8 == 0) {
    UVar8 = GetTickCount64();
    if (DAT_180c640b0 <= UVar8) {
      local_78 = &DAT_1808ecac0;
      iVar7 = FUN_1805f68d0(&DAT_1808ecac0);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ecb0c == 0x7fffffff) {
        DAT_1808ecb0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c640b8 == 0) && (DAT_180c640b0 <= UVar8)) {
        DAT_180c640b8 = FUN_1804174b0("C_CSPlayerPawn",0xfe518c17);
        if (DAT_180c640b8 == 0) {
          DAT_180c640b0 = UVar8 + 1000;
        }
        else {
          DAT_180c640b0 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c640b8;
      FUN_1805f68fc(&DAT_1808ecac0);
      if (iVar7 != 0) goto LAB_18023f88b;
    }
    iVar15 = 0;
  }
  else {
LAB_18023f88b:
    lVar14 = *(longlong *)(param_6 + 8) + (longlong)iVar7;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar4 = false;
    if (lVar14 != 0) {
      local_88[0] = 0;
      cVar5 = FUN_1804514f0(local_88,lVar14,4);
      if (cVar5 == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    iVar7 = local_88[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    iVar15 = 0;
    if (bVar4) {
      iVar15 = iVar7;
    }
  }
  local_70[1] = 10;
  local_70[0] = 1;
  iVar7 = *(int *)(param_4 + 0x1a0);
  piVar12 = local_70;
  if (0 < iVar7) {
    piVar12 = (int *)(param_4 + 0x1a0);
  }
  piVar10 = local_70 + 1;
  if (iVar7 < 0xb) {
    piVar10 = piVar12;
  }
  if (*piVar10 <= iVar15) {
    fVar18 = *param_3;
    sVar6 = thunk_FUN_180624430(fVar18);
    if (sVar6 < 1) {
      fVar17 = param_3[1];
      sVar6 = thunk_FUN_180624430(fVar17);
      if ((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(param_3[2]), sVar6 < 1)) {
        local_88[1] = 0x96;
        local_88[0] = 0;
        iVar7 = *(int *)(param_4 + 0x180);
        fVar16 = (float)FUN_18023fb40(param_1,*(undefined4 *)(param_4 + 0x184),
                                      *(undefined4 *)(param_4 + 0x188));
        piVar12 = local_88;
        if (-1 < iVar7) {
          piVar12 = (int *)(param_4 + 0x180);
        }
        piVar10 = local_88 + 1;
        if (iVar7 < 0x97) {
          piVar10 = piVar12;
        }
        fVar16 = fVar16 * ((float)*piVar10 / 100.0);
        local_88[0] = 0x96;
        local_88[1] = 0;
        iVar7 = *(int *)(param_4 + 0x194);
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x96);
        local_80._0_4_ = 0;
        iVar15 = *(int *)(param_4 + 0x198);
        piVar12 = local_88 + 1;
        if (-1 < iVar7) {
          piVar12 = (int *)(param_4 + 0x194);
        }
        piVar10 = local_88;
        if (iVar7 < 0x97) {
          piVar10 = piVar12;
        }
        fVar18 = ((float)*piVar10 / 100.0) * fVar18 * fVar16;
        auVar19 = ZEXT416((uint)fVar18);
        ppuVar13 = (undefined **)(local_88 + 2);
        if (-1 < iVar15) {
          ppuVar13 = (undefined **)(param_4 + 0x198);
        }
        ppuVar11 = &local_78;
        if (iVar15 < 0x97) {
          ppuVar11 = ppuVar13;
        }
        fVar16 = ((float)*(int *)ppuVar11 / 100.0) * fVar16 * fVar17;
        auVar21 = ZEXT416((uint)fVar16);
        fVar17 = 0.0;
        if (param_5 != '\0') {
          local_80._0_4_ = 0x1e;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
          iVar7 = *(int *)(param_4 + 0x19c);
          ppuVar13 = &local_78;
          if (0 < iVar7) {
            ppuVar13 = (undefined **)(param_4 + 0x19c);
          }
          ppuVar11 = (undefined **)(local_88 + 2);
          if (iVar7 < 0x1f) {
            ppuVar11 = ppuVar13;
          }
          fVar17 = (float)*(int *)ppuVar11;
          fVar1 = *(float *)(param_1 + 0x40);
          fVar2 = *(float *)(param_1 + 0x44);
          fVar18 = (fVar18 - fVar1) / fVar17 + fVar1;
          auVar20 = ZEXT464((uint)fVar18);
          fVar16 = (fVar16 - fVar2) / fVar17 + fVar2;
          auVar22 = ZEXT464((uint)fVar16);
          fVar3 = 0.0 - *(float *)(param_1 + 0x48);
          fVar17 = fVar3 / fVar17 + *(float *)(param_1 + 0x48);
          FUN_1803e1070(fVar3,fVar1 - fVar18,fVar2 - fVar16);
          auVar21 = auVar22._0_16_;
          auVar19 = auVar20._0_16_;
        }
        auVar19 = vunpcklps_avx(auVar19,auVar21);
        *(longlong *)(param_1 + 0x40) = auVar19._0_8_;
        *(float *)(param_1 + 0x48) = fVar17;
        return;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




// FUN_1804d6040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d6040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1804d6040(int *param_1,float *param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *******pppppppuVar5;
  short sVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  int *piVar9;
  int iVar10;
  undefined8 *******pppppppuVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auStack_348 [32];
  float local_328;
  float *local_318;
  int local_310;
  float *local_300;
  int *local_2f8;
  longlong local_2f0;
  undefined8 *******local_2e8 [2];
  float local_2d8 [132];
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_348;
  pppppppuVar11 = (undefined8 *******)0x0;
  local_2e8[0] = (undefined8 *******)0x0;
  puVar16 = (undefined8 *)0x0;
  pppppppuVar15 = (undefined8 *******)0x0;
  iVar7 = 0;
  iVar14 = 0;
  local_2f8 = param_1;
  if (*param_1 < 0x41) {
    local_318 = local_2d8;
  }
  else {
    local_318 = (float *)FUN_1804b8110((longlong)(*param_1 * 2 + 1) << 2);
  }
  local_2f0 = (longlong)*param_1;
  auVar23 = ZEXT464(0x3f800000);
  local_300 = local_318 + local_2f0;
  param_2[(longlong)param_3 * 5 + 1] = (float)(param_1[1] + param_6) + 1.0;
  lVar2 = DAT_180bb8ae8;
  local_310 = param_6;
  pfVar12 = local_318;
  if (0 < param_1[1]) {
    uVar24 = 0x7fffffff;
    fVar25 = 255.0;
    fVar26 = 0.5;
    auVar27 = ZEXT464(0xbf800000);
    auVar21 = ZEXT864(0);
    do {
      pppppppuVar8 = local_2e8;
      fVar20 = (float)local_310 + auVar21._0_4_;
      fVar22 = (float)local_310 + auVar23._0_4_;
      FUN_18063ab10(local_318,0,(longlong)*param_1 << 2);
      FUN_18063ab10(local_300,0,(longlong)(*param_1 + 1) << 2);
      if (pppppppuVar11 != (undefined8 *******)0x0) {
        do {
          if (fVar20 < *(float *)((longlong)pppppppuVar11 + 0x1c)) {
            pppppppuVar8 = pppppppuVar11;
          }
          else {
            *pppppppuVar8 = *pppppppuVar11;
            *pppppppuVar11 = pppppppuVar15;
            *(undefined4 *)((longlong)pppppppuVar11 + 0x14) = 0;
            pppppppuVar15 = pppppppuVar11;
          }
          pppppppuVar11 = (undefined8 *******)*pppppppuVar8;
        } while (pppppppuVar11 != (undefined8 *******)0x0);
        pppppppuVar11 = local_2e8[0];
      }
      fVar19 = param_2[1];
      if (fVar19 <= fVar22) {
        do {
          if (fVar19 != param_2[3]) {
            puVar4 = puVar16;
            if (pppppppuVar15 == (undefined8 *******)0x0) {
              if (iVar7 == 0) {
                puVar4 = (undefined8 *)FUN_1804b8110(0x6408);
                if (puVar4 == (undefined8 *)0x0) goto LAB_1804d6320;
                *puVar4 = puVar16;
                iVar7 = 800;
              }
              iVar7 = iVar7 + -1;
              fVar19 = (param_2[2] - *param_2) / (param_2[3] - param_2[1]);
              pppppppuVar8 = (undefined8 *******)(puVar4 + (longlong)iVar7 * 4 + 1);
              puVar16 = puVar4;
              if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_1804d6320;
            }
            else {
              fVar19 = (param_2[2] - *param_2) / (param_2[3] - param_2[1]);
              pppppppuVar8 = pppppppuVar15;
              pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
            }
            fVar17 = auVar21._0_4_;
            *(float *)((longlong)pppppppuVar8 + 0xc) = fVar19;
            if (fVar19 != fVar17) {
              fVar17 = auVar23._0_4_ / fVar19;
            }
            *(float *)(pppppppuVar8 + 2) = fVar17;
            *(float *)(pppppppuVar8 + 1) =
                 ((fVar20 - param_2[1]) * fVar19 + *param_2) - (float)param_5;
            auVar1 = vpcmpeqd_avx(ZEXT416((uint)param_2[4]),SUB6416(ZEXT464(0),0));
            auVar1 = vblendvps_avx(auVar23._0_16_,auVar27._0_16_,auVar1);
            *(int *)((longlong)pppppppuVar8 + 0x14) = auVar1._0_4_;
            *(float *)(pppppppuVar8 + 3) = param_2[1];
            fVar19 = param_2[3];
            *(float *)((longlong)pppppppuVar8 + 0x1c) = fVar19;
            if (((iVar14 == 0) && (param_6 != 0)) && (fVar19 < fVar20)) {
              *(float *)((longlong)pppppppuVar8 + 0x1c) = fVar20;
            }
            *pppppppuVar8 = pppppppuVar11;
            local_2e8[0] = pppppppuVar8;
            pppppppuVar11 = pppppppuVar8;
            puVar16 = puVar4;
          }
LAB_1804d6320:
          fVar19 = param_2[6];
          param_2 = param_2 + 5;
        } while (fVar19 <= fVar22);
        param_1 = local_2f8;
      }
      pfVar12 = local_318;
      if (pppppppuVar11 != (undefined8 *******)0x0) {
        local_328 = fVar20;
        FUN_1804d5a60(local_318,local_300 + 1,*param_1,pppppppuVar11);
      }
      iVar13 = 0;
      auVar18 = ZEXT1664(auVar21._0_16_);
      if (0 < *param_1) {
        do {
          fVar22 = auVar18._0_4_ + pfVar12[local_2f0];
          auVar18 = ZEXT464((uint)fVar22);
          fVar20 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          iVar10 = (int)((float)((uint)(fVar22 + fVar20) & uVar24) * fVar25 + fVar26);
          if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          iVar3 = iVar14 * param_1[2] + iVar13;
          iVar13 = iVar13 + 1;
          *(char *)((longlong)iVar3 + *(longlong *)(param_1 + 4)) = (char)iVar10;
        } while (iVar13 < *param_1);
        pfVar12 = local_318;
      }
      pppppppuVar8 = local_2e8;
      if (pppppppuVar11 != (undefined8 *******)0x0) {
        pppppppuVar5 = pppppppuVar11;
        do {
          *(float *)(pppppppuVar5 + 1) =
               *(float *)((longlong)pppppppuVar5 + 0xc) + *(float *)(pppppppuVar5 + 1);
          pppppppuVar8 = (undefined8 *******)*pppppppuVar8;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
        } while (pppppppuVar5 != (undefined8 *******)0x0);
      }
      iVar14 = iVar14 + 1;
      local_310 = local_310 + 1;
      lVar2 = DAT_180bb8ae8;
    } while (iVar14 < param_1[1]);
  }
  while (DAT_180bb8ae8 = lVar2, puVar16 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar16;
    if (lVar2 != 0) {
      piVar9 = (int *)(lVar2 + 0x2998 + (longlong)*(short *)(lVar2 + 0x2994) * 8);
      if (*piVar9 != *(int *)(lVar2 + 4)) {
        iVar7 = *(short *)(lVar2 + 0x2994) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar6;
        piVar9 = (int *)(lVar2 + 0x2998 + (longlong)sVar6 * 8);
        *piVar9 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x299c + (longlong)sVar6 * 8) = 0;
      }
      *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    thunk_FUN_180621380(puVar16);
    lVar2 = DAT_180bb8ae8;
    puVar16 = puVar4;
  }
  if (pfVar12 != local_2d8) {
    if ((pfVar12 != (float *)0x0) && (lVar2 != 0)) {
      piVar9 = (int *)(lVar2 + 0x2998 + (longlong)*(short *)(lVar2 + 0x2994) * 8);
      if (*piVar9 != *(int *)(lVar2 + 4)) {
        iVar7 = *(short *)(lVar2 + 0x2994) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar6;
        piVar9 = (int *)(lVar2 + ((longlong)sVar6 + 0x533) * 8);
        *piVar9 = *(int *)(lVar2 + 4);
        piVar9[1] = 0;
      }
      *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    thunk_FUN_180621380(pfVar12);
  }
}




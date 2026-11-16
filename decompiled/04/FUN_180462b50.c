// FUN_180462b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180462b50 */

void FUN_180462b50(longlong param_1,float *param_2,float *param_3,float param_4,float param_5,
                  uint param_6)

{
  short sVar1;
  undefined4 uVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float local_108 [5];
  float local_f4;
  float local_f0;
  float local_ec;
  
  fVar6 = DAT_180b0a41c * 2.0;
  fVar23 = 255.0;
  local_108[1] = param_3[1] - param_4;
  local_f4 = param_4 + param_2[1];
  fVar22 = (float)(param_6 >> 0x18) / 255.0;
  local_108[0] = *param_3 - param_4;
  local_108[2] = param_4 + *param_2;
  uVar25 = **(undefined4 **)(param_1 + 0x38);
  uVar26 = (*(undefined4 **)(param_1 + 0x38))[1];
  fVar18 = param_4;
  fVar20 = -fVar6;
  fVar17 = fVar22;
  local_108[3] = local_108[1];
  local_108[4] = local_108[2];
  local_f0 = local_108[0];
  local_ec = local_f4;
  FUN_1804d9590(local_108[2],0xe70,0x294);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  iVar12 = 0;
  fVar24 = 0.5;
  fVar27 = 10.0;
  fVar28 = 3.1415927;
  iVar13 = 0;
  do {
    fVar20 = ((float)iVar13 * (param_5 - fVar20)) / 14.0 + fVar20;
    fVar16 = fVar20 / param_5;
    if (0.0 <= fVar16) {
      auVar5 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar16));
      fVar16 = auVar5._0_4_;
    }
    else {
      fVar16 = 0.0;
    }
    fVar17 = (1.0 - fVar16) * fVar17 * (1.0 - fVar16);
    if (0.0 <= fVar17) {
      auVar5 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar17));
      fVar17 = auVar5._0_4_;
    }
    else {
      fVar17 = 0.0;
    }
    fVar17 = fVar17 * fVar23 + fVar24;
    pfVar15 = local_108;
    iVar14 = 0;
    auVar5 = vmaxss_avx(ZEXT416((uint)(fVar20 + fVar18)),ZEXT416(0));
    auVar21 = ZEXT1664(auVar5);
    do {
      fVar20 = *pfVar15;
      fVar18 = pfVar15[1];
      fVar23 = (float)iVar14;
      iVar9 = 0;
      do {
        pfVar3 = *(float **)(param_1 + 0x40);
        fVar16 = ((float)iVar9 / fVar27 + fVar23) * fVar28 * fVar24;
        auVar19 = ZEXT464((uint)fVar16);
        fVar16 = (float)FUN_180637540(fVar16);
        *pfVar3 = fVar16 * auVar21._0_4_ + fVar20;
        fVar16 = (float)FUN_180638e00(auVar19._0_8_);
        pfVar3[1] = fVar16 * auVar21._0_4_ + fVar18;
        lVar4 = *(longlong *)(param_1 + 0x40);
        iVar9 = iVar9 + 1;
        *(undefined4 *)(lVar4 + 8) = uVar25;
        *(undefined4 *)(lVar4 + 0xc) = uVar26;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) =
             (int)(longlong)fVar17 << 0x18 | param_6 & 0xffffff;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      } while (iVar9 < 0xb);
      iVar14 = iVar14 + 1;
      pfVar15 = pfVar15 + 2;
    } while (iVar14 < 4);
    fVar23 = 255.0;
    iVar13 = iVar13 + 1;
    fVar18 = param_4;
    fVar20 = -fVar6;
    fVar17 = fVar22;
  } while (iVar13 < 0xf);
  do {
    sVar7 = (short)iVar12 * 0x2c;
    sVar8 = (short)uVar2;
    iVar13 = 2;
    do {
      sVar11 = (short)iVar13 + -2 + sVar7 + sVar8;
      **(short **)(param_1 + 0x48) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 0x2c;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      sVar10 = (short)(iVar13 + -1) + (short)((iVar13 + -1) / 0x2c) * -0x2c + sVar7 + sVar8;
      sVar1 = sVar10 + 0x2c;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 0x2d;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      sVar10 = (short)iVar13 + (short)(iVar13 / 0x2c) * -0x2c + sVar7 + sVar8;
      sVar1 = sVar10 + 0x2c;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 2;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 0x2e;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      sVar10 = (short)(iVar13 + 1) + (short)((iVar13 + 1) / 0x2c) * -0x2c + sVar7 + sVar8;
      sVar1 = sVar10 + 0x2c;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 2;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar10;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 0x2f;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      sVar10 = (short)(iVar13 + 2) + (short)((iVar13 + 2) / 0x2c) * -0x2c + sVar7 + sVar8;
      sVar1 = sVar10 + 0x2c;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar11 + 3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      **(short **)(param_1 + 0x48) = sVar10;
      iVar14 = iVar13 + 2;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
      iVar13 = iVar13 + 4;
    } while (iVar14 < 0x2c);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0xe);
  return;
}




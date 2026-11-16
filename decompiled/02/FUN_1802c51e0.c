// FUN_1802c51e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c51e0 */

void FUN_1802c51e0(undefined8 *param_1,float param_2,undefined8 param_3,float param_4,uint param_5,
                  char param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_ZMM2 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined4 uVar16;
  undefined1 auVar17 [64];
  undefined4 uVar18;
  undefined1 auVar19 [64];
  undefined4 local_b0;
  
  iVar2 = *(int *)*param_1;
  auVar19 = ZEXT1664(in_ZMM2._0_16_);
  if (0 < iVar2) {
    auVar17 = ZEXT464(param_5);
    uVar8 = 0;
    do {
      fVar12 = ((float)(int)uVar8 * 6.2831855) / (float)iVar2;
      auVar13 = ZEXT464((uint)fVar12);
      uVar1 = uVar8 + 1;
      fVar9 = (float)(int)uVar1 * 6.2831855;
      auVar14 = ZEXT464((uint)(fVar9 / (float)iVar2));
      fVar9 = (float)FUN_180637540(fVar12,(float)(int)uVar1,fVar9);
      auVar15 = ZEXT464((uint)(fVar9 * param_2));
      fVar12 = (float)FUN_180638e00(auVar13._0_8_);
      auVar13 = ZEXT464((uint)(fVar12 * param_2));
      fVar10 = (float)FUN_180637540(auVar14._0_8_);
      fVar11 = (float)FUN_180638e00(auVar14._0_8_);
      lVar7 = param_1[2];
      uVar3 = *(ulonglong *)(lVar7 + 0xcd88);
      uVar16 = auVar17._0_4_;
      uVar18 = auVar19._0_4_;
      if (uVar3 < 0x360) {
        *(ulonglong *)(lVar7 + 0xcd88) = uVar3 + 1;
        *(int *)(lVar7 + 0x5400 + uVar3 * 0x24) = auVar15._0_4_;
        *(int *)(lVar7 + 0x5404 + uVar3 * 0x24) = auVar13._0_4_;
        *(undefined4 *)(lVar7 + 0x5408 + uVar3 * 0x24) = uVar18;
        *(float *)(lVar7 + 0x540c + uVar3 * 0x24) = fVar10 * param_2;
        *(float *)(lVar7 + 0x5410 + uVar3 * 0x24) = fVar11 * param_2;
        *(undefined4 *)(lVar7 + 0x5414 + uVar3 * 0x24) = uVar18;
        *(float *)(lVar7 + 0x5418 + uVar3 * 0x24) = fVar10 * param_4;
        *(float *)(lVar7 + 0x541c + uVar3 * 0x24) = fVar11 * param_4;
        *(undefined4 *)(lVar7 + 0x5420 + uVar3 * 0x24) = uVar16;
      }
      lVar7 = param_1[2];
      uVar3 = *(ulonglong *)(lVar7 + 0xcd88);
      if (uVar3 < 0x360) {
        *(ulonglong *)(lVar7 + 0xcd88) = uVar3 + 1;
        *(int *)(lVar7 + 0x5400 + uVar3 * 0x24) = auVar15._0_4_;
        *(int *)(lVar7 + 0x5404 + uVar3 * 0x24) = auVar13._0_4_;
        *(undefined4 *)(lVar7 + 0x5408 + uVar3 * 0x24) = uVar18;
        *(float *)(lVar7 + 0x540c + uVar3 * 0x24) = fVar10 * param_4;
        *(float *)(lVar7 + 0x5410 + uVar3 * 0x24) = fVar11 * param_4;
        *(undefined4 *)(lVar7 + 0x5414 + uVar3 * 0x24) = uVar16;
        *(float *)(lVar7 + 0x5418 + uVar3 * 0x24) = fVar9 * param_4;
        *(float *)(lVar7 + 0x541c + uVar3 * 0x24) = fVar12 * param_4;
        *(undefined4 *)(lVar7 + 0x5420 + uVar3 * 0x24) = uVar16;
        lVar7 = param_1[2];
      }
      if ((((param_6 != '\0') && (*(char *)(param_1[3] + 0xc) != '\0')) && ((uVar8 & 1) == 0)) &&
         (uVar3 = *(ulonglong *)(lVar7 + 0xcd80), uVar3 < 0x300)) {
        local_b0 = CONCAT31(local_b0._1_3_,1);
        *(ulonglong *)(lVar7 + 0xcd80) = uVar3 + 1;
        lVar6 = uVar3 * 0x1c;
        auVar4 = vinsertps_avx(auVar15._0_16_,auVar13._0_16_,0x10);
        auVar4 = vinsertps_avx(auVar4,auVar19._0_16_,0x20);
        auVar4 = vinsertps_avx(auVar4,ZEXT416((uint)(fVar9 * param_4)),0x30);
        auVar5 = vunpcklps_avx(ZEXT416((uint)(fVar12 * param_4)),auVar17._0_16_);
        *(undefined1 (*) [16])(lVar6 + lVar7) = auVar4;
        *(longlong *)(lVar6 + 0x10 + lVar7) = auVar5._0_8_;
        *(undefined4 *)(lVar6 + 0x18 + lVar7) = local_b0;
      }
      iVar2 = *(int *)*param_1;
      uVar8 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  return;
}




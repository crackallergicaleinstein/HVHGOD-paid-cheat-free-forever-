// FUN_1802c5040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c5040 */

void FUN_1802c5040(undefined8 *param_1,float param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 in_ZMM2 [64];
  float fVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined4 local_80;
  
  iVar1 = *(int *)*param_1;
  auVar14 = ZEXT1664(in_ZMM2._0_16_);
  if (0 < iVar1) {
    fVar12 = 6.2831855;
    iVar6 = 0;
    do {
      lVar2 = param_1[1];
      iVar7 = iVar6 + 1;
      uVar3 = *(ulonglong *)(lVar2 + 0xcd80);
      auVar13 = ZEXT464((uint)(((float)iVar7 * fVar12) / (float)iVar1));
      fVar8 = ((float)iVar6 * fVar12) / (float)iVar1;
      auVar9 = ZEXT464((uint)fVar8);
      if (uVar3 < 0x300) {
        fVar8 = (float)FUN_180637540(fVar8,(float)iVar7 * fVar12);
        auVar11 = ZEXT464((uint)(fVar8 * param_2));
        fVar8 = (float)FUN_180638e00(auVar9._0_8_);
        auVar9 = ZEXT464((uint)(fVar8 * param_2));
        fVar8 = (float)FUN_180637540(auVar13._0_8_);
        auVar10 = ZEXT464((uint)(fVar8 * param_2));
        fVar8 = (float)FUN_180638e00(auVar13._0_8_);
        lVar5 = uVar3 * 0x1c;
        auVar4 = vinsertps_avx(auVar11._0_16_,auVar9._0_16_,0x10);
        local_80 = CONCAT31(local_80._1_3_,param_4);
        *(ulonglong *)(lVar2 + 0xcd80) = uVar3 + 1;
        auVar4 = vinsertps_avx(auVar4,auVar14._0_16_,0x20);
        auVar4 = vinsertps_avx(auVar4,auVar10._0_16_,0x30);
        *(undefined1 (*) [16])(lVar5 + lVar2) = auVar4;
        auVar4 = vunpcklps_avx(ZEXT416((uint)(fVar8 * param_2)),auVar14._0_16_);
        *(longlong *)(lVar5 + 0x10 + lVar2) = auVar4._0_8_;
        *(undefined4 *)(lVar5 + 0x18 + lVar2) = local_80;
      }
      iVar1 = *(int *)*param_1;
      iVar6 = iVar7;
    } while (iVar7 < iVar1);
  }
  return;
}




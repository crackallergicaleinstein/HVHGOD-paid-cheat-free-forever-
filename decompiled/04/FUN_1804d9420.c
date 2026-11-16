// FUN_1804d9420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9420 */

void FUN_1804d9420(longlong param_1,uint *param_2,uint *param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint local_28;
  uint uStack_24;
  
  local_28 = *param_2;
  auVar10 = ZEXT416(local_28);
  uStack_24 = param_2[1];
  auVar11 = ZEXT416(uStack_24);
  uVar3 = *param_3;
  auVar12 = ZEXT416(uVar3);
  uVar4 = param_3[1];
  auVar13 = ZEXT416(uVar4);
  if (param_4 != '\0') {
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x60);
    auVar13 = vshufps_avx(auVar12,auVar12,0x55);
    auVar10 = vcmpss_avx(ZEXT416(local_28),auVar12,1);
    auVar10 = vblendvps_avx(ZEXT416(local_28),auVar12,auVar10);
    auVar11 = vcmpss_avx(ZEXT416(uStack_24),auVar13,1);
    auVar11 = vblendvps_avx(ZEXT416(uStack_24),auVar13,auVar11);
    auVar5 = vshufps_avx(auVar12,auVar12,0xaa);
    auVar13 = vcmpss_avx(auVar5,ZEXT416(uVar3),1);
    auVar6 = vshufps_avx(auVar12,auVar12,0xff);
    auVar12 = vblendvps_avx(ZEXT416(uVar3),auVar5,auVar13);
    auVar13 = vcmpss_avx(auVar6,ZEXT416(uVar4),1);
    auVar13 = vblendvps_avx(ZEXT416(uVar4),auVar6,auVar13);
    local_28 = auVar10._0_4_;
    uStack_24 = auVar11._0_4_;
  }
  piVar1 = (int *)(param_1 + 0xa0);
  iVar8 = *(int *)(param_1 + 0xa4);
  auVar10 = vmaxss_avx(auVar10,auVar12);
  auVar11 = vmaxss_avx(auVar11,auVar13);
  if (*piVar1 == iVar8) {
    iVar9 = *piVar1 + 1;
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    if (iVar9 < iVar8) {
      iVar9 = iVar8;
    }
    FUN_1804aec70(piVar1,iVar9);
  }
  uVar7 = CONCAT44(auVar11._0_4_,auVar10._0_4_);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar2 = CONCAT44(uStack_24,local_28);
  puVar2[1] = uVar7;
  *piVar1 = *piVar1 + 1;
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_24,local_28);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  FUN_1804d9200(param_1);
  return;
}




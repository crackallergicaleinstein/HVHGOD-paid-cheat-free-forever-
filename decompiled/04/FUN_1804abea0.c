// FUN_1804abea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804abea0 */

undefined1 *
FUN_1804abea0(undefined8 param_1,float *param_2,float *param_3,ulonglong *param_4,int *param_5,
             undefined1 param_6,ulonglong *param_7,undefined8 *param_8)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 uStack0000000000000000;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar25;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  
  lVar4 = DAT_180bb8ae8;
  if ((param_4[1] == 0) || (param_5 == (int *)0x0)) {
    return &uStack0000000000000000;
  }
  iVar16 = (int)param_4[1] + -1;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar17 = *(longlong **)(lVar4 + 0x14d0);
  local_88 = plVar17;
  uVar8 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4));
  uVar18 = (ulonglong)uVar8;
  if (*(uint *)(*plVar17 + 0x1534) == uVar8) {
    FUN_1804cf810(uVar18,0xb,param_1);
  }
  uVar22 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff08 >> 8),1);
  puVar11 = (undefined2 *)FUN_1804aad60(&param_6,uVar18,param_2,param_3,uVar22);
  uVar25 = (undefined4)((ulonglong)uVar22 >> 0x20);
  uVar1 = *puVar11;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar8)) {
    bVar14 = 1;
  }
  else {
    bVar14 = 0;
  }
  if ((*(char *)(puVar11 + 1) != '\0') && (bVar14 == 0)) {
    FUN_1804c7740(uVar18,0);
  }
  auVar23 = ZEXT464(0x3f800000);
  auVar24 = ZEXT864(0);
  if (((char)uVar1 == '\0') && (bVar14 == 0)) {
    uVar22 = 0;
  }
  else {
    uVar22 = auVar23._0_8_;
  }
  uVar12 = (ulonglong)(uVar8 >> 0x1e ^ uVar8) * -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar22 = FUN_1804aaa10((uint)(uVar12 >> 0x20) ^ (uint)uVar12,uVar22,0x41900000);
  uVar12 = ((uVar18 ^ 0x78dde6e5fd29f054) >> 0x1e ^ uVar18 ^ 0x78dde6e5fd29f054) *
           -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  auVar3 = vpcmpeqd_avx(ZEXT116(bVar14),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar23._0_16_,auVar24._0_16_,auVar3);
  uVar20 = FUN_1804aaa10((uint)(uVar12 >> 0x20) ^ (uint)uVar12,auVar3._0_8_,0x41800000);
  lVar4 = DAT_180bb8ae8;
  iVar15 = *param_5;
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  else if (iVar16 < iVar15) {
    iVar15 = iVar16;
  }
  *param_5 = iVar15;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14d0) + 0x1c0);
  uVar12 = ((uVar18 ^ 0x1715609f7c746c69) >> 0x1e ^ uVar18 ^ 0x1715609f7c746c69) *
           -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar8 = (uint)(uVar12 >> 0x20) ^ (uint)uVar12;
  iVar9 = FUN_1804b13e0(uVar2,uVar8,iVar15);
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (iVar16 < iVar9) {
    iVar9 = iVar16;
  }
  uVar12 = ((uVar18 ^ 0xb54cda58fbbee87e) >> 0x1e ^ uVar18 ^ 0xb54cda58fbbee87e) *
           -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar13 = (uint)(uVar12 >> 0x20) ^ (uint)uVar12;
  local_a8 = (ulonglong)uVar13;
  iVar10 = FUN_1804b13e0(uVar2,uVar13,iVar15);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (iVar16 < iVar10) {
    iVar10 = iVar16;
  }
  uVar12 = ((uVar18 ^ 0x538454127b096493) >> 0x1e ^ uVar18 ^ 0x538454127b096493) *
           -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar13 = (uint)(uVar12 >> 0x20) ^ (uint)uVar12;
  local_98 = (ulonglong)uVar13;
  fVar21 = (float)FUN_1804b1470(uVar2,uVar13,auVar23._0_8_);
  if (iVar9 != iVar15) {
    if (iVar9 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar9;
      if (iVar16 < iVar9) {
        iVar10 = iVar16;
      }
    }
    fVar21 = 0.0;
    iVar9 = iVar15;
  }
  auVar3 = vminss_avx(auVar23._0_16_,
                      ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x40) * 6.0 + fVar21)));
  auVar24 = ZEXT1664(auVar3);
  FUN_1804b1650(uVar2,uVar8,iVar9);
  FUN_1804b1650(uVar2,local_a8 & 0xffffffff,iVar10);
  FUN_1804b1700(uVar2,local_98 & 0xffffffff,auVar24._0_8_);
  puVar6 = param_8;
  puVar5 = param_7;
  FUN_1804aa220(local_88[0x59],param_2,param_3,uVar22,CONCAT44(uVar25,uVar20),
                *(undefined8 *)(*param_4 + (longlong)*param_5 * 8));
  auVar3 = vmaxss_avx(ZEXT416((uint)(*param_3 - *param_2)),ZEXT416((uint)(DAT_180b0a41c * 130.0)));
  bVar19 = false;
  cVar7 = FUN_1804a8ab0(uVar18,param_2,param_3,auVar3._0_8_);
  if (cVar7 != '\0') {
    local_88 = (longlong *)*puVar6;
    uStack_80 = puVar6[1];
    local_98 = *puVar5;
    uStack_90 = puVar5[1];
    local_a8 = *param_4;
    uStack_a0 = param_4[1];
    iVar16 = FUN_1804a9370(&local_a8,*param_5,0,&local_98,&local_88);
    if (-1 < iVar16) {
      bVar19 = *param_5 != iVar16;
      *param_5 = iVar16;
      FUN_1804c7bf0();
    }
    FUN_1804aeac0();
  }
  return (undefined1 *)(ulonglong)bVar19;
}




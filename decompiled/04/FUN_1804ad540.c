// FUN_1804ad540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ad540 */

undefined1
FUN_1804ad540(undefined8 param_1,char *param_2,undefined4 param_3,float *param_4,float *param_5,
             longlong param_6,char param_7,undefined8 param_8,undefined4 param_9)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar18;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  
  pfVar3 = param_5;
  lVar5 = DAT_180bb8ae8;
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  fVar13 = 0.5;
  fVar10 = param_5[1] - param_4[1];
  uVar15 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
  uVar16 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
  auVar14 = ZEXT1664(auVar2);
  auVar12 = ZEXT1664(CONCAT124(auVar2._4_12_,auVar2._0_4_ / DAT_180b0a41c));
  lVar6 = DAT_180c62ca8;
  if (DAT_180c62ca8 == 0) {
    lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x11d0);
  }
  local_98 = *(undefined8 *)(DAT_180bb8ae8 + 0x11d0);
  local_90 = *(undefined4 *)(DAT_180bb8ae8 + 0x11e4);
  local_8c = *(undefined4 *)(DAT_180bb8ae8 + 0x11e0);
  FUN_1804d05a0(DAT_180bb8ae8 + 0x1fb8,&local_98);
  uVar11 = auVar12._0_8_;
  uVar9 = 0;
  if (auVar12._0_4_ == 0.0) {
    uVar11 = (ulonglong)*(uint *)(lVar5 + 0x11e4);
  }
  FUN_1804c23b0(lVar6,uVar11);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar10 - auVar14._0_4_) * fVar13)),1);
  param_5._4_4_ = auVar2._0_4_;
  param_5._0_4_ = (float)uVar9;
  FUN_1804b2d30(0xb,&param_5);
  FUN_1804b2c00(0xc,0);
  FUN_1804b2a10(7,0);
  FUN_1804b2a10(8,0);
  FUN_1804b2a10(9,0);
  FUN_1804b2a10(0,DAT_180b0a424);
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar5 + 0x14d0);
  *(undefined8 *)(lVar6 + 0x118) = *(undefined8 *)param_4;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  fVar10 = *pfVar3;
  fVar8 = *param_4;
  *(uint *)(lVar5 + 0x1e88) = *(uint *)(lVar5 + 0x1e88) | 1;
  *(float *)(lVar5 + 0x1ea0) = fVar10 - fVar8;
  if (param_7 != '\0') {
    FUN_1804c1f80();
  }
  puVar17 = &param_5;
  param_5._0_4_ = (float)uVar9;
  param_5._4_4_ = (float)uVar9;
  uVar4 = FUN_1804fbc20(param_1,0,param_2,param_3,puVar17,CONCAT44(uVar18,param_9),0,0);
  lVar6 = DAT_180bb8ae8;
  uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
  if (*(int *)(DAT_180bb8ae8 + 0x1550) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(DAT_180bb8ae8 + 0x1550) == *(int *)(DAT_180bb8ae8 + 0x1ec0);
  }
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar6 + 0x14d0);
  *(undefined4 *)(lVar6 + 0x118) = uVar15;
  *(undefined4 *)(lVar6 + 0x11c) = uVar16;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  FUN_1804b2b70(4);
  FUN_1804b2de0(2);
  lVar6 = DAT_180bb8ae8;
  lVar5 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fb8);
  if (*(int *)(DAT_180bb8ae8 + 0x1fb8) < 1) {
    FUN_1804c5a40("Calling PopFont() too many times!");
  }
  else {
    lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x1fc0);
    FUN_1804c23b0(*(undefined8 *)(lVar1 + -0x10 + lVar5 * 0x10),
                  *(undefined4 *)(lVar1 + -8 + lVar5 * 0x10),
                  *(undefined4 *)(lVar1 + -4 + lVar5 * 0x10));
    *(int *)(lVar6 + 0x1fb8) = *(int *)(lVar6 + 0x1fb8) + -1;
  }
  lVar6 = param_6;
  uVar15 = DAT_1808da474;
  if (((*param_2 == '\0') && (!bVar7)) && (param_6 != 0)) {
    fVar10 = (param_4[1] + pfVar3[1]) * fVar13;
    fVar8 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
    lVar1 = DAT_180c62ca8;
    lVar5 = DAT_180bb8ae8;
    param_5._0_4_ = *param_4;
    param_5._4_4_ = fVar10 - fVar8 * fVar13;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    FUN_180463450(*(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8),lVar1,0x41533333,&param_5,
                  CONCAT44(uVar18,uVar15),lVar6,0);
  }
  return uVar4;
}




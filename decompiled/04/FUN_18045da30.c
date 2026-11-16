// FUN_18045da30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045da30 */

void FUN_18045da30(undefined8 param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  char cVar6;
  float *pfVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  float local_res10;
  float local_res14;
  float local_res20;
  float local_res24;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar26;
  undefined8 uVar25;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar27;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [136];
  
  fVar23 = 0.5;
  local_res10 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x30) + DAT_180b0a41c;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 168.0 + 0.5)),1);
  local_res20 = DAT_180b0a41c * 5.0;
  local_res14 = param_3 - local_res20;
  fVar16 = *(float *)(DAT_180bb8ae8 + 0x30);
  if (fVar16 - DAT_180b0a41c * 6.0 < local_res10 + auVar4._0_4_) {
    fVar16 = *(float *)(param_2 + 0x28) - auVar4._0_4_;
    local_res10 = fVar16 - DAT_180b0a41c;
  }
  uVar25 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20),DAT_180b0a41c * 8.0);
  local_res24 = local_res20;
  cVar6 = FUN_1804a8290(fVar16,&local_res10,auVar4._0_8_,&local_res20,uVar25);
  lVar13 = DAT_180bb8ae8;
  uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
  if (cVar6 != '\0') {
    auVar22 = ZEXT464(0x41a66666);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    uVar3 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14d0) + 0x2c8);
    if (*DAT_180c62c58 == DAT_180c62c58[1]) {
      pfVar7 = (float *)FUN_18045c410(local_c8,"##empty",0);
      lVar13 = DAT_180bb8ae8;
      uVar27 = DAT_1808da474;
      fVar19 = *pfVar7;
      fVar16 = pfVar7[4];
      fVar18 = pfVar7[5];
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      uVar5 = DAT_180c62ca8;
      uVar9 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14d0) + 0x2c8);
      fVar15 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
      local_res14 = fVar16 - fVar15 * fVar23;
      in_stack_ffffffffffffff18 = 0;
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 28.0 + fVar19 + fVar23)),1);
      uVar25 = CONCAT44(uVar26,uVar27);
      local_res10 = auVar4._0_4_;
      local_b8 = CONCAT44(fVar18,fVar16);
      FUN_180463450(uVar9,uVar5,0x41533333,&local_res10,uVar25,"No hotkeys yet",0);
    }
    lVar13 = *DAT_180c62c58;
    uVar12 = 0;
    if ((DAT_180c62c58[1] - lVar13) / 0x68 != 0) {
      auVar24 = ZEXT464(0x3f800000);
      fVar16 = 6.7;
      lVar11 = 0;
      auVar21 = ZEXT864(0);
      do {
        uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
        plVar1 = (longlong *)(lVar11 + lVar13);
        FUN_1804c2920(uVar12 & 0xffffffff);
        pauVar8 = (undefined1 (*) [16])FUN_18045c410(local_b0,"##bind",0,auVar22._0_8_);
        local_c8 = *pauVar8;
        auVar20 = ZEXT1664(local_c8);
        local_b8 = *(ulonglong *)pauVar8[1];
        plVar14 = plVar1;
        if (0xf < (ulonglong)plVar1[3]) {
          plVar14 = (longlong *)*plVar1;
        }
        if (*(int *)((longlong)plVar1 + 0x54) == 1) {
          puVar10 = &DAT_180829dc8;
        }
        else if (*(int *)((longlong)plVar1 + 0x54) == 2) {
          puVar10 = &DAT_180829dcc;
        }
        else {
          puVar10 = &DAT_180829dd4;
        }
        FUN_18045c750(local_c8,puVar10,plVar14,DAT_1808da478,CONCAT44(uVar26,DAT_180b0a438));
        auVar4 = vpcmpeqd_avx(ZEXT116(local_b8._4_1_),SUB6416(ZEXT464(0),0));
        auVar4 = vblendvps_avx(auVar24._0_16_,auVar21._0_16_,auVar4);
        auVar17 = ZEXT1664(auVar4);
        uVar9 = FUN_18045f3f0((int)plVar1[10]);
        in_stack_ffffffffffffff18 = CONCAT44(uVar27,auVar17._0_4_);
        auVar4 = vshufps_avx(auVar20._0_16_,auVar20._0_16_,0xaa);
        auVar4 = vroundss_avx(ZEXT816(0),
                              ZEXT416((uint)((auVar4._0_4_ - fVar16 * DAT_180b0a41c) + fVar23)),1);
        uVar25 = 0;
        FUN_18045c890(local_d8,uVar3,auVar4._0_8_,local_b8 & 0xffffffff,0,uVar9,
                      in_stack_ffffffffffffff18);
        iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar2 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x68;
        lVar13 = *DAT_180c62c58;
      } while (uVar12 < (ulonglong)((DAT_180c62c58[1] - lVar13) / 0x68));
    }
    FUN_1804aeac0();
  }
  return;
}




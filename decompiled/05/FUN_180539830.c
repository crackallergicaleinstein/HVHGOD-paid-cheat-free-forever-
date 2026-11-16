// FUN_180539830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180539830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180539830(longlong param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  char *local_f0;
  undefined8 local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  FUN_1804c2800("Glow Color");
  fVar5 = DAT_180b0a41c;
  auVar13 = ZEXT464(0x3f800000);
  fVar14 = 0.5;
  fVar11 = 0.0;
  fVar9 = 0.0;
  fVar15 = 0.0;
  fVar10 = 0.0;
  fVar8 = 0.0;
  if (DAT_180bbecdb == '\0') {
    fVar8 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar12 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar12 = vmaxss_avx(auVar13._0_16_,auVar12);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    fVar9 = auVar3._0_4_ + *(float *)(param_1 + 8) + auVar12._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar8 * DAT_180b0a41c + 0.5)),1);
    fVar15 = auVar3._0_4_ + *(float *)(param_1 + 0xc);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    fVar10 = (auVar3._0_4_ + *(float *)(param_1 + 8)) - auVar12._0_4_;
    auVar12 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar8 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    fVar8 = auVar12._0_4_ + *(float *)(param_1 + 0xc);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  lVar6 = DAT_180bb8ae8;
  uVar4 = DAT_180b0a438;
  fVar15 = (fVar15 + fVar8) * 0.5;
  local_d8 = fVar5 * 17.0 + fVar9;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_f8 = 0x41300000;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0x14d0) + 0x2c8);
  local_d4 = fVar15;
  FUN_180463dc0(uVar2,&local_d8,uVar4,&DAT_180858a0c);
  uVar4 = DAT_180b0a410;
  local_d8 = DAT_180b0a41c * 32.0 + fVar9;
  fVar9 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_d4 = fVar15 - fVar9 * fVar14;
  local_e8 = 0;
  local_f0 = "Glow Color";
  local_f8 = uVar4;
  FUN_180463450(uVar2,DAT_180c62ca8,0x4157851f,&local_d8);
  fVar9 = *param_3;
  fVar8 = 255.0;
  local_c8 = (float)((uint)fVar9 & 0xff) / 255.0;
  local_e8 = CONCAT71(local_e8._1_7_,1);
  local_c4 = (float)((uint)fVar9 >> 8 & 0xff) / 255.0;
  local_f8 = CONCAT31(local_f8._1_3_,1);
  local_c0 = (float)((uint)fVar9 >> 0x10 & 0xff) / 255.0;
  local_bc = (float)((uint)fVar9 >> 0x18) / 255.0;
  local_d0 = (fVar10 - DAT_180b0a41c * 17.0) - DAT_180b0a41c * 12.7;
  local_cc = fVar15 - DAT_180b0a41c * 12.7 * fVar14;
  cVar7 = FUN_1804ab860((uint)fVar9 >> 0x18,&local_c8,&local_d0);
  if (cVar7 != '\0') {
    auVar12 = auVar13._0_16_;
    if (fVar11 <= local_c8) {
      auVar3 = vminss_avx(auVar12,ZEXT416((uint)local_c8));
      fVar9 = auVar3._0_4_;
    }
    else {
      fVar9 = 0.0;
    }
    if (fVar11 <= local_c4) {
      auVar3 = vminss_avx(auVar12,ZEXT416((uint)local_c4));
      fVar15 = auVar3._0_4_;
    }
    else {
      fVar15 = 0.0;
    }
    if (fVar11 <= local_c0) {
      auVar3 = vminss_avx(auVar12,ZEXT416((uint)local_c0));
      fVar10 = auVar3._0_4_;
    }
    else {
      fVar10 = 0.0;
    }
    if (fVar11 <= local_bc) {
      auVar12 = vminss_avx(auVar12,ZEXT416((uint)local_bc));
      fVar11 = auVar12._0_4_;
    }
    local_d8 = (float)CONCAT13((char)(int)(fVar11 * fVar8),
                               CONCAT12((char)(int)(fVar10 * fVar8),
                                        CONCAT11((char)(int)(fVar15 * fVar8),
                                                 (char)(int)(fVar9 * fVar8))));
    *param_3 = local_d8;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
}




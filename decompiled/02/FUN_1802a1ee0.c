// FUN_1802a1ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a1ee0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a1ee0(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  ULONGLONG UVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [64];
  undefined8 uVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  plVar9 = (longlong *)(param_4 + 0x40);
  plVar5 = plVar9;
  if (0xf < *(ulonglong *)(param_4 + 0x58)) {
    plVar5 = (longlong *)*plVar9;
  }
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar8 = DAT_180bbade0;
  }
  else {
    lVar8 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  fVar10 = 0.0;
  if (lVar8 == 0) {
    auVar11 = ZEXT864(0);
    fVar13 = 0.0;
  }
  else {
    local_b8 = plVar5;
    local_b0 = *(undefined8 *)(param_4 + 0x50);
    FUN_180430010(lVar8,&local_a8,&local_b8);
    auVar11 = ZEXT464(local_a8._4_4_);
    fVar13 = (float)local_a8;
  }
  lVar3 = DAT_180ccde38;
  lVar8 = *(longlong *)(param_4 + 8);
  UVar6 = GetTickCount64();
  if (((lVar8 == 0) ||
      (((lVar8 == DAT_180bbe8c8 && (DAT_180b0b4d8 == '\0')) || (DAT_180bb9090 <= UVar6)))) ||
     ((local_a8 = lVar8, cVar4 = FUN_1801acc90(&DAT_180bb9050,&local_a8), cVar4 == '\0' ||
      (lVar3 == 0)))) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = auVar11._0_4_ + 4.0;
  }
  local_a8 = *(longlong *)param_3;
  local_f8 = *(undefined4 *)(param_5 + 0x6c);
  local_a0 = param_3[2] - *param_3;
  local_9c = param_3[3] - param_3[1];
  local_e8 = param_6;
  local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)(param_5 + 0x70));
  pauVar7 = (undefined1 (*) [16])FUN_18029b9f0(&local_b8,&local_a8,fVar13 + fVar12,auVar11._0_8_);
  auVar1 = *pauVar7;
  auVar2 = vroundss_avx(ZEXT816(0),auVar1,1);
  auVar14 = ZEXT1664(auVar2);
  fVar13 = auVar2._0_4_;
  auVar1 = vshufps_avx(auVar1,auVar1,0x55);
  auVar1 = vroundss_avx(ZEXT816(0),auVar1,1);
  uVar15 = auVar1._0_8_;
  auVar16 = ZEXT1664(auVar1);
  if (fVar12 != fVar10) {
    local_c8 = 0xffffffff;
    local_d0 = 0x3f800000;
    local_d8 = 0x3f800000;
    local_e8 = CONCAT44(local_e8._4_4_,fVar10);
    local_f0 = lVar3;
    local_f8 = auVar11._0_4_;
    local_e0 = fVar10;
    FUN_180435220(param_2,auVar2._0_8_,uVar15,auVar11._0_8_);
    fVar13 = auVar14._0_4_;
    uVar15 = auVar16._0_8_;
  }
  local_f8 = *(undefined4 *)(param_5 + 0x68);
  if (0xf < *(ulonglong *)(param_4 + 0x58)) {
    plVar9 = (longlong *)*plVar9;
  }
  local_b0 = *(undefined8 *)(param_4 + 0x50);
  local_f0 = 0;
  local_b8 = plVar9;
  FUN_1804340b0(param_2,fVar13 + fVar12,uVar15,&local_b8);
}




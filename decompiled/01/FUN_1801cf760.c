// FUN_1801cf760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cf760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cf760(undefined8 *param_1,float *param_2,undefined4 param_3,char param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auStack_138 [32];
  float local_118;
  undefined8 local_110;
  undefined1 **local_108;
  undefined4 local_100;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [48];
  undefined1 local_a0 [16];
  undefined8 uStack_90;
  ulonglong uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  uVar5 = FUN_180439770();
  if (param_4 != '\0') {
    uVar6 = FUN_180439770();
    cVar4 = FUN_18043b5c0(uVar6);
    if ((cVar4 == '\0') && (cVar4 = FUN_18043b8e0(uVar5,param_2), cVar4 != '\0')) {
      bVar3 = true;
      goto LAB_1801cf7e1;
    }
  }
  bVar3 = false;
LAB_1801cf7e1:
  lVar7 = FUN_180439770();
  if (*(longlong *)(lVar7 + 0x4a8) == *(longlong *)(lVar7 + 0x4b0)) {
    puVar9 = &DAT_180bbac80;
  }
  else {
    puVar9 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar7 + 0x4b0) + -4) * 0x13;
  }
  if (bVar3) {
    local_e8 = (undefined1 *)0x40a0000040a00000;
    uStack_e0 = 0x40a0000040a00000;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,DAT_180bb8a6c);
    local_118 = param_2[3];
    FUN_180430970(puVar9,*param_2,param_2[1],param_2[2]);
  }
  if (param_4 == '\0') {
    uVar2 = ((DAT_180bb8a64 >> 0x10 & 0xff | 0x6e00) << 8 | DAT_180bb8a64 >> 8 & 0xff) << 8 |
            DAT_180bb8a64 & 0xff;
  }
  else {
    uVar2 = DAT_180bb8a64;
    if (bVar3) {
      uVar2 = DAT_180bb8a60;
    }
  }
  FUN_1801ce330(puVar9,param_2,param_3,uVar2);
  if (bVar3) {
    local_e8 = (undefined1 *)*param_1;
    uStack_e0 = param_1[1];
    pauVar8 = (undefined1 (*) [16])FUN_18043a0a0(local_d0,&local_e8);
    local_a0 = *pauVar8;
    uStack_90 = *(undefined8 *)pauVar8[1];
    uStack_88 = *(ulonglong *)(pauVar8[1] + 8);
    (*pauVar8)[0] = 0;
    *(undefined8 *)pauVar8[1] = 0;
    *(undefined8 *)(pauVar8[1] + 8) = 0xf;
    FUN_18015c010(local_d0);
    local_e8 = local_a0;
    if (0xf < uStack_88) {
      local_e8 = (undefined1 *)local_a0._0_8_;
    }
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      lVar7 = DAT_180bbade0;
    }
    else {
      lVar7 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    auVar11._12_4_ = 0;
    auVar11._0_12_ = ZEXT812(0);
    auVar11 = auVar11 << 0x20;
    auVar12 = ZEXT1264(ZEXT812(0)) << 0x20;
    if (lVar7 == 0) {
      local_d8 = 0.0;
      local_d4 = 0.0;
    }
    else {
      uStack_e0 = uStack_90;
      FUN_180430010(lVar7,&local_d8,&local_e8);
      auVar11 = auVar12._0_16_;
    }
    auVar1 = vmaxss_avx(ZEXT416((uint)(((param_2[2] + *param_2) - local_d8) - 16.0)),auVar11);
    auVar14 = ZEXT1664(auVar1);
    auVar11 = vmaxss_avx(ZEXT416((uint)((param_2[1] - local_d4) - 13.0)),auVar11);
    auVar13 = ZEXT1664(auVar11);
    fVar10 = local_d4 + 10.0;
    auVar12 = ZEXT464((uint)(local_d8 + 16.0));
    local_e8 = (undefined1 *)0x40a0000040a00000;
    uStack_e0 = 0x40a0000040a00000;
    local_108 = &local_e8;
    local_110._0_4_ = DAT_180bb8a68;
    local_118 = fVar10;
    FUN_180430970(&DAT_180bbad18,auVar1._0_8_,auVar11._0_8_,local_d8 + 16.0);
    local_e8 = (undefined1 *)0x40a0000040a00000;
    uStack_e0 = 0x40a0000040a00000;
    local_100 = 0x3f800000;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,DAT_180bb8a70);
    local_118 = fVar10;
    FUN_1804330f0(&DAT_180bbad18,auVar14._0_8_,auVar13._0_8_,auVar12._0_8_);
    local_e8 = local_a0;
    if (0xf < uStack_88) {
      local_e8 = (undefined1 *)local_a0._0_8_;
    }
    uStack_e0 = uStack_90;
    local_110 = 0;
    local_118 = (float)DAT_180bb8a60;
    FUN_1804340b0(&DAT_180bbad18,auVar14._0_4_ + 8.0,auVar13._0_4_ + 5.0,&local_e8);
    FUN_18015c010(local_a0);
  }
}




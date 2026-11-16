// FUN_18047dd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047dd00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18047dd00(undefined8 param_1,undefined8 param_2,float *param_3,float param_4,float param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char ***pppcVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auStack_168 [32];
  undefined8 local_148;
  char ***local_140;
  undefined8 local_138;
  float local_130;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 auStack_c8 [16];
  char ***local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_108 = 0;
  if ((DAT_180cd6c78 == 0) ||
     (uVar4 = (**(code **)(*(longlong *)DAT_180cd6c78 + 0x10))(), uVar4 == 0)) {
    if ((DAT_180cd6b78 == 0) ||
       (pcVar7 = (char *)(**(code **)(*(longlong *)DAT_180cd6b78 + 0x10))(), pcVar7 == (char *)0x0))
    {
      pcVar7 = "User";
    }
    while( true ) {
      if ((*pcVar7 != ' ') && (*pcVar7 != '\t')) break;
      pcVar7 = pcVar7 + 1;
    }
    local_110 = 0;
    iVar2 = FUN_1804b0e50(&local_110,pcVar7,0);
    if (iVar2 < 1) {
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_f8,&DAT_18080cdf8,1);
      plVar5 = (longlong *)local_f8;
    }
    else {
      local_d8 = (undefined1  [16])0x0;
      auStack_c8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_d8,pcVar7,(longlong)iVar2);
      plVar5 = (longlong *)local_d8;
    }
    local_b8 = (char ***)*plVar5;
    lStack_b0 = plVar5[1];
    lStack_a8 = plVar5[2];
    uStack_a0 = plVar5[3];
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    if (iVar2 < 1) {
      FUN_18015c010(local_f8);
    }
    else {
      FUN_18015c010(local_d8);
    }
    if (lStack_a8 == 1) {
      pppcVar6 = (char ***)&local_b8;
      if (0xf < uStack_a0) {
        pppcVar6 = local_b8;
      }
      if ('`' < *(char *)pppcVar6) {
        pppcVar6 = (char ***)&local_b8;
        if (0xf < uStack_a0) {
          pppcVar6 = local_b8;
        }
        if (*(char *)pppcVar6 < '{') {
          pppcVar6 = (char ***)&local_b8;
          if (0xf < uStack_a0) {
            pppcVar6 = local_b8;
          }
          *(char *)pppcVar6 = *(char *)pppcVar6 + -0x20;
        }
      }
    }
    fVar8 = ((float)(DAT_1808da470 >> 0x18) / 255.0) * param_5;
    if (0.0 <= fVar8) {
      vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar8));
    }
    local_118 = param_4 * 0.5 + *param_3;
    local_114 = param_4 * 0.5 + param_3[1];
    local_148 = (undefined4 *)((ulonglong)local_148._4_4_ << 0x20);
    fVar10 = 0.0;
    auVar11 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
    fVar9 = 255.0;
    fVar12 = 0.5;
    FUN_1804e01c0(param_2,&local_118);
    fVar8 = (param_4 / DAT_180b0a41c) * 0.42;
    auVar13 = ZEXT464((uint)fVar8);
    local_140 = (char ***)&local_b8;
    if (0xf < uStack_a0) {
      local_140 = local_b8;
    }
    param_5 = ((float)(DAT_180b0a458 >> 0x18) / fVar9) * param_5;
    if (fVar10 <= param_5) {
      auVar1 = vminss_avx(auVar11._0_16_,ZEXT416((uint)param_5));
      fVar10 = auVar1._0_4_;
    }
    fVar10 = fVar10 * fVar9 + fVar12;
    uVar3 = DAT_180b0a458 & 0xffffff;
    pppcVar6 = (char ***)&local_b8;
    if (0xf < uStack_a0) {
      pppcVar6 = local_b8;
    }
    fVar8 = (float)FUN_1804633e0(DAT_180c62cb0,fVar8,pppcVar6,0);
    fVar8 = (param_4 - fVar8) * fVar12 + *param_3;
    fVar9 = (float)FUN_180463350(DAT_180c62cb0,auVar13._0_8_);
    local_114 = (param_4 - fVar9) * fVar12 + param_3[1];
    local_138 = 0;
    local_148 = (undefined4 *)CONCAT44(local_148._4_4_,(int)(longlong)fVar10 << 0x18 | uVar3);
    local_118 = fVar8;
    FUN_180463450(param_2,DAT_180c62cb0,auVar13._0_8_,&local_118);
    FUN_18015c010(&local_b8);
  }
  else {
    if (0.0 <= param_5) {
      auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)param_5));
      fVar8 = auVar1._0_4_;
    }
    else {
      fVar8 = 0.0;
    }
    local_108 = 0x3f800000;
    local_104 = 0x3f800000;
    local_110 = 0;
    local_10c = 0;
    local_118 = param_4 + *param_3;
    local_114 = param_4 + param_3[1];
    local_f8._8_8_ = 0;
    local_f8._0_8_ = uVar4;
    local_f8 = local_f8 << 0x40;
    local_130 = param_4 * 0.5;
    local_138 = CONCAT44(local_138._4_4_,(int)(longlong)(fVar8 * 255.0 + 0.5) << 0x18) | 0xffffff;
    local_140 = (char ***)&local_108;
    local_148 = &local_110;
    FUN_1804e0440(param_2,local_f8,param_3,&local_118);
  }
}




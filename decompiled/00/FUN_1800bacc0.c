// FUN_1800bacc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bacc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bacc0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined8 local_260;
  undefined1 *local_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  undefined1 local_230 [16];
  undefined1 auStack_220 [16];
  undefined1 local_210 [16];
  undefined1 auStack_200 [16];
  undefined1 local_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 local_190 [16];
  undefined1 auStack_180 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  local_50 = (undefined1  [16])0x0;
  local_40 = 0;
  local_38 = 0;
  FUN_18015ba30(local_50,*param_2,param_2[1]);
  local_230 = (undefined1  [16])0x0;
  auStack_220 = (undefined1  [16])0x0;
  FUN_18015ba30(local_230,*param_3,param_3[1]);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)local_230) {
    FUN_18015c010(puVar1);
    *puVar1 = local_230._0_8_;
    *(undefined8 *)(param_1 + 0x28) = local_230._8_8_;
    *(undefined8 *)(param_1 + 0x30) = auStack_220._0_8_;
    *(undefined8 *)(param_1 + 0x38) = auStack_220._8_8_;
    auStack_220 = ZEXT816(0xf) << 0x40;
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_230._1_15_;
    local_230 = auVar3 << 8;
  }
  FUN_18015c010(local_230);
  if ((undefined1 *)(param_1 + 0x40) != local_50) {
    puVar6 = local_50;
    if (0xf < local_38) {
      puVar6 = (undefined1 *)local_50._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x40),puVar6,local_40);
  }
  local_150 = (undefined1  [16])0x0;
  local_140 = (undefined1  [16])0x0;
  FUN_18015ba30(local_150,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_150," color",6);
  local_210 = *pauVar4;
  auStack_200 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_268 = local_210;
  if (0xf < (ulonglong)auStack_200._8_8_) {
    local_268 = (undefined1 *)local_210._0_8_;
  }
  local_258 = local_50;
  if (0xf < local_38) {
    local_258 = (undefined1 *)local_50._0_8_;
  }
  local_260 = auStack_200._0_8_;
  lStack_250 = local_40;
  FUN_1800aa4b0(param_1 + 0x68,&local_258,&local_268);
  FUN_18015c010(local_210);
  FUN_18015c010(local_150);
  local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  FUN_18015ba30(local_130,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_130," glow outline color",0x13);
  local_1f0 = *pauVar4;
  auStack_1e0 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_258 = local_1f0;
  if (0xf < (ulonglong)auStack_1e0._8_8_) {
    local_258 = (undefined1 *)local_1f0._0_8_;
  }
  local_268 = local_50;
  if (0xf < local_38) {
    local_268 = (undefined1 *)local_50._0_8_;
  }
  lStack_250 = auStack_1e0._0_8_;
  local_260 = local_40;
  FUN_1800aa4b0(param_1 + 0x6c,&local_268,&local_258);
  FUN_18015c010(local_1f0);
  FUN_18015c010(local_130);
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  FUN_18015ba30(local_110,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_110," electric overlay",0x11);
  local_1d0 = *pauVar4;
  auStack_1c0 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_258 = local_1d0;
  if (0xf < (ulonglong)auStack_1c0._8_8_) {
    local_258 = (undefined1 *)local_1d0._0_8_;
  }
  local_268 = local_50;
  if (0xf < local_38) {
    local_268 = (undefined1 *)local_50._0_8_;
  }
  lStack_250 = auStack_1c0._0_8_;
  local_260 = local_40;
  FUN_1800f29f0(param_1 + 0x70,&local_268,&local_258);
  FUN_18015c010(local_1d0);
  FUN_18015c010(local_110);
  local_f0 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_f0,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_f0," overlay effect",0xf);
  local_1b0 = *pauVar4;
  auStack_1a0 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_258 = local_1b0;
  if (0xf < (ulonglong)auStack_1a0._8_8_) {
    local_258 = (undefined1 *)local_1b0._0_8_;
  }
  local_268 = local_50;
  if (0xf < local_38) {
    local_268 = (undefined1 *)local_50._0_8_;
  }
  lStack_250 = auStack_1a0._0_8_;
  local_260 = local_40;
  FUN_1800f3030(param_1 + 0x74,&local_268,&local_258);
  FUN_18015c010(local_1b0);
  FUN_18015c010(local_f0);
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_d0,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_d0," material",9);
  local_190 = *pauVar4;
  auStack_180 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_258 = local_190;
  if (0xf < (ulonglong)auStack_180._8_8_) {
    local_258 = (undefined1 *)local_190._0_8_;
  }
  local_268 = local_50;
  if (0xf < local_38) {
    local_268 = (undefined1 *)local_50._0_8_;
  }
  lStack_250 = auStack_180._0_8_;
  local_260 = local_40;
  FUN_1800f2660(param_1 + 0x78,&local_268,&local_258);
  FUN_18015c010(local_190);
  FUN_18015c010(local_d0);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_b0,*param_3,param_3[1]);
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_b0," visibility",0xb);
  local_170 = *pauVar4;
  auStack_160 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  local_258 = local_170;
  if (0xf < (ulonglong)auStack_160._8_8_) {
    local_258 = (undefined1 *)local_170._0_8_;
  }
  local_268 = local_50;
  if (0xf < local_38) {
    local_268 = (undefined1 *)local_50._0_8_;
  }
  lStack_250 = auStack_160._0_8_;
  local_260 = local_40;
  FUN_1800f3030(param_1 + 0x7c,&local_268,&local_258);
  FUN_18015c010(local_170);
  FUN_18015c010(local_b0);
  ppuVar7 = &PTR_s_Liquid_1806ff330;
  do {
    puVar2 = *ppuVar7;
    local_70 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    FUN_18015ba30(local_70,*param_3,param_3[1]);
    pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_70,&DAT_1806bcfc0,1);
    local_90 = *pauVar4;
    auStack_80 = pauVar4[1];
    *(undefined8 *)(pauVar4[1] + 8) = 0xf;
    (*pauVar4)[0] = 0;
    *(undefined8 *)pauVar4[1] = 0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (puVar2[lVar8] != '\0');
    plVar5 = (longlong *)FUN_18015b2a0(local_90,puVar2);
    local_258 = (undefined1 *)*plVar5;
    lStack_250 = plVar5[1];
    lStack_248 = plVar5[2];
    lStack_240 = plVar5[3];
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    FUN_18015c010(&local_258);
    FUN_18015c010(local_90);
    FUN_18015c010(local_70);
    ppuVar7 = ppuVar7 + 1;
  } while ((longlong)ppuVar7 < 0x1806ff388);
  FUN_18015c010(local_50);
}




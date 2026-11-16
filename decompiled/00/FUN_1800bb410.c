// FUN_1800bb410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bb410 */

void FUN_1800bb410(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  local_118 = (undefined1 *)*param_3;
  uStack_110 = param_3[1];
  local_108 = *param_2;
  uStack_100 = param_2[1];
  FUN_1800aa4b0(param_1 + 0x68,&local_108,&local_118);
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  FUN_18015ba30(local_90,*param_3,param_3[1]);
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_90," through walls",0xe);
  local_f0 = *pauVar1;
  auStack_e0 = pauVar1[1];
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_118 = local_f0;
  if (0xf < (ulonglong)auStack_e0._8_8_) {
    local_118 = (undefined1 *)local_f0._0_8_;
  }
  uStack_110 = auStack_e0._0_8_;
  local_108 = *param_2;
  uStack_100 = param_2[1];
  FUN_1800aa4b0(param_1 + 0x6c,&local_108,&local_118);
  FUN_18015c010(local_f0);
  FUN_18015c010(local_90);
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  FUN_18015ba30(local_70,*param_3,param_3[1]);
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_70," visible enabled",0x10);
  local_d0 = *pauVar1;
  auStack_c0 = pauVar1[1];
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_118 = local_d0;
  if (0xf < (ulonglong)auStack_c0._8_8_) {
    local_118 = (undefined1 *)local_d0._0_8_;
  }
  uStack_110 = auStack_c0._0_8_;
  local_108 = *param_2;
  uStack_100 = param_2[1];
  FUN_1800f29f0(param_1 + 0x70,&local_108,&local_118);
  FUN_18015c010(local_d0);
  FUN_18015c010(local_70);
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  FUN_18015ba30(local_50,*param_3,param_3[1]);
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_50," hidden enabled",0xf);
  local_b0 = *pauVar1;
  auStack_a0 = pauVar1[1];
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_118 = local_b0;
  if (0xf < (ulonglong)auStack_a0._8_8_) {
    local_118 = (undefined1 *)local_b0._0_8_;
  }
  uStack_110 = auStack_a0._0_8_;
  local_108 = *param_2;
  uStack_100 = param_2[1];
  FUN_1800f29f0(param_1 + 0x71,&local_108,&local_118);
  FUN_18015c010(local_b0);
  FUN_18015c010(local_50);
  return;
}




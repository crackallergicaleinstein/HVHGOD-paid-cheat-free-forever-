// FUN_1800be5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800be5c0 */

void FUN_1800be5c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 **ppuVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 auStack_138 [16];
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  lVar4 = -1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  FUN_18015ba30(local_c8,param_3);
  pauVar2 = (undefined1 (*) [16])FUN_18015b2a0(local_c8," font",5);
  local_148 = *pauVar2;
  auStack_138 = pauVar2[1];
  (*pauVar2)[0] = 0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0xf;
  local_168 = (undefined8 *)local_148;
  if (0xf < (ulonglong)auStack_138._8_8_) {
    local_168 = (undefined8 *)local_148._0_8_;
  }
  local_188._0_8_ = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_188._0_8_ = *param_2;
  }
  uStack_160 = auStack_138._0_8_;
  local_188._8_8_ = param_2[2];
  FUN_1800f3030(param_1,local_188,&local_168);
  FUN_18015c010(local_148);
  FUN_18015c010(local_c8);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  FUN_18015ba30(local_a8,param_3);
  pauVar2 = (undefined1 (*) [16])FUN_18015b2a0(local_a8," size",5);
  local_128 = *pauVar2;
  auStack_118 = pauVar2[1];
  (*pauVar2)[0] = 0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0xf;
  local_188._0_8_ = local_128;
  if (0xf < (ulonglong)auStack_118._8_8_) {
    local_188._0_8_ = local_128._0_8_;
  }
  local_168 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_168 = (undefined8 *)*param_2;
  }
  local_188._8_8_ = auStack_118._0_8_;
  uStack_160 = param_2[2];
  FUN_1800f3030(param_1 + 4,&local_168,local_188);
  FUN_18015c010(local_128);
  FUN_18015c010(local_a8);
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  FUN_18015ba30(local_188,param_3);
  puVar3 = (undefined8 *)FUN_18015b2a0(local_188," outline",8);
  local_168 = (undefined8 *)*puVar3;
  uStack_160 = puVar3[1];
  uStack_158 = puVar3[2];
  uStack_150 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  ppuVar1 = (undefined8 **)(param_1 + 0x28);
  local_88 = local_168;
  uStack_80 = uStack_160;
  uStack_78 = uStack_158;
  uStack_70 = uStack_150;
  if (ppuVar1 != &local_88) {
    FUN_18015c010(ppuVar1);
    *ppuVar1 = local_168;
    *(undefined8 *)(param_1 + 0x30) = uStack_160;
    *(undefined8 *)(param_1 + 0x38) = uStack_158;
    *(undefined8 *)(param_1 + 0x40) = uStack_150;
    uStack_78 = 0;
    uStack_70 = 0xf;
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
  }
  FUN_18015c010(&local_88);
  FUN_18015c010(local_188);
  if ((undefined8 *)(param_1 + 0x48) != param_2) {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x48),puVar3,param_2[2]);
  }
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  FUN_18015ba30(local_68,param_3);
  pauVar2 = (undefined1 (*) [16])FUN_18015b2a0(local_68," outline width",0xe);
  local_108 = *pauVar2;
  auStack_f8 = pauVar2[1];
  (*pauVar2)[0] = 0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0xf;
  local_188._0_8_ = local_108;
  if (0xf < (ulonglong)auStack_f8._8_8_) {
    local_188._0_8_ = local_108._0_8_;
  }
  local_168 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_168 = (undefined8 *)*param_2;
  }
  puVar3 = param_2 + 2;
  local_188._8_8_ = auStack_f8._0_8_;
  uStack_160 = *puVar3;
  FUN_1800f2e80(param_1 + 0x70,&local_168,local_188);
  FUN_18015c010(local_108);
  FUN_18015c010(local_68);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  FUN_18015ba30(local_48,param_3,lVar4);
  pauVar2 = (undefined1 (*) [16])FUN_18015b2a0(local_48," outline color",0xe);
  local_e8 = *pauVar2;
  auStack_d8 = pauVar2[1];
  (*pauVar2)[0] = 0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0xf;
  local_188._0_8_ = local_e8;
  if (0xf < (ulonglong)auStack_d8._8_8_) {
    local_188._0_8_ = local_e8._0_8_;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_188._8_8_ = auStack_d8._0_8_;
  uStack_160 = *puVar3;
  local_168 = param_2;
  FUN_1800aa4b0(param_1 + 0x74,&local_168,local_188);
  FUN_18015c010(local_e8);
  FUN_18015c010(local_48);
  return;
}




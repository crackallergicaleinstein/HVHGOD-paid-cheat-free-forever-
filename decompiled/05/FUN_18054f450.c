// FUN_18054f450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054f450 */

void FUN_18054f450(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,ulonglong param_6,undefined4 param_7,undefined8 *param_8,
                  undefined4 param_9)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  float fVar7;
  undefined8 in_stack_fffffffffffffe78;
  uint uVar8;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar11;
  ulonglong *puVar9;
  undefined8 uVar10;
  float local_158;
  float local_154;
  ulonglong local_150;
  ulonglong uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  ulonglong uStack_108;
  undefined1 auStack_100 [16];
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8 [8];
  float local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  uVar8 = (uint)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800();
    uStack_140 = 1;
    auStack_138._4_4_ = param_7;
    auStack_138._0_4_ = param_5;
    auStack_138._8_8_ = param_6;
    auStack_128 = ZEXT816(0);
    puVar9 = &local_150;
    local_150 = param_2;
    uStack_148 = param_3;
    uStack_13c = param_4;
    FUN_180485a70(param_1,local_e8,param_2,1,(ulonglong)uVar8 << 0x20,puVar9);
    uVar11 = (undefined4)((ulonglong)puVar9 >> 0x20);
    fVar7 = 0.5;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 105.0) + 0.5)),1);
    local_158 = auVar3._0_4_ - DAT_180b0a41c * 15.5;
    local_154 = DAT_180b0a41c * 0.22 + local_e0;
    cVar4 = FUN_1804ab580(local_154,&local_158,1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar7)),1);
    fVar2 = auVar3._0_4_ + *(float *)(param_1 + 8);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar2 - DAT_180b0a41c * 105.0) + fVar7)),1);
    uVar10 = CONCAT44(uVar11,param_4);
    FUN_1804ad940("##slider",auVar3._0_8_,fVar2,local_e0,param_3,uVar10,param_5,param_6,param_7);
    uVar11 = (undefined4)(param_3 >> 0x20);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (DAT_180bbecdb == '\0') {
      if (cVar4 != '\0') {
        FUN_180488320("##settings");
      }
      cVar4 = FUN_180488630("##settings",param_2,param_9);
      if (cVar4 != '\0') {
        FUN_18054e960(*param_8,*(undefined1 *)param_8[1],param_8[2],*(undefined4 *)param_8[3],
                      CONCAT44(uVar11,*(undefined4 *)param_8[4]),
                      CONCAT44(uVar5,*(undefined4 *)param_8[5]));
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180561960(param_2,param_8);
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_150 = local_150 & 0xffffffff00000000;
    uStack_140 = 3;
    auStack_138 = (undefined1  [16])0x0;
    auStack_128._8_8_ = 0;
    auStack_128._0_8_ = param_3;
    uStack_114 = param_5;
    local_110 = param_7;
    uStack_108 = param_6;
    auStack_100 = ZEXT816(0);
    local_f0 = 1;
    uStack_c8 = CONCAT44(uStack_13c,3);
    local_d8 = local_150;
    uStack_c0 = 0;
    uStack_a0 = CONCAT44(param_5,param_4);
    local_b8 = 0;
    uStack_a8 = 0;
    local_98 = CONCAT44(uStack_10c,param_7);
    uStack_90 = param_6;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar6 = CONCAT71(uStack_ef,1);
    uStack_148 = param_2;
    uStack_118 = param_4;
    uStack_d0 = param_2;
    uStack_b0 = param_3;
    local_78 = uVar6;
    if (param_2 != 0) {
      uVar5 = FUN_180493b90();
      puVar9 = DAT_180c62d38;
      local_d8 = CONCAT44(local_d8._4_4_,uVar5);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_d8);
      }
      else {
        *DAT_180c62d38 = local_d8;
        puVar9[1] = uStack_d0;
        puVar9[2] = uStack_c8;
        puVar9[3] = uStack_c0;
        puVar9[4] = auStack_138._8_8_;
        puVar9[5] = auStack_128._0_8_;
        puVar9[6] = auStack_128._8_8_;
        puVar9[7] = CONCAT44(uStack_114,uStack_118);
        puVar9[8] = CONCAT44(uStack_10c,local_110);
        puVar9[9] = uStack_108;
        puVar9[10] = auStack_100._0_8_;
        puVar9[0xb] = auStack_100._8_8_;
        puVar9[0xc] = uVar6;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
    FUN_180493f00(param_2);
    FUN_18054e960(*param_8,*(undefined1 *)param_8[1],param_8[2],*(undefined4 *)param_8[3],
                  CONCAT44(uVar8,*(undefined4 *)param_8[4]),
                  CONCAT44(uVar11,*(undefined4 *)param_8[5]));
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}




// FUN_18054f870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054f870 */

void FUN_18054f870(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_res10;
  undefined8 in_stack_fffffffffffffe78;
  uint uVar9;
  char **ppcVar10;
  char *local_158;
  char *pcStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  char *pcStack_110;
  undefined1 auStack_108 [16];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0 [8];
  float local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_res10 = param_2;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Field of View");
    local_158 = "Field of View";
    uStack_148 = 1;
    auStack_140._4_4_ = param_7;
    auStack_140._0_4_ = param_5;
    auStack_140._8_8_ = "%.1f deg";
    auStack_130 = ZEXT816(0);
    ppcVar10 = &local_158;
    pcStack_150 = (char *)param_3;
    uStack_144 = param_4;
    FUN_180485a70(param_1,local_f0,"Field of View",1,(ulonglong)uVar9 << 0x20,ppcVar10);
    uVar6 = (undefined4)((ulonglong)ppcVar10 >> 0x20);
    fVar8 = 0.5;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 105.0) + 0.5)),1);
    fVar2 = DAT_180b0a41c * 0.22 + local_e8;
    local_res10 = CONCAT44(fVar2,auVar3._0_4_ - DAT_180b0a41c * 15.5);
    cVar5 = FUN_1804ab580(fVar2,&local_res10,1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar8)),1);
    fVar2 = auVar3._0_4_ + *(float *)(param_1 + 8);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar2 - DAT_180b0a41c * 105.0) + fVar8)),1);
    FUN_1804ad940("##slider",auVar3._0_8_,fVar2,local_e8,param_3,CONCAT44(uVar6,param_4),param_5,
                  "%.1f deg",param_7);
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Field of View",param_9);
      if (cVar5 != '\0') {
        FUN_18051a380(param_8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Field of View");
      FUN_18051a380(param_8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
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
    local_158 = (char *)((ulonglong)local_158 & 0xffffffff00000000);
    pcStack_150 = "Field of View";
    uStack_148 = 3;
    auStack_140 = (undefined1  [16])0x0;
    auStack_130._8_8_ = 0;
    auStack_130._0_8_ = param_3;
    uStack_11c = param_5;
    local_118 = param_7;
    pcStack_110 = "%.1f deg";
    auStack_108 = ZEXT816(0);
    local_f8 = 1;
    uStack_c8 = CONCAT44(uStack_144,3);
    local_d8 = local_158;
    pcStack_d0 = "Field of View";
    uStack_c0 = 0;
    uStack_a0 = CONCAT44(param_5,param_4);
    local_b8 = 0;
    uStack_a8 = 0;
    local_98 = CONCAT44(uStack_114,param_7);
    pcStack_90 = "%.1f deg";
    uStack_88 = 0;
    uStack_80 = 0;
    uVar7 = CONCAT71(uStack_f7,1);
    uStack_120 = param_4;
    uStack_b0 = param_3;
    local_78 = uVar7;
    uVar6 = FUN_180493b90();
    puVar4 = DAT_180c62d38;
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar6);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_d8);
    }
    else {
      *DAT_180c62d38 = local_d8;
      puVar4[1] = pcStack_d0;
      puVar4[2] = uStack_c8;
      puVar4[3] = uStack_c0;
      puVar4[4] = auStack_140._8_8_;
      puVar4[5] = auStack_130._0_8_;
      puVar4[6] = auStack_130._8_8_;
      puVar4[7] = CONCAT44(uStack_11c,uStack_120);
      puVar4[8] = CONCAT44(uStack_114,local_118);
      puVar4[9] = pcStack_110;
      puVar4[10] = auStack_108._0_8_;
      puVar4[0xb] = auStack_108._8_8_;
      puVar4[0xc] = uVar7;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
    FUN_180493f00("Field of View");
    FUN_18051a380(param_8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}




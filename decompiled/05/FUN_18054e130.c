// FUN_18054e130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e130 */

void FUN_18054e130(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,longlong *param_8,
                  undefined4 param_9)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_res10;
  undefined8 in_stack_fffffffffffffe78;
  uint uVar10;
  char **ppcVar11;
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
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_res10 = param_2;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Point Scale");
    local_158 = "Point Scale";
    auStack_130 = ZEXT816(0);
    ppcVar11 = &local_158;
    uStack_148 = 1;
    auStack_140._4_4_ = param_7;
    auStack_140._0_4_ = param_5;
    auStack_140._8_8_ = "%.0f%%";
    pcStack_150 = (char *)param_3;
    uStack_144 = param_4;
    FUN_180485a70(param_1,local_f0,"Point Scale",1,(ulonglong)uVar10 << 0x20,ppcVar11);
    uVar7 = (undefined4)((ulonglong)ppcVar11 >> 0x20);
    fVar9 = 0.5;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar4._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 105.0) + 0.5)),1);
    fVar3 = DAT_180b0a41c * 0.22 + local_e8;
    local_res10 = CONCAT44(fVar3,auVar4._0_4_ - DAT_180b0a41c * 15.5);
    cVar6 = FUN_1804ab580(fVar3,&local_res10,1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar9)),1);
    fVar3 = auVar4._0_4_ + *(float *)(param_1 + 8);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar3 - DAT_180b0a41c * 105.0) + fVar9)),1);
    uVar8 = FUN_1804ad940("##slider",auVar4._0_8_,fVar3,local_e8,param_3,CONCAT44(uVar7,param_4),
                          param_5,"%.0f%%",param_7);
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings","Point Scale",param_9);
      if (cVar6 != '\0') {
        lVar2 = *param_8;
        FUN_180488c60();
        FUN_180516ec0("Dynamic Point Scale",lVar2 + 0x610);
        FUN_180516ec0("Debug Multipoints",lVar2 + 0x678);
        FUN_180488f10();
        FUN_1804aeac0();
      }
    }
    else {
      FUN_1805603e0(uVar8,param_8);
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
    auStack_140 = (undefined1  [16])0x0;
    pcStack_150 = "Point Scale";
    local_158 = (char *)((ulonglong)local_158 & 0xffffffff00000000);
    uStack_148 = 3;
    auStack_130._8_8_ = 0;
    auStack_130._0_8_ = param_3;
    pcStack_110 = "%.0f%%";
    local_f8 = 1;
    uVar8 = CONCAT71(uStack_f7,1);
    uStack_11c = param_5;
    auStack_108 = ZEXT816(0);
    uStack_c8 = CONCAT44(uStack_144,3);
    local_d8 = local_158;
    pcStack_d0 = "Point Scale";
    uStack_c0 = 0;
    uStack_a0 = CONCAT44(param_5,param_4);
    local_b8 = 0;
    uStack_a8 = 0;
    local_118 = param_7;
    local_98 = CONCAT44(uStack_114,param_7);
    pcStack_90 = "%.0f%%";
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_120 = param_4;
    uStack_b0 = param_3;
    local_78 = uVar8;
    uVar7 = FUN_180493b90();
    puVar5 = DAT_180c62d38;
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar7);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_d8);
      FUN_1805603e0();
    }
    else {
      *DAT_180c62d38 = local_d8;
      puVar5[1] = pcStack_d0;
      puVar5[2] = uStack_c8;
      puVar5[3] = uStack_c0;
      puVar5[4] = auStack_140._8_8_;
      puVar5[5] = auStack_130._0_8_;
      puVar5[6] = auStack_130._8_8_;
      puVar5[7] = CONCAT44(uStack_11c,uStack_120);
      puVar5[8] = CONCAT44(uStack_114,local_118);
      puVar5[9] = pcStack_110;
      puVar5[10] = auStack_108._0_8_;
      puVar5[0xb] = auStack_108._8_8_;
      puVar5[0xc] = uVar8;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
      FUN_1805603e0();
    }
  }
  return;
}




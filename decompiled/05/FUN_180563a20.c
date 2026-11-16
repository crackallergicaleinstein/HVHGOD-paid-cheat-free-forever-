// FUN_180563a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180563a20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180563a20(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4,
                  char param_5,undefined4 param_6,float param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar8;
  float fVar9;
  float fStack000000000000003c;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  ulonglong uStack_100;
  undefined1 auStack_f8 [16];
  char local_e8;
  undefined7 uStack_e7;
  undefined1 local_e0 [8];
  float local_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    uVar7 = 0x3f800000;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_138 = 0;
    local_128 = 0;
    uStack_134 = 0;
    uStack_130 = 0x3f8000003f800000;
    local_148 = param_2;
    uStack_140 = param_3;
    FUN_180485a70(param_1,local_e0,param_2,param_5,0,&local_148);
    fVar9 = 0.5;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    param_7 = (auVar3._0_4_ - auVar4._0_4_) - DAT_180b0a41c * 13.85;
    fStack000000000000003c = DAT_180b0a41c * 0.22 + local_d8;
    cVar6 = FUN_1804ab580(fStack000000000000003c,&param_7,param_5);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar9)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + fVar9)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + fVar9)),1);
    param_7 = auVar3._0_4_ - auVar4._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + fVar9)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_d8 - auVar3._0_4_ * fVar9) + DAT_180b0a41c * 0.11 +
                                        fVar9)),1);
    fStack000000000000003c = auVar3._0_4_;
    FUN_1804aaf40("##toggle",param_3,&param_7,param_5,uVar7);
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings",param_2,param_6);
      if (cVar6 != '\0') {
        (**(code **)*param_4)();
        uVar2 = param_4[1];
        FUN_180488c60();
        FUN_18053bc10(uVar2);
        FUN_180488f10();
        FUN_1804aeac0();
      }
    }
    else {
      FUN_18056e4a0(param_2,param_4);
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
    local_148 = local_148 & 0xffffffff00000000;
    uStack_138 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    local_e8 = param_5;
    uVar8 = CONCAT71(uStack_e7,param_5);
    local_128 = 0;
    uStack_120 = 0;
    uStack_10c = 0x3f800000;
    local_108 = 0x3f800000;
    auStack_f8 = ZEXT816(0);
    uStack_b8 = (ulonglong)uStack_134 << 0x20;
    local_c8 = local_148;
    uStack_110 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0x3f80000000000000;
    local_88 = CONCAT44(uStack_104,0x3f800000);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_140 = param_2;
    uStack_130 = param_3;
    uStack_c0 = param_2;
    uStack_b0 = param_3;
    local_68 = uVar8;
    if (param_2 != 0) {
      uVar7 = FUN_180493b90();
      puVar5 = DAT_180c62d38;
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_c8);
      }
      else {
        *DAT_180c62d38 = local_c8;
        puVar5[1] = uStack_c0;
        puVar5[2] = uStack_b8;
        puVar5[3] = uStack_b0;
        puVar5[4] = local_128;
        puVar5[5] = uStack_120;
        puVar5[6] = uStack_118;
        puVar5[7] = CONCAT44(uStack_10c,uStack_110);
        puVar5[8] = CONCAT44(uStack_104,local_108);
        puVar5[9] = uStack_100;
        puVar5[10] = auStack_f8._0_8_;
        puVar5[0xb] = auStack_f8._8_8_;
        puVar5[0xc] = uVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
    if (param_5 != '\0') {
      FUN_18056e4a0(param_2,param_4);
    }
  }
  return;
}




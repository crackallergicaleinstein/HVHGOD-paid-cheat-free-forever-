// FUN_180487560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180487560 */

void FUN_180487560(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,ulonglong param_6,undefined4 param_7)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  undefined8 in_stack_fffffffffffffea8;
  uint uVar7;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800();
    auStack_100 = ZEXT816(0);
    auStack_110._4_4_ = param_7;
    auStack_110._0_4_ = param_5;
    uStack_118 = 1;
    auStack_110._8_8_ = param_6;
    local_128 = param_2;
    uStack_120 = param_3;
    uStack_114 = param_4;
    FUN_180485a70(param_1,local_c0,param_2,1,(ulonglong)uVar7 << 0x20,&local_128);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    fVar2 = auVar3._0_4_ + *(float *)(param_1 + 8);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar2 - DAT_180b0a41c * 105.0) + 0.5)),1);
    FUN_1804ad940("##slider",auVar3._0_8_,fVar2,local_b8,param_3,param_4,param_5,param_6,param_7);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_128 = local_128 & 0xffffffff00000000;
    uStack_118 = 3;
    auStack_100._8_8_ = 0;
    auStack_100._0_8_ = param_3;
    uStack_e0 = param_6;
    local_c8 = 1;
    uVar6 = CONCAT71(uStack_c7,1);
    auStack_110 = (undefined1  [16])0x0;
    uStack_ec = param_5;
    auStack_d8 = ZEXT816(0);
    uStack_98 = CONCAT44(uStack_114,3);
    local_a8 = local_128;
    uStack_90 = 0;
    uStack_70 = CONCAT44(param_5,param_4);
    local_88 = 0;
    uStack_78 = 0;
    local_e8 = param_7;
    local_68 = CONCAT44(uStack_e4,param_7);
    uStack_60 = param_6;
    uStack_58 = 0;
    uStack_50 = 0;
    if (param_2 != 0) {
      uStack_120 = param_2;
      uStack_f0 = param_4;
      uStack_a0 = param_2;
      uStack_80 = param_3;
      local_48 = uVar6;
      uVar5 = FUN_180493b90();
      puVar4 = DAT_180c62d38;
      local_a8 = CONCAT44(local_a8._4_4_,uVar5);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_a8);
      }
      else {
        *DAT_180c62d38 = local_a8;
        puVar4[1] = uStack_a0;
        puVar4[2] = uStack_98;
        puVar4[3] = uStack_90;
        puVar4[4] = auStack_110._8_8_;
        puVar4[5] = auStack_100._0_8_;
        puVar4[6] = auStack_100._8_8_;
        puVar4[7] = CONCAT44(uStack_ec,uStack_f0);
        puVar4[8] = CONCAT44(uStack_e4,local_e8);
        puVar4[9] = uStack_e0;
        puVar4[10] = auStack_d8._0_8_;
        puVar4[0xb] = auStack_d8._8_8_;
        puVar4[0xc] = uVar6;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
  return;
}




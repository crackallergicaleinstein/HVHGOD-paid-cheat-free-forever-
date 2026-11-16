// FUN_18034a860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034a860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18034a860(undefined8 *param_1,float param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [64];
  undefined1 auStack_2b8 [208];
  undefined2 local_1e8;
  undefined2 uStack_1e6;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2b8;
  auVar7 = ZEXT464((uint)(param_2 - *(float *)*param_1));
  sVar3 = thunk_FUN_180624430(param_2 - *(float *)*param_1);
  uVar6 = 0;
  if (sVar3 < 1) {
    fVar5 = (float)FUN_180615070(auVar7._0_8_,0x43b40000);
  }
  else {
    fVar5 = 0.0;
  }
  if (ABS(fVar5) <= *(float *)param_1[1]) {
    if (*(char *)param_1[2] == '\0') {
      auVar7 = ZEXT464((uint)(param_2 - *(float *)param_1[3]));
      sVar3 = thunk_FUN_180624430(param_2 - *(float *)param_1[3]);
      if (sVar3 < 1) {
        fVar5 = (float)FUN_180615070(auVar7._0_8_,0x43b40000);
      }
      else {
        fVar5 = 0.0;
      }
      if (0.001 < ABS(fVar5)) {
      }
    }
    puVar1 = (undefined8 *)param_1[4];
    uStack_130 = puVar1[1];
    local_128 = puVar1[2];
    uStack_120 = puVar1[3];
    local_118 = puVar1[4];
    uStack_110 = puVar1[5];
    local_108 = puVar1[6];
    uStack_100 = puVar1[7];
    local_f8 = puVar1[8];
    uStack_f0 = puVar1[9];
    local_e8 = puVar1[10];
    uStack_e0 = puVar1[0xb];
    local_d8 = puVar1[0xc];
    uStack_d0 = puVar1[0xd];
    local_c8 = puVar1[0xe];
    uStack_c0 = puVar1[0xf];
    local_b8 = puVar1[0x10];
    uStack_b0 = puVar1[0x11];
    local_a8 = puVar1[0x12];
    uStack_a0 = puVar1[0x13];
    local_98 = puVar1[0x14];
    uStack_90 = puVar1[0x15];
    local_88 = puVar1[0x16];
    uStack_80 = puVar1[0x17];
    local_78 = puVar1[0x18];
    uStack_70 = puVar1[0x19];
    local_68 = puVar1[0x1a];
    uStack_60 = puVar1[0x1b];
    local_58 = puVar1[0x1c];
    _auStack_1d8 = ZEXT816(0);
    local_1c8 = ZEXT816(0);
    _local_138 = CONCAT44(param_2,(int)*puVar1);
    local_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_13c = 0;
    iVar4 = 1;
    if (1 < *(int *)param_1[6]) {
      iVar4 = *(int *)param_1[6];
    }
    uStack_1dc = uVar6;
    auStack_1b8 = _auStack_1d8;
    local_1a8 = local_1c8;
    auStack_198 = _auStack_1d8;
    local_188 = local_1c8;
    auStack_178 = _auStack_1d8;
    local_168 = local_1c8;
    auStack_158 = _auStack_1d8;
    local_148 = uVar6;
    uStack_144 = uVar6;
    uStack_140 = uVar6;
    iVar4 = FUN_180349bd0(param_1[5],&local_138,iVar4,&local_1e8);
    if ((iVar4 == 3) && (*(float *)param_1[7] <= (float)uStack_1d0)) {
      FUN_18034e780(param_1[8],&local_138);
      *(undefined4 *)(param_1[8] + 0x10) = *(undefined4 *)param_1[6];
      lVar2 = param_1[8];
      *(ulonglong *)(lVar2 + 0x18) = CONCAT44(uStack_1e4,CONCAT22(uStack_1e6,local_1e8));
      *(ulonglong *)(lVar2 + 0x20) = CONCAT44(uStack_1dc,uStack_1e0);
      *(undefined1 (*) [8])(lVar2 + 0x28) = auStack_1d8;
      *(undefined8 *)(lVar2 + 0x30) = uStack_1d0;
      *(undefined8 *)(lVar2 + 0x38) = local_1c8._0_8_;
      *(undefined8 *)(lVar2 + 0x40) = local_1c8._8_8_;
      *(undefined8 *)(lVar2 + 0x48) = auStack_1b8._0_8_;
      *(undefined8 *)(lVar2 + 0x50) = auStack_1b8._8_8_;
      *(undefined8 *)(lVar2 + 0x58) = local_1a8._0_8_;
      *(undefined8 *)(lVar2 + 0x60) = local_1a8._8_8_;
      *(undefined8 *)(lVar2 + 0x68) = auStack_198._0_8_;
      *(undefined8 *)(lVar2 + 0x70) = auStack_198._8_8_;
      *(undefined8 *)(lVar2 + 0x78) = local_188._0_8_;
      *(undefined8 *)(lVar2 + 0x80) = local_188._8_8_;
      *(undefined8 *)(lVar2 + 0x88) = auStack_178._0_8_;
      *(undefined8 *)(lVar2 + 0x90) = auStack_178._8_8_;
      *(undefined8 *)(lVar2 + 0x98) = local_168._0_8_;
      *(undefined8 *)(lVar2 + 0xa0) = local_168._8_8_;
      *(undefined8 *)(lVar2 + 0xa8) = auStack_158._0_8_;
      *(undefined8 *)(lVar2 + 0xb0) = auStack_158._8_8_;
      *(ulonglong *)(lVar2 + 0xb8) = CONCAT44(uStack_144,local_148);
      *(ulonglong *)(lVar2 + 0xc0) = CONCAT44(uStack_13c,uStack_140);
      *(undefined1 *)(param_1[8] + 0x14) = 1;
      *(undefined1 *)param_1[9] = 1;
    }
  }
}




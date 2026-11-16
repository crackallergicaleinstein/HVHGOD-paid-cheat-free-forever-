// FUN_1804bc370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc370 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bc370(undefined4 *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  fVar1 = *param_3;
  auVar5 = ZEXT416((uint)fVar1);
  fVar2 = param_3[1];
  auVar6 = ZEXT416((uint)fVar2);
  auVar7._12_4_ = 0;
  auVar7._0_12_ = ZEXT812(0);
  auVar7 = auVar7 << 0x20;
  auVar8 = ZEXT1264(ZEXT812(0)) << 0x20;
  if ((*(byte *)(DAT_180bb8ae8 + 0x1f10) & 0x10) != 0) {
    auVar5 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1f5c);
    local_40 = auVar5._0_4_;
    if ((local_40 < 0.0) || (auVar6 = vshufps_avx(auVar5,auVar5,0xaa), auVar6._0_4_ < 0.0)) {
      local_40 = *(float *)(param_2 + 0x38);
    }
    else if (local_40 <= fVar1) {
      auVar6 = vminss_avx(auVar6,ZEXT416((uint)fVar1));
      local_40 = auVar6._0_4_;
    }
    auVar6 = vshufps_avx(auVar5,auVar5,0x55);
    local_3c = auVar6._0_4_;
    if ((local_3c < 0.0) || (auVar5 = vshufps_avx(auVar5,auVar5,0xff), auVar5._0_4_ < 0.0)) {
      local_3c = *(float *)(param_2 + 0x3c);
    }
    else if (local_3c <= fVar2) {
      auVar5 = vminss_avx(auVar5,ZEXT416((uint)fVar2));
      local_3c = auVar5._0_4_;
    }
    if (*(code **)(DAT_180bb8ae8 + 0x1f70) != (code *)0x0) {
      local_58 = *(undefined8 *)(DAT_180bb8ae8 + 0x1f78);
      local_50 = *(undefined4 *)(param_2 + 0x28);
      local_4c = *(undefined4 *)(param_2 + 0x2c);
      local_48 = *(undefined4 *)(param_2 + 0x38);
      local_44 = *(undefined4 *)(param_2 + 0x3c);
      (**(code **)(DAT_180bb8ae8 + 0x1f70))(&local_58);
      auVar7 = auVar8._0_16_;
    }
    auVar5._0_4_ = (float)(int)local_40;
    auVar5._4_12_ = SUB1612(ZEXT816(0),4);
    auVar6._0_4_ = (float)(int)local_3c;
    auVar6._4_12_ = SUB1612(ZEXT816(0),4);
  }
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    auVar3 = SUB6416(ZEXT464(0x40800000),0);
    if ((*(uint *)(param_2 + 0x18) & 4) == 0) {
      auVar4 = auVar3;
    }
    else {
      auVar4 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca0));
    }
    if ((*(uint *)(param_2 + 0x18) & 8) != 0) {
      auVar3 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca4));
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    auVar3 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca4));
    auVar4 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca0));
  }
  else {
    auVar3 = SUB6416(ZEXT464(0x40800000),0);
    auVar4 = auVar3;
  }
  auVar7 = vmaxss_avx(auVar7,ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0xc94) - 1.0)));
  auVar7 = vmaxss_avx(auVar3,ZEXT416((uint)(auVar7._0_4_ +
                                           *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68)))
                     );
  auVar7 = vmaxss_avx(auVar6,auVar7);
  auVar5 = vmaxss_avx(auVar5,auVar4);
  param_1[1] = auVar7._0_4_;
  *param_1 = auVar5._0_4_;
}




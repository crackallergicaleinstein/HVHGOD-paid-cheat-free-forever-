// FUN_180307ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180307ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180307ed0(undefined8 param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 extraout_var [56];
  undefined1 auVar6 [64];
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60 [2];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  local_60[0] = param_3;
  puVar3 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar3 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  fVar7 = (float)puVar3[0x12];
  fVar8 = (float)puVar3[0x13];
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar4 < 0.0) {
    auVar6._0_8_ = FUN_18061e150();
    auVar6._8_56_ = extraout_var;
    auVar5 = auVar6._0_16_;
  }
  else {
    auVar5 = ZEXT416((uint)SQRT(fVar4));
  }
  auVar6 = ZEXT1664(auVar5);
  if (0.001 <= auVar5._0_4_) {
    local_64 = 1.0;
    local_68 = 0.0;
    pfVar2 = &local_68;
    if (0.0 <= param_3) {
      pfVar2 = local_60;
    }
    pfVar1 = &local_64;
    if (param_3 <= 1.0) {
      pfVar1 = pfVar2;
    }
    fVar4 = (float)FUN_1806156a0(auVar5._0_8_,*pfVar1);
    *puVar3 = *puVar3 | 0xc0;
    puVar3[0x13] = (uint)((fVar8 / auVar6._0_4_) * fVar4);
    puVar3[0x12] = (uint)((fVar7 / auVar6._0_4_) * fVar4);
  }
}




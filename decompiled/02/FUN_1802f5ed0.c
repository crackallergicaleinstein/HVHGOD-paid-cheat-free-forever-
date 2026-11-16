// FUN_1802f5ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f5ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f5ed0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 auStack_f8 [32];
  undefined1 ***local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined1 **local_a8;
  undefined1 **local_a0;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  FUN_1802f7bb0();
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_c8 = _DAT_180bb8890;
  uStack_c0 = lRam0000000180bb8898;
  lStack_b8 = uRam0000000180bb88a0;
  uStack_b0 = uRam0000000180bb88a8;
  cVar7 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (((cVar7 == '\0') || (uStack_c0 == 0)) || (DAT_180bbeb00 != uStack_c0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  local_90 = 0x71d8419e;
  local_8c = 0x72d84331;
  local_88 = 0x6fd83e78;
  local_84 = 0xb0d39379;
  if (DAT_180b0cd68 == '\0') {
    lStack_b8 = (ulonglong)lStack_b8._1_7_ << 8;
  }
  else {
    local_c8 = _DAT_180b0cdd0;
    uStack_c0 = _DAT_180b0cdd8;
    lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
  }
  fVar1 = (float)local_c8;
  fVar2 = local_c8._4_4_;
  fVar3 = uStack_c0._4_4_;
  if ((char)lStack_b8 != '\0') {
    puVar4 = &local_c8;
    if (fVar1 < -2.0) {
      puVar4 = (undefined8 *)&DAT_180800eb0;
    }
    if (2.5 < fVar1) {
      puVar4 = (undefined8 *)&DAT_180800ec0;
    }
    local_c8 = CONCAT44(fVar2,*(undefined4 *)puVar4);
    puVar5 = &local_c8;
    if (fVar2 < -2.0) {
      puVar5 = (undefined8 *)&DAT_180800eb0;
    }
    if (2.0 < fVar2) {
      puVar5 = (undefined8 *)&DAT_180800ec0;
    }
    local_c8 = CONCAT44(*(undefined4 *)((longlong)puVar5 + 4),*(undefined4 *)puVar4);
    puVar4 = &local_c8;
    if ((float)uStack_c0 < -2.0) {
      puVar4 = (undefined8 *)&DAT_180800eb0;
    }
    if (2.0 < (float)uStack_c0) {
      puVar4 = (undefined8 *)&DAT_180800ec0;
    }
    uStack_c0 = CONCAT44(fVar3,*(undefined4 *)(puVar4 + 1));
    puVar5 = &local_c8;
    if (fVar3 < 60.0) {
      puVar5 = (undefined8 *)&DAT_180800eb0;
    }
    if (68.0 < fVar3) {
      puVar5 = (undefined8 *)&DAT_180800ec0;
    }
    uStack_c0 = CONCAT44(*(undefined4 *)((longlong)puVar5 + 0xc),*(undefined4 *)(puVar4 + 1));
  }
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_98[0] = 0;
  local_80 = local_98;
  local_78 = &local_90;
  local_70 = &local_68;
  local_a8 = &local_80;
  local_a0 = &local_80;
  local_d8 = &local_a8;
  FUN_1802faa10(&DAT_180b8fb10,uVar6,&local_c8,&local_a0);
}




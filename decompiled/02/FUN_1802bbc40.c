// FUN_1802bbc40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bbc40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bbc40(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [8];
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar9;
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined4 local_68;
  int local_58 [2];
  undefined1 local_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  if ((DAT_180bb88c9 == '\0') && (DAT_180bb88ca == '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_50 = (undefined1  [8])_DAT_180bb8890;
    uStack_48 = lRam0000000180bb8898;
    uStack_40 = uRam0000000180bb88a0;
    uStack_38 = uRam0000000180bb88a8;
    cVar9 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar2 = uStack_48;
    auVar1 = local_50;
    if ((uStack_48 != 0) && (local_50 != (undefined1  [8])0x0)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
      for (plVar4 = DAT_180b0e0e0; plVar4 != DAT_180b0e0e8; plVar4 = plVar4 + 3) {
        if ((undefined1  [8])*plVar4 == auVar1) {
          ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
          if (cVar9 == '\0') {
          }
          uStack_40 = 0;
          local_58[0] = 1;
          _local_50 = (undefined1  [16])0x0;
          if (((DAT_180bbab78 != 0) &&
              ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_58,local_50),
              local_58[0] == 0)) || ((float)uStack_48 <= 0.0)) {
            iVar3 = 0;
            iVar5 = 0;
          }
          else {
            iVar5 = (int)uStack_48._4_4_;
            iVar3 = (int)(float)uStack_48;
          }
          local_a8._0_4_ = (float)iVar5;
          auVar10 = ZEXT464((uint)((float)local_a8 * 0.5));
          auVar6._0_4_ = (float)iVar3;
          auVar6._4_12_ = SUB1612(ZEXT816(0),4);
          auVar8 = ZEXT464((uint)(auVar6._0_4_ * 0.5));
          local_a0 = lVar2;
          FUN_1802bbf40(auVar6._0_8_,param_2,auVar6._0_4_ * 0.5,(float)local_a8 * 0.5);
          auVar6 = _local_50;
          if (((param_3 != '\0') && (DAT_180b0cde0 != '\0')) && (DAT_180c71a40 <= 0.01)) {
            local_68 = 0x3f800000;
            local_50[1] = DAT_180b0cfa8;
            local_50[0] = DAT_180b0cf38;
            local_70 = local_50;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_50;
            auVar7 = vinsertps_avx(auVar7,ZEXT416(DAT_180b0cfa0),0x10);
            local_78 = DAT_180b0cf34;
            local_80 = DAT_180b0cf30;
            local_88 = DAT_180b0cec0;
            local_90 = DAT_180b0cf2c;
            local_98 = DAT_180b0ceb8;
            uStack_48._4_4_ = auVar6._12_4_;
            uStack_48._0_4_ = (float)DAT_180b0d010;
            local_50 = (undefined1  [8])auVar7._0_8_;
            local_a0 = CONCAT44(local_a0._4_4_,DAT_180b0ceb4);
            local_a8 = CONCAT44(local_a8._4_4_,DAT_180b0cf28);
            FUN_180253a60(param_2,auVar8._0_8_,auVar10._0_8_,DAT_180b0ceb0);
          }
          local_a8 = lVar2;
          FUN_1802bd480();
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    }
  }
}




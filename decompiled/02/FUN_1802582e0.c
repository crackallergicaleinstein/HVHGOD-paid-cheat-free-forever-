// FUN_1802582e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802582e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802582e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  short sVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar5;
  undefined1 auVar6 [64];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  float local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float local_78;
  float local_74;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  if (DAT_180cadb70 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_c8 = _DAT_180bb8890;
    uStack_c0 = uRam0000000180bb8898;
    uStack_b8 = uRam0000000180bb88a0;
    uStack_b0 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    FUN_180275560();
    fVar10 = *(float *)(param_2 + 0xc) - local_78;
    auVar6 = ZEXT464((uint)(*(float *)(param_2 + 0x14) - local_70));
    auVar9 = ZEXT464((uint)(*(float *)(param_2 + 0x10) - local_74));
    sVar2 = thunk_FUN_180624430(fVar10);
    if (((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(auVar9._0_8_), sVar2 < 1)) &&
       (sVar2 = thunk_FUN_180624430(auVar6._0_8_), sVar2 < 1)) {
      uVar7 = *param_3;
      sVar2 = thunk_FUN_180624430(uVar7);
      if (sVar2 < 1) {
        uVar8 = param_3[1];
        sVar2 = thunk_FUN_180624430(uVar8);
        if ((sVar2 < 1) &&
           (sVar2 = thunk_FUN_180624430(param_3[2]), local_e8 = DAT_180cadbe4,
           local_f0 = DAT_180cadbe0, uVar1 = DAT_180b8e5d8, sVar2 < 1)) {
          uVar5 = DAT_180cadbdc;
          UVar3 = GetTickCount64();
          local_100 = auVar9._0_4_;
          local_118 = uVar7;
          local_110 = uVar8;
          local_108 = fVar10;
          local_f8 = uVar5;
          FUN_180252e50(extraout_XMM0_Qa,*(undefined8 *)(param_2 + 0x80),UVar3,uVar1);
          lVar4 = FUN_180252d60(&DAT_180c7e1f0);
          if (*(char *)(lVar4 + 0x2b0) != '\0') {
          }
          auVar6 = ZEXT464(DAT_180b8e5d0);
          sVar2 = thunk_FUN_180624430(DAT_180b8e5d0);
          if (0 < sVar2) {
          }
          auVar9 = ZEXT464(DAT_180b8e5d4);
          sVar2 = thunk_FUN_180624430(DAT_180b8e5d4);
          if (sVar2 < 1) {
            local_d0 = 0;
            local_d8 = auVar6._0_4_;
            local_d4 = auVar9._0_4_;
            FUN_1803e07c0(0,&local_d8);
          }
        }
      }
    }
  }
  DAT_180b8e5d4 = 0;
  DAT_180b8e5d0 = 0;
  _DAT_180b8e5c0 = (undefined1  [16])0x0;
  DAT_180b8e5b8 = 0;
}




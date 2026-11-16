// FUN_180270b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180270b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180270b60(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  uint *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined *local_100;
  char ***local_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char **local_a8;
  longlong local_a0;
  char *local_98;
  longlong local_90;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_f8 = _DAT_180bb8890;
  lStack_f0 = lRam0000000180bb8898;
  uStack_e8 = uRam0000000180bb88a0;
  uStack_e0 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f0fa0;
  lVar11 = DAT_1808da460;
  if ((DAT_1808f0fa0 == DAT_1808da460) && (pcVar12 = (code *)DAT_180c64ed0, DAT_180c64ed0 != 0)) {
LAB_180270d39:
    lVar11 = (*pcVar12)(0,0);
  }
  else {
    UVar5 = GetTickCount64();
    if ((lVar6 != lVar11) || (DAT_180c64ee0 <= UVar5)) {
      local_100 = &DAT_1808f0f50;
      iVar4 = FUN_1805f68d0(&DAT_1808f0f50);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f0f9c == 0x7fffffff) {
        DAT_1808f0f9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar10 = 1000;
      if (DAT_1808f0fa0 == lVar11) {
        if ((DAT_180c64ed0 == 0) && (DAT_180c64ee0 <= UVar5)) goto LAB_180270c9f;
      }
      else {
        DAT_1808f0f40 = 1000;
LAB_180270c9f:
        lVar6 = -1;
        do {
          local_a0 = lVar6 + 1;
          lVar2 = lVar6 + 1;
          lVar6 = local_a0;
        } while ("engine2.dll:4C8B05????????4D85C07410"[lVar2] != '\0');
        local_a8 = (char **)0x180826378;
        local_98 = "patterns::get_net_channel";
        local_90 = 0x19;
        DAT_180c64ed0 = FUN_1800e5d20(&local_98,&local_a8);
        DAT_1808f0fa0 = lVar11;
        DAT_180c64ee0 = 0xffffffffffffffff;
        if (DAT_180c64ed0 == 0) {
          DAT_180c64ee0 = DAT_1808f0f40 + UVar5;
          uVar10 = 60000;
          if (DAT_1808f0f40 < 60000) {
            uVar10 = DAT_1808f0f40 * 2;
          }
        }
        DAT_1808f0f40 = uVar10;
      }
      pcVar12 = (code *)DAT_180c64ed0;
      FUN_1805f68fc(&DAT_1808f0f50);
      if (pcVar12 != (code *)0x0) goto LAB_180270d39;
    }
    lVar11 = 0;
  }
  if (((lStack_f0 == 0) || (lVar11 == 0)) || (*DAT_180bb8958 == 0)) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    auVar16 = ZEXT464(*(uint *)(*DAT_180bb8958 + 0x30));
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    puVar7 = (uint *)FUN_18027b180(&local_100,lVar11);
    auVar13 = ZEXT864(0);
    if ((char)puVar7[1] == '\0') {
      auVar17 = ZEXT864(0);
    }
    else {
      auVar17 = ZEXT464(*puVar7);
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    if ((DAT_180cd3cd0 & 1) == 0) {
      DAT_180cd3cd0 = DAT_180cd3cd0 | 1;
      local_98 = (char *)CONCAT44(local_98._4_4_,0x3fd84236);
      local_90 = 0;
      local_a8 = &local_98;
      local_a0 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_a8);
      DAT_180cd3cd8 = local_90;
    }
    auVar15 = ZEXT464(*(uint *)(DAT_180cd3cd8 + 0x58));
    if ((DAT_180cd3cc0 & 1) == 0) {
      DAT_180cd3cc0 = DAT_180cd3cc0 | 1;
      local_a8 = (char **)CONCAT44(local_a8._4_4_,0x8c8dc452);
      local_a0 = 0;
      local_f8 = &local_a8;
      lStack_f0 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_f8);
      DAT_180cd3cc8 = local_a0;
    }
    auVar14 = ZEXT464(*(uint *)(DAT_180cd3cc8 + 0x58));
    sVar3 = thunk_FUN_180624430(auVar16._0_8_);
    if (((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(auVar14._0_8_), sVar3 < 1)) &&
       ((sVar3 = thunk_FUN_180624430(auVar15._0_8_), sVar3 < 1 &&
        (sVar3 = thunk_FUN_180624430(auVar17._0_8_), sVar3 < 1)))) {
      local_108._0_4_ = auVar13._0_4_;
      if ((float)local_108._0_4_ < auVar15._0_4_) {
        auVar1 = vminss_avx(auVar15._0_16_,auVar14._0_16_);
        auVar14 = ZEXT1664(auVar1);
      }
      auVar1 = vmaxss_avx(auVar13._0_16_,auVar17._0_16_);
      local_108._4_4_ = auVar14._0_4_ - auVar1._0_4_ * 0.5;
      local_100 = (undefined *)CONCAT44(local_100._4_4_,0x3e4ccccd);
      ppuVar9 = (undefined **)local_108;
      if ((float)local_108._0_4_ <= (float)local_108._4_4_) {
        ppuVar9 = (undefined **)(local_108 + 4);
      }
      ppuVar8 = &local_100;
      if ((float)local_108._4_4_ <= 0.2) {
        ppuVar8 = ppuVar9;
      }
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)ppuVar8;
      *(bool *)(param_1 + 1) = (float)local_108._0_4_ < (float)local_108._4_4_;
      *(int *)param_1 = auVar16._0_4_;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)param_1 = 0;
    }
  }
}




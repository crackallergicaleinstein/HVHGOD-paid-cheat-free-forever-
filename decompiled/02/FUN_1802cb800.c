// FUN_1802cb800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb800 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1802cb800(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 local_178 [172];
  undefined4 local_cc;
  char local_bd;
  char local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [12];
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  if (DAT_180b8e2b0 == '\0') {
  }
  lVar5 = FUN_1803d4150(param_1,*param_1);
  iVar4 = DAT_180c6ec38;
  if (lVar5 == 0) {
  }
  uVar9 = 0xffffffffffffffff;
  if ((DAT_180c6ec38 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ec40 <= UVar6)) {
    local_1c8 = &DAT_1808fd7b0;
    iVar4 = FUN_1805f68d0(&DAT_1808fd7b0);
    if (iVar4 != 0) goto LAB_1802cbcd2;
    if (DAT_1808fd7fc == 0x7fffffff) {
      DAT_1808fd7fc = 0x7ffffffe;
      goto LAB_1802cbce7;
    }
    if ((DAT_180c6ec38 == 0) && (DAT_180c6ec40 <= UVar6)) {
      DAT_180c6ec38 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c6ec38 == 0) {
        DAT_180c6ec40 = UVar6 + 1000;
      }
      else {
        DAT_180c6ec40 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c6ec38;
    FUN_1805f68fc(&DAT_1808fd7b0);
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  bVar2 = false;
  if (iVar4 + lVar5 != 0) {
    local_1c8 = (undefined *)0x0;
    cVar3 = FUN_1804514f0(&local_1c8,iVar4 + lVar5,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar8 = local_1c8;
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  iVar4 = DAT_180c6ec28;
  fVar10 = 0.0;
  if ((!bVar2) || (puVar8 == (undefined *)0x0)) {
LAB_1802cbaa6:
    local_68 = (float)param_1[1];
    local_1c8 = *(undefined **)(param_1 + 1);
    local_60 = (float)param_1[3];
  }
  else {
    if ((DAT_180c6ec28 == 0) && (UVar6 = GetTickCount64(), DAT_180c6ec30 <= UVar6)) {
      local_1c8 = &DAT_1808fd800;
      iVar4 = FUN_1805f68d0(&DAT_1808fd800);
      if (iVar4 != 0) goto LAB_1802cbcd2;
      if (DAT_1808fd84c == 0x7fffffff) {
        DAT_1808fd84c = 0x7ffffffe;
        goto LAB_1802cbce7;
      }
      if ((DAT_180c6ec28 == 0) && (DAT_180c6ec30 <= UVar6)) {
        DAT_180c6ec28 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6ec28 == 0) {
          uVar9 = UVar6 + 1000;
        }
        DAT_180c6ec30 = uVar9;
      }
      iVar4 = DAT_180c6ec28;
      FUN_1805f68fc(&DAT_1808fd800);
    }
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    puVar8 = puVar8 + iVar4;
    bVar2 = false;
    if (puVar8 != (undefined *)0x0) {
      local_1c8 = (undefined *)CONCAT44(fVar10,fVar10);
      local_1c0 = fVar10;
      cVar3 = FUN_1804514f0(&local_1c8,puVar8,0xc);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        local_1b8 = local_1c8;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,local_1c0);
        bVar2 = true;
      }
    }
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (!bVar2) goto LAB_1802cbaa6;
    auVar1 = vunpcklps_avx(ZEXT416((uint)(float)local_1b8),ZEXT416(local_1b8._4_4_));
    local_1c8 = auVar1._0_8_;
    local_60 = (float)uStack_1b0;
    local_68 = (float)local_1b8;
  }
  local_68 = local_68 + fVar10;
  local_64 = fVar10 + local_1c8._4_4_;
  local_60 = local_60 + 36.0;
  if (DAT_180b8e2b0 != '\0') {
    iVar4 = FUN_1805f68d0(&DAT_180b8e260);
    if (iVar4 != 0) {
LAB_1802cbcd2:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e2ac == 0x7fffffff) {
      DAT_180b8e2ac = 0x7ffffffe;
LAB_1802cbce7:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_1b8 = (undefined *)_DAT_180b8e220;
    uStack_1b0 = uRam0000000180b8e228;
    uStack_1a8 = uRam0000000180b8e230;
    uStack_1a0 = uRam0000000180b8e238;
    local_198 = _DAT_180b8e240;
    uStack_190 = uRam0000000180b8e248;
    uStack_188 = uRam0000000180b8e250;
    uStack_180 = uRam0000000180b8e258;
    FUN_1805f68fc(&DAT_180b8e260);
    FUN_1802e2da0(local_58,&local_1b8);
    if ((local_4c != '\0') && (DAT_180b0c514 != 1)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_1b8 = (undefined *)_DAT_180bb8890;
      uStack_1b0 = uRam0000000180bb8898;
      uStack_1a8 = uRam0000000180bb88a0;
      uStack_1a0 = uRam0000000180bb88a8;
      cVar3 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_1e8 = uStack_1a8;
      if (cVar3 != '\0') {
        local_1e8 = uStack_1b0;
      }
      local_1d0 = 7;
      local_1e0 = 0x1c3003;
      FUN_180417de0(uStack_1b0,local_178,local_58,&local_68);
      if ((local_70 != '\0') && (local_bd == '\0')) {
        thunk_FUN_180624430(local_cc);
      }
    }
  }
}




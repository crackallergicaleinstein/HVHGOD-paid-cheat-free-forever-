// FUN_1803de710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803de710 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803de710(undefined8 param_1,longlong param_2,char param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong lVar15;
  float fVar16;
  undefined *puVar17;
  float fVar18;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  int local_6e8;
  int local_6e0;
  char local_6d8;
  undefined *local_6c8;
  undefined1 uStack_6c0;
  longlong local_6b8;
  undefined8 local_6b0;
  longlong lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  local_6d8 = param_3;
  local_6b8 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6b0 = _DAT_180bb8890;
  lStack_6a8 = lRam0000000180bb8898;
  uStack_6a0 = uRam0000000180bb88a0;
  uStack_698 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (param_2 == 0) {
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  lVar15 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar15 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (lVar15 == 0) {
  }
  iVar2 = *(int *)(lVar15 + 0x10);
  if (iVar2 < 0) {
  }
  if (0x40 < iVar2) {
  }
  uVar13 = 0;
  if (iVar2 != 0) {
    do {
      lVar10 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 8 + (longlong)(int)uVar13 * 8);
      puVar8 = (uint *)0x0;
      if (lVar10 != 0) {
        puVar8 = (uint *)(lVar10 + 0x10);
      }
      if ((puVar8 != (uint *)0x0) && (((*puVar8 & 8) != 0 || ((*puVar8 & 0x10) != 0))))
      goto LAB_1803ded1e;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulonglong)(longlong)iVar2);
  }
  if (iVar2 == 0x40) {
  }
  puVar8 = (uint *)FUN_1803dfb00();
  iVar6 = DAT_180c72070;
  if (puVar8 == (uint *)0x0) {
  }
  if ((DAT_180c72070 == 0) && (UVar9 = GetTickCount64(), DAT_180c72068 <= UVar9)) {
    local_6c8 = &DAT_1809babe0;
    iVar6 = FUN_1805f68d0(&DAT_1809babe0);
    if (iVar6 != 0) goto LAB_1803deef5;
    if (DAT_1809bac2c == 0x7fffffff) {
      DAT_1809bac2c = 0x7ffffffe;
      goto LAB_1803deeea;
    }
    if ((DAT_180c72070 == 0) && (DAT_180c72068 <= UVar9)) {
      DAT_180c72070 = FUN_1804174b0("C_BasePlayerPawn");
      if (DAT_180c72070 == 0) {
        DAT_180c72068 = UVar9 + 1000;
      }
      else {
        DAT_180c72068 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c72070;
    FUN_1805f68fc(&DAT_1809babe0);
  }
  if ((lStack_6a8 == 0) || (iVar6 == 0)) {
LAB_1803dee9b:
    *(int *)(lVar15 + 0x10) = iVar2;
  }
  lVar12 = iVar6 + lStack_6a8;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  bVar3 = false;
  if (lVar12 != 0) {
    local_6c8 = (undefined *)0x0;
    cVar5 = FUN_1804514f0(&local_6c8,lVar12,8);
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  puVar17 = local_6c8;
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  puVar14 = (undefined *)0x0;
  if (bVar3) {
    puVar14 = puVar17;
  }
  if (puVar14 == (undefined *)0x0) goto LAB_1803dee9b;
  iVar6 = DAT_180c72038;
  if (DAT_180c72038 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c72040) goto LAB_1803dee9b;
    local_6c8 = &DAT_1809bac30;
    iVar6 = FUN_1805f68d0(&DAT_1809bac30);
    if (iVar6 != 0) goto LAB_1803deef5;
    if (DAT_1809bac7c == 0x7fffffff) {
      DAT_1809bac7c = 0x7ffffffe;
      goto LAB_1803deeea;
    }
    if ((DAT_180c72038 == 0) && (DAT_180c72040 <= UVar9)) {
      DAT_180c72038 = FUN_1804174b0("CPlayer_MovementServices");
      if (DAT_180c72038 == 0) {
        DAT_180c72040 = UVar9 + 1000;
      }
      else {
        DAT_180c72040 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c72038;
    FUN_1805f68fc(&DAT_1809bac30);
    if (iVar6 == 0) goto LAB_1803dee9b;
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (puVar14 + (longlong)iVar6 + 8 == (undefined *)0x0) {
    uStack_6c0 = 0;
    bVar4 = false;
    bVar3 = false;
  }
  else {
    local_6c8 = (undefined *)0x0;
    cVar5 = FUN_1804514f0(&local_6c8,puVar14 + (longlong)iVar6 + 8,8);
    if (cVar5 == '\0') {
      bVar3 = false;
      bVar4 = false;
      uStack_6c0 = 0;
    }
    else {
      uStack_6c0 = 1;
      bVar3 = true;
      bVar4 = true;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    bVar3 = bVar4;
  }
  iVar6 = DAT_180c72050;
  if (!bVar3) goto LAB_1803dee9b;
  puVar17 = local_6c8;
  if ((DAT_180c72050 == 0) && (UVar9 = GetTickCount64(), DAT_180c72048 <= UVar9)) {
    local_6c8 = &DAT_1809bac80;
    iVar6 = FUN_1805f68d0(&DAT_1809bac80);
    if (iVar6 != 0) goto LAB_1803deef5;
    if (DAT_1809baccc == 0x7fffffff) {
      DAT_1809baccc = 0x7ffffffe;
      goto LAB_1803deeea;
    }
    if ((DAT_180c72050 == 0) && (DAT_180c72048 <= UVar9)) {
      DAT_180c72050 = FUN_1804174b0("CPlayer_MovementServices");
      if (DAT_180c72050 == 0) {
        DAT_180c72048 = UVar9 + 1000;
      }
      else {
        DAT_180c72048 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c72050;
    FUN_1805f68fc(&DAT_1809bac80);
  }
  iVar7 = DAT_180c72054;
  if ((DAT_180c72054 == 0) && (UVar9 = GetTickCount64(), DAT_180c72010 <= UVar9)) {
    local_6c8 = &DAT_1809bab30;
    iVar7 = FUN_1805f68d0(&DAT_1809bab30);
    if (iVar7 != 0) {
LAB_1803deef5:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bab7c == 0x7fffffff) {
      DAT_1809bab7c = 0x7ffffffe;
LAB_1803deeea:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c72054 == 0) && (DAT_180c72010 <= UVar9)) {
      DAT_180c72054 = FUN_1804174b0("CPlayer_MovementServices");
      if (DAT_180c72054 == 0) {
        DAT_180c72010 = UVar9 + 1000;
      }
      else {
        DAT_180c72010 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c72054;
    FUN_1805f68fc(&DAT_1809bab30);
  }
  if ((((ulonglong)puVar17 & 0x18) == 0) || (iVar6 == 0)) {
    fVar16 = 0.0;
    fVar18 = 0.0;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    fVar16 = 0.0;
    bVar3 = false;
    if (puVar14 + iVar6 != (undefined *)0x0) {
      local_6c8 = (undefined *)((ulonglong)local_6c8 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_6c8,puVar14 + iVar6,4);
      if (cVar5 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    fVar18 = local_6c8._0_4_;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (!bVar3) {
      fVar18 = *(float *)(lVar15 + 0x48);
    }
  }
  if ((((ulonglong)puVar17 & 0x600) != 0) && (iVar7 != 0)) {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    bVar3 = false;
    if (puVar14 + iVar7 != (undefined *)0x0) {
      local_6c8 = (undefined *)CONCAT44(local_6c8._4_4_,fVar16);
      cVar5 = FUN_1804514f0(&local_6c8,puVar14 + iVar7,4);
      if (cVar5 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    fVar16 = local_6c8._0_4_;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (!bVar3) {
      fVar16 = *(float *)(lVar15 + 0x4c);
    }
  }
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined1 *)(puVar8 + 4) = 0;
  *puVar8 = *puVar8 | 7;
  uVar11 = *puVar8;
  puVar8[5] = 0;
  fVar1 = *(float *)(lVar15 + 0x48);
  *puVar8 = uVar11 | 8;
  puVar8[6] = (uint)(fVar1 - fVar18);
  fVar18 = *(float *)(lVar15 + 0x4c);
  *puVar8 = uVar11 | 0x18;
  puVar8[7] = (uint)(fVar18 - fVar16);
  param_2 = local_6b8;
LAB_1803ded1e:
  iVar6 = FUN_1803ddff0(lVar15);
  if (local_6d8 == '\0') {
    if (iVar6 < 0) {
    }
    if (*(int *)(lVar15 + 0x10) == iVar2) {
    }
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c72018) {
    }
    DAT_180c72018 = UVar9 + 2000;
    FUN_18063ab10(local_658,0,0x600);
    local_6e8 = *(int *)(lVar15 + 0x10);
    local_6f0 = (char *)CONCAT44(local_6f0._4_4_,iVar2);
    local_6f8 = *(undefined ***)(param_2 + 8);
    local_6e0 = iVar6;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "command=%lld original_steps=%d prepared_steps=%d shifted=%d initial_wish_added=1 phase=before_native_prediction server_ack=0"
                 );
    local_6f8 = &PTR_180700558;
    if (local_658[0] != '\0') {
      local_6f8 = (undefined **)&DAT_1806bcfc0;
    }
    uVar11 = 0;
  }
  else {
    if (iVar6 == 0) {
    }
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c72020) {
    }
    DAT_180c72020 = UVar9 + 2000;
    FUN_18063ab10(local_658,0,0x600);
    local_6f0 = (char *)CONCAT44(local_6f0._4_4_,*(undefined4 *)(lVar15 + 0x10));
    local_6f8 = *(undefined ***)(param_2 + 8);
    local_6e8 = iVar6;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "command=%lld steps=%d shifted=%d source=final_input server_ack=0");
    local_6f8 = &PTR_180700558;
    if (local_658[0] != '\0') {
      local_6f8 = (undefined **)&DAT_1806bcfc0;
    }
    uVar11 = iVar6 >> 0x1f & 3;
  }
  local_6f0 = local_658;
  FUN_1800f6900(uVar11);
}




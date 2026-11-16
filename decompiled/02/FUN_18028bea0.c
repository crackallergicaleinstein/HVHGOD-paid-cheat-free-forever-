// FUN_18028bea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028bea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028bea0(undefined8 *param_1,undefined *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  int iVar6;
  undefined2 uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 uStack_180;
  int local_178;
  undefined8 local_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_148 [24];
  undefined1 local_130 [32];
  char local_110;
  undefined7 uStack_10f;
  int iStack_108;
  undefined4 uStack_104;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_190 = param_2;
  FUN_18019f240(&local_188);
  if ((char)local_178 != '\0') {
    *param_1 = local_188;
    param_1[1] = uStack_180;
    *(int *)(param_1 + 2) = local_178;
  }
  if (DAT_180c64054 == '\0') {
LAB_18028c6d1:
    *(undefined1 *)(param_1 + 2) = 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_170 = _DAT_180bb8890;
  lStack_168 = lRam0000000180bb8898;
  uStack_160 = uRam0000000180bb88a0;
  uStack_158 = uRam0000000180bb88a8;
  local_188 = _DAT_180bb88b0;
  uStack_180 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar8 = lStack_168;
  if ((((char)uStack_180 == '\0') || (lStack_168 == 0)) || (1 < (int)local_188 - 2U))
  goto LAB_18028c6d1;
  uVar10 = 0xffffffffffffffff;
  if (param_3 == -0x258b5465) {
    iVar6 = DAT_180c6e284;
    if (DAT_180c6e284 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6e270) {
        iVar6 = 0;
      }
      else {
        local_198 = &DAT_1808f3b00;
        iVar6 = FUN_1805f68d0(&DAT_1808f3b00);
        if (iVar6 != 0) goto LAB_18028c703;
        if (DAT_1808f3b4c == 0x7fffffff) {
          DAT_1808f3b4c = 0x7ffffffe;
          goto LAB_18028c718;
        }
        if ((DAT_180c6e284 == 0) && (DAT_180c6e270 <= UVar4)) {
          DAT_180c6e284 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
          if (DAT_180c6e284 == 0) {
            DAT_180c6e270 = UVar4 + 1000;
          }
          else {
            DAT_180c6e270 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6e284;
        FUN_1805f68fc(&DAT_1808f3b00);
      }
    }
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    lVar8 = iVar6 + lVar8;
    if (lVar8 == 0) {
      bVar11 = false;
      puVar9 = local_188;
    }
    else {
      local_198 = (undefined *)0x0;
      cVar1 = FUN_1804514f0(&local_198,lVar8,8);
      if (cVar1 == '\0') {
        bVar11 = false;
        puVar9 = local_188;
      }
      else {
        bVar11 = true;
        puVar9 = local_198;
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if ((!bVar11) || (puVar9 == (undefined *)0x0)) goto LAB_18028c6d1;
    iVar6 = DAT_180c6e280;
    if (DAT_180c6e280 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6e278) {
        iVar6 = 0;
      }
      else {
        local_198 = &DAT_1808f3a60;
        iVar6 = FUN_1805f68d0(&DAT_1808f3a60);
        if (iVar6 != 0) goto LAB_18028c703;
        if (DAT_1808f3aac == 0x7fffffff) {
          DAT_1808f3aac = 0x7ffffffe;
          goto LAB_18028c718;
        }
        if ((DAT_180c6e280 == 0) && (DAT_180c6e278 <= UVar4)) {
          DAT_180c6e280 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
          if (DAT_180c6e280 == 0) {
            DAT_180c6e278 = UVar4 + 1000;
          }
          else {
            DAT_180c6e278 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6e280;
        FUN_1805f68fc(&DAT_1808f3a60);
      }
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    bVar11 = false;
    if (puVar9 + iVar6 != (undefined *)0x0) {
      local_198 = (undefined *)((ulonglong)local_198 & 0xffffffff00000000);
      cVar1 = FUN_1804514f0(&local_198,puVar9 + iVar6,4);
      if (cVar1 == '\0') {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    iVar2 = (int)local_198;
    lVar8 = FUN_18017ea70();
    iVar6 = *(int *)(lVar8 + 4);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      *(int *)(lVar8 + 4) = iVar6;
    }
    iVar3 = 0;
    if (bVar11) {
      iVar3 = iVar2;
    }
    if ((iVar3 == 0) ||
       (param_2 = (undefined *)FUN_1803d4150(iVar6,iVar3), param_2 == (undefined *)0x0))
    goto LAB_18028c6d1;
    iVar6 = DAT_180c6e260;
    if (DAT_180c6e260 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6e268) {
        iVar6 = 0;
      }
      else {
        local_198 = &DAT_1808f3ab0;
        iVar6 = FUN_1805f68d0(&DAT_1808f3ab0);
        if (iVar6 != 0) goto LAB_18028c703;
        if (DAT_1808f3afc == 0x7fffffff) {
          DAT_1808f3afc = 0x7ffffffe;
          goto LAB_18028c718;
        }
        if ((DAT_180c6e260 == 0) && (DAT_180c6e268 <= UVar4)) {
          DAT_180c6e260 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c6e260 == 0) {
            DAT_180c6e268 = UVar4 + 1000;
          }
          else {
            DAT_180c6e268 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6e260;
        FUN_1805f68fc(&DAT_1808f3ab0);
      }
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    bVar11 = false;
    if (local_190 + iVar6 != (undefined *)0x0) {
      local_198 = (undefined *)((ulonglong)local_198 & 0xffffffff00000000);
      cVar1 = FUN_1804514f0(&local_198,local_190 + iVar6,4);
      if (cVar1 == '\0') {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    iVar6 = (int)local_198;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (!bVar11) goto LAB_18028c6d1;
    bVar11 = iVar6 == iVar3;
  }
  else {
    iVar6 = DAT_180c6e258;
    if (DAT_180c6e258 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6e250) {
        iVar6 = 0;
      }
      else {
        local_190 = &DAT_1808f3a10;
        iVar6 = FUN_1805f68d0(&DAT_1808f3a10);
        if (iVar6 != 0) goto LAB_18028c703;
        if (DAT_1808f3a5c == 0x7fffffff) {
          DAT_1808f3a5c = 0x7ffffffe;
          goto LAB_18028c718;
        }
        if ((DAT_180c6e258 == 0) && (DAT_180c6e250 <= UVar4)) {
          DAT_180c6e258 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c6e258 == 0) {
            DAT_180c6e250 = UVar4 + 1000;
          }
          else {
            DAT_180c6e250 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6e258;
        FUN_1805f68fc(&DAT_1808f3a10);
      }
    }
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (param_2 + iVar6 == (undefined *)0x0) {
      bVar11 = false;
    }
    else {
      local_198 = (undefined *)((ulonglong)local_198 & 0xffffffff00000000);
      cVar1 = FUN_1804514f0(&local_198,param_2 + iVar6,4);
      if (cVar1 == '\0') {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    puVar9 = local_198;
    iVar2 = (int)local_198;
    lVar5 = FUN_18017ea70();
    iVar6 = *(int *)(lVar5 + 4);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      *(int *)(lVar5 + 4) = iVar6;
    }
    if ((!bVar11) || (iVar2 == 0)) goto LAB_18028c6d1;
    lVar5 = FUN_1803d4150(iVar6,(ulonglong)puVar9 & 0xffffffff);
    bVar11 = lVar5 == lVar8;
  }
  if (!bVar11) goto LAB_18028c6d1;
  iVar6 = DAT_180c6e25c;
  if (DAT_180c6e25c == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c6e238) {
      iVar6 = 0;
    }
    else {
      local_190 = &DAT_1808f39c0;
      iVar6 = FUN_1805f68d0(&DAT_1808f39c0);
      if (iVar6 != 0) goto LAB_18028c703;
      if (DAT_1808f3a0c == 0x7fffffff) {
        DAT_1808f3a0c = 0x7ffffffe;
        goto LAB_18028c718;
      }
      if ((DAT_180c6e25c == 0) && (DAT_180c6e238 <= UVar4)) {
        DAT_180c6e25c = FUN_1804174b0("C_EconEntity",0x537b0586);
        if (DAT_180c6e25c == 0) {
          DAT_180c6e238 = UVar4 + 1000;
        }
        else {
          DAT_180c6e238 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c6e25c;
      FUN_1805f68fc(&DAT_1808f39c0);
    }
  }
  iVar2 = DAT_180c6e248;
  if (DAT_180c6e248 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c6e240) {
      iVar2 = 0;
    }
    else {
      local_190 = &DAT_1808f3920;
      iVar2 = FUN_1805f68d0(&DAT_1808f3920);
      if (iVar2 != 0) goto LAB_18028c703;
      if (DAT_1808f396c == 0x7fffffff) {
        DAT_1808f396c = 0x7ffffffe;
        goto LAB_18028c718;
      }
      if ((DAT_180c6e248 == 0) && (DAT_180c6e240 <= UVar4)) {
        DAT_180c6e248 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
        if (DAT_180c6e248 == 0) {
          DAT_180c6e240 = UVar4 + 1000;
        }
        else {
          DAT_180c6e240 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c6e248;
      FUN_1805f68fc(&DAT_1808f3920);
    }
  }
  iVar3 = DAT_180c6e228;
  if (DAT_180c6e228 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c6e230) {
      iVar3 = 0;
    }
    else {
      local_190 = &DAT_1808f3970;
      iVar3 = FUN_1805f68d0(&DAT_1808f3970);
      if (iVar3 != 0) {
LAB_18028c703:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f39bc == 0x7fffffff) {
        DAT_1808f39bc = 0x7ffffffe;
LAB_18028c718:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e228 == 0) && (DAT_180c6e230 <= UVar4)) {
        DAT_180c6e228 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c6e228 == 0) {
          uVar10 = UVar4 + 1000;
        }
        DAT_180c6e230 = uVar10;
      }
      iVar3 = DAT_180c6e228;
      FUN_1805f68fc(&DAT_1808f3970);
    }
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (param_2 + (longlong)iVar3 + (longlong)iVar6 + (longlong)iVar2 == (undefined *)0x0) {
    bVar11 = false;
  }
  else {
    local_198 = (undefined *)((ulonglong)local_198 & 0xffffffffffff0000);
    cVar1 = FUN_1804514f0(&local_198,param_2 + (longlong)iVar3 + (longlong)iVar6 + (longlong)iVar2,2
                         );
    if (cVar1 == '\0') {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  uVar7 = local_198._0_2_;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (!bVar11) {
    uVar7 = 0;
  }
  FUN_1801d6430(&DAT_180cc8068,local_148,uVar7,(ulonglong)local_188 & 0xffffffff);
  if ((local_58 == '\0') || ((local_110 == '\0' && (iStack_108 < 0)))) {
    local_178 = (uint)local_178._1_3_ << 8;
  }
  else {
    local_188 = (undefined *)CONCAT71(uStack_10f,local_110);
    uStack_180 = CONCAT44(uStack_104,iStack_108);
    local_178 = CONCAT31(local_178._1_3_,1);
  }
  *param_1 = local_188;
  param_1[1] = uStack_180;
  *(int *)(param_1 + 2) = local_178;
  if (local_58 == '\0') {
  }
  FUN_18015c010(local_130);
}




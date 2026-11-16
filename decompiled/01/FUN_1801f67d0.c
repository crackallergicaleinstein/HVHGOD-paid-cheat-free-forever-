// FUN_1801f67d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f67d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f67d0(undefined *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ULONGLONG UVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_c8 [48];
  char local_98;
  longlong local_90;
  char local_88;
  undefined *local_80;
  undefined *local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  if (param_1 == (undefined *)0x0) {
  }
  if (DAT_180b8f9e8 == '\0') {
  }
  local_80 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_60 = _DAT_180bb8890;
  uStack_58 = uRam0000000180bb8898;
  uStack_50 = uRam0000000180bb88a0;
  uStack_48 = uRam0000000180bb88a8;
  local_70 = _DAT_180bb88b0;
  uStack_68 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((char)uStack_68 == '\0') {
  }
  local_70 = uStack_58;
  if (uStack_58 == 0) {
  }
  if (param_2 == -0x78331fc2) {
  }
  if (((param_2 == -0x4bb6637b) || (param_2 == 0x126045e0)) || (param_2 == 0x5a95fe17)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  uVar11 = 0xffffffffffffffff;
  local_88 = cVar1;
  if ((param_2 == 0x48cb9c08) || (cVar1 != '\0')) {
    lVar10 = 0;
    if ((param_2 == 0x48cb9c08) || (cVar1 != '\0')) {
      bVar12 = DAT_180c632bc == 0;
      iVar2 = DAT_180c632bc;
      if (bVar12) {
        UVar6 = GetTickCount64();
        if (DAT_180c632c0 <= UVar6) {
          local_78 = &DAT_1808e74b0;
          iVar2 = FUN_1805f68d0(&DAT_1808e74b0);
          if (iVar2 != 0) goto LAB_1801f6e13;
          if (DAT_1808e74fc == 0x7fffffff) {
            DAT_1808e74fc = 0x7ffffffe;
            goto LAB_1801f6e28;
          }
          if ((DAT_180c632bc == 0) && (DAT_180c632c0 <= UVar6)) {
            DAT_180c632bc = FUN_1804174b0("C_CSPlayerPawn",0x2279a8c6);
            if (DAT_180c632bc == 0) {
              DAT_180c632c0 = UVar6 + 1000;
            }
            else {
              DAT_180c632c0 = 0xffffffffffffffff;
            }
          }
          iVar2 = DAT_180c632bc;
          FUN_1805f68fc(&DAT_1808e74b0);
          bVar12 = iVar2 == 0;
          goto LAB_1801f69c6;
        }
      }
      else {
LAB_1801f69c6:
        if (!bVar12 && -1 < iVar2) {
          lVar9 = (longlong)iVar2 + local_70;
          if (lVar9 == 0) {
            bVar12 = false;
            uVar8 = local_70;
            uVar7 = (uint)local_70;
          }
          else {
            local_78 = (undefined *)((ulonglong)local_78 & 0xffffffff00000000);
            lVar4 = FUN_18017ea70();
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
            cVar1 = FUN_1804514c0(&local_78,lVar9,4);
            if (cVar1 == '\0') {
              bVar12 = false;
              lVar9 = FUN_18017ea70();
              uVar7 = *(uint *)(lVar9 + 4);
              if (uVar7 != 0) {
                uVar7 = uVar7 - 1;
                *(uint *)(lVar9 + 4) = uVar7;
              }
              uVar8 = (ulonglong)uVar7;
              uVar7 = (uint)local_70;
            }
            else {
              bVar12 = true;
              lVar9 = FUN_18017ea70();
              uVar7 = *(uint *)(lVar9 + 4);
              if (uVar7 != 0) {
                uVar7 = uVar7 - 1;
                *(uint *)(lVar9 + 4) = uVar7;
              }
              uVar8 = (ulonglong)uVar7;
              uVar7 = (uint)local_78;
            }
          }
          if (!bVar12) {
            uVar7 = 0;
          }
          if ((uVar7 != 0) && (uVar7 != 0xffffffff)) {
            uVar3 = uVar7 & 0x7fff;
            uVar5 = (ulonglong)uVar3;
            if (uVar3 != 0x7fff) {
              if (uVar3 < 0x4000) {
                uVar8 = (&DAT_180b0e108)[uVar5 * 4];
                if (((uVar8 & 1) == 0) && ((&DAT_180b0e110)[uVar5 * 8] == uVar7)) {
                  lVar10 = (&DAT_180b0e118)[uVar5 * 4];
                  if (((&DAT_180b0e108)[uVar5 * 4] == uVar8) &&
                     ((((&DAT_180b0e110)[uVar5 * 8] == uVar7 && (lVar10 != 0)) &&
                      ((&DAT_180b0e120)[uVar5 * 8] != 0)))) goto LAB_1801f6aab;
                }
                lVar10 = 0;
              }
              else {
                lVar10 = FUN_1803d4150(uVar8,uVar7);
              }
            }
          }
        }
      }
LAB_1801f6aab:
      if (param_2 == 0x48cb9c08) {
      }
      param_1 = local_80;
      cVar1 = local_88;
    }
  }
  else {
    iVar2 = FUN_18027d2c0(param_2);
    if (iVar2 == -1) {
    }
    lVar10 = 0;
  }
  local_60 = 0;
  iVar2 = DAT_180c632b8;
  if (DAT_180c632b8 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c632b0) {
      iVar2 = 0;
    }
    else {
      local_80 = &DAT_1808e7460;
      iVar2 = FUN_1805f68d0(&DAT_1808e7460);
      if (iVar2 != 0) goto LAB_1801f6e13;
      if (DAT_1808e74ac == 0x7fffffff) {
        DAT_1808e74ac = 0x7ffffffe;
        goto LAB_1801f6e28;
      }
      if ((DAT_180c632b8 == 0) && (DAT_180c632b0 <= UVar6)) {
        DAT_180c632b8 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c632b8 == 0) {
          DAT_180c632b0 = UVar6 + 1000;
        }
        else {
          DAT_180c632b0 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c632b8;
      FUN_1805f68fc(&DAT_1808e7460);
    }
  }
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar2);
  iVar2 = DAT_180c632a4;
  if (DAT_180c632a4 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c632a8) {
      iVar2 = 0;
    }
    else {
      local_80 = &DAT_1808e7410;
      iVar2 = FUN_1805f68d0(&DAT_1808e7410);
      if (iVar2 != 0) goto LAB_1801f6e13;
      if (DAT_1808e745c == 0x7fffffff) {
        DAT_1808e745c = 0x7ffffffe;
        goto LAB_1801f6e28;
      }
      if ((DAT_180c632a4 == 0) && (DAT_180c632a8 <= UVar6)) {
        DAT_180c632a4 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c632a4 == 0) {
          DAT_180c632a8 = UVar6 + 1000;
        }
        else {
          DAT_180c632a8 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c632a4;
      FUN_1805f68fc(&DAT_1808e7410);
    }
  }
  uStack_58 = CONCAT44(iVar2,(undefined4)uStack_58);
  iVar2 = DAT_180c632a0;
  if (DAT_180c632a0 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c63298) {
      iVar2 = 0;
    }
    else {
      local_80 = &DAT_1808e73c0;
      iVar2 = FUN_1805f68d0(&DAT_1808e73c0);
      if (iVar2 != 0) goto LAB_1801f6e13;
      if (DAT_1808e740c == 0x7fffffff) {
        DAT_1808e740c = 0x7ffffffe;
        goto LAB_1801f6e28;
      }
      if ((DAT_180c632a0 == 0) && (DAT_180c63298 <= UVar6)) {
        DAT_180c632a0 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
        if (DAT_180c632a0 == 0) {
          DAT_180c63298 = UVar6 + 1000;
        }
        else {
          DAT_180c63298 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c632a0;
      FUN_1805f68fc(&DAT_1808e73c0);
    }
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
  iVar2 = DAT_180c6328c;
  if (DAT_180c6328c == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c63290) {
      iVar2 = 0;
    }
    else {
      local_80 = &DAT_1808e7370;
      iVar2 = FUN_1805f68d0(&DAT_1808e7370);
      if (iVar2 != 0) {
LAB_1801f6e13:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e73bc == 0x7fffffff) {
        DAT_1808e73bc = 0x7ffffffe;
LAB_1801f6e28:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6328c == 0) && (DAT_180c63290 <= UVar6)) {
        DAT_180c6328c = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c6328c == 0) {
          uVar11 = UVar6 + 1000;
        }
        DAT_180c63290 = uVar11;
      }
      iVar2 = DAT_180c6328c;
      FUN_1805f68fc(&DAT_1808e7370);
    }
  }
  uStack_50 = CONCAT44(iVar2,(undefined4)uStack_50);
  local_98 = cVar1;
  local_90 = lVar10;
  FUN_1801f7440(local_70,param_1,param_3,&local_60);
}




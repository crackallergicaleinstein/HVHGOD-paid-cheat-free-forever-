// FUN_180278f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180278f80 */

undefined8 FUN_180278f80(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  ulonglong uVar10;
  undefined1 auVar11 [64];
  undefined1 local_48 [8];
  char local_40;
  char local_3c;
  
  iVar2 = DAT_180c64ba0;
  if (param_2 == 0) {
    return 0;
  }
  lVar5 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_180cc9372 == '\0') {
    return 0;
  }
  if (DAT_180cc9330 == 0) {
    return 0;
  }
  if (DAT_180cc9338 == 0) {
    return 0;
  }
  uVar8 = 0xffffffffffffffff;
  if (DAT_180cc9348 != 0) {
    if ((DAT_180c64ba0 == 0) && (UVar6 = GetTickCount64(), DAT_180c64ba8 <= UVar6)) {
      iVar2 = FUN_1805f68d0(&DAT_1808efdd0);
      if (iVar2 != 0) goto LAB_1802796c7;
      if (DAT_1808efe1c == 0x7fffffff) {
        DAT_1808efe1c = 0x7ffffffe;
        goto LAB_1802796bc;
      }
      if ((DAT_180c64ba0 == 0) && (DAT_180c64ba8 <= UVar6)) {
        DAT_180c64ba0 = FUN_1804174b0("C_CSWeaponBase");
        if (DAT_180c64ba0 == 0) {
          DAT_180c64ba8 = UVar6 + 1000;
        }
        else {
          DAT_180c64ba8 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c64ba0;
      FUN_1805f68fc(&DAT_1808efdd0);
    }
    iVar3 = DAT_180c64b98;
    if (*(char *)(iVar2 + DAT_180cc9330) != '\0') {
      return 0;
    }
    if ((DAT_180c64b98 == 0) && (UVar6 = GetTickCount64(), DAT_180c64b90 <= UVar6)) {
      iVar2 = FUN_1805f68d0(&DAT_1808efd30);
      if (iVar2 != 0) goto LAB_1802796c7;
      if (DAT_1808efd7c == 0x7fffffff) {
        DAT_1808efd7c = 0x7ffffffe;
        goto LAB_1802796bc;
      }
      if ((DAT_180c64b98 == 0) && (DAT_180c64b90 <= UVar6)) {
        DAT_180c64b98 = FUN_1804174b0("C_BasePlayerWeapon");
        if (DAT_180c64b98 == 0) {
          DAT_180c64b90 = UVar6 + 1000;
        }
        else {
          DAT_180c64b90 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c64b98;
      FUN_1805f68fc(&DAT_1808efd30);
    }
    if (*(int *)(iVar3 + DAT_180cc9330) < 1) {
      return 0;
    }
  }
  iVar2 = DAT_180c64b9c;
  if (param_4 == '\0') {
    return 1;
  }
  if ((DAT_180c64b9c == 0) && (UVar6 = GetTickCount64(), DAT_180c64b78 <= UVar6)) {
    iVar2 = FUN_1805f68d0(&DAT_1808efce0);
    if (iVar2 != 0) goto LAB_1802796c7;
    if (DAT_1808efd2c == 0x7fffffff) {
      DAT_1808efd2c = 0x7ffffffe;
      goto LAB_1802796bc;
    }
    if ((DAT_180c64b9c == 0) && (DAT_180c64b78 <= UVar6)) {
      DAT_180c64b9c = FUN_1804174b0("CBasePlayerController");
      if (DAT_180c64b9c == 0) {
        DAT_180c64b78 = UVar6 + 1000;
      }
      else {
        DAT_180c64b78 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c64b9c;
    FUN_1805f68fc(&DAT_1808efce0);
  }
  iVar3 = DAT_180c64b88;
  iVar2 = *(int *)(iVar2 + param_3);
  if (iVar2 <= DAT_180cc9680) {
    return 0;
  }
  if ((DAT_180c64b88 == 0) && (UVar6 = GetTickCount64(), DAT_180c64b80 <= UVar6)) {
    iVar3 = FUN_1805f68d0(&DAT_1808efc40);
    if (iVar3 != 0) goto LAB_1802796c7;
    if (DAT_1808efc8c == 0x7fffffff) {
      DAT_1808efc8c = 0x7ffffffe;
      goto LAB_1802796bc;
    }
    if ((DAT_180c64b88 == 0) && (DAT_180c64b80 <= UVar6)) {
      DAT_180c64b88 = FUN_1804174b0("CCSPlayer_WeaponServices");
      if (DAT_180c64b88 == 0) {
        DAT_180c64b80 = UVar6 + 1000;
      }
      else {
        DAT_180c64b80 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c64b88;
    FUN_1805f68fc(&DAT_1808efc40);
  }
  fVar9 = *(float *)(iVar3 + DAT_180cc9338);
  sVar1 = thunk_FUN_180624430(fVar9);
  iVar3 = DAT_180c64b68;
  if (0 < sVar1) {
    return 0;
  }
  if ((float)(iVar2 + 1) * 0.015625 < fVar9) {
    return 0;
  }
  lVar5 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x44);
  }
  if ((DAT_180c64b68 == 0) && (UVar6 = GetTickCount64(), DAT_180c64b70 <= UVar6)) {
    iVar3 = FUN_1805f68d0(&DAT_1808efc90);
    if (iVar3 != 0) goto LAB_1802796c7;
    if (DAT_1808efcdc == 0x7fffffff) {
      DAT_1808efcdc = 0x7ffffffe;
      goto LAB_1802796bc;
    }
    if ((DAT_180c64b68 == 0) && (DAT_180c64b70 <= UVar6)) {
      DAT_180c64b68 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
      if (DAT_180c64b68 == 0) {
        DAT_180c64b70 = UVar6 + 1000;
      }
      else {
        DAT_180c64b70 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c64b68;
    FUN_1805f68fc(&DAT_1808efc90);
  }
  iVar7 = DAT_180c64b64;
  iVar4 = DAT_180c64b60;
  iVar3 = *(int *)(iVar3 + DAT_180cc9330);
  if (DAT_180cc9348 == 0) {
    if ((DAT_180c64b60 == 0) && (UVar6 = GetTickCount64(), DAT_180c64b58 <= UVar6)) {
      iVar4 = FUN_1805f68d0(&DAT_1808efbf0);
      if (iVar4 != 0) goto LAB_1802796c7;
      if (DAT_1808efc3c == 0x7fffffff) {
        DAT_1808efc3c = 0x7ffffffe;
        goto LAB_1802796bc;
      }
      if ((DAT_180c64b60 == 0) && (DAT_180c64b58 <= UVar6)) {
        DAT_180c64b60 = FUN_1804174b0("C_BasePlayerWeapon",0xde66c257);
        if (DAT_180c64b60 == 0) {
          uVar8 = UVar6 + 1000;
        }
        DAT_180c64b58 = uVar8;
      }
      iVar4 = DAT_180c64b60;
      FUN_1805f68fc(&DAT_1808efbf0);
    }
    if (iVar3 <= iVar2) {
      return 1;
    }
    if (*(int *)(iVar4 + DAT_180cc9330) <= iVar2) {
      return 1;
    }
  }
  else {
    if ((DAT_180c64b64 == 0) && (UVar6 = GetTickCount64(), DAT_180c64b40 <= UVar6)) {
      iVar4 = FUN_1805f68d0(&DAT_1808efba0);
      if (iVar4 != 0) goto LAB_1802796c7;
      if (DAT_1808efbec == 0x7fffffff) {
        DAT_1808efbec = 0x7ffffffe;
        goto LAB_1802796bc;
      }
      if ((DAT_180c64b64 == 0) && (DAT_180c64b40 <= UVar6)) {
        DAT_180c64b64 = FUN_1804174b0("C_BasePlayerWeapon",0xd9a9e18);
        if (DAT_180c64b64 == 0) {
          DAT_180c64b40 = UVar6 + 1000;
        }
        else {
          DAT_180c64b40 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c64b64;
      FUN_1805f68fc(&DAT_1808efba0);
    }
    iVar4 = DAT_180c64b50;
    auVar11 = ZEXT464(*(uint *)(iVar7 + DAT_180cc9330));
    uVar10 = (ulonglong)*(uint *)(iVar7 + DAT_180cc9330);
    if (DAT_180c64b50 == 0) {
      UVar6 = GetTickCount64();
      uVar10 = auVar11._0_8_;
      if (DAT_180c64b48 <= UVar6) {
        iVar4 = FUN_1805f68d0(&DAT_1808efb50);
        if (iVar4 != 0) {
LAB_1802796c7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808efb9c == 0x7fffffff) {
          DAT_1808efb9c = 0x7ffffffe;
LAB_1802796bc:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c64b50 == 0) && (DAT_180c64b48 <= UVar6)) {
          DAT_180c64b50 = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
          if (DAT_180c64b50 == 0) {
            uVar8 = UVar6 + 1000;
          }
          DAT_180c64b48 = uVar8;
        }
        iVar4 = DAT_180c64b50;
        FUN_1805f68fc(&DAT_1808efb50);
        uVar10 = auVar11._0_8_;
      }
    }
    FUN_180234110(local_48,iVar3,uVar10,*(undefined4 *)(iVar4 + DAT_180cc9330),iVar2);
    if ((local_3c != '\0') && (local_40 != '\0')) {
      return 1;
    }
  }
  return 0;
}




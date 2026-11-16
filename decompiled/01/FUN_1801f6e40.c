// FUN_1801f6e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f6e40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801f736f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f6e40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  int iVar5;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  char *local_680;
  undefined *local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  if ((param_1 != 0) && (iVar3 = FUN_18027d2c0(param_2), iVar3 != -1)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_668 = _DAT_180bb8890;
    uStack_660 = lRam0000000180bb8898;
    uStack_658 = uRam0000000180bb88a0;
    uStack_650 = uRam0000000180bb88a8;
    local_678 = _DAT_180bb88b0;
    uStack_670 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar1 = uStack_660;
    iVar3 = DAT_180c63288;
    if ((char)uStack_670 == '\0') {
    }
    if (uStack_660 == 0) {
    }
    if (DAT_180bbeb00 != uStack_660) {
    }
    if ((DAT_180c63288 == 0) && (UVar4 = GetTickCount64(), DAT_180c63280 <= UVar4)) {
      local_678 = &DAT_1808e7320;
      iVar3 = FUN_1805f68d0(&DAT_1808e7320);
      if (iVar3 != 0) goto LAB_1801f7419;
      if (DAT_1808e736c == 0x7fffffff) {
        DAT_1808e736c = 0x7ffffffe;
        goto LAB_1801f742e;
      }
      if ((DAT_180c63288 == 0) && (DAT_180c63280 <= UVar4)) {
        DAT_180c63288 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c63288 == 0) {
          DAT_180c63280 = UVar4 + 1000;
        }
        else {
          DAT_180c63280 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c63288;
      FUN_1805f68fc(&DAT_1808e7320);
    }
    iVar5 = DAT_180c63274;
    local_668 = CONCAT44(local_668._4_4_,iVar3);
    if ((DAT_180c63274 == 0) && (UVar4 = GetTickCount64(), DAT_180c63278 <= UVar4)) {
      local_678 = &DAT_1808e72d0;
      iVar3 = FUN_1805f68d0(&DAT_1808e72d0);
      if (iVar3 != 0) goto LAB_1801f7419;
      if (DAT_1808e731c == 0x7fffffff) {
        DAT_1808e731c = 0x7ffffffe;
        goto LAB_1801f742e;
      }
      if ((DAT_180c63274 == 0) && (DAT_180c63278 <= UVar4)) {
        DAT_180c63274 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c63274 == 0) {
          DAT_180c63278 = UVar4 + 1000;
        }
        else {
          DAT_180c63278 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c63274;
      FUN_1805f68fc(&DAT_1808e72d0);
    }
    iVar3 = DAT_180c63270;
    local_668 = CONCAT44(iVar5,(undefined4)local_668);
    if ((DAT_180c63270 == 0) && (UVar4 = GetTickCount64(), DAT_180c63268 <= UVar4)) {
      local_678 = &DAT_1808e7280;
      iVar3 = FUN_1805f68d0(&DAT_1808e7280);
      if (iVar3 != 0) goto LAB_1801f7419;
      if (DAT_1808e72cc == 0x7fffffff) {
        DAT_1808e72cc = 0x7ffffffe;
        goto LAB_1801f742e;
      }
      if ((DAT_180c63270 == 0) && (DAT_180c63268 <= UVar4)) {
        DAT_180c63270 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c63270 == 0) {
          DAT_180c63268 = UVar4 + 1000;
        }
        else {
          DAT_180c63268 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c63270;
      FUN_1805f68fc(&DAT_1808e7280);
    }
    iVar5 = DAT_180c6325c;
    uStack_660 = CONCAT44(uStack_660._4_4_,iVar3);
    if ((DAT_180c6325c == 0) && (UVar4 = GetTickCount64(), DAT_180c63260 <= UVar4)) {
      local_678 = &DAT_1808e7230;
      iVar3 = FUN_1805f68d0(&DAT_1808e7230);
      if (iVar3 != 0) goto LAB_1801f7419;
      if (DAT_1808e727c == 0x7fffffff) {
        DAT_1808e727c = 0x7ffffffe;
        goto LAB_1801f742e;
      }
      if ((DAT_180c6325c == 0) && (DAT_180c63260 <= UVar4)) {
        DAT_180c6325c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6325c == 0) {
          DAT_180c63260 = UVar4 + 1000;
        }
        else {
          DAT_180c63260 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c6325c;
      FUN_1805f68fc(&DAT_1808e7230);
    }
    iVar3 = DAT_180c63258;
    uStack_660 = CONCAT44(iVar5,(undefined4)uStack_660);
    if ((DAT_180c63258 == 0) && (UVar4 = GetTickCount64(), DAT_180c63250 <= UVar4)) {
      local_678 = &DAT_1808e71e0;
      iVar3 = FUN_1805f68d0(&DAT_1808e71e0);
      if (iVar3 != 0) goto LAB_1801f7419;
      if (DAT_1808e722c == 0x7fffffff) {
        DAT_1808e722c = 0x7ffffffe;
        goto LAB_1801f742e;
      }
      if ((DAT_180c63258 == 0) && (DAT_180c63250 <= UVar4)) {
        DAT_180c63258 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
        if (DAT_180c63258 == 0) {
          DAT_180c63250 = UVar4 + 1000;
        }
        else {
          DAT_180c63250 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c63258;
      FUN_1805f68fc(&DAT_1808e71e0);
    }
    iVar5 = DAT_180c63240;
    uStack_658 = CONCAT44(uStack_658._4_4_,iVar3);
    if ((DAT_180c63240 == 0) && (UVar4 = GetTickCount64(), DAT_180c63248 <= UVar4)) {
      local_678 = &DAT_1808e7190;
      iVar3 = FUN_1805f68d0(&DAT_1808e7190);
      if (iVar3 != 0) {
LAB_1801f7419:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e71dc == 0x7fffffff) {
        DAT_1808e71dc = 0x7ffffffe;
LAB_1801f742e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63240 == 0) && (DAT_180c63248 <= UVar4)) {
        DAT_180c63240 = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c63240 == 0) {
          DAT_180c63248 = UVar4 + 1000;
        }
        else {
          DAT_180c63248 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c63240;
      FUN_1805f68fc(&DAT_1808e7190);
    }
    uStack_658 = CONCAT44(iVar5,(undefined4)uStack_658);
    cVar2 = FUN_1801f7b10(lVar1,param_1,param_3,&local_668);
    if ((cVar2 != '\0') && (UVar4 = GetTickCount64(), DAT_180c63238 <= UVar4)) {
      DAT_180c63238 = UVar4 + 5000;
      LOCK();
      UNLOCK();
      FUN_18063ab10(local_648,0,0x600);
      local_680 = (char *)CONCAT44(local_680._4_4_,param_2);
      local_688 = (undefined **)CONCAT44(local_688._4_4_,param_3);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                    "handle=0x%X class_hash=0x%X render_only=1 entity_writes=0 attachment_writes=0")
      ;
      local_688 = &PTR_180700558;
      if (local_648[0] != '\0') {
        local_688 = (undefined **)&DAT_1806bcfc0;
      }
      local_680 = local_648;
      FUN_1800f6900(0);
    }
  }
}




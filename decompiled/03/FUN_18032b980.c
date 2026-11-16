// FUN_18032b980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032b980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032b980(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_180b8fc31 == '\0') {
    if (DAT_180b8fc30 == '\0') {
      return;
    }
    if (DAT_180b8fccc == '\0') {
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    puVar1 = puRam0000000180bb8898;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (puVar1 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar2 = DAT_180c6f3b0;
      if (DAT_180c6f3b0 == 0) {
        UVar3 = GetTickCount64();
        if (UVar3 < DAT_180c6f3a8) {
          uVar4 = *puVar1;
          goto LAB_18032bd3f;
        }
        iVar2 = FUN_1805f68d0(&DAT_1808ff970);
        if (iVar2 != 0) goto LAB_18032bdc7;
        if (DAT_1808ff9bc == 0x7fffffff) {
          DAT_1808ff9bc = 0x7ffffffe;
          goto LAB_18032bdbc;
        }
        if ((DAT_180c6f3b0 == 0) && (DAT_180c6f3a8 <= UVar3)) {
          DAT_180c6f3b0 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
          if (DAT_180c6f3b0 == 0) {
            DAT_180c6f3a8 = UVar3 + 1000;
          }
          else {
            DAT_180c6f3a8 = 0xffffffffffffffff;
          }
        }
        iVar2 = DAT_180c6f3b0;
        FUN_1805f68fc(&DAT_1808ff970);
      }
      uVar4 = *(undefined8 *)((longlong)iVar2 + (longlong)puVar1);
    }
LAB_18032bd3f:
    FUN_18030b660(param_2,uVar4,DAT_180b8fccd);
    if (DAT_180b8fcd4 != '\0') {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
      lVar5 = 0;
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar5 = *(longlong *)(param_2 + 0x40) + 0x10;
      }
      if (lVar5 != 0) {
        FUN_18030b110(param_2,lVar5,DAT_180b8fcd5);
      }
    }
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar1 = puRam0000000180bb8898;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = 0xffffffffffffffff;
  iVar2 = DAT_180c6f3c8;
  if (DAT_180c6f3c8 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180c6f3c0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_1808ffa60);
      if (iVar2 != 0) goto LAB_18032bdc7;
      if (DAT_1808ffaac == 0x7fffffff) {
        DAT_1808ffaac = 0x7ffffffe;
        goto LAB_18032bdbc;
      }
      if ((DAT_180c6f3c8 == 0) && (DAT_180c6f3c0 <= UVar3)) {
        DAT_180c6f3c8 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f3c8 == 0) {
          DAT_180c6f3c0 = UVar3 + 1000;
        }
        else {
          DAT_180c6f3c0 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c6f3c8;
      FUN_1805f68fc(&DAT_1808ffa60);
    }
  }
  uVar4 = *(undefined8 *)((longlong)iVar2 + (longlong)puVar1);
  if ((DAT_180c6f3d8 == 0) && (UVar3 = GetTickCount64(), DAT_180c6f3d0 <= UVar3)) {
    iVar2 = FUN_1805f68d0(&DAT_1808ffa10);
    if (iVar2 != 0) {
LAB_18032bdc7:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffa5c == 0x7fffffff) {
      DAT_1808ffa5c = 0x7ffffffe;
LAB_18032bdbc:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f3d8 == 0) && (DAT_180c6f3d0 <= UVar3)) {
      DAT_180c6f3d8 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
      if (DAT_180c6f3d8 == 0) {
        uVar6 = UVar3 + 1000;
      }
      DAT_180c6f3d0 = uVar6;
    }
    FUN_1805f68fc(&DAT_1808ffa10);
  }
  FUN_18031e220(param_2,uVar4);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  lVar5 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (lVar5 == 0) {
    return;
  }
  if (DAT_1808e3d90 == 1) {
    FUN_18031e380(param_2,lVar5);
    return;
  }
  if (DAT_1808e3d90 == 2) {
    FUN_18031e380(param_2,lVar5);
    FUN_18031dff0(param_2,lVar5,DAT_1808e3d2c);
    return;
  }
  return;
}




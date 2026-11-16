// FUN_1803a8550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a8550 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a8550(longlong param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 ****local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if ((((DAT_180c64054 != '\0') && (param_2 - 1 < 0xfffffffe)) && (0x3fff < (param_2 & 0x7fff))) &&
     (lVar4 = FUN_1803d4150(), lVar4 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_78 = _DAT_180bb8890;
    lStack_70 = lRam0000000180bb8898;
    uStack_68 = uRam0000000180bb88a0;
    uStack_60 = uRam0000000180bb88a8;
    local_58 = _DAT_180bb88b0;
    uStack_50 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar7 = lStack_70;
    iVar3 = DAT_180c71808;
    if (((char)uStack_50 == '\0') || (lStack_70 == 0)) goto LAB_1803a89a5;
    uVar13 = 0xffffffffffffffff;
    if ((DAT_180c71808 == 0) && (UVar5 = GetTickCount64(), DAT_180c71810 <= UVar5)) {
      local_58 = (undefined8 ****)&DAT_180903700;
      iVar3 = FUN_1805f68d0(&DAT_180903700);
      if (iVar3 != 0) goto LAB_1803a89d5;
      if (DAT_18090374c == 0x7fffffff) {
        DAT_18090374c = 0x7ffffffe;
        goto LAB_1803a89ea;
      }
      if ((DAT_180c71808 == 0) && (DAT_180c71810 <= UVar5)) {
        DAT_180c71808 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c71808 == 0) {
          DAT_180c71810 = UVar5 + 1000;
        }
        else {
          DAT_180c71810 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c71808;
      FUN_1805f68fc(&DAT_180903700);
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (iVar3 + lVar7 != 0) {
      local_58 = (undefined8 ****)0x0;
      cVar2 = FUN_1804514f0(&local_58,iVar3 + lVar7,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    ppppuVar9 = local_58;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    iVar3 = DAT_180c71820;
    if ((!bVar1) || (ppppuVar9 == (undefined8 ****)0x0)) goto LAB_1803a89a5;
    if ((DAT_180c71820 == 0) && (UVar5 = GetTickCount64(), DAT_180c71818 <= UVar5)) {
      local_58 = (undefined8 ****)&DAT_1809036b0;
      iVar3 = FUN_1805f68d0(&DAT_1809036b0);
      if (iVar3 != 0) goto LAB_1803a89d5;
      if (DAT_1809036fc == 0x7fffffff) {
        DAT_1809036fc = 0x7ffffffe;
        goto LAB_1803a89ea;
      }
      if ((DAT_180c71820 == 0) && (DAT_180c71818 <= UVar5)) {
        DAT_180c71820 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c71820 == 0) {
          DAT_180c71818 = UVar5 + 1000;
        }
        else {
          DAT_180c71818 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c71820;
      FUN_1805f68fc(&DAT_1809036b0);
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    puVar11 = (undefined *)((longlong)iVar3 + (longlong)ppppuVar9);
    bVar1 = false;
    if (puVar11 != (undefined *)0x0) {
      local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_58,puVar11,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    iVar3 = (int)local_58;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    iVar10 = DAT_180c717f0;
    iVar12 = 0;
    if (bVar1) {
      iVar12 = iVar3;
    }
    if (iVar12 != 0) {
      if ((DAT_180c717f0 == 0) && (UVar5 = GetTickCount64(), DAT_180c717f8 <= UVar5)) {
        local_58 = (undefined8 ****)&DAT_180903600;
        iVar3 = FUN_1805f68d0(&DAT_180903600);
        if (iVar3 != 0) {
LAB_1803a89d5:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_18090364c == 0x7fffffff) {
          DAT_18090364c = 0x7ffffffe;
LAB_1803a89ea:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c717f0 == 0) && (DAT_180c717f8 <= UVar5)) {
          DAT_180c717f0 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c717f0 == 0) {
            uVar13 = UVar5 + 1000;
          }
          DAT_180c717f8 = uVar13;
        }
        iVar10 = DAT_180c717f0;
        FUN_1805f68fc(&DAT_180903600);
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (iVar10 + lVar4 == 0) {
        bVar1 = false;
      }
      else {
        local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_58,iVar10 + lVar4,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar3 = (int)local_58;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((bVar1) && (iVar3 == iVar12)) {
        uVar8 = FUN_1803d3fa0(lVar7,lVar4);
        FUN_180454030(&local_58,uVar8,0x80);
        ppppuVar9 = &local_58;
        if (0xf < local_40) {
          ppppuVar9 = local_58;
        }
        if ((local_48 == 0x13) && (iVar3 = memcmp(ppppuVar9,"C_CS2HudModelWeapon",0x13), iVar3 == 0)
           ) {
          FUN_18028bea0(param_1,lVar4,0xda74ab9b);
          FUN_18015c010(&local_58);
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
        FUN_18015c010(&local_58);
      }
    }
  }
LAB_1803a89a5:
  *(undefined1 *)(param_1 + 0x10) = 0;
}




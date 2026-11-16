// FUN_18022d6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022d6d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022d6d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  short sVar3;
  char cVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 auStack_688 [32];
  undefined **local_668;
  char *local_660;
  undefined4 local_658;
  undefined *local_648 [2];
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  if (param_1 == 0) {
  }
  if (param_2 == 0) {
  }
  iVar8 = DAT_180c63d0c;
  if (DAT_180c63d0c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c63d10) {
      iVar8 = 0;
    }
    else {
      local_648[0] = &DAT_1808eb610;
      iVar8 = FUN_1805f68d0(&DAT_1808eb610);
      if (iVar8 != 0) goto LAB_18022db21;
      if (DAT_1808eb65c == 0x7fffffff) {
        DAT_1808eb65c = 0x7ffffffe;
        goto LAB_18022db36;
      }
      if ((DAT_180c63d0c == 0) && (DAT_180c63d10 <= UVar5)) {
        DAT_180c63d0c = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c63d0c == 0) {
          DAT_180c63d10 = UVar5 + 1000;
        }
        else {
          DAT_180c63d10 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c63d0c;
      FUN_1805f68fc(&DAT_1808eb610);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (iVar8 + param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_648[0] = (undefined *)0x0;
    cVar4 = FUN_1804514f0(local_648,iVar8 + param_1,8);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar10 = local_648[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar1) {
  }
  if (puVar10 == (undefined *)0x0) {
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  puVar10 = puVar10 + 0x10;
  bVar1 = false;
  if (puVar10 != (undefined *)0x0) {
    local_648[0] = (undefined *)((ulonglong)local_648[0] & 0xffffffff00000000);
    cVar4 = FUN_1804514f0(local_648,puVar10,4);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  iVar11 = (int)local_648[0];
  lVar6 = FUN_18017ea70();
  iVar8 = *(int *)(lVar6 + 4);
  if (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    *(int *)(lVar6 + 4) = iVar8;
  }
  if (!bVar1) {
    iVar11 = 0;
  }
  if (iVar11 == 0) {
  }
  lVar6 = FUN_1803d4150(iVar8,iVar11);
  if (lVar6 != param_1) {
  }
  iVar8 = DAT_180c63d08;
  if (DAT_180c63d08 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c63d00) {
      iVar8 = 0;
    }
    else {
      local_648[0] = &DAT_1808eb5c0;
      iVar8 = FUN_1805f68d0(&DAT_1808eb5c0);
      if (iVar8 != 0) {
LAB_18022db21:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808eb60c == 0x7fffffff) {
        DAT_1808eb60c = 0x7ffffffe;
LAB_18022db36:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63d08 == 0) && (DAT_180c63d00 <= UVar5)) {
        DAT_180c63d08 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c63d08 == 0) {
          DAT_180c63d00 = UVar5 + 1000;
        }
        else {
          DAT_180c63d00 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c63d08;
      FUN_1805f68fc(&DAT_1808eb5c0);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (iVar8 + param_2 == 0) {
    bVar1 = false;
  }
  else {
    local_648[0] = (undefined *)((ulonglong)local_648[0] & 0xffffffffffff0000);
    cVar4 = FUN_1804514f0(local_648,iVar8 + param_2,2);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  sVar3 = (short)local_648[0];
  lVar6 = FUN_18017ea70();
  iVar8 = *(int *)(lVar6 + 4);
  if (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    *(int *)(lVar6 + 4) = iVar8;
  }
  if (!bVar1) {
  }
  if (sVar3 == 0) {
  }
  if ((DAT_180cd3b48 & 1) == 0) {
    DAT_180cd3b48 = DAT_180cd3b48 | 1;
    FUN_18022db50(iVar8,&DAT_180cd3b50);
  }
  lVar6 = DAT_180cd3b50;
  if (DAT_180cd3b50 == 0) {
  }
  cVar4 = FUN_1804513c0(DAT_180cd3b50,1,2);
  if (cVar4 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar4 = FUN_1801ad780(lVar6,param_1,param_2);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    uVar2 = DAT_180cd3b58;
    if ((cVar4 != '\0') && (cVar4 = FUN_1804513c0(DAT_180cd3b58,1,2), cVar4 != '\0')) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar4 = FUN_1801ad780(uVar2,param_1,param_2);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if ((cVar4 != '\0') &&
         (cVar4 = FUN_18022aa20(param_1,param_2,iVar11,DAT_180cd3b60), cVar4 != '\0')) {
        uVar9 = 1;
        goto LAB_18022da74;
      }
    }
  }
  uVar9 = 0;
LAB_18022da74:
  FUN_18063ab10(local_638,0,0x600);
  local_660 = (char *)CONCAT44(local_660._4_4_,iVar11);
  local_668 = (undefined **)param_1;
  local_658 = uVar9;
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                "model=%p handle=0x%x counter/name/keychain=%d rendered=unverified");
  local_668 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_668 = (undefined **)&DAT_1806bcfc0;
  }
  local_660 = local_638;
  FUN_1800f6900(0);
}




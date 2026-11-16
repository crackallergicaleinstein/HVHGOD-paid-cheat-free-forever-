// FUN_1803c48d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c48d0 */

ulonglong FUN_1803c48d0(undefined8 param_1,longlong param_2,int param_3,ulonglong param_4,
                       undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined *local_58;
  undefined8 local_50;
  
  uVar10 = 0xffffffffffffffff;
  iVar6 = DAT_180c71cec;
  local_50 = param_1;
  if (DAT_180c71cec == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180c71cc8) {
      iVar6 = 0;
    }
    else {
      local_58 = &DAT_1809b9b20;
      iVar6 = FUN_1805f68d0(&DAT_1809b9b20);
      if (iVar6 != 0) goto LAB_1803c4ba7;
      if (DAT_1809b9b6c == 0x7fffffff) {
        DAT_1809b9b6c = 0x7ffffffe;
        goto LAB_1803c4b9c;
      }
      if ((DAT_180c71cec == 0) && (DAT_180c71cc8 <= UVar3)) {
        DAT_180c71cec = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c71cec == 0) {
          DAT_180c71cc8 = UVar3 + 1000;
        }
        else {
          DAT_180c71cc8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c71cec;
      FUN_1805f68fc(&DAT_1809b9b20);
    }
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if ((longlong)iVar6 + param_4 != 0) {
    local_58 = (undefined *)0x0;
    cVar2 = FUN_1804514f0(&local_58,(longlong)iVar6 + param_4,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar7 = local_58;
  uVar5 = FUN_18017ea70();
  if (*(int *)(uVar5 + 4) != 0) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
  }
  if ((bVar1) && (puVar7 != (undefined *)0x0)) {
    iVar6 = DAT_180c71cbc;
    if (DAT_180c71cbc == 0) {
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180c71cc0) {
        iVar6 = 0;
      }
      else {
        local_58 = &DAT_1809b9bc0;
        iVar6 = FUN_1805f68d0(&DAT_1809b9bc0);
        if (iVar6 != 0) {
LAB_1803c4ba7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809b9c0c == 0x7fffffff) {
          DAT_1809b9c0c = 0x7ffffffe;
LAB_1803c4b9c:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c71cbc == 0) && (DAT_180c71cc0 <= UVar3)) {
          DAT_180c71cbc = FUN_1804174b0("CEntityIdentity",0xbecfac7);
          if (DAT_180c71cbc == 0) {
            uVar10 = UVar3 + 1000;
          }
          DAT_180c71cc0 = uVar10;
        }
        iVar6 = DAT_180c71cbc;
        FUN_1805f68fc(&DAT_1809b9bc0);
      }
    }
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    puVar7 = puVar7 + iVar6;
    bVar1 = false;
    if (puVar7 != (undefined *)0x0) {
      local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_58,puVar7,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    iVar8 = (int)local_58;
    uVar5 = FUN_18017ea70();
    iVar6 = *(int *)(uVar5 + 4);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      *(int *)(uVar5 + 4) = iVar6;
    }
    iVar9 = 0;
    if (bVar1) {
      iVar9 = iVar8;
    }
    if ((iVar9 < 0) && (uVar5 = FUN_1803d4150(iVar6,param_3), uVar5 == param_4)) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      bVar1 = false;
      if (param_2 + 0xc0 != 0) {
        local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_58,param_2 + 0xc0,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar6 = (int)local_58;
      uVar5 = FUN_18017ea70();
      if (*(int *)(uVar5 + 4) != 0) {
        *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar1) {
        iVar8 = iVar6;
      }
      if (iVar8 == param_3) {
        uVar10 = FUN_1803c85c0(local_50,param_2,param_4,param_3,iVar9,param_5);
        return uVar10;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}




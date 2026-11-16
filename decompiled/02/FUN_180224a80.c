// FUN_180224a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180224a80 */

/* WARNING: Removing unreachable block (ram,0x000180224c5f) */

int FUN_180224a80(undefined *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *local_28 [2];
  
  iVar5 = DAT_180c63ef0;
  if (DAT_180c63ef0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c63ee8) {
      iVar5 = 0;
    }
    else {
      local_28[0] = &DAT_1808ec120;
      iVar5 = FUN_1805f68d0(&DAT_1808ec120);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ec16c == 0x7fffffff) {
        DAT_1808ec16c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63ef0 == 0) && (DAT_180c63ee8 <= UVar7)) {
        DAT_180c63ef0 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
        if (DAT_180c63ef0 == 0) {
          DAT_180c63ee8 = UVar7 + 1000;
        }
        else {
          DAT_180c63ee8 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c63ef0;
      FUN_1805f68fc(&DAT_1808ec120);
    }
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (param_1 + 0x10 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    local_28[0] = (undefined *)0x0;
    cVar4 = FUN_1804514f0(local_28,param_1 + 0x10,8);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar2 = local_28[0];
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if ((bVar1) && (puVar2 != (undefined *)0x0)) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    local_28[0] = (undefined *)0x0;
    cVar4 = FUN_1804514f0(local_28,puVar2,8);
    puVar3 = local_28[0];
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    puVar9 = (undefined *)0x0;
    if (cVar4 != '\0') {
      puVar9 = puVar3;
    }
    if (puVar9 == param_1) {
      if (iVar5 == 0) {
        return 0;
      }
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      bVar1 = false;
      if (puVar2 + iVar5 != (undefined *)0x0) {
        local_28[0] = (undefined *)((ulonglong)local_28[0] & 0xffffffff00000000);
        cVar4 = FUN_1804514f0(local_28,puVar2 + iVar5,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar5 = (int)local_28[0];
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      iVar6 = 0;
      if (bVar1) {
        iVar6 = iVar5;
      }
      iVar5 = 0;
      if (iVar6 < 0) {
        iVar5 = iVar6;
      }
      return iVar5;
    }
  }
  return 0;
}




// FUN_1802aff10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aff10 */

ulonglong FUN_1802aff10(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined *local_18 [2];
  
  iVar3 = DAT_180c6e5f8;
  if ((DAT_180c6e5f8 == 0) && (UVar4 = GetTickCount64(), DAT_180c6e600 <= UVar4)) {
    local_18[0] = &DAT_1808f4af0;
    iVar3 = FUN_1805f68d0(&DAT_1808f4af0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f4b3c == 0x7fffffff) {
      DAT_1808f4b3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6e5f8 == 0) && (DAT_180c6e600 <= UVar4)) {
      DAT_180c6e5f8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
      if (DAT_180c6e5f8 == 0) {
        DAT_180c6e600 = UVar4 + 1000;
      }
      else {
        DAT_180c6e600 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c6e5f8;
    FUN_1805f68fc(&DAT_1808f4af0);
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (iVar3 + param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_18[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_18,iVar3 + param_1,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar7 = local_18[0];
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((!bVar1) || (puVar7 == (undefined *)0x0)) {
    uVar6 = 0xffffffff;
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    puVar7 = puVar7 + 0x10;
    bVar1 = false;
    if (puVar7 != (undefined *)0x0) {
      local_18[0] = (undefined *)((ulonglong)local_18[0] & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(local_18,puVar7,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar7 = local_18[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    uVar6 = 0xffffffff;
    if (bVar1) {
      uVar6 = (ulonglong)puVar7 & 0xffffffff;
    }
  }
  return uVar6;
}




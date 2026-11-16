// FUN_18019ada0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019ada0 */

undefined * FUN_18019ada0(undefined *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined *local_48 [2];
  
  puVar7 = (undefined *)0x0;
  uVar9 = 0xffffffffffffffff;
  iVar3 = DAT_180bb86f8;
  local_48[0] = param_1;
  if (DAT_180bb86f8 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180bb86f0) {
      iVar3 = 0;
    }
    else {
      local_48[0] = &DAT_1808d9000;
      iVar3 = FUN_1805f68d0(&DAT_1808d9000);
      if (iVar3 != 0) goto LAB_18019b0b9;
      if (DAT_1808d904c == 0x7fffffff) {
        DAT_1808d904c = 0x7ffffffe;
        goto LAB_18019b0ae;
      }
      if ((DAT_180bb86f8 == 0) && (DAT_180bb86f0 <= UVar5)) {
        DAT_180bb86f8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180bb86f8 == 0) {
          DAT_180bb86f0 = UVar5 + 1000;
        }
        else {
          DAT_180bb86f0 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180bb86f8;
      FUN_1805f68fc(&DAT_1808d9000);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (iVar3 + param_2 != 0) {
    local_48[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_48,iVar3 + param_2,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar8 = local_48[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((bVar1) && (puVar8 != (undefined *)0x0)) {
    iVar3 = DAT_180bb86e8;
    if (DAT_180bb86e8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180bb86e0) {
        iVar3 = 0;
      }
      else {
        local_48[0] = &DAT_1808d8fb0;
        iVar3 = FUN_1805f68d0(&DAT_1808d8fb0);
        if (iVar3 != 0) goto LAB_18019b0b9;
        if (DAT_1808d8ffc == 0x7fffffff) {
          DAT_1808d8ffc = 0x7ffffffe;
          goto LAB_18019b0ae;
        }
        if ((DAT_180bb86e8 == 0) && (DAT_180bb86e0 <= UVar5)) {
          DAT_180bb86e8 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
          if (DAT_180bb86e8 == 0) {
            DAT_180bb86e0 = UVar5 + 1000;
          }
          else {
            DAT_180bb86e0 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180bb86e8;
        FUN_1805f68fc(&DAT_1808d8fb0);
      }
    }
    iVar4 = DAT_180bb86d8;
    if (DAT_180bb86d8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180bb86d0) {
        iVar4 = 0;
      }
      else {
        local_48[0] = &DAT_1808d8f60;
        iVar4 = FUN_1805f68d0(&DAT_1808d8f60);
        if (iVar4 != 0) {
LAB_18019b0b9:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d8fac == 0x7fffffff) {
          DAT_1808d8fac = 0x7ffffffe;
LAB_18019b0ae:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180bb86d8 == 0) && (DAT_180bb86d0 <= UVar5)) {
          DAT_180bb86d8 = FUN_1804174b0("CModelState",0xd7a1d881);
          if (DAT_180bb86d8 == 0) {
            uVar9 = UVar5 + 1000;
          }
          DAT_180bb86d0 = uVar9;
        }
        iVar4 = DAT_180bb86d8;
        FUN_1805f68fc(&DAT_1808d8f60);
      }
    }
    puVar8 = puVar8 + (longlong)iVar3 + (longlong)iVar4;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (puVar8 != (undefined *)0x0) {
      local_48[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_48,puVar8,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar8 = local_48[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (bVar1) {
      puVar7 = puVar8;
    }
  }
  FUN_180184460(param_1,puVar7);
  return param_1;
}




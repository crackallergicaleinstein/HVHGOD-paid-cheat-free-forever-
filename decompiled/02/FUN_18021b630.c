// FUN_18021b630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021b630 */

undefined * FUN_18021b630(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  undefined *local_38;
  undefined *local_30;
  
  local_30 = param_2;
  if (DAT_180c64020 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c64018) {
      return (undefined *)0x0;
    }
    local_38 = &DAT_1808ec840;
    iVar4 = FUN_1805f68d0(&DAT_1808ec840);
    if (iVar4 != 0) {
LAB_18021b997:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ec88c == 0x7fffffff) {
      DAT_1808ec88c = 0x7ffffffe;
LAB_18021b98c:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c64020 == 0) && (DAT_180c64018 <= UVar6)) {
      DAT_180c64020 = FUN_1804174b0("C_EconItemView",0x34b55816);
      if (DAT_180c64020 == 0) {
        DAT_180c64018 = UVar6 + 1000;
      }
      else {
        DAT_180c64018 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c64020;
    FUN_1805f68fc(&DAT_1808ec840);
    if (iVar4 == 0) {
      return (undefined *)0x0;
    }
  }
  lVar8 = DAT_180cca0d8;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  bVar1 = false;
  if (lVar8 + 0x20 != 0) {
    local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff00000000);
    cVar3 = FUN_1804514f0(&local_38,lVar8 + 0x20,4);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar2 = (uint)local_38;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  lVar8 = DAT_180cca0d8;
  uVar14 = 0xffffffff;
  if (bVar1) {
    uVar14 = uVar2;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  bVar1 = false;
  if (lVar8 + 0x28 != 0) {
    local_38 = (undefined *)0x0;
    cVar3 = FUN_1804514f0(&local_38,lVar8 + 0x28,8);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar10 = local_38;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  puVar12 = (undefined *)0x0;
  if (bVar1) {
    puVar12 = puVar10;
  }
  if ((uVar14 < 0x2711) &&
     (((uVar14 == 0 || (puVar12 != (undefined *)0x0)) && (iVar4 = 0, 0 < (int)uVar14)))) {
    iVar13 = 0;
    puVar10 = local_30;
    puVar11 = local_30;
    do {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      bVar1 = false;
      if (puVar12 + iVar13 != (undefined *)0x0) {
        local_38 = (undefined *)0x0;
        cVar3 = FUN_1804514f0(&local_38,puVar12 + iVar13,8);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          puVar10 = local_38;
        }
      }
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      iVar5 = DAT_180c6400c;
      if ((bVar1) && (puVar10 != (undefined *)0x0)) {
        if ((DAT_180c6400c == 0) && (UVar6 = GetTickCount64(), DAT_180c64010 <= UVar6)) {
          local_38 = &DAT_1808ec7f0;
          iVar5 = FUN_1805f68d0(&DAT_1808ec7f0);
          if (iVar5 != 0) goto LAB_18021b997;
          if (DAT_1808ec83c == 0x7fffffff) {
            DAT_1808ec83c = 0x7ffffffe;
            goto LAB_18021b98c;
          }
          if ((DAT_180c6400c == 0) && (DAT_180c64010 <= UVar6)) {
            DAT_180c6400c = FUN_1804174b0("C_EconItemView",0x34b55816);
            DAT_180c64010 = 0xffffffffffffffff;
            if (DAT_180c6400c == 0) {
              DAT_180c64010 = UVar6 + 1000;
            }
          }
          iVar5 = DAT_180c6400c;
          FUN_1805f68fc(&DAT_1808ec7f0);
        }
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        bVar1 = false;
        if (puVar10 + iVar5 != (undefined *)0x0) {
          local_38 = (undefined *)0x0;
          cVar3 = FUN_1804514f0(&local_38,puVar10 + iVar5,8);
          if (cVar3 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            puVar11 = local_38;
          }
        }
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        puVar9 = (undefined *)0x0;
        if (bVar1) {
          puVar9 = puVar11;
        }
        if (puVar9 == local_30) {
          return puVar10;
        }
      }
      iVar4 = iVar4 + 1;
      iVar13 = iVar13 + 8;
    } while (iVar4 < (int)uVar14);
  }
  return (undefined *)0x0;
}




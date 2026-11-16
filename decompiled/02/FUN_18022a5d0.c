// FUN_18022a5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022a5d0 */

undefined8 FUN_18022a5d0(longlong param_1,undefined *param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined *local_38;
  undefined *local_30;
  
  local_30 = param_2;
  if (param_1 == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)FUN_1803d3fa0(param_1,param_1);
  }
  iVar4 = DAT_180c63e04;
  uVar11 = 0xffffffffffffffff;
  if ((DAT_180c63e04 == 0) && (UVar8 = GetTickCount64(), DAT_180c63e08 <= UVar8)) {
    local_38 = &DAT_1808ebbd0;
    iVar4 = FUN_1805f68d0(&DAT_1808ebbd0);
    if (iVar4 != 0) goto LAB_18022a9af;
    if (DAT_1808ebc1c == 0x7fffffff) {
      DAT_1808ebc1c = 0x7ffffffe;
      goto LAB_18022a9a4;
    }
    if ((DAT_180c63e04 == 0) && (DAT_180c63e08 <= UVar8)) {
      DAT_180c63e04 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c63e04 == 0) {
        DAT_180c63e08 = UVar8 + 1000;
      }
      else {
        DAT_180c63e08 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c63e04;
    FUN_1805f68fc(&DAT_1808ebbd0);
  }
  iVar5 = DAT_180c63e00;
  if ((DAT_180c63e00 == 0) && (UVar8 = GetTickCount64(), DAT_180c63df8 <= UVar8)) {
    local_38 = &DAT_1808ebb80;
    iVar5 = FUN_1805f68d0(&DAT_1808ebb80);
    if (iVar5 != 0) goto LAB_18022a9af;
    if (DAT_1808ebbcc == 0x7fffffff) {
      DAT_1808ebbcc = 0x7ffffffe;
      goto LAB_18022a9a4;
    }
    if ((DAT_180c63e00 == 0) && (DAT_180c63df8 <= UVar8)) {
      DAT_180c63e00 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
      DAT_180c63df8 = 0xffffffffffffffff;
      if (DAT_180c63e00 == 0) {
        DAT_180c63df8 = UVar8 + 1000;
      }
    }
    iVar5 = DAT_180c63e00;
    FUN_1805f68fc(&DAT_1808ebb80);
  }
  iVar6 = DAT_180c63de8;
  if (DAT_180c63de8 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c63df0) {
      iVar6 = 0;
    }
    else {
      local_38 = &DAT_1808ebb30;
      iVar6 = FUN_1805f68d0(&DAT_1808ebb30);
      if (iVar6 != 0) {
LAB_18022a9af:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ebb7c == 0x7fffffff) {
        DAT_1808ebb7c = 0x7ffffffe;
LAB_18022a9a4:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63de8 == 0) && (DAT_180c63df0 <= UVar8)) {
        DAT_180c63de8 = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c63de8 == 0) {
          uVar11 = UVar8 + 1000;
        }
        DAT_180c63df0 = uVar11;
      }
      iVar6 = DAT_180c63de8;
      FUN_1805f68fc(&DAT_1808ebb30);
    }
  }
  if (pcVar7 != (char *)0x0) {
    param_3 = param_3 - (longlong)pcVar7;
    do {
      cVar3 = *pcVar7;
      cVar1 = pcVar7[param_3];
      if (cVar3 != cVar1) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((((cVar3 == cVar1) && (iVar4 != 0)) && (iVar5 != 0)) && (iVar6 != 0)) {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      if (iVar4 + param_1 == 0) {
        bVar2 = false;
      }
      else {
        local_38 = (undefined *)0x0;
        cVar3 = FUN_1804514f0(&local_38,iVar4 + param_1,8);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      puVar10 = local_38;
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if ((bVar2) && (puVar10 != (undefined *)0x0)) {
        puVar10 = puVar10 + iVar5;
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (puVar10 == (undefined *)0x0) {
          bVar2 = false;
        }
        else {
          local_38 = (undefined *)0x0;
          cVar3 = FUN_1804514f0(&local_38,puVar10,8);
          if (cVar3 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        puVar10 = local_38;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (!bVar2) {
          puVar10 = (undefined *)0x0;
        }
        if (puVar10 != (undefined *)0x0) {
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          if (puVar10 + iVar6 == (undefined *)0x0) {
            bVar2 = false;
          }
          else {
            local_38 = (undefined *)0x0;
            cVar3 = FUN_1804514f0(&local_38,puVar10 + iVar6,8);
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          puVar10 = local_38;
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if (!bVar2) {
            puVar10 = (undefined *)0x0;
          }
          if (puVar10 == local_30) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}




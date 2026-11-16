// FUN_1804c3080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3080 */

undefined1 FUN_1804c3080(undefined8 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  lVar2 = DAT_180bb8ae8;
  uVar12 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar12 = param_2;
  }
  uVar4 = FUN_1804c29d0();
  if (*(uint *)(lVar2 + 0x1e78) == uVar4) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uVar12 >> 0x10 & 1) != 0) && (*(longlong *)(lVar2 + 0x2040) == 0)) {
    return false;
  }
  if ((uVar12 >> 0xd & 1) != 0) {
    if ((*(uint *)(lVar2 + 0x28cc) & 0x200) != 0) {
      uVar6 = FUN_1804c2ac0(uVar4);
      FUN_1804cf3e0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n",
                    uVar6,uVar12,param_3);
    }
    return true;
  }
  if ((*(int *)(lVar2 + 0x1550) != 0) && (*(int *)(lVar2 + 0x1550) != param_3)) {
    if ((uVar12 >> 10 & 1) != 0) {
      return false;
    }
    if ((((*(char *)(lVar2 + 0xe2) != '\0') &&
         (((uVar4 & 0x1000) == 0 || ((uVar4 >> 0xe & 1) != 0)))) &&
        ((*(char *)(lVar2 + 0x78) == '\0' || ((uVar4 & 0x1000) == 0)))) &&
       (((uVar4 & 0xffff0fff) != 0 &&
        ((*(uint *)(lVar2 + 0x15c0 + ((longlong)(int)(uVar4 & 0xffff0fff) + -0x200 >> 5) * 4) >>
          (uVar4 & 0x1f) & 1) != 0)))) {
      if ((*(uint *)(lVar2 + 0x28cc) & 0x200) == 0) {
        return false;
      }
      uVar6 = FUN_1804c2ac0(uVar4);
      FUN_1804cf3e0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                    ,uVar6,uVar12,param_3);
      return false;
    }
    if (((uVar12 >> 0xf & 1) == 0) && (*(char *)(lVar2 + 0x1e74) != '\0')) {
      uVar5 = uVar4 & 0xffff0fff;
      if ((uVar4 & 0xffff0fff) == 0) {
        uVar5 = uVar4 & 0xf000;
        if (uVar5 == 0x1000) {
          uVar5 = 0x297;
        }
        else if (uVar5 == 0x2000) {
          uVar5 = 0x298;
        }
        else if (uVar5 == 0x4000) {
          uVar5 = 0x299;
        }
        else if (uVar5 == 0x8000) {
          uVar5 = 0x29a;
        }
      }
      if (uVar5 - 0x200 < 0x78) {
        return false;
      }
    }
  }
  iVar9 = *(int *)(lVar2 + 0x1e7c);
  if ((uVar12 >> 0x11 & 1) != 0) {
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x14d0) + 0x3d8) + 0x10);
  }
  if ((uVar12 >> 0xb & 1) == 0) {
    if ((uVar12 >> 10 & 1) == 0) {
      if ((uVar12 >> 0xc & 1) != 0) {
        if ((uVar12 >> 0xf & 1) == 0) {
          if ((param_3 == 0) || (*(int *)(lVar2 + 0x1550) != param_3)) {
            iVar11 = 1;
            if ((uVar12 >> 0xe & 1) != 0) {
              iVar11 = 200;
            }
          }
          else {
            iVar11 = 300;
          }
        }
        else {
          iVar11 = 400;
        }
        goto LAB_1804c32f9;
      }
    }
    else if ((param_3 != 0) && (*(int *)(lVar2 + 0x1550) == param_3)) {
      iVar11 = 300;
      goto LAB_1804c32f9;
    }
    iVar11 = 0;
  }
  else if ((param_3 == 0) || (*(int *)(lVar2 + 0x1550) != param_3)) {
    iVar11 = 0;
    if (iVar9 != 0) {
      iVar10 = 0;
      if (0 < *(int *)(lVar2 + 0x2068)) {
        lVar8 = 0;
        piVar7 = *(int **)(lVar2 + 0x2070);
        do {
          if (*piVar7 == iVar9) {
            if ((uVar12 >> 0xf & 1) == 0) {
              iVar11 = 199 - iVar10;
            }
            else {
              iVar11 = 599 - iVar10;
            }
            break;
          }
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 2;
        } while (lVar8 < *(int *)(lVar2 + 0x2068));
      }
    }
  }
  else {
    iVar11 = 300;
  }
LAB_1804c32f9:
  if ((*(uint *)(lVar2 + 0x28cc) & 0x200) != 0) {
    uVar6 = FUN_1804c2ac0(uVar4);
    FUN_1804cf3e0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n",uVar6,uVar12,
                  param_3,iVar11);
  }
  if (iVar11 == 0) {
    return false;
  }
  lVar8 = FUN_1804c2f10(uVar4);
  if ((int)(uint)*(ushort *)(lVar8 + 6) < iVar11) {
    *(int *)(lVar8 + 0xc) = param_3;
    *(short *)(lVar8 + 6) = (short)iVar11;
  }
  iVar9 = *(int *)(lVar8 + 8);
  bVar13 = false;
  if (iVar9 == param_3) {
    if ((*(uint *)(lVar2 + 0x28cc) & 0x200) != 0) {
      FUN_1804cf3e0("--> granting current route\n");
      iVar9 = *(int *)(lVar8 + 8);
    }
    bVar13 = iVar9 == param_3;
  }
  return bVar13;
}




// FUN_18019b0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019b0d0 */

undefined8 FUN_18019b0d0(char *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 auVar15 [64];
  undefined4 uVar16;
  undefined8 local_78;
  char *local_68;
  longlong local_60;
  char *local_58;
  undefined8 local_50;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  uVar13 = 0xffffffffffffffff;
  iVar6 = DAT_180bb86c8;
  local_68 = param_1;
  if (DAT_180bb86c8 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb86c0) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8f10;
      iVar6 = FUN_1805f68d0(&DAT_1808d8f10);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8f5c == 0x7fffffff) {
        DAT_1808d8f5c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb86c8 == 0) && (DAT_180bb86c0 <= UVar7)) {
        DAT_180bb86c8 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180bb86c8 == 0) {
          DAT_180bb86c0 = UVar7 + 1000;
        }
        else {
          DAT_180bb86c0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb86c8;
      FUN_1805f68fc(&DAT_1808d8f10);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,8);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb86b8;
  if (DAT_180bb86b8 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb86b0) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8ec0;
      iVar6 = FUN_1805f68d0(&DAT_1808d8ec0);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8f0c == 0x7fffffff) {
        DAT_1808d8f0c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb86b8 == 0) && (DAT_180bb86b0 <= UVar7)) {
        DAT_180bb86b8 = FUN_1804174b0("C_EconItemView",0x373ee446);
        if (DAT_180bb86b8 == 0) {
          DAT_180bb86b0 = UVar7 + 1000;
        }
        else {
          DAT_180bb86b0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb86b8;
      FUN_1805f68fc(&DAT_1808d8ec0);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,4);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb86a8;
  if (DAT_180bb86a8 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb86a0) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8e70;
      iVar6 = FUN_1805f68d0(&DAT_1808d8e70);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8ebc == 0x7fffffff) {
        DAT_1808d8ebc = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb86a8 == 0) && (DAT_180bb86a0 <= UVar7)) {
        DAT_180bb86a8 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
        if (DAT_180bb86a8 == 0) {
          DAT_180bb86a0 = UVar7 + 1000;
        }
        else {
          DAT_180bb86a0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb86a8;
      FUN_1805f68fc(&DAT_1808d8e70);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,4);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8698;
  if (DAT_180bb8698 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8690) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8e20;
      iVar6 = FUN_1805f68d0(&DAT_1808d8e20);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8e6c == 0x7fffffff) {
        DAT_1808d8e6c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8698 == 0) && (DAT_180bb8690 <= UVar7)) {
        DAT_180bb8698 = FUN_1804174b0("C_EconItemView",0xc65de986);
        if (DAT_180bb8698 == 0) {
          DAT_180bb8690 = UVar7 + 1000;
        }
        else {
          DAT_180bb8690 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8698;
      FUN_1805f68fc(&DAT_1808d8e20);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,4);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8688;
  if (DAT_180bb8688 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8680) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8dd0;
      iVar6 = FUN_1805f68d0(&DAT_1808d8dd0);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8e1c == 0x7fffffff) {
        DAT_1808d8e1c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8688 == 0) && (DAT_180bb8680 <= UVar7)) {
        DAT_180bb8688 = FUN_1804174b0("C_EconItemView",0x710abdd);
        if (DAT_180bb8688 == 0) {
          DAT_180bb8680 = UVar7 + 1000;
        }
        else {
          DAT_180bb8680 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8688;
      FUN_1805f68fc(&DAT_1808d8dd0);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,1);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8678;
  if (DAT_180bb8678 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8670) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8d80;
      iVar6 = FUN_1805f68d0(&DAT_1808d8d80);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8dcc == 0x7fffffff) {
        DAT_1808d8dcc = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8678 == 0) && (DAT_180bb8670 <= UVar7)) {
        DAT_180bb8678 = FUN_1804174b0("C_EconItemView",0x216db5e3);
        if (DAT_180bb8678 == 0) {
          DAT_180bb8670 = UVar7 + 1000;
        }
        else {
          DAT_180bb8670 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8678;
      FUN_1805f68fc(&DAT_1808d8d80);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,1);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8668;
  if (DAT_180bb8668 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8660) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8d30;
      iVar6 = FUN_1805f68d0(&DAT_1808d8d30);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8d7c == 0x7fffffff) {
        DAT_1808d8d7c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8668 == 0) && (DAT_180bb8660 <= UVar7)) {
        DAT_180bb8668 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180bb8668 == 0) {
          DAT_180bb8660 = UVar7 + 1000;
        }
        else {
          DAT_180bb8660 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8668;
      FUN_1805f68fc(&DAT_1808d8d30);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,2);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8658;
  if (DAT_180bb8658 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8650) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8ce0;
      iVar6 = FUN_1805f68d0(&DAT_1808d8ce0);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8d2c == 0x7fffffff) {
        DAT_1808d8d2c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8658 == 0) && (DAT_180bb8650 <= UVar7)) {
        DAT_180bb8658 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
        if (DAT_180bb8658 == 0) {
          DAT_180bb8650 = UVar7 + 1000;
        }
        else {
          DAT_180bb8650 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8658;
      FUN_1805f68fc(&DAT_1808d8ce0);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,4);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8648;
  if (DAT_180bb8648 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8640) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8c90;
      iVar6 = FUN_1805f68d0(&DAT_1808d8c90);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8cdc == 0x7fffffff) {
        DAT_1808d8cdc = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8648 == 0) && (DAT_180bb8640 <= UVar7)) {
        DAT_180bb8648 = FUN_1804174b0("C_EconItemView",0xafd12ee8);
        if (DAT_180bb8648 == 0) {
          DAT_180bb8640 = UVar7 + 1000;
        }
        else {
          DAT_180bb8640 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8648;
      FUN_1805f68fc(&DAT_1808d8c90);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,0xa1);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar6 = DAT_180bb8638;
  if (DAT_180bb8638 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8630) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8c40;
      iVar6 = FUN_1805f68d0(&DAT_1808d8c40);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8c8c == 0x7fffffff) {
        DAT_1808d8c8c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8638 == 0) && (DAT_180bb8630 <= UVar7)) {
        DAT_180bb8638 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
        if (DAT_180bb8638 == 0) {
          DAT_180bb8630 = UVar7 + 1000;
        }
        else {
          DAT_180bb8630 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8638;
      FUN_1805f68fc(&DAT_1808d8c40);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,0xa1);
  if (cVar4 == '\0') {
    return 0;
  }
  if (param_1[0x20] == '\0') {
    iVar6 = DAT_180bb8608;
    if (DAT_180bb8608 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180bb8600) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_1808d8b30);
        if (iVar6 != 0) goto LAB_18019c082;
        if (DAT_1808d8b7c == 0x7fffffff) {
          DAT_1808d8b7c = 0x7ffffffe;
          goto LAB_18019c077;
        }
        if ((DAT_180bb8608 == 0) && (DAT_180bb8600 <= UVar7)) {
          DAT_180bb8608 = FUN_1804174b0("C_EconEntity",0xa12d48f);
          if (DAT_180bb8608 == 0) {
            DAT_180bb8600 = UVar7 + 1000;
          }
          else {
            DAT_180bb8600 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180bb8608;
        FUN_1805f68fc(&DAT_1808d8b30);
      }
    }
    cVar4 = FUN_18019c090(&local_68,*(undefined8 *)(param_1 + 8),(longlong)iVar6,4);
    if (cVar4 == '\0') {
      return 0;
    }
    iVar6 = DAT_180bb85f8;
    if (DAT_180bb85f8 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180bb85f0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_1808d8ae0);
        if (iVar6 != 0) goto LAB_18019c082;
        if (DAT_1808d8b2c == 0x7fffffff) {
          DAT_1808d8b2c = 0x7ffffffe;
          goto LAB_18019c077;
        }
        if ((DAT_180bb85f8 == 0) && (DAT_180bb85f0 <= UVar7)) {
          DAT_180bb85f8 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
          if (DAT_180bb85f8 == 0) {
            DAT_180bb85f0 = UVar7 + 1000;
          }
          else {
            DAT_180bb85f0 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180bb85f8;
        FUN_1805f68fc(&DAT_1808d8ae0);
      }
    }
    cVar4 = FUN_18019c090(&local_68,*(undefined8 *)(param_1 + 8),(longlong)iVar6,4);
    if (cVar4 == '\0') {
      return 0;
    }
    iVar6 = DAT_180bb85e8;
    if (DAT_180bb85e8 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180bb85e0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_1808d8a90);
        if (iVar6 != 0) goto LAB_18019c082;
        if (DAT_1808d8adc == 0x7fffffff) {
          DAT_1808d8adc = 0x7ffffffe;
          goto LAB_18019c077;
        }
        if ((DAT_180bb85e8 == 0) && (DAT_180bb85e0 <= UVar7)) {
          DAT_180bb85e8 = FUN_1804174b0("C_EconEntity",0x86253266);
          if (DAT_180bb85e8 == 0) {
            DAT_180bb85e0 = UVar7 + 1000;
          }
          else {
            DAT_180bb85e0 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180bb85e8;
        FUN_1805f68fc(&DAT_1808d8a90);
      }
    }
    cVar4 = FUN_18019c090(&local_68,*(undefined8 *)(param_1 + 8),(longlong)iVar6,4);
    if (cVar4 == '\0') {
      return 0;
    }
    iVar6 = DAT_180bb85d8;
    if (DAT_180bb85d8 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180bb85d0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_1808d8a40);
        if (iVar6 != 0) goto LAB_18019c082;
        if (DAT_1808d8a8c == 0x7fffffff) {
          DAT_1808d8a8c = 0x7ffffffe;
          goto LAB_18019c077;
        }
        if ((DAT_180bb85d8 == 0) && (DAT_180bb85d0 <= UVar7)) {
          DAT_180bb85d8 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
          if (DAT_180bb85d8 == 0) {
            uVar13 = UVar7 + 1000;
          }
          DAT_180bb85d0 = uVar13;
        }
        iVar6 = DAT_180bb85d8;
        FUN_1805f68fc(&DAT_1808d8a40);
      }
    }
    cVar4 = FUN_18019c090(&local_68,*(undefined8 *)(param_1 + 8),(longlong)iVar6,4);
    if (cVar4 == '\0') {
      return 0;
    }
    return 1;
  }
  iVar6 = DAT_180bb8628;
  if (DAT_180bb8628 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb8620) {
      iVar6 = 0;
    }
    else {
      local_78 = &DAT_1808d8bf0;
      iVar6 = FUN_1805f68d0(&DAT_1808d8bf0);
      if (iVar6 != 0) goto LAB_18019c082;
      if (DAT_1808d8c3c == 0x7fffffff) {
        DAT_1808d8c3c = 0x7ffffffe;
        goto LAB_18019c077;
      }
      if ((DAT_180bb8628 == 0) && (DAT_180bb8620 <= UVar7)) {
        DAT_180bb8628 = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
        if (DAT_180bb8628 == 0) {
          DAT_180bb8620 = UVar7 + 1000;
        }
        else {
          DAT_180bb8620 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8628;
      FUN_1805f68fc(&DAT_1808d8bf0);
    }
  }
  cVar4 = FUN_18019c090(&local_68,lVar9,(longlong)iVar6,1);
  if (cVar4 == '\0') {
    return 0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar3 = DAT_1808da460;
  lVar8 = DAT_1808d8be0;
  if ((DAT_1808d8be0 == DAT_1808da460) && (DAT_180bb8618 != 0)) goto LAB_18019bb4e;
  UVar7 = GetTickCount64();
  if ((lVar8 == lVar3) && (UVar7 < DAT_180bb8610)) {
    return 0;
  }
  local_78 = &DAT_1808d8b90;
  iVar6 = FUN_1805f68d0(&DAT_1808d8b90);
  if (iVar6 != 0) {
LAB_18019c082:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d8bdc == 0x7fffffff) {
    DAT_1808d8bdc = 0x7ffffffe;
LAB_18019c077:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar13 = 1000;
  if (DAT_1808d8be0 == lVar3) {
    if ((DAT_180bb8618 == 0) && (DAT_180bb8610 <= UVar7)) goto LAB_18019baaf;
  }
  else {
    DAT_1808d8b80 = 1000;
LAB_18019baaf:
    lVar8 = -1;
    do {
      local_60 = lVar8 + 1;
      lVar2 = lVar8 + 1;
      lVar8 = local_60;
    } while ("client.dll:40534883EC20486381????????440FB7CA"[lVar2] != '\0');
    local_68 = "client.dll:40534883EC20486381????????440FB7CA";
    local_58 = "patterns::econ_item_view_remove_attribute";
    local_50 = 0x29;
    DAT_180bb8618 = FUN_1800e5d20(&local_58,&local_68);
    DAT_1808d8be0 = lVar3;
    DAT_180bb8610 = 0xffffffffffffffff;
    if (DAT_180bb8618 == 0) {
      DAT_180bb8610 = DAT_1808d8b80 + UVar7;
      uVar13 = 60000;
      if (DAT_1808d8b80 < 60000) {
        uVar13 = DAT_1808d8b80 * 2;
      }
    }
    DAT_1808d8b80 = uVar13;
  }
  lVar8 = DAT_180bb8618;
  FUN_1805f68fc(&DAT_1808d8b90);
  if (lVar8 == 0) {
    return 0;
  }
LAB_18019bb4e:
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  bVar1 = false;
  if (lVar9 + 0x210 != 0) {
    local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
    cVar4 = FUN_1804514f0(&local_68,lVar9 + 0x210,4);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar10 = (uint)local_68;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar12 = 0xffffffff;
  if (bVar1) {
    uVar12 = uVar10;
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  pcVar11 = local_78;
  if (lVar9 + 0x218 == 0) {
    bVar1 = false;
  }
  else {
    local_68 = (char *)0x0;
    cVar4 = FUN_1804514f0(&local_68,lVar9 + 0x218,8);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      pcVar11 = local_68;
    }
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  pcVar14 = (char *)0x0;
  if (bVar1) {
    pcVar14 = pcVar11;
  }
  if ((0x4000 < uVar12) || ((uVar12 != 0 && (pcVar14 == (char *)0x0)))) {
    return 0;
  }
  iVar6 = 0;
  if (0 < (int)uVar12) {
    uVar16 = 0;
    uVar10 = (uint)(ushort)local_68;
    auVar15 = ZEXT464((uint)local_68);
    do {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      bVar1 = false;
      if (pcVar14 + ((longlong)iVar6 * 9 + 6) * 8 != (char *)0x0) {
        local_68 = (char *)((ulonglong)local_68 & 0xffffffffffff0000);
        cVar4 = FUN_1804514f0(&local_68,pcVar14 + ((longlong)iVar6 * 9 + 6) * 8,2);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          uVar10 = (uint)(ushort)local_68;
          bVar1 = true;
        }
      }
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if ((bVar1) && ((ushort)((short)uVar10 - 6U) < 3)) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        bVar1 = false;
        if (pcVar14 + (longlong)iVar6 * 0x48 + 0x34 != (char *)0x0) {
          local_68 = (char *)CONCAT44(local_68._4_4_,uVar16);
          cVar4 = FUN_1804514f0(&local_68,pcVar14 + (longlong)iVar6 * 0x48 + 0x34,4);
          if (cVar4 == '\0') {
            bVar1 = false;
          }
          else {
            auVar15 = ZEXT464((uint)local_68);
            bVar1 = true;
          }
        }
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (!bVar1) {
          return 0;
        }
        sVar5 = thunk_FUN_180624430(auVar15._0_8_);
        if (0 < sVar5) {
          return 0;
        }
        local_78._0_5_ = CONCAT14(1,auVar15._0_4_);
        *(char **)(param_1 + (ulonglong)uVar10 * 8 + 0x318) = local_78;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar12);
  }
  return 1;
}




// FUN_1802b8de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b8de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b8de0(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 local_68;
  undefined1 uStack_60;
  char *local_58;
  ulonglong uStack_50;
  char *local_48;
  longlong local_40;
  
  DAT_180902d70 = 0;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f5318;
  lVar5 = DAT_1808da460;
  uVar10 = 1000;
  if ((DAT_1808f5318 == DAT_1808da460) && (lVar9 = DAT_180c6e790, DAT_180c6e790 != 0)) {
LAB_1802b8f7c:
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    local_68 = (char *)0x0;
    cVar2 = FUN_1804514f0(&local_68,lVar9,8);
    bVar11 = cVar2 != '\0';
    uStack_60 = bVar11;
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    pcVar8 = local_68;
  }
  else {
    UVar4 = GetTickCount64();
    if ((lVar6 != lVar5) || (DAT_180c6e788 <= UVar4)) {
      local_68 = &DAT_1808f5320;
      iVar3 = FUN_1805f68d0(&DAT_1808f5320);
      if (iVar3 != 0) goto LAB_1802b9323;
      if (DAT_1808f536c == 0x7fffffff) {
        DAT_1808f536c = 0x7ffffffe;
        goto LAB_1802b9318;
      }
      if (DAT_1808f5318 == lVar5) {
        if ((DAT_180c6e790 == 0) && (DAT_180c6e788 <= UVar4)) goto LAB_1802b8ee1;
      }
      else {
        DAT_1808f5370 = 1000;
LAB_1802b8ee1:
        lVar6 = -1;
        do {
          local_40 = lVar6 + 1;
          lVar9 = lVar6 + 1;
          lVar6 = local_40;
        } while ("client.dll:488BD94533C0488B0D*????????BA01000000E8????????8B0B"[lVar9] != '\0');
        local_48 = "client.dll:488BD94533C0488B0D*????????BA01000000E8????????8B0B";
        local_58 = "patterns::dynamic_light_manager";
        uStack_50 = 0x1f;
        DAT_180c6e790 = FUN_1800e5d20(&local_58,&local_48);
        DAT_1808f5318 = lVar5;
        DAT_180c6e788 = 0xffffffffffffffff;
        if (DAT_180c6e790 == 0) {
          DAT_180c6e788 = DAT_1808f5370 + UVar4;
          if (DAT_1808f5370 < 60000) {
            DAT_1808f5370 = DAT_1808f5370 * 2;
          }
          else {
            DAT_1808f5370 = 60000;
          }
        }
        else {
          DAT_1808f5370 = 1000;
        }
      }
      lVar9 = DAT_180c6e790;
      FUN_1805f68fc(&DAT_1808f5320);
      if (lVar9 != 0) goto LAB_1802b8f7c;
    }
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    bVar11 = false;
    pcVar8 = local_58;
  }
  if (DAT_180902d88 == 0) {
    if (bVar11) goto LAB_1802b9027;
    pcVar8 = (char *)0x0;
LAB_1802b9089:
    local_68._0_5_ = (uint5)(uint)local_68;
  }
  else {
    if (!bVar11) {
      return;
    }
LAB_1802b9027:
    if (DAT_180902d88 == 0) goto LAB_1802b9089;
    lVar5 = DAT_180902d88 + 0x24;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (lVar5 == 0) {
LAB_1802b9068:
      local_68._0_5_ = (uint5)(uint)local_68;
    }
    else {
      local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_68,lVar5,4);
      if (cVar2 == '\0') goto LAB_1802b9068;
      local_68._0_5_ = CONCAT14(1,(uint)local_68);
    }
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  if (((DAT_180902d88 != 0) && (pcVar8 == DAT_180902d80)) &&
     ((char)((ulonglong)local_68 >> 0x20) == '\0')) {
    return;
  }
  if ((char *)0x7fffefffffff < DAT_180902d80 + -0x10000000) {
    DAT_180902d70 = 0;
    DAT_180902d78 = 0;
    DAT_180902d7c = 0;
    _DAT_180902d80 = (undefined1  [16])0x0;
    _DAT_180902d90 = 0;
    return;
  }
  if (pcVar8 != DAT_180902d80) {
    DAT_180902d70 = 0;
    DAT_180902d78 = 0;
    DAT_180902d7c = 0;
    _DAT_180902d80 = (undefined1  [16])0x0;
    _DAT_180902d90 = 0;
    return;
  }
  if (0x7fffefffffff < DAT_180902d88 - 0x10000000U) {
    DAT_180902d70 = 0;
    DAT_180902d78 = 0;
    DAT_180902d7c = 0;
    _DAT_180902d80 = (undefined1  [16])0x0;
    _DAT_180902d90 = 0;
    return;
  }
  lVar5 = DAT_180902d88 + 0x24;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar11 = false;
  if (lVar5 != 0) {
    local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
    cVar2 = FUN_1804514f0(&local_68,lVar5,4);
    if (cVar2 == '\0') {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  iVar3 = (uint)local_68;
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if (!bVar11) {
    DAT_180902d70 = 0;
    DAT_180902d78 = 0;
    DAT_180902d7c = 0;
    _DAT_180902d80 = (undefined1  [16])0x0;
    _DAT_180902d90 = 0;
    return;
  }
  if (iVar3 != 0x564c4954) {
    DAT_180902d70 = 0;
    DAT_180902d78 = 0;
    DAT_180902d7c = 0;
    _DAT_180902d80 = (undefined1  [16])0x0;
    _DAT_180902d90 = 0;
    return;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f5310;
  lVar5 = DAT_1808da460;
  if ((DAT_1808f5310 == DAT_1808da460) && (lVar9 = DAT_180c6e778, DAT_180c6e778 != 0))
  goto LAB_1802b928c;
  UVar4 = GetTickCount64();
  if ((lVar6 == lVar5) && (UVar4 < DAT_180c6e780)) {
    return;
  }
  local_68 = &DAT_1808f52b0;
  iVar3 = FUN_1805f68d0(&DAT_1808f52b0);
  if (iVar3 != 0) {
LAB_1802b9323:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f52fc == 0x7fffffff) {
    DAT_1808f52fc = 0x7ffffffe;
LAB_1802b9318:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808f5310 == lVar5) {
    if ((DAT_180c6e778 == 0) && (DAT_180c6e780 <= UVar4)) goto LAB_1802b91fa;
  }
  else {
    DAT_1808f5300 = 1000;
LAB_1802b91fa:
    uVar7 = 0xffffffffffffffff;
    do {
      uStack_50 = uVar7 + 1;
      lVar6 = uVar7 + 1;
      uVar7 = uStack_50;
    } while ("client.dll:488BD94533C0488B0D????????BA01000000>E8????????8B0B"[lVar6] != '\0');
    local_58 = "client.dll:488BD94533C0488B0D????????BA01000000>E8????????8B0B";
    local_48 = "patterns::dynamic_light_alloc";
    local_40 = 0x1d;
    DAT_180c6e778 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1808f5310 = lVar5;
    DAT_180c6e780 = 0xffffffffffffffff;
    if (DAT_180c6e778 == 0) {
      DAT_180c6e780 = DAT_1808f5300 + UVar4;
      uVar10 = DAT_1808f5300 * 2;
      if (59999 < DAT_1808f5300) {
        uVar10 = 60000;
      }
    }
    DAT_1808f5300 = uVar10;
  }
  lVar9 = DAT_180c6e778;
  FUN_1805f68fc(&DAT_1808f52b0);
  if (lVar9 == 0) {
    return;
  }
LAB_1802b928c:
  uVar1 = DAT_180902d80;
  cVar2 = FUN_1804513c0(lVar9,1,2);
  if (cVar2 == '\0') {
    return;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  FUN_1802bab50(&local_58,lVar9,uVar1);
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((char)uStack_50 == '\0') {
    return;
  }
  _DAT_180902d90 = 0;
  _DAT_180902d80 = (undefined1  [16])0x0;
  DAT_180902d7c = 0;
  DAT_180902d78 = 0;
  DAT_180902d70 = 0;
  return;
}




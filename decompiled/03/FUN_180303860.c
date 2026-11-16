// FUN_180303860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180303860 */

undefined8 FUN_180303860(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  if (param_1 < 1) {
    return 1;
  }
  if ((DAT_180bbea86 == '\0') || (DVar4 = GetCurrentThreadId(), DAT_180bbf068 != DVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((DAT_180bbea87 == '\0') || (DVar4 = GetCurrentThreadId(), DAT_180bbf068 != DVar4)) {
    bVar2 = false;
    iVar8 = 0;
    if (bVar1) {
      iVar8 = DAT_180bbf06c;
    }
  }
  else {
    bVar2 = true;
    iVar8 = DAT_180bda154;
  }
  iVar9 = DAT_180bbf06c;
  if (bVar1) {
    iVar9 = 0;
  }
  iVar5 = DAT_180bda154;
  if (bVar2) {
    iVar5 = 0;
  }
  if ((DAT_180bda140 == 0) ||
     (plVar6 = (longlong *)FUN_18017bf40(local_res10), DAT_180bda140 <= *plVar6)) {
    DAT_180bbeab8 = DAT_180bbeab8 | 1;
    bVar3 = false;
    if (iVar8 < param_1) {
      DAT_180bbeab8 = 1;
      return 0;
    }
  }
  else {
    bVar3 = true;
  }
  if (param_1 <= DAT_1808e3a54) {
    if ((DAT_180bbe88e == '\0') || (DAT_180bbe88f != '\0')) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
      if (DAT_180bbea84 != '\0') {
        iVar8 = 3;
      }
      iVar8 = (uint)(DAT_180bbea85 != '\0') + iVar8;
    }
    iVar7 = DAT_1808e3a54 - param_1;
    if ((iVar8 <= iVar7) && (iVar9 + iVar5 <= iVar7)) {
      if (bVar1) {
        iVar8 = DAT_180bbf06c - param_1;
        DAT_180bbf06c = 0;
        if (0 < iVar8) {
          DAT_180bbf06c = iVar8;
        }
      }
      if (bVar2) {
        iVar8 = DAT_180bda154 - param_1;
        DAT_180bda154 = 0;
        if (0 < iVar8) {
          DAT_180bda154 = iVar8;
        }
      }
      if (!bVar3) {
        DAT_180bbf12c = DAT_180bbf12c + param_1;
      }
      DAT_1808e3a54 = iVar7;
      return 1;
    }
  }
  DAT_180bbeab8 = 1;
  return 0;
}




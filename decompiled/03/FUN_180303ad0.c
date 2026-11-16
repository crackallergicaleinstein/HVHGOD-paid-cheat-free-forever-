// FUN_180303ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180303ad0 */

ulonglong FUN_180303ad0(int param_1)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  
  if (DAT_180bbeab9 != '\0') {
    DVar3 = GetCurrentThreadId();
    uVar7 = CONCAT44(extraout_var,DVar3);
    if (DAT_180bda160 == DVar3) {
      if ((0 < param_1) && (uVar7 = (ulonglong)DAT_180bda15c, param_1 <= (int)DAT_180bda15c)) {
        DAT_180bda15c = DAT_180bda15c - param_1;
        return CONCAT71((uint7)(uint3)(DAT_180bda15c >> 8),1);
      }
      goto LAB_180303c79;
    }
  }
  if ((DAT_180bbea86 == '\0') || (DVar3 = GetCurrentThreadId(), DAT_180bbf068 != DVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((DAT_180bbea87 == '\0') || (DVar3 = GetCurrentThreadId(), DAT_180bbf068 != DVar3)) {
    bVar2 = false;
    uVar5 = 0;
    if (bVar1) {
      uVar5 = DAT_180bbf128;
    }
  }
  else {
    bVar2 = true;
    uVar5 = DAT_180bda158;
  }
  uVar11 = DAT_180bbf128;
  if (bVar1) {
    uVar11 = 0;
  }
  uVar4 = DAT_180bda158;
  if (bVar2) {
    uVar4 = 0;
  }
  if ((DAT_180bda140 == 0) ||
     (plVar6 = (longlong *)FUN_18017bf40(local_res10), DAT_180bda140 <= *plVar6)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  uVar7 = 0;
  DAT_180bbeab8 = DAT_180bbeab8 | bVar9 ^ 1;
  if ((0 < param_1) &&
     (((bVar9 != 0 || (param_1 <= (int)uVar5)) && (uVar7 = 0, param_1 <= DAT_1808e3a58)))) {
    if ((DAT_180bbe88e == '\0') || (DAT_180bbe88f != '\0')) {
      iVar10 = 0;
    }
    else {
      iVar10 = 2;
      if (DAT_180bbea84 != '\0') {
        iVar10 = 0x42;
      }
      iVar10 = (-(uint)(DAT_180bbea85 != '\0') & 0x14) + iVar10;
    }
    uVar7 = 0;
    iVar8 = DAT_1808e3a58 - param_1;
    if ((iVar10 <= iVar8) && ((int)(uVar11 + uVar4) <= iVar8)) {
      if (bVar1) {
        uVar7 = 0;
        if (0 < (int)(DAT_180bbf128 - param_1)) {
          uVar7 = (ulonglong)(DAT_180bbf128 - param_1);
        }
        DAT_180bbf128 = (uint)uVar7;
      }
      if (bVar2) {
        uVar5 = DAT_180bda158 - param_1;
        uVar7 = (ulonglong)uVar5;
        DAT_180bda158 = 0;
        if (0 < (int)uVar5) {
          DAT_180bda158 = uVar5;
        }
      }
      if (bVar9 == 0) {
        DAT_180bda150 = DAT_180bda150 + param_1;
      }
      DAT_1808e3a58 = iVar8;
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
  }
LAB_180303c79:
  DAT_180bbeab8 = 1;
  return uVar7 & 0xffffffffffffff00;
}




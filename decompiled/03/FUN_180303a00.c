// FUN_180303a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180303a00 */

int FUN_180303a00(void)

{
  DWORD DVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  DVar1 = GetCurrentThreadId();
  if ((DAT_180bbea86 == '\0') || (iVar4 = 0, DAT_180bbf068 != DVar1)) {
    iVar4 = DAT_180bbf06c;
  }
  if ((DAT_180bbea87 == '\0') || (iVar2 = 0, DAT_180bbf068 != DVar1)) {
    iVar2 = DAT_180bda154;
  }
  if (DAT_180bda140 != 0) {
    plVar3 = (longlong *)FUN_18017bf40(local_res8);
    if (*plVar3 < DAT_180bda140) {
      if ((DAT_180bbe88e == '\0') || (DAT_180bbe88f != '\0')) {
        iVar5 = 0;
      }
      else {
        iVar5 = (-(uint)(DAT_180bbea84 != '\0') & 2) + (DAT_180bbea85 != '\0') + 1;
      }
      if (iVar5 < iVar2 + iVar4) {
        iVar5 = iVar2 + iVar4;
      }
      iVar4 = 0;
      if (0 < DAT_1808e3a54 - iVar5) {
        iVar4 = DAT_1808e3a54 - iVar5;
      }
      return iVar4;
    }
  }
  DAT_180bbeab8 = DAT_180bbeab8 | 1;
  return 0;
}




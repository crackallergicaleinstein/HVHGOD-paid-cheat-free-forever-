// FUN_1805707f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805707f0 */

char * FUN_1805707f0(void)

{
  char cVar1;
  DWORD DVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  DVar2 = GetCurrentProcessId();
  cVar1 = FUN_180166f60(&DAT_180bb8af0,DVar2);
  if (cVar1 == '\0') {
    piVar3 = (int *)&DAT_180bb8d28;
    if (0xf < DAT_180bb8d40) {
      piVar3 = DAT_180bb8d28;
    }
    if (DAT_180bb8d38 == 6) {
      iVar5 = *piVar3 + -0x79616c70;
      if (iVar5 == 0) {
        iVar5 = *(ushort *)(piVar3 + 1) - 0x7265;
      }
      bVar6 = iVar5 == 0;
    }
    else {
      bVar6 = false;
    }
    pcVar4 = "Cached account - authorization inactive";
    if (bVar6) {
      pcVar4 = "Account unverified";
    }
    return pcVar4;
  }
  if (DAT_180bb8e89 != '\0') {
    return "Verified - Lifetime";
  }
  if (DAT_180bb8ea0 == 0) {
    return "Verified - Active";
  }
  pcVar4 = (char *)&DAT_180bb8e90;
  if (0xf < DAT_180bb8ea8) {
    pcVar4 = DAT_180bb8e90;
  }
  return pcVar4;
}




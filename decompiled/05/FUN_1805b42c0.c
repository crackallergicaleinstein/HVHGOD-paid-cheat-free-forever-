// FUN_1805b42c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b42c0 */

int FUN_1805b42c0(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pbVar6 = (byte *)*param_1;
  iVar5 = 0;
  bVar8 = false;
  bVar3 = false;
  if ((param_2 <= pbVar6) || (0x22 < param_3 - 2U)) {
    return 0;
  }
  bVar1 = *pbVar6;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    bVar8 = bVar1 == 0x2d;
    pbVar6 = pbVar6 + 1;
    if (pbVar6 == param_2) {
      return 0;
    }
    if (*pbVar6 == 0x2d) {
      return 0;
    }
    if (*pbVar6 == 0x2b) {
      return 0;
    }
  }
  bVar4 = false;
  if (pbVar6 < param_2) {
    while ((bVar3 = bVar4, bVar1 = *pbVar6, bVar1 != 0x20 &&
           (((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)) && (bVar1 < 0x80))))) {
      cVar2 = (&DAT_1806750d0)[bVar1 & 0x7f];
      if ((cVar2 < '\0') || (param_3 <= cVar2)) break;
      iVar7 = (int)(0x7fffffff / (longlong)param_3);
      if ((iVar7 < iVar5) || ((iVar5 == iVar7 && ((char)(0x7fffffff % (longlong)param_3) < cVar2))))
      {
        bVar3 = true;
      }
      else {
        iVar5 = iVar5 * param_3 + (int)cVar2;
      }
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar3;
      if (param_2 <= pbVar6) break;
    }
  }
  *param_1 = pbVar6;
  if (bVar3) {
    iVar5 = 0x7fffffff;
  }
  iVar7 = -iVar5;
  if (!bVar8) {
    iVar7 = iVar5;
  }
  return iVar7;
}




// FUN_1801e4980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e4980 */

longlong * FUN_1801e4980(longlong *param_1,char *param_2,longlong param_3,uint param_4,int param_5)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  
  iVar8 = 6;
  if (-1 < param_5) {
    iVar8 = param_5;
  }
  uVar3 = param_4 >> 0x17;
  uVar7 = (param_4 & 0x7fffff) * 2;
  if (uVar3 == 0) {
    uVar2 = -(uint)((param_4 & 0x7fffff) != 0) & 0xffffff82;
  }
  else {
    uVar2 = uVar3 - 0x7f;
  }
  if (uVar3 != 0) {
    uVar7 = uVar7 | 0x1000000;
  }
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  cVar9 = '-';
  if (-1 < (int)uVar2) {
    cVar9 = '+';
  }
  if (uVar3 < 10) {
    lVar4 = 4;
  }
  else {
    lVar4 = 6 - (ulonglong)(uVar3 < 100);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar8) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar8 < (longlong)((ulonglong)(0 < iVar8) + lVar4)))
  {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar8 < 6) {
      uVar7 = uVar7 + (1 << ((6 - iVar8) * 4 & 0x1fU) & (uVar7 * 2 - 1 | uVar7) & uVar7 * 2);
    }
    uVar2 = uVar7 & 0xffffff;
    *param_2 = (char)(uVar7 >> 0x18) + '0';
    pcVar6 = param_2 + 1;
    if (0 < iVar8) {
      *pcVar6 = '.';
      uVar5 = 0x14;
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar2 >> 0x14];
      pcVar6 = param_2 + 3;
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        if ((int)uVar5 == 0) {
          FUN_18063ab10(pcVar6,0x30,(longlong)iVar8);
          pcVar6 = pcVar6 + iVar8;
          break;
        }
        sVar1 = ((byte)uVar5 < 0x21) * (' ' - (byte)uVar5);
        uVar2 = (uVar2 << sVar1) >> sVar1;
        uVar5 = (ulonglong)((int)uVar5 - 4);
        *pcVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar2 >> (uVar5 & 0x3f)];
        pcVar6 = pcVar6 + 1;
      }
    }
    *pcVar6 = 'p';
    pcVar6[1] = cVar9;
    FUN_1801e4cf0(param_1,pcVar6 + 2,param_3,uVar3,10);
  }
  return param_1;
}




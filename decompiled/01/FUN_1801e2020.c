// FUN_1801e2020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e2020 */

longlong *
FUN_1801e2020(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  sbyte sVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  
  iVar7 = 0xd;
  if (-1 < param_5) {
    iVar7 = param_5;
  }
  uVar8 = param_4 & 0xfffffffffffff;
  uVar5 = (uint)(param_4 >> 0x20);
  if (uVar5 >> 0x14 == 0) {
    uVar2 = -(uint)(uVar8 != 0) & 0xfffffc02;
  }
  else {
    uVar2 = (uVar5 >> 0x14) - 0x3ff;
  }
  if (uVar5 >> 0x14 != 0) {
    uVar8 = uVar8 | 0x10000000000000;
  }
  uVar5 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar5 = uVar2;
  }
  cVar10 = '-';
  if (-1 < (int)uVar2) {
    cVar10 = '+';
  }
  if (uVar5 < 10) {
    lVar3 = 4;
  }
  else if (uVar5 < 100) {
    lVar3 = 5;
  }
  else {
    lVar3 = 7 - (ulonglong)(uVar5 < 1000);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar7) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar7 < (longlong)((ulonglong)(0 < iVar7) + lVar3)))
  {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar7 < 0xd) {
      uVar8 = uVar8 + (1L << ((ulonglong)(uint)((0xd - iVar7) * 4) & 0x3f) & (uVar8 * 2 - 1 | uVar8)
                      & uVar8 * 2);
    }
    uVar9 = uVar8 & 0xfffffffffffff;
    *param_2 = (char)(uVar8 >> 0x34) + '0';
    pcVar6 = param_2 + 1;
    if (0 < iVar7) {
      *pcVar6 = '.';
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9 >> 0x30];
      pcVar6 = param_2 + 3;
      uVar8 = 0x30;
      while (iVar7 = iVar7 + -1, iVar7 != 0) {
        if ((int)uVar8 == 0) {
          FUN_18063ab10(pcVar6,0x30,(longlong)iVar7);
          pcVar6 = pcVar6 + iVar7;
          break;
        }
        uVar4 = (ulonglong)((int)uVar8 - 4);
        sVar1 = ((byte)uVar8 < 0x41) * ('@' - (byte)uVar8);
        uVar9 = (uVar9 << sVar1) >> sVar1;
        *pcVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9 >> (uVar4 & 0x3f) & 0xffffffff];
        pcVar6 = pcVar6 + 1;
        uVar8 = uVar4;
      }
    }
    *pcVar6 = 'p';
    pcVar6[1] = cVar10;
    FUN_1801e4cf0(param_1,pcVar6 + 2,param_3,uVar5,10);
  }
  return param_1;
}




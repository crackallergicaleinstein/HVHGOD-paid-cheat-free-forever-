// FUN_1801e4f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e4f00 */

undefined8 * FUN_1801e4f00(undefined8 *param_1,char *param_2,char *param_3,uint param_4,int param_5)

{
  sbyte sVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 in_R9;
  ulonglong uVar9;
  int iVar10;
  
  uVar5 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_1801e4f22;
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar5 = param_4 & 0x7fffffff;
  }
  if ((uVar5 & 0x7f800000) == 0x7f800000) {
    uVar5 = uVar5 & 0x7fffff;
    if (uVar5 == 0) {
      pcVar6 = "inf";
      lVar7 = 3;
    }
    else if (((int)param_4 < 0) && (uVar5 == 0x400000)) {
      pcVar6 = "nan(ind)";
      lVar7 = 8;
    }
    else if (uVar5 >> 0x16 == 0) {
      pcVar6 = "nan(snan)";
      lVar7 = 9;
    }
    else {
      pcVar6 = "nan";
      lVar7 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < lVar7) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_18063aed0(param_2,pcVar6,lVar7);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = param_2 + lVar7;
    return param_1;
  }
  if (param_5 != 4) {
    FUN_1801e5f30(param_1,param_2,param_3,in_R9,param_5);
    return param_1;
  }
  if (uVar5 == 0) {
    if (3 < (longlong)param_3 - (longlong)param_2) {
      builtin_strncpy(param_2,"0p+0",4);
      *param_1 = param_2 + 4;
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    iVar10 = -0x7e;
    uVar4 = uVar5 >> 0x17;
    if (uVar4 != 0) {
      iVar10 = uVar4 - 0x7f;
    }
    if (param_2 != param_3) {
      pcVar6 = param_2 + 1;
      *param_2 = (uVar4 != 0) + '0';
      if ((uVar5 & 0x7fffff) != 0) {
        if (pcVar6 == param_3) goto LAB_1801e4f22;
        *pcVar6 = '.';
        pcVar6 = param_2 + 2;
        uVar9 = 0x18;
        uVar5 = (uVar5 & 0x7fffff) * 2;
        do {
          uVar4 = (int)uVar9 - 4;
          uVar9 = (ulonglong)uVar4;
          if (pcVar6 == param_3) goto LAB_1801e4f22;
          *pcVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar5 >> (uVar9 & 0x3f)];
          pcVar6 = pcVar6 + 1;
          bVar8 = (byte)uVar4;
          sVar1 = (bVar8 < 0x21) * (' ' - bVar8);
          uVar5 = (uVar5 << sVar1) >> sVar1;
        } while (uVar5 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pcVar6) {
        *pcVar6 = 'p';
        cVar3 = '-';
        if (-1 < iVar10) {
          cVar3 = '+';
        }
        pcVar6[1] = cVar3;
        iVar2 = -iVar10;
        if (-iVar10 < 0) {
          iVar2 = iVar10;
        }
        FUN_1801e4cf0(param_1,pcVar6 + 2,param_3,iVar2,10);
        return param_1;
      }
    }
  }
LAB_1801e4f22:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}




// FUN_1801e23c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e23c0 */

undefined8 *
FUN_1801e23c0(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4,int param_5)

{
  sbyte sVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 in_ZMM3 [64];
  undefined1 local_28 [16];
  
  uVar6 = in_ZMM3._0_8_;
  uVar11 = uVar6 >> 0x3f;
  pcVar9 = param_2;
  if (in_ZMM3[7] < '\0') {
    if (param_2 == param_3) goto LAB_1801e23e3;
    pcVar9 = param_2 + 1;
    *param_2 = '-';
    uVar6 = uVar6 & 0x7fffffffffffffff;
  }
  if ((~uVar6 & 0x7ff0000000000000) == 0) {
    if ((uVar6 & 0xfffffffffffff) == 0) {
      pcVar7 = "inf";
      lVar8 = 3;
    }
    else if ((in_ZMM3[7] < '\0') && ((uVar6 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar7 = "nan(ind)";
      lVar8 = 8;
    }
    else if ((uVar6 & 0x8000000000000) == 0) {
      pcVar7 = "nan(snan)";
      lVar8 = 9;
    }
    else {
      pcVar7 = "nan";
      lVar8 = 3;
    }
    if ((longlong)param_3 - (longlong)pcVar9 < lVar8) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_18063aed0(pcVar9,pcVar7,lVar8);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = pcVar9 + lVar8;
    return param_1;
  }
  if (param_5 != 4) {
    puVar5 = (undefined8 *)FUN_1801e32d0(local_28,pcVar9,param_3,uVar11,param_5);
    *param_1 = *puVar5;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar5 + 1);
    return param_1;
  }
  if (uVar6 == 0) {
    if (3 < (longlong)param_3 - (longlong)pcVar9) {
      builtin_strncpy(pcVar9,"0p+0",4);
      *param_1 = pcVar9 + 4;
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    uVar11 = uVar6 & 0xfffffffffffff;
    iVar12 = -0x3fe;
    uVar10 = (uint)(uVar6 >> 0x20);
    if (uVar10 >> 0x14 != 0) {
      iVar12 = (uVar10 >> 0x14) - 0x3ff;
    }
    if (pcVar9 != param_3) {
      pcVar7 = pcVar9 + 1;
      *pcVar9 = (uVar10 >> 0x14 != 0) + '0';
      if (uVar11 != 0) {
        if (pcVar7 == param_3) goto LAB_1801e23e3;
        *pcVar7 = '.';
        pcVar7 = pcVar9 + 2;
        uVar6 = 0x34;
        do {
          uVar10 = (int)uVar6 - 4;
          uVar6 = (ulonglong)uVar10;
          if (pcVar7 == param_3) goto LAB_1801e23e3;
          *pcVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar11 >> (uVar6 & 0x3f) & 0xffffffff];
          pcVar7 = pcVar7 + 1;
          bVar3 = (byte)uVar10;
          sVar1 = (bVar3 < 0x41) * ('@' - bVar3);
          uVar11 = (uVar11 << sVar1) >> sVar1;
        } while (uVar11 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pcVar7) {
        *pcVar7 = 'p';
        cVar4 = '-';
        if (-1 < iVar12) {
          cVar4 = '+';
        }
        pcVar7[1] = cVar4;
        iVar2 = -iVar12;
        if (-iVar12 < 0) {
          iVar2 = iVar12;
        }
        FUN_1801e4cf0(param_1,pcVar7 + 2,param_3,iVar2,10);
        return param_1;
      }
    }
  }
LAB_1801e23e3:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}




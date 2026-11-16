// FUN_1800a84d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a84d0 */

void FUN_1800a84d0(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong *param_5,
                  ulonglong *param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar8 = 1;
  uVar9 = 1000000000;
  uVar4 = *param_6;
  uVar13 = uVar4 - *param_4;
  uVar10 = uVar4 - *param_5;
  uVar3 = -(int)param_6[1];
  uVar7 = uVar4 >> ((ulonglong)uVar3 & 0x3f);
  uVar12 = 1L << ((ulonglong)uVar3 & 0x3f);
  uVar14 = (ulonglong)uVar3;
  uVar4 = uVar4 & uVar12 - 1;
  uVar3 = (uint)uVar7;
  if (uVar3 < 1000000000) {
    uVar9 = 100000000;
    if (uVar3 < 100000000) {
      uVar9 = 10000000;
      if (uVar3 < 10000000) {
        uVar9 = 1000000;
        if (uVar3 < 1000000) {
          uVar9 = 100000;
          if (uVar3 < 100000) {
            uVar9 = 10000;
            if (uVar3 < 10000) {
              uVar9 = 1000;
              if (uVar3 < 1000) {
                if (uVar3 < 100) {
                  if (uVar3 < 10) {
                    uVar9 = 1;
                    iVar11 = 1;
                  }
                  else {
                    uVar9 = 10;
                    iVar11 = 2;
                  }
                }
                else {
                  uVar9 = 100;
                  iVar11 = 3;
                }
              }
              else {
                iVar11 = 4;
              }
            }
            else {
              iVar11 = 5;
            }
          }
          else {
            iVar11 = 6;
          }
        }
        else {
          iVar11 = 7;
        }
      }
      else {
        iVar11 = 8;
      }
    }
    else {
      iVar11 = 9;
    }
  }
  else {
    iVar11 = 10;
  }
  do {
    iVar2 = *param_2;
    uVar6 = uVar7 & 0xffffffff;
    iVar11 = iVar11 + -1;
    uVar7 = uVar6 % uVar9;
    *(char *)(iVar2 + param_1) = (char)(uVar6 / uVar9) + '0';
    uVar6 = (uVar7 << (uVar14 & 0x3f)) + uVar4;
    *param_2 = iVar2 + 1;
    if (uVar6 <= uVar13) {
      *param_3 = *param_3 + iVar11;
      uVar9 = uVar9 << (uVar14 & 0x3f);
      if (uVar10 <= uVar6) {
        return;
      }
      while( true ) {
        if (uVar13 - uVar6 < uVar9) {
          return;
        }
        uVar4 = uVar6 + uVar9;
        if ((uVar10 <= uVar4) && (uVar10 - uVar6 <= (uVar6 - uVar10) + uVar9)) break;
        pcVar1 = (char *)(param_1 + iVar2);
        *pcVar1 = *pcVar1 + -1;
        uVar6 = uVar4;
        if (uVar10 <= uVar4) {
          return;
        }
      }
      return;
    }
    uVar9 = uVar9 / 10;
  } while (0 < iVar11);
  iVar11 = iVar2 + 2;
  *param_2 = iVar11;
  uVar13 = uVar13 * 10;
  uVar10 = uVar10 * 10;
  uVar4 = uVar4 * 10;
  uVar7 = uVar4 & uVar12 - 1;
  *(char *)((iVar2 + 1) + param_1) = (char)(uVar4 >> (uVar14 & 0x3f)) + '0';
  if (uVar13 < uVar7) {
    do {
      lVar5 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      *(char *)(lVar5 + param_1) = (char)(uVar7 * 10 >> (uVar14 & 0x3f)) + '0';
      uVar7 = uVar7 * 10 & uVar12 - 1;
      iVar8 = iVar8 + 1;
      uVar13 = uVar13 * 10;
      uVar10 = uVar10 * 10;
    } while (uVar13 < uVar7);
    *param_2 = iVar11;
  }
  *param_3 = *param_3 - iVar8;
  if (uVar7 < uVar10) {
    do {
      if (uVar13 - uVar7 < uVar12) {
        return;
      }
      uVar4 = uVar12 + uVar7;
      if ((uVar10 <= uVar4) && (uVar10 - uVar7 <= (uVar12 - uVar10) + uVar7)) {
        return;
      }
      pcVar1 = (char *)((longlong)iVar11 + -1 + param_1);
      *pcVar1 = *pcVar1 + -1;
      uVar7 = uVar4;
    } while (uVar4 < uVar10);
  }
  return;
}




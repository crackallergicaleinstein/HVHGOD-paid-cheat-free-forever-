// FUN_1801e5af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e5af0 */

longlong *
FUN_1801e5af0(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5,
             uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  uVar7 = (uint)param_4;
  if (uVar7 < 100000000) {
    if (uVar7 < 10000000) {
      if (uVar7 < 1000000) {
        if (uVar7 < 100000) {
          if (uVar7 < 10000) {
            if (uVar7 < 1000) {
              if (uVar7 < 100) {
                uVar9 = 2 - (uVar7 < 10);
              }
              else {
                uVar9 = 3;
              }
            }
            else {
              uVar9 = 4;
            }
          }
          else {
            uVar9 = 5;
          }
        }
        else {
          uVar9 = 6;
        }
      }
      else {
        uVar9 = 7;
      }
    }
    else {
      uVar9 = 8;
    }
  }
  else {
    uVar9 = 9;
  }
  iVar13 = (int)(param_4 >> 0x20);
  uVar4 = iVar13 + uVar9;
  iVar1 = uVar4 - 1;
  if (param_5 == 0) {
    iVar2 = -3;
    if (uVar9 != 1) {
      iVar2 = -3 - uVar9;
    }
    if ((iVar2 <= iVar13) && (iVar13 <= (int)((uVar9 != 1) + 4))) goto LAB_1801e5c13;
  }
  else if (param_5 == 3) {
    if (uVar4 + 3 < 10) {
LAB_1801e5c13:
      if ((longlong)param_4 < 0) {
        if ((int)uVar4 < 1) {
          uVar3 = 2 - iVar13;
        }
        else {
          uVar3 = uVar9 + 1;
        }
      }
      else {
        uVar3 = uVar4;
        if (uVar7 == 1) {
          uVar3 = uVar4 - (byte)(&DAT_1807cb9c8)[iVar13];
        }
      }
      uVar12 = (ulonglong)uVar3;
      if ((longlong)uVar12 <= param_3 - (longlong)param_2) {
        uVar10 = uVar12;
        if (0 < iVar13) {
          if (10 < iVar13) {
LAB_1801e5c7e:
            FUN_1801e58b0(param_1,param_2,param_3,param_6 | 0x800000,param_7 + -0x96);
            return param_1;
          }
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          if (*(uint *)(&DAT_1807cb9f0 + (longlong)iVar13 * 4) < uVar7 >> (uVar3 & 0x1f))
          goto LAB_1801e5c7e;
          uVar10 = (ulonglong)uVar9;
        }
        pcVar5 = param_2 + uVar10;
        uVar10 = param_4;
        while (uVar3 = (uint)uVar10, 9999 < uVar7) {
          uVar10 = (uVar10 & 0xffffffff) / 10000;
          uVar7 = (uint)uVar10;
          uVar3 = uVar3 + uVar7 * -10000;
          *(undefined2 *)(pcVar5 + -2) = *(undefined2 *)(&DAT_1807cb900 + (uVar3 % 100) * 2);
          pcVar5 = pcVar5 + -4;
          *(undefined2 *)pcVar5 = *(undefined2 *)(&DAT_1807cb900 + (uVar3 / 100) * 2);
        }
        uVar7 = uVar3;
        if (99 < uVar3) {
          uVar7 = (uint)((uVar10 & 0xffffffff) / 100);
          pcVar5 = pcVar5 + -2;
          *(undefined2 *)pcVar5 = *(undefined2 *)(&DAT_1807cb900 + (uVar3 + uVar7 * -100) * 2);
        }
        if (uVar7 < 10) {
          pcVar5[-1] = (char)uVar7 + '0';
        }
        else {
          *(undefined2 *)(pcVar5 + -2) = *(undefined2 *)(&DAT_1807cb900 + uVar7 * 2);
        }
        if (iVar13 == 0 || (longlong)param_4 < 0) {
          if (iVar13 != 0) {
            if (0 < (int)uVar4) {
              FUN_18063aed0(param_2,param_2 + 1,(longlong)(int)uVar4);
              pcVar5 = param_2 + uVar12;
              param_2[(int)uVar4] = '.';
              goto LAB_1801e5f05;
            }
            param_2[0] = '0';
            param_2[1] = '.';
            if (0 < (int)-uVar4) {
              FUN_18063ab10(param_2 + 2,0x30,(longlong)(int)-uVar4);
            }
          }
          pcVar5 = param_2 + uVar12;
        }
        else {
          FUN_18063ab10(param_2 + uVar9,0x30,(longlong)iVar13);
          pcVar5 = param_2 + uVar12;
        }
        goto LAB_1801e5f05;
      }
      goto LAB_1801e5bee;
    }
  }
  else if (param_5 == 2) goto LAB_1801e5c13;
  uVar12 = (ulonglong)((1 < uVar9) + 4 + uVar9);
  if ((longlong)uVar12 <= param_3 - (longlong)param_2) {
    uVar10 = 0;
    if (9999 < uVar7) {
      uVar8 = param_4;
      uVar11 = uVar10;
      do {
        param_4 = (uVar8 & 0xffffffff) / 10000;
        uVar7 = (int)uVar8 + (uint)param_4 * -10000;
        uVar10 = (ulonglong)((int)uVar11 + 4);
        *(undefined2 *)(param_2 + (uVar9 - uVar11) + -1) =
             *(undefined2 *)(&DAT_1807cb900 + (uVar7 % 100) * 2);
        *(undefined2 *)(param_2 + (uVar9 - uVar11) + -3) =
             *(undefined2 *)(&DAT_1807cb900 + (uVar7 / 100) * 2);
        uVar8 = param_4;
        uVar11 = uVar10;
      } while (9999 < (uint)param_4);
    }
    uVar4 = (uint)param_4;
    uVar7 = uVar4;
    if (99 < uVar4) {
      uVar7 = (uint)((param_4 & 0xffffffff) / 100);
      *(undefined2 *)(param_2 + (uVar9 - uVar10) + -1) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar4 + uVar7 * -100) * 2);
    }
    if (uVar7 < 10) {
      cVar6 = (char)uVar7 + '0';
    }
    else {
      param_2[2] = (&DAT_1807cb900)[uVar7 * 2 + 1];
      cVar6 = (&DAT_1807cb900)[uVar7 * 2];
    }
    *param_2 = cVar6;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    else {
      param_2[1] = '.';
      uVar9 = uVar9 + 1;
    }
    param_2[uVar9] = 'e';
    iVar13 = iVar1;
    if (iVar1 < 0) {
      iVar13 = -iVar1;
    }
    cVar6 = '-';
    if (-1 < iVar1) {
      cVar6 = '+';
    }
    param_2[uVar9 + 1] = cVar6;
    *(undefined2 *)(param_2 + (uVar9 + 2)) = *(undefined2 *)(&DAT_1807cb900 + iVar13 * 2);
    pcVar5 = param_2 + uVar12;
LAB_1801e5f05:
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (longlong)pcVar5;
    return param_1;
  }
LAB_1801e5bee:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}




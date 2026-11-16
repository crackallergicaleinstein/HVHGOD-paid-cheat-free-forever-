// FUN_1801e2c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e2c10 */

longlong *
FUN_1801e2c10(longlong *param_1,char *param_2,longlong param_3,ulonglong *param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar5 = *param_4;
  iVar7 = (int)param_4[1];
  lVar6 = (longlong)iVar7;
  if (uVar5 < 10000000000000000) {
    if (uVar5 < 1000000000000000) {
      if (uVar5 < 100000000000000) {
        if (uVar5 < 10000000000000) {
          if (uVar5 < 1000000000000) {
            if (uVar5 < 100000000000) {
              if (uVar5 < 10000000000) {
                if (uVar5 < 1000000000) {
                  if (uVar5 < 100000000) {
                    if (uVar5 < 10000000) {
                      if (uVar5 < 1000000) {
                        if (uVar5 < 100000) {
                          if (uVar5 < 10000) {
                            if (uVar5 < 1000) {
                              if (uVar5 < 100) {
                                uVar14 = 2 - (uVar5 < 10);
                              }
                              else {
                                uVar14 = 3;
                              }
                            }
                            else {
                              uVar14 = 4;
                            }
                          }
                          else {
                            uVar14 = 5;
                          }
                        }
                        else {
                          uVar14 = 6;
                        }
                      }
                      else {
                        uVar14 = 7;
                      }
                    }
                    else {
                      uVar14 = 8;
                    }
                  }
                  else {
                    uVar14 = 9;
                  }
                }
                else {
                  uVar14 = 10;
                }
              }
              else {
                uVar14 = 0xb;
              }
            }
            else {
              uVar14 = 0xc;
            }
          }
          else {
            uVar14 = 0xd;
          }
        }
        else {
          uVar14 = 0xe;
        }
      }
      else {
        uVar14 = 0xf;
      }
    }
    else {
      uVar14 = 0x10;
    }
  }
  else {
    uVar14 = 0x11;
  }
  uVar15 = uVar14 + iVar7;
  iVar1 = uVar15 - 1;
  iVar11 = (int)uVar5;
  if (param_5 == 0) {
    iVar3 = -3;
    if (uVar14 != 1) {
      iVar3 = -3 - uVar14;
    }
    if ((iVar3 <= iVar7) && (iVar7 <= (int)((uVar14 != 1) + 4))) goto LAB_1801e2e07;
  }
  else if (param_5 == 3) {
    if (uVar15 + 3 < 10) {
LAB_1801e2e07:
      if (iVar7 < 0) {
        if ((int)uVar15 < 1) {
          uVar4 = 2 - iVar7;
        }
        else {
          uVar4 = uVar14 + 1;
        }
      }
      else {
        uVar4 = uVar15;
        if (uVar5 == 1) {
          uVar4 = uVar15 - (byte)(&DAT_1807cb2d0)[lVar6];
        }
      }
      uVar8 = (ulonglong)uVar4;
      if ((longlong)uVar8 <= param_3 - (longlong)param_2) {
        uVar9 = uVar8;
        if (0 < iVar7) {
          if (0x16 < iVar7) {
LAB_1801e2e6a:
            FUN_1801e35f0(param_1,param_2,param_3,param_6,0);
            return param_1;
          }
          uVar9 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          if (*(ulonglong *)(&DAT_1807cb410 + lVar6 * 8) < uVar5 >> (uVar9 & 0x3f))
          goto LAB_1801e2e6a;
          uVar9 = (ulonglong)uVar14;
        }
        pcVar2 = param_2 + uVar9;
        if ((uVar5 & 0xffffffff00000000) != 0) {
          uVar5 = uVar5 / 100000000;
          uVar12 = iVar11 + (int)uVar5 * -100000000;
          uVar4 = uVar12 % 10000;
          uVar12 = (uVar12 / 10000) % 10000;
          *(undefined2 *)(pcVar2 + -2) = *(undefined2 *)(&DAT_1807cb900 + (uVar4 % 100) * 2);
          *(undefined2 *)(pcVar2 + -4) = *(undefined2 *)(&DAT_1807cb900 + (uVar4 / 100) * 2);
          *(undefined2 *)(pcVar2 + -6) = *(undefined2 *)(&DAT_1807cb900 + (uVar12 % 100) * 2);
          pcVar2 = pcVar2 + -8;
          *(undefined2 *)pcVar2 = *(undefined2 *)(&DAT_1807cb900 + (uVar12 / 100) * 2);
        }
        uVar4 = (uint)uVar5;
        while (uVar12 = (uint)uVar5, 9999 < uVar4) {
          uVar5 = (uVar5 & 0xffffffff) / 10000;
          uVar4 = (uint)uVar5;
          uVar12 = uVar12 + uVar4 * -10000;
          *(undefined2 *)(pcVar2 + -2) = *(undefined2 *)(&DAT_1807cb900 + (uVar12 % 100) * 2);
          pcVar2 = pcVar2 + -4;
          *(undefined2 *)pcVar2 = *(undefined2 *)(&DAT_1807cb900 + (uVar12 / 100) * 2);
        }
        uVar4 = uVar12;
        if (99 < uVar12) {
          uVar4 = (uint)((uVar5 & 0xffffffff) / 100);
          pcVar2 = pcVar2 + -2;
          *(undefined2 *)pcVar2 = *(undefined2 *)(&DAT_1807cb900 + (uVar12 + uVar4 * -100) * 2);
        }
        if (uVar4 < 10) {
          pcVar2[-1] = (char)uVar4 + '0';
        }
        else {
          *(undefined2 *)(pcVar2 + -2) = *(undefined2 *)(&DAT_1807cb900 + uVar4 * 2);
        }
        if (iVar7 < 1) {
          if (iVar7 != 0) {
            if (0 < (int)uVar15) {
              FUN_18063aed0(param_2,param_2 + 1,(longlong)(int)uVar15);
              pcVar2 = param_2 + uVar8;
              param_2[(int)uVar15] = '.';
              goto LAB_1801e32a7;
            }
            param_2[0] = '0';
            param_2[1] = '.';
            if (0 < (int)-uVar15) {
              FUN_18063ab10(param_2 + 2,0x30,(longlong)(int)-uVar15);
            }
          }
          pcVar2 = param_2 + uVar8;
        }
        else {
          FUN_18063ab10(param_2 + uVar14,0x30,lVar6);
          pcVar2 = param_2 + uVar8;
        }
        goto LAB_1801e32a7;
      }
      goto LAB_1801e2de3;
    }
  }
  else if (param_5 == 2) goto LAB_1801e2e07;
  uVar15 = (0xc6 < uVar15 + 0x62) + 4 + uVar14 + (uint)(1 < uVar14);
  if ((longlong)(ulonglong)uVar15 <= param_3 - (longlong)param_2) {
    uVar8 = 0;
    if ((uVar5 & 0xffffffff00000000) != 0) {
      uVar5 = uVar5 / 100000000;
      uVar12 = iVar11 + (int)uVar5 * -100000000;
      uVar4 = uVar12 % 10000;
      uVar12 = (uVar12 / 10000) % 10000;
      *(undefined2 *)(param_2 + ((ulonglong)uVar14 - 1)) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar4 % 100) * 2);
      *(undefined2 *)(param_2 + ((ulonglong)uVar14 - 3)) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar4 / 100) * 2);
      uVar8 = 8;
      *(undefined2 *)(param_2 + ((ulonglong)uVar14 - 5)) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar12 % 100) * 2);
      *(undefined2 *)(param_2 + ((ulonglong)uVar14 - 7)) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar12 / 100) * 2);
    }
    if (9999 < (uint)uVar5) {
      uVar9 = uVar8;
      uVar13 = uVar5;
      do {
        uVar5 = (uVar13 & 0xffffffff) / 10000;
        uVar4 = (int)uVar13 + (uint)uVar5 * -10000;
        uVar8 = (ulonglong)((int)uVar9 + 4);
        *(undefined2 *)(param_2 + (ulonglong)uVar14 + (-1 - uVar9)) =
             *(undefined2 *)(&DAT_1807cb900 + (uVar4 % 100) * 2);
        *(undefined2 *)(param_2 + (ulonglong)uVar14 + (-3 - uVar9)) =
             *(undefined2 *)(&DAT_1807cb900 + (uVar4 / 100) * 2);
        uVar9 = uVar8;
        uVar13 = uVar5;
      } while (9999 < (uint)uVar5);
    }
    uVar12 = (uint)uVar5;
    uVar4 = uVar12;
    if (99 < uVar12) {
      uVar4 = (uint)((uVar5 & 0xffffffff) / 100);
      *(undefined2 *)(param_2 + (uVar14 - uVar8) + -1) =
           *(undefined2 *)(&DAT_1807cb900 + (uVar12 + uVar4 * -100) * 2);
    }
    if (uVar4 < 10) {
      cVar10 = (char)uVar4 + '0';
    }
    else {
      param_2[2] = (&DAT_1807cb900)[uVar4 * 2 + 1];
      cVar10 = (&DAT_1807cb900)[uVar4 * 2];
    }
    *param_2 = cVar10;
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    else {
      param_2[1] = '.';
      uVar14 = uVar14 + 1;
    }
    param_2[uVar14] = 'e';
    iVar7 = iVar1;
    if (iVar1 < 0) {
      iVar7 = -iVar1;
    }
    cVar10 = '-';
    if (-1 < iVar1) {
      cVar10 = '+';
    }
    param_2[uVar14 + 1] = cVar10;
    if (iVar7 < 100) {
      *(undefined2 *)(param_2 + (uVar14 + 2)) = *(undefined2 *)(&DAT_1807cb900 + iVar7 * 2);
    }
    else {
      *(undefined2 *)(param_2 + (uVar14 + 2)) = *(undefined2 *)(&DAT_1807cb900 + (iVar7 / 10) * 2);
      param_2[uVar14 + 4] = (char)iVar7 + (char)(iVar7 / 10) * -10 + '0';
    }
    pcVar2 = param_2 + uVar15;
LAB_1801e32a7:
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (longlong)pcVar2;
    return param_1;
  }
LAB_1801e2de3:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}




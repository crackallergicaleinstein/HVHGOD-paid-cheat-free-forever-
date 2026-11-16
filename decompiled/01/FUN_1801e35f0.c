// FUN_1801e35f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e35f0 */

undefined8 *
FUN_1801e35f0(undefined8 *param_1,char *param_2,char *param_3,ulonglong param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  sbyte sVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  int local_78;
  ulonglong local_70;
  
  uVar12 = (ulonglong)param_5;
  if (param_4 == 0) {
    if ((longlong)(int)((param_5 != 0) + 1 + param_5) <= (longlong)param_3 - (longlong)param_2) {
      pcVar13 = param_2 + 1;
      *param_2 = '0';
      if (param_5 != 0) {
        *pcVar13 = '.';
        FUN_18063ab10(param_2 + 2,0x30,param_5);
        pcVar13 = param_2 + 2 + uVar12;
      }
      *param_1 = pcVar13;
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
LAB_1801e3b90:
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    local_70 = param_4 & 0xfffffffffffff;
    uVar10 = (uint)(param_4 >> 0x20);
    pcVar13 = param_2;
    if (uVar10 >> 0x14 == 0) {
      local_78 = -0x432;
LAB_1801e3883:
      if (pcVar13 == param_3) goto LAB_1801e3b90;
      *pcVar13 = '0';
      pcVar13 = pcVar13 + 1;
    }
    else {
      uVar10 = uVar10 >> 0x14;
      local_78 = uVar10 - 0x433;
      bVar4 = false;
      local_70 = local_70 | 0x10000000000000;
      if (local_78 < -0x34) goto LAB_1801e3883;
      if (local_78 < 0) {
        uVar11 = 0;
        iVar16 = 1;
        iVar20 = 0x78;
      }
      else {
        uVar10 = uVar10 - 0x424 >> 4;
        uVar11 = (ulonglong)uVar10;
        iVar20 = uVar10 * 0x10 + 0x78;
        iVar16 = ((uVar10 * 0x134410 >> 0x12) + 0x19) / 9 - 1;
        if (iVar16 < 0) goto LAB_1801e3883;
      }
      iVar14 = (uint)(ushort)(&DAT_1807cb520)[uVar11] + iVar16;
      do {
        uVar10 = FUN_1801e3bb0(local_70 << 8,&UNK_18068f9a0 + (longlong)iVar14 * 0x18,
                               (iVar20 - local_78) + 8);
        if (bVar4) {
          if ((longlong)param_3 - (longlong)pcVar13 < 9) goto LAB_1801e3b90;
          FUN_1801e5810(uVar10,pcVar13);
          pcVar13 = pcVar13 + 9;
        }
        else if (uVar10 != 0) {
          if (uVar10 < 100000000) {
            if (uVar10 < 10000000) {
              if (uVar10 < 1000000) {
                if (uVar10 < 100000) {
                  if (uVar10 < 10000) {
                    if (uVar10 < 1000) {
                      if (uVar10 < 100) {
                        uVar11 = (ulonglong)(2 - (uVar10 < 10));
                      }
                      else {
                        uVar11 = 3;
                      }
                    }
                    else {
                      uVar11 = 4;
                    }
                  }
                  else {
                    uVar11 = 5;
                  }
                }
                else {
                  uVar11 = 6;
                }
              }
              else {
                uVar11 = 7;
              }
            }
            else {
              uVar11 = 8;
            }
          }
          else {
            uVar11 = 9;
          }
          if ((longlong)param_3 - (longlong)pcVar13 < (longlong)uVar11) goto LAB_1801e3b90;
          FUN_1801e5700(uVar11,uVar10,pcVar13);
          pcVar13 = pcVar13 + uVar11;
          bVar4 = true;
        }
        iVar14 = iVar14 + -1;
        iVar16 = iVar16 + -1;
      } while (-1 < iVar16);
      if (!bVar4) goto LAB_1801e3883;
    }
    if (param_5 != 0) {
      if (pcVar13 == param_3) goto LAB_1801e3b90;
      *pcVar13 = '.';
      pcVar13 = pcVar13 + 1;
    }
    if (local_78 < 0) {
      uVar7 = -((int)(local_78 + (local_78 >> 0x1f & 0xfU)) >> 4);
      uVar11 = (ulonglong)(int)uVar7;
      bVar1 = (&DAT_1807cb4d0)[uVar11];
      uVar10 = param_5 / 9 + 1;
      if (uVar10 <= bVar1) goto LAB_1801e3b57;
      uVar12 = uVar11;
      uVar19 = 0;
      if (bVar1 != 0) {
        uVar19 = (uint)bVar1 * 9;
        if ((longlong)param_3 - (longlong)pcVar13 < (longlong)(ulonglong)uVar19) goto LAB_1801e3b90;
        if (uVar19 != 0) {
          FUN_18063ab10(pcVar13,0x30,uVar19);
        }
        pcVar13 = pcVar13 + uVar19;
        uVar12 = (ulonglong)uVar7;
        uVar19 = (uint)bVar1;
      }
      if (uVar19 < uVar10) {
        uVar17 = ((uint)*(ushort *)(&DAT_1807cb5a0 + uVar11 * 2) - (uint)bVar1) + uVar19;
        lVar15 = (longlong)param_3 - (longlong)pcVar13;
        uVar2 = *(ushort *)(&DAT_1807cb5a2 + (longlong)(int)uVar12 * 2);
LAB_1801e3962:
        if (uVar2 <= uVar17) {
          param_5 = param_5 + uVar19 * -9;
          if ((longlong)(ulonglong)param_5 <= (longlong)param_3 - (longlong)pcVar13) {
            if (param_5 != 0) {
              FUN_18063ab10(pcVar13,0x30,param_5);
            }
            *param_1 = pcVar13 + param_5;
            *(undefined4 *)(param_1 + 1) = 0;
            return param_1;
          }
          goto LAB_1801e3b90;
        }
        uVar8 = FUN_1801e3bb0(local_70 << 8,&UNK_180696c60 + (ulonglong)uVar17 * 0x18,
                              (8 - (int)uVar12) * 0x10 - local_78);
        uVar12 = (ulonglong)uVar8;
        if (uVar19 < param_5 / 9) {
          if (8 < lVar15) goto code_r0x0001801e39ac;
          goto LAB_1801e3b90;
        }
        uVar7 = param_5 + uVar19 * -9;
        uVar10 = 0;
        if (9 - uVar7 == 0) goto LAB_1801e3a50;
        uVar11 = (ulonglong)(9 - uVar7);
        do {
          iVar16 = (int)uVar12;
          uVar12 = uVar12 / 10;
          uVar10 = iVar16 + (int)uVar12 * -10;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (uVar10 == 5) {
          local_78 = ~param_5 - local_78;
          if ((local_78 < 1) ||
             ((local_78 < 0x3c &&
              (sVar3 = ((byte)local_78 < 0x41) * ('@' - (byte)local_78),
              (local_70 << sVar3) >> sVar3 == 0)))) {
            cVar18 = '\x02';
          }
          else {
            cVar18 = '\x01';
          }
        }
        else {
LAB_1801e3a50:
          cVar18 = 5 < uVar10;
        }
        if (uVar7 == 0) {
LAB_1801e3a86:
          pcVar9 = pcVar13;
          pcVar6 = param_3;
          if (cVar18 != '\0') {
            while( true ) {
              do {
                pcVar5 = pcVar6;
                if (pcVar9 == param_2) {
                  *pcVar9 = '1';
                  if (pcVar5 != param_3) {
                    pcVar5[0] = '0';
                    pcVar5[1] = '.';
                  }
                  if (pcVar13 != param_3) {
                    *pcVar13 = '0';
                    *param_1 = pcVar13 + 1;
                    *(undefined4 *)(param_1 + 1) = 0;
                    return param_1;
                  }
                  goto LAB_1801e3b90;
                }
                bVar1 = pcVar9[-1];
                pcVar9 = pcVar9 + -1;
                pcVar6 = pcVar9;
              } while (bVar1 == 0x2e);
              if (bVar1 != 0x39) break;
              *pcVar9 = '0';
              cVar18 = '\x01';
              pcVar6 = pcVar5;
            }
            if ((cVar18 == '\x01') || ((bVar1 & 1) != 0)) {
              *pcVar9 = bVar1 + 1;
              *param_1 = pcVar13;
              *(undefined4 *)(param_1 + 1) = 0;
              return param_1;
            }
          }
          goto LAB_1801e3b7a;
        }
        if ((longlong)(ulonglong)uVar7 <= (longlong)param_3 - (longlong)pcVar13) {
          FUN_1801e3c90(uVar7,uVar12,pcVar13);
          pcVar13 = pcVar13 + uVar7;
          goto LAB_1801e3a86;
        }
        goto LAB_1801e3b90;
      }
    }
    else {
LAB_1801e3b57:
      if ((longlong)param_3 - (longlong)pcVar13 < (longlong)uVar12) goto LAB_1801e3b90;
      if (param_5 != 0) {
        FUN_18063ab10(pcVar13,0x30,uVar12);
      }
      pcVar13 = pcVar13 + uVar12;
    }
LAB_1801e3b7a:
    *param_1 = pcVar13;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return param_1;
code_r0x0001801e39ac:
  FUN_1801e5810(uVar8,pcVar13);
  uVar12 = (ulonglong)uVar7;
  pcVar13 = pcVar13 + 9;
  lVar15 = lVar15 + -9;
  uVar19 = uVar19 + 1;
  uVar17 = uVar17 + 1;
  if (uVar10 <= uVar19) {
    *param_1 = pcVar13;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  goto LAB_1801e3962;
}




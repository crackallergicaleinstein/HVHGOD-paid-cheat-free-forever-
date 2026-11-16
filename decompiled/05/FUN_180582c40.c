// FUN_180582c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180582c40 */

uint FUN_180582c40(longlong param_1,int param_2,uint param_3,int param_4,byte param_5,byte param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  
  uVar5 = *(uint *)(param_1 + 0x117c);
  lVar9 = (longlong)param_2 * 0x204 + *(longlong *)(param_1 + 0x1180);
  if (((uVar5 & 4) == 0) || (*(char *)(lVar9 + 0x118) != '\0')) {
    return param_3;
  }
  uVar4 = -param_3;
  if ((int)-param_3 < 0) {
    uVar4 = param_3;
  }
  if (param_2 == 1) {
    uVar7 = uVar5 & 2;
  }
  else {
    uVar7 = uVar5 & 1;
  }
  if (uVar7 == 0) {
    if ((((param_6 & 2) == 0) || (param_2 != 1)) || (uVar5 = uVar4, 0xbf < (int)uVar4)) {
      if ((param_5 & 1) == 0) {
        if ((int)uVar4 < 0x38) {
          uVar4 = 0x38;
        }
      }
      else if ((int)uVar4 < 0x50) {
        uVar4 = 0x40;
      }
      uVar5 = uVar4;
      if (*(int *)(lVar9 + 0x4c) != 0) {
        uVar5 = *(uint *)(lVar9 + 0x54);
        iVar6 = uVar5 - uVar4;
        if (-1 < (int)(uVar4 - uVar5)) {
          iVar6 = uVar4 - uVar5;
        }
        if (0x27 < iVar6) {
          if ((int)uVar4 < 0xc0) {
            uVar5 = uVar4 & 0x3f;
            if (9 < uVar5) {
              if (uVar5 < 0x20) {
                uVar4 = (uVar4 & 0xffffffc0) + 10;
                uVar5 = -uVar4;
                if (-1 < (int)param_3) {
                  uVar5 = uVar4;
                }
                return uVar5;
              }
              if (uVar5 < 0x36) {
                uVar5 = 0x36;
              }
            }
            uVar5 = (uVar4 & 0xffffffc0) + uVar5;
            uVar4 = -uVar5;
            if (-1 < (int)param_3) {
              uVar4 = uVar5;
            }
            return uVar4;
          }
          iVar6 = 0;
          if (((0 < (int)param_3) && (0 < param_4)) || (((int)param_3 < 0 && (param_4 < 0)))) {
            uVar1 = *(ushort *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1180) + 8) + 0x80) +
                     0x18);
            if (uVar1 < 10) {
              iVar6 = param_4;
            }
            else {
              if (0x1d < uVar1) goto LAB_180582e5f;
              iVar6 = (int)((0x1e - (uint)uVar1) * param_4) / 0x14;
            }
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
          }
LAB_180582e5f:
          uVar4 = (uVar4 - iVar6) + 0x20 & 0xffffffc0;
          uVar5 = -uVar4;
          if (-1 < (int)param_3) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
        if ((int)uVar5 < 0x30) {
          uVar5 = 0xffffffd0;
          if (-1 < (int)param_3) {
            uVar5 = 0x30;
          }
          return uVar5;
        }
      }
    }
  }
  else {
    iVar6 = 0x62;
    uVar7 = uVar4;
    if (*(uint *)(lVar9 + 0x4c) != 0) {
      puVar10 = (uint *)(lVar9 + 0x54);
      uVar11 = (ulonglong)*(uint *)(lVar9 + 0x4c);
      do {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 3;
        iVar3 = uVar2 - uVar4;
        if (-1 < (int)(uVar4 - uVar2)) {
          iVar3 = uVar4 - uVar2;
        }
        if (iVar3 < iVar6) {
          uVar7 = uVar2;
          iVar6 = iVar3;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar2 = uVar7 + 0x20 & 0xffffffc0;
    if ((int)uVar4 < (int)uVar7) {
      uVar8 = uVar4;
      if ((int)(uVar2 - 0x30) < (int)uVar4) {
        uVar8 = uVar7;
      }
    }
    else {
      uVar8 = uVar7;
      if ((int)(uVar2 + 0x30) <= (int)uVar4) {
        uVar8 = uVar4;
      }
    }
    if (param_2 == 1) {
      if (0x3f < (int)uVar8) {
        uVar4 = uVar8 + 0x10 & 0xffffffc0;
        uVar5 = -uVar4;
        if (-1 < (int)param_3) {
          uVar5 = uVar4;
        }
        return uVar5;
      }
LAB_180582ece:
      uVar5 = 0xffffffc0;
      if (-1 < (int)param_3) {
        uVar5 = 0x40;
      }
      return uVar5;
    }
    if ((uVar5 & 8) == 0) {
      if ((int)uVar8 < 0x30) {
        uVar4 = (int)(uVar8 + 0x40) >> 1;
        uVar5 = -uVar4;
        if (-1 < (int)param_3) {
          uVar5 = uVar4;
        }
        return uVar5;
      }
      if ((int)uVar8 < 0x80) {
        uVar5 = uVar8 + 0x16 & 0xffffffc0;
        iVar6 = uVar4 - uVar5;
        if (-1 < (int)(uVar5 - uVar4)) {
          iVar6 = uVar5 - uVar4;
        }
        if ((0xf < iVar6) && (uVar5 = uVar4, (int)uVar4 < 0x30)) {
          uVar4 = (int)(uVar4 + 0x40) >> 1;
          uVar5 = -uVar4;
          if (-1 < (int)param_3) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
        goto LAB_180582f65;
      }
    }
    else if ((int)uVar8 < 0x40) goto LAB_180582ece;
    uVar5 = uVar8 + 0x20 & 0xffffffc0;
  }
LAB_180582f65:
  uVar4 = -uVar5;
  if (-1 < (int)param_3) {
    uVar4 = uVar5;
  }
  return uVar4;
}




// FUN_1804fb920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb920 */

int FUN_1804fb920(uint param_1,int *param_2,char *param_3,char *param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = DAT_180bb8ae8;
  iVar2 = 0;
  iVar8 = 8;
  iVar7 = (int)param_3;
  pcVar3 = param_3;
  if ((param_1 >> 0x18 & 1) == 0) {
    if (param_4 == (char *)0x0) {
      while( true ) {
        iVar5 = iVar2 + 1;
        if (iVar2 <= param_6) {
          iVar2 = param_2[1];
          if (*param_2 == iVar2) {
            iVar6 = *param_2 + 1;
            if (iVar2 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar2 / 2 + iVar2;
            }
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
            FUN_1804d14d0(param_2,iVar6);
          }
          *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar7;
          *param_2 = *param_2 + 1;
        }
        lVar4 = FUN_180606b00(pcVar3,10);
        if (lVar4 == 0) break;
        pcVar3 = (char *)(lVar4 + 1);
        iVar2 = iVar5;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (pcVar3[lVar4] != '\0');
      pcVar3 = pcVar3 + lVar4;
      bVar1 = true;
      goto LAB_1804fba18;
    }
    while (iVar5 = iVar2, pcVar3 < param_4) {
      iVar5 = iVar2 + 1;
      if (iVar2 <= param_6) {
        iVar2 = param_2[1];
        if (*param_2 == iVar2) {
          iVar6 = *param_2 + 1;
          if (iVar2 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar2 / 2 + iVar2;
          }
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          FUN_1804d14d0(param_2,iVar6);
        }
        *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar7;
        *param_2 = *param_2 + 1;
      }
      lVar4 = FUN_18063b630(pcVar3,10,(longlong)param_4 - (longlong)pcVar3);
      if (lVar4 == 0) {
        pcVar3 = param_4;
        break;
      }
      iVar2 = iVar5;
      pcVar3 = (char *)(lVar4 + 1);
    }
  }
  else {
    iVar5 = iVar2;
    if (param_3 < param_4) {
      do {
        iVar5 = iVar2 + 1;
        if (iVar2 <= param_6) {
          iVar2 = param_2[1];
          if (*param_2 == iVar2) {
            iVar6 = *param_2 + 1;
            if (iVar2 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar2 / 2 + iVar2;
            }
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
            FUN_1804d14d0(param_2,iVar6);
          }
          *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar7;
          *param_2 = *param_2 + 1;
        }
        pcVar3 = (char *)FUN_1804e9df0(*(undefined8 *)(lVar4 + 0x11d0),
                                       *(undefined4 *)(lVar4 + 0x11e0),pcVar3,param_4,param_5,2);
        if (*pcVar3 == '\n') {
          pcVar3 = pcVar3 + 1;
        }
        iVar2 = iVar5;
      } while (pcVar3 < param_4);
    }
  }
  bVar1 = false;
LAB_1804fba18:
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = pcVar3;
    param_4 = pcVar3;
  }
  if (iVar5 == 0) {
    iVar2 = param_2[1];
    if (*param_2 == iVar2) {
      iVar5 = *param_2 + 1;
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      FUN_1804d14d0(param_2,iVar5);
    }
    iVar5 = 1;
    *(undefined4 *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = 0;
    *param_2 = *param_2 + 1;
  }
  if (((param_3 < param_4) && (param_4[-1] == '\n')) && (!bVar1)) {
    if (iVar5 <= param_6) {
      iVar2 = param_2[1];
      if (*param_2 == iVar2) {
        iVar6 = *param_2 + 1;
        if (iVar2 != 0) {
          iVar8 = iVar2 + iVar2 / 2;
        }
        if (iVar6 < iVar8) {
          iVar6 = iVar8;
        }
        FUN_1804d14d0(param_2,iVar6);
      }
      *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)param_4 - iVar7;
      *param_2 = *param_2 + 1;
    }
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}




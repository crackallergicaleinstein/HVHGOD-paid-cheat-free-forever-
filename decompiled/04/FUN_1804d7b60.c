// FUN_1804d7b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d7b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d7b60(longlong param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  ulonglong local_30;
  
  if ((int)param_2 < 1) {
    return;
  }
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  iVar5 = param_3 - param_5;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  uVar6 = (ulonglong)param_2;
  do {
    FUN_18063ab10(local_38,0,param_5);
    uVar10 = 0;
    if (param_5 == 2) {
      uVar3 = 0;
      if (-1 < iVar5) {
        iVar11 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar11 = iVar11 + param_4;
          bVar1 = *(byte *)(lVar8 + param_1);
          uVar9 = (int)uVar10 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
          uVar10 = (ulonglong)uVar9;
          uVar2 = uVar3 + 2;
          uVar3 = uVar3 + 1;
          local_38[uVar2 & 7] = bVar1;
          *(char *)(lVar8 + param_1) = (char)(uVar9 >> 1);
        } while ((int)uVar3 <= iVar5);
      }
    }
    else if (param_5 == 3) {
      uVar3 = 0;
      if (-1 < iVar5) {
        iVar11 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar11 = iVar11 + param_4;
          bVar1 = *(byte *)(lVar8 + param_1);
          uVar10 = (ulonglong)((int)uVar10 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]));
          uVar2 = uVar3 + 3;
          uVar3 = uVar3 + 1;
          local_38[uVar2 & 7] = bVar1;
          *(char *)(lVar8 + param_1) = (char)(uVar10 / 3);
        } while ((int)uVar3 <= iVar5);
      }
    }
    else if (param_5 == 4) {
      uVar3 = 0;
      if (-1 < iVar5) {
        iVar11 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar11 = iVar11 + param_4;
          bVar1 = *(byte *)(lVar8 + param_1);
          uVar9 = (int)uVar10 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
          uVar10 = (ulonglong)uVar9;
          uVar2 = uVar3 - 4;
          uVar3 = uVar3 + 1;
          local_38[uVar2 & 7] = bVar1;
          *(char *)(lVar8 + param_1) = (char)(uVar9 >> 2);
        } while ((int)uVar3 <= iVar5);
      }
    }
    else {
      uVar3 = 0;
      if (param_5 == 5) {
        if (-1 < iVar5) {
          iVar11 = 0;
          do {
            lVar8 = (longlong)iVar11;
            iVar11 = iVar11 + param_4;
            bVar1 = *(byte *)(lVar8 + param_1);
            uVar10 = (ulonglong)((int)uVar10 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]));
            uVar2 = uVar3 - 3;
            uVar3 = uVar3 + 1;
            local_38[uVar2 & 7] = bVar1;
            *(char *)(lVar8 + param_1) = (char)(uVar10 / 5);
          } while ((int)uVar3 <= iVar5);
        }
      }
      else if (-1 < iVar5) {
        iVar11 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar11 = iVar11 + param_4;
          bVar1 = *(byte *)(lVar8 + param_1);
          uVar9 = (int)uVar10 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
          uVar10 = (ulonglong)uVar9;
          uVar2 = param_5 + uVar3;
          uVar3 = uVar3 + 1;
          local_38[uVar2 & 7] = bVar1;
          *(char *)(lVar8 + param_1) = (char)(uVar9 / param_5);
        } while ((int)uVar3 <= iVar5);
      }
    }
    if ((int)uVar3 < param_3) {
      puVar7 = (undefined1 *)((int)(param_4 * uVar3) + param_1);
      uVar4 = (ulonglong)(param_3 - uVar3);
      do {
        uVar2 = uVar3 & 7;
        uVar3 = uVar3 + 1;
        uVar2 = (int)uVar10 - (uint)local_38[uVar2];
        uVar10 = (ulonglong)uVar2;
        *puVar7 = (char)(uVar2 / param_5);
        puVar7 = puVar7 + param_4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = param_1 + 1;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
}




// FUN_1804d78b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d78b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d78b0(byte *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  ulonglong local_30;
  
  if ((int)param_3 < 1) {
    return;
  }
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lVar4 = (longlong)(int)(param_2 - param_5);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  uVar5 = (ulonglong)param_3;
  do {
    FUN_18063ab10(local_38,0,param_5);
    uVar7 = 0;
    if (param_5 == 2) {
      uVar2 = 0;
      if (-1 < lVar4) {
        lVar9 = lVar4 + 1;
        pbVar8 = param_1;
        do {
          uVar1 = uVar2 + 2;
          uVar6 = (int)uVar7 + ((uint)*pbVar8 - (uint)local_38[uVar2 & 7]);
          uVar7 = (ulonglong)uVar6;
          uVar2 = uVar2 + 1;
          local_38[uVar1 & 7] = *pbVar8;
          *pbVar8 = (byte)(uVar6 >> 1);
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (param_5 == 3) {
      uVar2 = 0;
      if (-1 < lVar4) {
        lVar9 = lVar4 + 1;
        pbVar8 = param_1;
        do {
          uVar1 = uVar2 + 3;
          uVar7 = (ulonglong)((int)uVar7 + ((uint)*pbVar8 - (uint)local_38[uVar2 & 7]));
          uVar2 = uVar2 + 1;
          local_38[uVar1 & 7] = *pbVar8;
          *pbVar8 = (byte)(uVar7 / 3);
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (param_5 == 4) {
      uVar2 = 0;
      if (-1 < lVar4) {
        lVar9 = lVar4 + 1;
        pbVar8 = param_1;
        do {
          uVar1 = uVar2 - 4;
          uVar6 = (int)uVar7 + ((uint)*pbVar8 - (uint)local_38[uVar2 & 7]);
          uVar7 = (ulonglong)uVar6;
          uVar2 = uVar2 + 1;
          local_38[uVar1 & 7] = *pbVar8;
          *pbVar8 = (byte)(uVar6 >> 2);
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      uVar2 = 0;
      if (param_5 == 5) {
        if (-1 < lVar4) {
          lVar9 = lVar4 + 1;
          pbVar8 = param_1;
          do {
            uVar1 = uVar2 - 3;
            uVar7 = (ulonglong)((int)uVar7 + ((uint)*pbVar8 - (uint)local_38[uVar2 & 7]));
            uVar2 = uVar2 + 1;
            local_38[uVar1 & 7] = *pbVar8;
            *pbVar8 = (byte)(uVar7 / 5);
            lVar9 = lVar9 + -1;
            pbVar8 = pbVar8 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (-1 < lVar4) {
        lVar9 = lVar4 + 1;
        pbVar8 = param_1;
        do {
          uVar1 = param_5 + uVar2;
          uVar6 = (int)uVar7 + ((uint)*pbVar8 - (uint)local_38[uVar2 & 7]);
          uVar7 = (ulonglong)uVar6;
          uVar2 = uVar2 + 1;
          local_38[uVar1 & 7] = *pbVar8;
          *pbVar8 = (byte)(uVar6 / param_5);
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    if ((int)uVar2 < param_2) {
      lVar9 = (longlong)(int)uVar2;
      uVar3 = (ulonglong)(param_2 - uVar2);
      pbVar8 = param_1 + lVar9;
      do {
        uVar2 = (uint)lVar9;
        lVar9 = lVar9 + 1;
        uVar2 = (int)uVar7 - (uint)local_38[uVar2 & 7];
        uVar7 = (ulonglong)uVar2;
        *pbVar8 = (byte)(uVar2 / param_5);
        uVar3 = uVar3 - 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar3 != 0);
    }
    param_1 = param_1 + param_4;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
}




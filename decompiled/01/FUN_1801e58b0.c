// FUN_1801e58b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e58b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e58b0(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_78 [40];
  uint local_50 [4];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  uVar13 = param_5 & 0x1f;
  uVar11 = param_5 + 0x37 >> 5;
  uVar12 = uVar11 - 1;
  uVar7 = (ulonglong)uVar12;
  local_40 = (undefined1  [16])0x0;
  uVar4 = param_4 << uVar13;
  if (8 < uVar13) {
    *(uint *)(local_40 + (ulonglong)(uVar11 - 2) * 4) = uVar4;
    uVar4 = param_4 >> (0x20 - uVar13 & 0x1f);
  }
  iVar8 = 0;
  *(uint *)(local_40 + uVar7 * 4) = uVar4;
  if (uVar12 != 0) {
    puVar9 = local_50;
    do {
      uVar4 = *(uint *)(local_40 + uVar7 * 4);
      uVar11 = uVar4 / 1000000000;
      *(uint *)(local_40 + uVar7 * 4) = uVar11;
      uVar4 = uVar4 % 1000000000;
      uVar6 = uVar7;
      do {
        uVar12 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar12;
        iVar1 = *(int *)(local_40 + uVar6 * 4);
        uVar3 = CONCAT44(uVar4,iVar1);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar3;
        lVar5 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar2,8);
        iVar10 = (int)((uVar3 - lVar5 >> 1) + lVar5 >> 0x1d);
        *(int *)(local_40 + uVar6 * 4) = iVar10;
        uVar4 = iVar1 + iVar10 * -1000000000;
      } while (uVar12 != 0);
      *puVar9 = uVar4;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
    } while ((uVar11 != 0) || (uVar4 = (int)uVar7 - 1, uVar7 = (ulonglong)uVar4, uVar4 != 0));
  }
  if ((uint)local_40._0_4_ < 1000000000) {
    if ((uint)local_40._0_4_ < 100000000) {
      if ((uint)local_40._0_4_ < 10000000) {
        if ((uint)local_40._0_4_ < 1000000) {
          if ((uint)local_40._0_4_ < 100000) {
            if ((uint)local_40._0_4_ < 10000) {
              if ((uint)local_40._0_4_ < 1000) {
                if ((uint)local_40._0_4_ < 100) {
                  uVar7 = (ulonglong)(2 - ((uint)local_40._0_4_ < 10));
                }
                else {
                  uVar7 = 3;
                }
              }
              else {
                uVar7 = 4;
              }
            }
            else {
              uVar7 = 5;
            }
          }
          else {
            uVar7 = 6;
          }
        }
        else {
          uVar7 = 7;
        }
      }
      else {
        uVar7 = 8;
      }
    }
    else {
      uVar7 = 9;
    }
  }
  else {
    uVar7 = 10;
  }
  if (param_3 - param_2 < (longlong)(ulonglong)(uint)((int)uVar7 + iVar8 * 9)) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_1801e5700(uVar7,local_40._0_4_,param_2);
    param_2 = uVar7 + param_2;
    lVar5 = (longlong)(iVar8 + -1);
    if (-1 < iVar8 + -1) {
      do {
        FUN_1801e5810(local_50[lVar5],param_2);
        param_2 = param_2 + 9;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 0;
  }
}




// FUN_1805c12f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c12f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c12f0(undefined8 *param_1,uint param_2,uint param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint local_d8;
  int local_c8 [32];
  ulonglong local_48;
  
  if ((int)param_3 < 1) {
    return;
  }
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  iVar6 = 0;
  local_d8 = param_2;
  do {
    uVar8 = param_3;
    if (0x10 < param_3) {
      uVar8 = 0x10;
    }
    lVar4 = 0;
    iVar2 = uVar8 * 2;
    if (0 < iVar2) {
      do {
        iVar6 = iVar6 + *(int *)(param_4 + lVar4 * 4);
        iVar1 = FUN_1805778f0(iVar6);
        local_c8[lVar4] = iVar1 >> 0x10;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
      lVar4 = 0;
      do {
        local_c8[lVar4 + 1] = local_c8[lVar4 + 1] - local_c8[lVar4];
        lVar4 = lVar4 + 2;
      } while (lVar4 < iVar2);
    }
    piVar5 = local_c8;
    if (*(int *)(param_1 + 1) == 0) {
      uVar3 = 1;
      if (local_d8 < 2) {
        uVar3 = (ulonglong)local_d8;
      }
      uVar7 = uVar8;
      if (uVar8 != 0) {
        do {
          local_e8 = 0;
          iVar2 = FUN_1805be250(param_1 + uVar3 * 6 + 3,*piVar5,piVar5[1],*param_1);
          if (iVar2 != 0) {
            *(int *)(param_1 + 1) = iVar2;
            break;
          }
          uVar7 = uVar7 - 1;
          piVar5 = piVar5 + 2;
        } while (0 < (int)uVar7);
      }
    }
    param_3 = param_3 - uVar8;
    if ((int)param_3 < 1) {
    }
  } while( true );
}




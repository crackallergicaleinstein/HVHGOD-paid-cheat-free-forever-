// FUN_18046f450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046f450 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046f450(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_8b8 [32];
  int local_898;
  ulonglong local_888;
  int *local_880;
  undefined8 local_878;
  undefined8 local_870;
  longlong local_868;
  int local_860;
  undefined1 local_858 [2048];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_8b8;
  iVar8 = 8;
  iVar1 = FUN_180470d70();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_1 + 0x36);
  if (iVar1 == 0) {
  }
  local_880 = param_1;
  iVar1 = FUN_180471e20(&local_880,0,4);
  lVar2 = local_868;
  lVar3 = 0;
  if (iVar1 != 0) {
    lVar3 = 0;
    if (8 < local_860) {
      if (local_860 != 0x10) goto LAB_18046f56d;
      iVar8 = 0x10;
    }
    local_868 = 0;
    if (local_880[3] != 4) {
      local_898 = local_880[1];
      if (iVar8 == 8) {
        lVar2 = FUN_18046f7c0();
      }
      else {
        lVar2 = FUN_18046fc60(lVar2,local_880[3],local_880,*local_880);
      }
      local_880[3] = 4;
      if (lVar2 == 0) goto LAB_18046f56d;
    }
    *param_2 = *local_880;
    *param_3 = local_880[1];
    lVar3 = lVar2;
    if (param_4 != (int *)0x0) {
      *param_4 = local_880[2];
    }
  }
  thunk_FUN_180621380(local_868);
  local_868 = 0;
  thunk_FUN_180621380(local_870);
  local_870 = 0;
  thunk_FUN_180621380(local_878);
  local_878 = 0;
LAB_18046f56d:
  if (lVar3 != 0) {
    if (iVar8 != 8) {
      lVar3 = FUN_18046f290(lVar3,*param_2,*param_3,4);
    }
    if (DAT_180bb8ad8 != 0) {
      iVar8 = *param_2;
      uVar4 = *param_3 >> 1;
      uVar10 = (longlong)iVar8 * 4;
      if (0 < (int)uVar4) {
        local_888 = (ulonglong)uVar4;
        lVar2 = (longlong)(*param_3 + -1) * uVar10 + lVar3;
        do {
          lVar6 = lVar2;
          lVar7 = lVar3;
          uVar9 = uVar10;
          if (uVar10 != 0) {
            do {
              uVar5 = 0x800;
              if (uVar9 < 0x800) {
                uVar5 = uVar9;
              }
              FUN_18063aed0(local_858,lVar7,uVar5);
              FUN_18063aed0(lVar7,lVar6,uVar5);
              FUN_18063aed0(lVar6,local_858,uVar5);
              lVar7 = lVar7 + uVar5;
              lVar6 = lVar6 + uVar5;
              uVar9 = uVar9 - uVar5;
            } while (uVar9 != 0);
          }
          lVar3 = lVar3 + uVar10;
          lVar2 = lVar2 + (longlong)iVar8 * -4;
          local_888 = local_888 - 1;
        } while (local_888 != 0);
      }
    }
  }
}




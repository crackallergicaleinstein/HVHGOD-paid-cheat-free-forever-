// FUN_1805ed670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ed670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ed670(longlong param_1,int *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_188 [32];
  longlong local_168;
  uint local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  if (*param_2 == -0x13cf5bcb) {
    param_2 = param_2 + 1;
    param_3 = param_3 + -4;
    local_154 = 0x1f;
    local_150 = 0x7f;
    local_14c = 0x3f;
    uVar1 = FUN_1805ebd30(param_1 + 0x280c,param_2,param_3);
    if (uVar1 < 0xffffffffffffff89) {
      local_168 = param_3 - uVar1;
      uVar2 = FUN_1805ea3a0(local_148,&local_154,&local_158,(longlong)param_2 + uVar1);
      if (((uVar2 < 0xffffffffffffff89) && (local_158 < 10)) &&
         (uVar3 = FUN_1805e99e0(param_1 + 0x1004,local_148,local_154), uVar3 < 0xffffffffffffff89))
      {
        lVar7 = (longlong)param_2 + uVar1 + uVar2;
        lVar6 = (param_3 - uVar1) - uVar2;
        local_168 = lVar6;
        uVar3 = FUN_1805ea3a0(local_148,&local_150,&local_158,lVar7);
        if (((uVar3 < 0xffffffffffffff89) && (local_158 < 0xb)) &&
           (uVar4 = FUN_1805e99e0(param_1 + 0x1808,local_148,local_150), uVar4 < 0xffffffffffffff89)
           ) {
          local_168 = lVar6 - uVar3;
          uVar4 = FUN_1805ea3a0(local_148,&local_14c,&local_158,uVar3 + lVar7);
          if (((local_158 < 0xb) && (uVar4 < 0xffffffffffffff89)) &&
             (uVar5 = FUN_1805e99e0(param_1,local_148,local_14c), uVar5 < 0xffffffffffffff89)) {
            *(undefined4 *)(param_1 + 0x6870) = 1;
            uVar1 = uVar4 + uVar3 + uVar2 + uVar1;
            if (uVar1 < 0xffffffffffffff89) {
              lVar6 = uVar1 + (longlong)param_2;
              *(longlong *)(param_1 + 0x6828) = *(longlong *)(param_1 + 0x6810);
              lVar7 = *(longlong *)(param_1 + 0x6818);
              *(longlong *)(param_1 + 0x6818) = lVar6;
              *(longlong *)(param_1 + 0x6820) = (lVar6 - *(longlong *)(param_1 + 0x6810)) + lVar7;
              *(ulonglong *)(param_1 + 0x6810) = (lVar6 - uVar1) + param_3;
            }
          }
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x6810);
    *(longlong *)(param_1 + 0x6828) = lVar6;
    *(longlong *)(param_1 + 0x6810) = param_3 + (longlong)param_2;
    *(longlong *)(param_1 + 0x6820) = (longlong)param_2 + (*(longlong *)(param_1 + 0x6818) - lVar6);
    *(int **)(param_1 + 0x6818) = param_2;
  }
}




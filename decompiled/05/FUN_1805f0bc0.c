// FUN_1805f0bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f0bc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f0bc0(longlong param_1,int *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_c8;
  uint local_c4 [3];
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if (*param_2 == -0x13cf5bca) {
    param_2 = param_2 + 1;
    param_3 = param_3 + -4;
    uVar1 = FUN_1805ef7d0(param_1 + 0x140c,param_2,param_3);
    if (uVar1 < 0xffffffffffffff89) {
      local_c8 = 0x1c;
      local_d8 = param_3 - uVar1;
      uVar2 = FUN_1805ea3a0(local_b8,&local_c8,local_c4,(longlong)param_2 + uVar1);
      if (((uVar2 < 0xffffffffffffff89) && (local_c4[0] < 9)) &&
         (uVar3 = FUN_1805edfd0(param_1 + 0x804,local_b8,local_c8), uVar3 < 0xffffffffffffff89)) {
        lVar7 = (longlong)param_2 + uVar1 + uVar2;
        local_c8 = 0x34;
        lVar6 = (param_3 - uVar1) - uVar2;
        local_d8 = lVar6;
        uVar3 = FUN_1805ea3a0(local_b8,&local_c8,local_c4,lVar7);
        if (((uVar3 < 0xffffffffffffff89) && (local_c4[0] < 10)) &&
           (uVar4 = FUN_1805edfd0(param_1 + 0xc08,local_b8,local_c8), uVar4 < 0xffffffffffffff89)) {
          local_d8 = lVar6 - uVar3;
          local_c8 = 0x23;
          uVar4 = FUN_1805ea3a0(local_b8,&local_c8,local_c4,uVar3 + lVar7);
          if (((uVar4 < 0xffffffffffffff89) && (local_c4[0] < 10)) &&
             (uVar5 = FUN_1805edfd0(param_1,local_b8,local_c8), uVar5 < 0xffffffffffffff89)) {
            *(undefined4 *)(param_1 + 0x5458) = 1;
            uVar1 = uVar4 + uVar3 + uVar2 + uVar1;
            if (uVar1 < 0xffffffffffffff89) {
              lVar6 = uVar1 + (longlong)param_2;
              *(longlong *)(param_1 + 0x5428) = *(longlong *)(param_1 + 0x5410);
              lVar7 = *(longlong *)(param_1 + 0x5418);
              *(longlong *)(param_1 + 0x5418) = lVar6;
              *(longlong *)(param_1 + 0x5420) = (lVar6 - *(longlong *)(param_1 + 0x5410)) + lVar7;
              *(ulonglong *)(param_1 + 0x5410) = (lVar6 - uVar1) + param_3;
            }
          }
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x5410);
    *(longlong *)(param_1 + 0x5428) = lVar6;
    *(longlong *)(param_1 + 0x5410) = param_3 + (longlong)param_2;
    *(longlong *)(param_1 + 0x5420) = (longlong)param_2 + (*(longlong *)(param_1 + 0x5418) - lVar6);
    *(int **)(param_1 + 0x5418) = param_2;
  }
}




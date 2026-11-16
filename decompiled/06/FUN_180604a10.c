// FUN_180604a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180604a10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180604b1c) */
/* WARNING: Removing unreachable block (ram,0x000180604b3b) */
/* WARNING: Removing unreachable block (ram,0x000180604b3f) */
/* WARNING: Removing unreachable block (ram,0x000180604b45) */
/* WARNING: Removing unreachable block (ram,0x000180604b49) */
/* WARNING: Removing unreachable block (ram,0x000180604c26) */
/* WARNING: Removing unreachable block (ram,0x000180604c4c) */
/* WARNING: Removing unreachable block (ram,0x000180604c50) */
/* WARNING: Removing unreachable block (ram,0x000180604c56) */
/* WARNING: Removing unreachable block (ram,0x000180604c5a) */
/* WARNING: Type propagation algorithm not settling */

void FUN_180604a10(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined8 param_5,double param_6)

{
  short sVar1;
  int iVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStackY_d8 [32];
  int local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStackY_d8;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 *******)0x0;
  uVar5 = *(uint *)(param_4 + 0x18) & 0x3000;
  if (uVar5 == 0x3000) {
    uVar8 = 0xffffffffffffffff;
    lVar6 = 0xd;
  }
  else {
    uVar8 = *(ulonglong *)(param_4 + 0x20);
    if ((longlong)uVar8 < 1) {
      if (uVar8 == 0) {
        if (uVar5 == 0) {
          lVar6 = 1;
          goto LAB_180604af9;
        }
        iVar2 = 0;
      }
      else {
        iVar2 = 6;
      }
    }
    else {
      iVar2 = (int)uVar8;
    }
    lVar6 = (longlong)iVar2;
    if ((uVar5 == 0x2000) && (10000000000.0 <= ABS(param_6) && ABS(param_6) != 10000000000.0)) {
      FUN_18061bc30(SUB84(param_6,0),local_98);
      iVar2 = -local_98[0];
      if (-local_98[0] < 0) {
        iVar2 = local_98[0];
      }
      lVar6 = lVar6 + (iVar2 * 0x7597) / 100000;
    }
  }
LAB_180604af9:
  uVar7 = lVar6 + 0x32;
  if (local_68 < uVar7) {
    FUN_180113a50(&local_78,uVar7 - local_68,0);
  }
  else {
    pppppppuVar3 = &local_78;
    if (0xf < local_60) {
      pppppppuVar3 = local_78;
    }
    local_68 = uVar7;
    *(undefined1 *)((longlong)pppppppuVar3 + uVar7) = 0;
  }
  sVar1 = thunk_FUN_180624470(SUB84(param_6,0));
  uVar5 = *(uint *)(param_4 + 0x18);
  if (0 < sVar1) {
    uVar5 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  }
  uVar4 = FUN_180603e1c(param_1,local_58,0x4c,uVar5);
  pppppppuVar3 = &local_78;
  if (0xf < local_60) {
    pppppppuVar3 = local_78;
  }
  FUN_1801d63c0(pppppppuVar3,local_68,uVar4,uVar8 & 0xffffffff);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_1805fd5a8(param_1,param_2);
  if (0xf < local_60) {
    if ((0xfff < local_60 + 1) &&
       (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}




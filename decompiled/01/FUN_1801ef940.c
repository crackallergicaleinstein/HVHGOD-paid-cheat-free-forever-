// FUN_1801ef940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ef940(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  undefined *local_648;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  local_648 = &DAT_1808daea0;
  iVar4 = FUN_1805f68d0(&DAT_1808daea0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808daeec == 0x7fffffff) {
    DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar1 = *(undefined8 *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  plVar5 = (longlong *)FUN_1801f3cc0();
  lVar3 = *plVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  FUN_1805f68fc(&DAT_1808daea0);
  local_658 = (undefined **)(param_1 + 0x40);
  if (0xf < *(ulonglong *)(param_1 + 0x58)) {
    local_658 = (undefined **)*local_658;
  }
  FUN_18063ab10(local_628,0,0x600);
  local_650 = (char *)param_2;
  FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"model=%s reason=%s retry=rescan");
  local_658 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_658 = (undefined **)&DAT_1806bcfc0;
  }
  local_650 = local_628;
  FUN_1800f6900(2);
}




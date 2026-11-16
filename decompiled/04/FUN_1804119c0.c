// FUN_1804119c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804119c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804119c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_28 = (undefined1  [16])0x0;
  plVar2 = (longlong *)FUN_180416b80();
  lVar1 = *plVar2;
  local_28._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_18017bf40(&local_18);
    plVar2 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar2 = *plVar2 + (CONCAT44(uStack_14,local_18) - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_14,local_18);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 0xe;
  }
  local_28._8_4_ = uVar3;
  local_18 = *(undefined4 *)param_1[1];
  plVar2 = *(longlong **)(*param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_18);
  if (lVar1 != 0) {
    FUN_18017bf40(&local_18);
    plVar2 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar2 = *plVar2 + (CONCAT44(uStack_14,local_18) - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_14,local_18);
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
  }
}




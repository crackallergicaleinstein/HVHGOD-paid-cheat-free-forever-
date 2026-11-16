// FUN_1804d2640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d2640 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d2640(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int local_58 [4];
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = 0;
  plVar3 = (longlong *)FUN_1804d2170(&local_38,param_3,0x12);
  lVar4 = 0;
  local_38 = *plVar3;
  uStack_30 = plVar3[1];
  do {
    if (uStack_30._4_4_ <= (int)uStack_30) break;
    iVar1 = FUN_1804d1f40(&local_38);
    local_58[lVar4 + 4] = iVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 < 2);
  lVar4 = local_48;
  iVar1 = local_48._4_4_;
  lVar5 = (longlong)local_48._4_4_;
  if ((local_48._4_4_ != 0) && (iVar2 = (int)local_48, (int)local_48 != 0)) {
    local_48 = 0;
    lStack_40 = 0;
    if ((-1 < lVar4) &&
       (((-1 < iVar2 && (iVar1 <= *(int *)((longlong)param_2 + 0xc))) &&
        (iVar2 <= *(int *)((longlong)param_2 + 0xc) - iVar1)))) {
      lStack_40 = lVar4 << 0x20;
      local_48 = lVar5 + *param_2;
    }
    local_38 = local_48;
    uStack_30 = lStack_40;
    plVar3 = (longlong *)FUN_1804d2170(&local_48,&local_38,0x13);
    lVar4 = 0;
    local_38 = *plVar3;
    uStack_30 = plVar3[1];
    do {
      if (uStack_30._4_4_ <= (int)uStack_30) break;
      iVar2 = FUN_1804d1f40(&local_38);
      local_58[lVar4] = iVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < 1);
    if (local_58[0] != 0) {
      iVar1 = local_58[0] + iVar1;
      if ((*(int *)((longlong)param_2 + 0xc) < iVar1) || (iVar1 < 0)) {
        iVar1 = *(int *)((longlong)param_2 + 0xc);
      }
      *(int *)(param_2 + 1) = iVar1;
      FUN_1804d1e20(param_1,param_2);
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
}




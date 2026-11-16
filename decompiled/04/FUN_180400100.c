// FUN_180400100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180400100 */

void FUN_180400100(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_28;
  longlong lStack_20;
  ulonglong uStack_18;
  undefined1 uStack_10;
  uint7 uStack_f;
  
  if (((param_2 == 0) ||
      (lStack_20 = *(longlong *)(param_1 + 0x5808), 0x4000U - lStack_20 < param_3)) ||
     (uVar2 = *(ulonglong *)(param_1 + 0x5800), 0xbf < uVar2)) {
    FUN_18015c090(&local_28,"prediction snapshot exceeds transaction capacity");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_28,&DAT_1808d12a8);
  }
  uStack_10 = 0;
  *(ulonglong *)(param_1 + 0x5800) = uVar2 + 1;
  plVar1 = (longlong *)(uVar2 * 0x20 + param_1);
  *plVar1 = param_2;
  plVar1[1] = lStack_20;
  plVar1[2] = param_3;
  plVar1[3] = (ulonglong)uStack_f << 8;
  local_28 = param_2;
  uStack_18 = param_3;
  FUN_18063aed0(*(longlong *)(param_1 + 0x5808) + 0x1800 + param_1,param_2,param_3);
  *(longlong *)(param_1 + 0x5808) = *(longlong *)(param_1 + 0x5808) + param_3;
  return;
}




// FUN_180151b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151b00 */

void FUN_180151b00(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_28;
  ulonglong local_20;
  undefined1 local_18 [24];
  
  uVar3 = param_1[3];
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar2 = -((~uVar3 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar3 >> 5) * 4;
  }
  uVar1 = (uVar3 & 0x1f) - 1;
  local_20 = (ulonglong)((uint)uVar1 & 0x1f);
  if ((uVar3 & 0x1f) == 0) {
    local_28 = -4;
  }
  else {
    local_28 = (uVar1 >> 5) * 4;
  }
  local_28 = *param_1 + lVar2 + local_28;
  FUN_180156be0(param_1,local_18,&local_28);
  return;
}




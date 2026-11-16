// FUN_180156be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180156be0 */

void FUN_180156be0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  sbyte sVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [16];
  
  local_38 = *param_1;
  uStack_20 = 0;
  uStack_30 = param_1[3];
  local_48 = local_38;
  if (uStack_30 != 0) {
    uVar6 = (*param_3 - local_38 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      local_48 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      local_48 = (uVar6 >> 5) * 4;
    }
    local_48 = local_38 + local_48;
    uStack_20 = (ulonglong)((uint)uVar6 & 0x1f);
  }
  local_28 = local_48;
  uVar6 = (local_48 - local_38 >> 2) * 0x20 + uStack_20;
  if (((longlong)uStack_30 < 0) && (uStack_30 != 0)) {
    lVar2 = -((~uStack_30 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uStack_30 >> 5) * 4;
  }
  local_38 = local_38 + lVar2;
  uStack_30 = uStack_30 & 0x1f;
  if (uStack_20 < 0x1f) {
    lStack_40 = uStack_20 + 1;
  }
  else {
    lStack_40 = 0;
    local_48 = local_48 + 4;
  }
  FUN_180158640(local_18,&local_48,&local_38,&local_28);
  uVar7 = param_1[3] - 1;
  if (0x7fffffffffffffff < uVar7) {
    FUN_180141380();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = param_1[3] + 0x1eU >> 5;
  lVar2 = *param_1;
  if ((uVar8 < (ulonglong)(param_1[1] - lVar2 >> 2)) &&
     (lVar1 = lVar2 + uVar8 * 4, lVar1 != param_1[1])) {
    param_1[1] = lVar1;
  }
  param_1[3] = uVar7;
  bVar5 = (byte)uVar7 & 0x1f;
  if ((uVar7 & 0x1f) != 0) {
    sVar4 = (bVar5 < 0x21) * (' ' - bVar5);
    *(uint *)(lVar2 + -4 + uVar8 * 4) = (uint)(*(int *)(lVar2 + -4 + uVar8 * 4) << sVar4) >> sVar4;
  }
  lVar2 = *param_1;
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar1 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar6 >> 5) * 4;
  }
  param_2[1] = uVar6;
  *param_2 = lVar2 + lVar1;
  param_2[1] = (ulonglong)((uint)uVar6 & 0x1f);
  return;
}




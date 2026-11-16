// FUN_180372680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180372680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180372680(undefined8 param_1,undefined8 param_2,ulonglong param_3,char param_4,
             undefined4 param_5,undefined4 param_6)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int local_68;
  int local_64;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38 [2];
  
  lVar10 = param_3 * 0x20 + DAT_1808e48b8;
  local_38[0] = param_3 >> 0x28;
  local_48 = param_3 >> 0x20;
  local_50 = param_3 >> 0x18;
  local_58 = param_3 >> 0x10;
  local_60 = param_3 >> 8;
  local_40 = param_3;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (lVar10 == 0) {
    bVar2 = false;
  }
  else {
    local_68 = 0;
    cVar4 = FUN_1804514f0(&local_68,lVar10,4);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  iVar3 = local_68;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar2) {
    return 0;
  }
  uVar9 = ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_60 & 0xff) *
                0x100000001b3 ^ local_58 & 0xff) * 0x100000001b3 ^ local_50 & 0xff) * 0x100000001b3
             ^ local_48 & 0xff) * 0x100000001b3 ^ local_38[0] & 0xff) * 0x100000001b3 ^
           param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) * 0x100000001b3 &
          _DAT_1808e4900;
  lVar6 = *(longlong *)(DAT_1808e48e8 + 8 + uVar9 * 0x10);
  lVar8 = 0;
  if (lVar6 != DAT_1808e48d8) {
    uVar1 = *(ulonglong *)(lVar6 + 0x10);
    while (param_3 != uVar1) {
      if (lVar6 == *(longlong *)(DAT_1808e48e8 + uVar9 * 0x10)) goto LAB_180372809;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar1 = *(ulonglong *)(lVar6 + 0x10);
    }
    lVar8 = lVar6;
  }
LAB_180372809:
  lVar6 = DAT_1808e48d8;
  if (lVar8 != 0) {
    lVar6 = lVar8;
  }
  if (lVar6 == DAT_1808e48d8) {
    if (param_4 == '\0') {
      return 1;
    }
    if (0xfffff < DAT_1808e48e0) {
      return 1;
    }
    local_64 = iVar3;
    local_68 = iVar3;
    plVar7 = (longlong *)FUN_180372cc0(&DAT_1808e48d0,local_38,&local_40,&local_68);
    lVar6 = *plVar7;
  }
  if (iVar3 != *(int *)(lVar6 + 0x1c)) {
    *(int *)(lVar6 + 0x18) = iVar3;
  }
  iVar5 = *(int *)(lVar6 + 0x18);
  if (param_4 != '\0') {
    iVar5 = FUN_180370a40(iVar5,param_5,param_6);
  }
  if (iVar5 != iVar3) {
    if (lVar10 == 0) {
      return 0;
    }
    local_68 = iVar5;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_1801ad800(lVar10,&local_68);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (cVar4 == '\0') {
      return 0;
    }
  }
  *(int *)(lVar6 + 0x1c) = iVar5;
  return 1;
}




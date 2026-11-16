// FUN_18018ec50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018ec50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018ec50(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined1 *local_1e0;
  char local_1d8 [4];
  int local_1d4 [3];
  longlong local_1c8 [21];
  undefined1 local_120 [264];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  lVar7 = param_1[0x11];
  if (lVar7 != 0) {
    plVar8 = (longlong *)param_1[0x17];
    plVar5 = (longlong *)plVar8[1];
    cVar4 = *(char *)((longlong)plVar5 + 0x19);
    while (cVar4 == '\0') {
      if ((ulonglong)plVar5[4] < param_2) {
        plVar5 = plVar5 + 2;
      }
      else {
        plVar8 = plVar5;
      }
      plVar5 = (longlong *)*plVar5;
      cVar4 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) == '\0') && ((ulonglong)plVar8[4] <= param_2)) {
      lVar1 = param_1[0x16];
      if (lVar1 == 0) {
      }
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      local_1c8[2] = 0;
      local_1c8[3] = 0;
      cVar4 = FUN_1804513c0(lVar1,1,2);
      if (cVar4 == '\0') {
      }
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      local_1e8 = local_1c8;
      FUN_1801adf30(local_1d8,lVar1,lVar7,param_2);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) == 0) {
      }
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
  }
  if (param_1[8] != 0) {
    FUN_18063ab10(local_120,0,0x100);
    local_1c8[4] = 0;
    local_1c8[5] = 0;
    local_1c8[6] = 0;
    local_1c8[7] = 0;
    local_1c8[8] = 0;
    local_1c8[9] = 0;
    local_1c8[10] = 0;
    local_1c8[0xb] = 0;
    local_1c8[0xc] = 0;
    local_1c8[0xd] = 0;
    local_1c8[0xe] = 0;
    local_1c8[0xf] = 0;
    local_1c8[0x10] = 0;
    local_1c8[0x11] = 0;
    local_1c8[0x12] = 0;
    local_1c8[0x13] = 0;
    local_1c8[0x14] = 0;
    uVar2 = param_1[6];
    cVar4 = FUN_1804513c0(uVar2,1,2);
    if (cVar4 != '\0') {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      FUN_1801ad780(uVar2,local_1c8 + 4,param_2);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
    uVar2 = *param_1;
    uVar3 = param_1[8];
    cVar4 = FUN_1804513c0(uVar3,1,2);
    if (cVar4 != '\0') {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      local_1e0 = local_120;
      FUN_1801adf80(local_1d4,uVar3,uVar2,local_1c8 + 4);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
  }
}




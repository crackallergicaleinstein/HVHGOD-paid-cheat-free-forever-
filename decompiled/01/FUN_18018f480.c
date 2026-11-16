// FUN_18018f480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018f480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018f480(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_108 [48];
  undefined1 local_d8 [8];
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar1 = param_1[6];
  local_d0 = param_2;
  cVar3 = FUN_1804513c0(uVar1,1,2);
  if (cVar3 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1801ad780(uVar1,&local_b8,param_2);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
  uVar1 = *param_1;
  uVar2 = param_1[4];
  cVar3 = FUN_1804513c0(uVar2,1,2);
  if (cVar3 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1801ae020(local_d8,uVar2,uVar1,&local_b8);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    uVar1 = param_1[0x15];
    cVar3 = FUN_1804513c0(uVar1,1,2);
    if (cVar3 != '\0') {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      FUN_1801ae020(local_d8,uVar1,lVar4,param_2);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
    }
  }
  local_c0 = (longlong *)param_1[0x17];
  plVar6 = (longlong *)local_c0[1];
  cVar3 = *(char *)((longlong)plVar6 + 0x19);
  local_c8 = local_c0;
  plVar7 = plVar6;
  while (cVar3 == '\0') {
    if ((ulonglong)plVar7[4] < param_2) {
      plVar7 = plVar7 + 2;
    }
    else {
      if ((*(char *)((longlong)local_c0 + 0x19) != '\0') && (param_2 < (ulonglong)plVar7[4])) {
        local_c0 = plVar7;
      }
      local_c8 = plVar7;
    }
    plVar7 = (longlong *)*plVar7;
    cVar3 = *(char *)((longlong)plVar7 + 0x19);
  }
  if (*(char *)((longlong)local_c0 + 0x19) == '\0') {
    plVar6 = (longlong *)*local_c0;
  }
  cVar3 = *(char *)((longlong)plVar6 + 0x19);
  while (cVar3 == '\0') {
    if (param_2 < (ulonglong)plVar6[4]) {
      plVar7 = (longlong *)*plVar6;
      local_c0 = plVar6;
    }
    else {
      plVar7 = (longlong *)plVar6[2];
    }
    plVar6 = plVar7;
    cVar3 = *(char *)((longlong)plVar7 + 0x19);
  }
  FUN_1801b3030(param_1 + 0x17,&local_c8);
  FUN_1801ac930(param_1 + 9,&local_d0);
}




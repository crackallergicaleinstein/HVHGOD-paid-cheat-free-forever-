// FUN_18018eb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018eb30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018eb30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_d8 [48];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = param_1[6];
  cVar3 = FUN_1804513c0(uVar1,1,2);
  if (cVar3 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1801ad780(uVar1,&local_a0,param_2);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
  uVar1 = *param_1;
  uVar2 = param_1[8];
  cVar3 = FUN_1804513c0(uVar2,1,2);
  if (cVar3 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1801adee0(local_a8,uVar2,uVar1,&local_a0);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
}




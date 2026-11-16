// FUN_18017d830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017d830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017d830(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(short *)((longlong)puVar4 + lVar3 * 2) != 0);
  if ((lVar3 != 0) && (lVar3 == param_1[2])) {
    FUN_1800f5370(local_50,param_1);
    local_70 = (undefined1  [16])0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_180159e60(local_70,&DAT_1807bfe98,1);
    FUN_1800a7c10(param_1,local_70);
    FUN_18015b930(local_70);
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    iVar2 = FUN_1805fb464(param_1,param_3,param_4);
    if (iVar2 == 0) {
      uVar1 = *param_3;
      while (*(short *)(param_4 + 0x2c) == 0x2e) {
        if (((*(short *)(param_4 + 0x2e) != 0) &&
            ((*(short *)(param_4 + 0x2e) != 0x2e || (*(short *)(param_4 + 0x30) != 0)))) ||
           (iVar2 = FUN_1805fb424(uVar1,param_4), iVar2 != 0)) break;
      }
    }
    else if ((iVar2 != 5) && (iVar2 == 2)) {
      local_70 = ZEXT816(0x1808d7db8) << 0x40;
      FUN_1800a80b0(local_78,local_50,local_70);
    }
    FUN_18015b930(local_50);
  }
}




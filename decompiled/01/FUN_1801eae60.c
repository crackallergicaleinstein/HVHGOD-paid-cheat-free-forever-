// FUN_1801eae60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801eae60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eae60(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,
                  undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 (*local_78) [16];
  undefined8 ****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 ****local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  local_98 = 1;
  local_78 = param_1;
  uVar1 = __std_fs_code_page();
  local_88 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_88 = (undefined8 *)*param_3;
  }
  local_80 = param_3[2];
  FUN_1801f1c00(local_50,uVar1,&local_88);
  local_88 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_88 = (undefined8 *)*param_4;
  }
  local_80 = param_4[2];
  FUN_1801f1c00(local_70,uVar1,&local_88);
  lVar2 = 8;
  if (local_60 == 0) {
    lVar2 = 4;
  }
  FUN_1800f5540(param_1,lVar2 + param_2[1] + local_40 + local_60);
  FUN_18015b2a0(param_1,*param_2,param_2[1]);
  FUN_18015b2a0(param_1,&DAT_1807cbdc8,3);
  ppppuVar3 = local_50;
  if (0xf < local_38) {
    ppppuVar3 = local_50[0];
  }
  FUN_18015b2a0(param_1,ppppuVar3,local_40);
  if (local_60 != 0) {
    FUN_18015b2a0(param_1,&DAT_1807cbdc0,4);
    ppppuVar3 = local_70;
    if (0xf < local_58) {
      ppppuVar3 = local_70[0];
    }
    FUN_18015b2a0(param_1,ppppuVar3,local_60);
  }
  FUN_18015af80(param_1,0x22);
  FUN_18015c010(local_70);
  FUN_18015c010(local_50);
}




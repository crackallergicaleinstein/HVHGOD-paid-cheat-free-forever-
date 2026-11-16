// FUN_1800a7940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a7940(undefined1 (*param_1) [16],longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 ****ppppuVar3;
  char *pcVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 ****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 ****local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined1 (*local_30) [16];
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_78 = 0;
  pcVar4 = local_14 + 1;
  uVar1 = *(ulonglong *)(param_2 + 8);
  do {
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar1 / 10;
    *pcVar4 = (char)uVar1 + (char)uVar2 * -10 + '0';
    uVar1 = uVar2;
  } while (uVar2 != 0);
  local_30 = param_1;
  FUN_18015bdb0(local_50,pcVar4,local_14 + 1);
  pcVar4 = local_14 + 1;
  uVar1 = *(longlong *)(param_2 + 0x10) + 1;
  do {
    pcVar4 = pcVar4 + -1;
    uVar2 = uVar1 / 10;
    *pcVar4 = (char)uVar1 + (char)uVar2 * -10 + '0';
    uVar1 = uVar2;
  } while (uVar2 != 0);
  FUN_18015bdb0(local_70,pcVar4,local_14 + 1);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  local_78 = 0x3e;
  FUN_1800f5540(param_1,local_40 + 0x12 + local_60);
  FUN_18015b2a0(param_1," at line ",9);
  ppppuVar3 = local_70;
  if (0xf < local_58) {
    ppppuVar3 = local_70[0];
  }
  FUN_18015b2a0(param_1,ppppuVar3,local_60);
  FUN_18015b2a0(param_1,", column ",9);
  ppppuVar3 = local_50;
  if (0xf < local_38) {
    ppppuVar3 = local_50[0];
  }
  FUN_18015b2a0(param_1,ppppuVar3,local_40);
  FUN_18015c010(local_70);
  FUN_18015c010(local_50);
}




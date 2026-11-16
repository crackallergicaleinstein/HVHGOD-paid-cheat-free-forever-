// FUN_1801e1ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e1ad0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e1ad0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5
                  )

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [95];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  uVar6 = (ulonglong)param_5;
  puVar5 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar4 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar5 = (bVar4 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar6;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = (char)(param_4 % uVar6) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar4 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar5 = (bVar4 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar4 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar5 = (bVar4 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar6 = param_4 / 10;
      *(char *)puVar5 = (char)param_4 + (char)uVar6 * -10 + '0';
      param_4 = uVar6;
    } while (uVar6 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar6;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 % uVar6];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  puVar3 = auStack_78 + (0x60 - (longlong)puVar5);
  if (param_3 - param_2 < (longlong)puVar3) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(param_2,puVar5,puVar3);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (longlong)(puVar3 + param_2);
  }
}




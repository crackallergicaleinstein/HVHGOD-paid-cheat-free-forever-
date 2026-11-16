// FUN_1801e4cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e4cf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e4cf0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  uint param_5)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined1 auStack_58 [63];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  puVar6 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar3 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar4 = (uint)param_4 >> 1;
      param_4 = (ulonglong)uVar4;
      *(byte *)puVar6 = (bVar3 & 1) + 0x30;
    } while (uVar4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = (char)(uVar1 % (ulonglong)param_5) + '0';
    } while ((int)param_4 != 0);
    break;
  case 4:
    do {
      bVar3 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 2 & 0x3fffffff;
      *(byte *)puVar6 = (bVar3 & 3) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 8:
    do {
      bVar3 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 3 & 0x1fffffff;
      *(byte *)puVar6 = (bVar3 & 7) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 10:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar1 = (param_4 & 0xffffffff) / 10;
      *(char *)puVar6 = (char)param_4 + (char)uVar1 * -10 + '0';
      param_4 = uVar1;
    } while ((int)uVar1 != 0);
    break;
  default:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 % (ulonglong)param_5];
    } while ((int)param_4 != 0);
    break;
  case 0x10:
    do {
      uVar4 = (uint)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar5 = uVar4 >> 4;
      param_4 = (ulonglong)uVar5;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4 & 0xf];
    } while (uVar5 != 0);
    break;
  case 0x20:
    do {
      uVar4 = (uint)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar5 = uVar4 >> 5;
      param_4 = (ulonglong)uVar5;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4 & 0x1f];
    } while (uVar5 != 0);
  }
  puVar2 = auStack_58 + (0x40 - (longlong)puVar6);
  if (param_3 - param_2 < (longlong)puVar2) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(param_2,puVar6,puVar2);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (longlong)(puVar2 + param_2);
  }
}




// FUN_1801e18a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e18a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e18a0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
                  uint param_5)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined1 auStack_58 [63];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  puVar2 = param_2;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    puVar2 = param_2 + 1;
    *param_2 = 0x2d;
    param_4 = (ulonglong)(uint)-(int)param_4;
  }
  puVar7 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar4 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar5 = (uint)param_4 >> 1;
      param_4 = (ulonglong)uVar5;
      *(byte *)puVar7 = (bVar4 & 1) + 0x30;
    } while (uVar5 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      *(char *)puVar7 = (char)(uVar1 % (ulonglong)param_5) + '0';
    } while ((int)param_4 != 0);
    break;
  case 4:
    do {
      bVar4 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 2 & 0x3fffffff;
      *(byte *)puVar7 = (bVar4 & 3) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 8:
    do {
      bVar4 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 3 & 0x1fffffff;
      *(byte *)puVar7 = (bVar4 & 7) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar1 = (param_4 & 0xffffffff) / 10;
      *(char *)puVar7 = (char)param_4 + (char)uVar1 * -10 + '0';
      param_4 = uVar1;
    } while ((int)uVar1 != 0);
    break;
  default:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 % (ulonglong)param_5];
    } while ((int)param_4 != 0);
    break;
  case 0x10:
    do {
      uVar5 = (uint)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = uVar5 >> 4;
      param_4 = (ulonglong)uVar6;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar5 & 0xf];
    } while (uVar6 != 0);
    break;
  case 0x20:
    do {
      uVar5 = (uint)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = uVar5 >> 5;
      param_4 = (ulonglong)uVar6;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar5 & 0x1f];
    } while (uVar6 != 0);
  }
  puVar3 = auStack_58 + (0x40 - (longlong)puVar7);
  if ((longlong)param_3 - (longlong)puVar2 < (longlong)puVar3) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(puVar2,puVar7,puVar3);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = puVar2 + (longlong)puVar3;
  }
}




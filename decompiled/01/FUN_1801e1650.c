// FUN_1801e1650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e1650 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e1650(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
                  int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  ulonglong *puVar7;
  undefined1 auStack_78 [95];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  puVar4 = param_2;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    puVar4 = param_2 + 1;
    *param_2 = 0x2d;
    param_4 = -param_4;
  }
  uVar3 = (ulonglong)param_5;
  puVar7 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar6 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar7 = (bVar6 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar3;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      *(char *)puVar7 = (char)(param_4 % uVar3) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar6 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar7 = (bVar6 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar6 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar7 = (bVar6 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar3 = param_4 / 10;
      *(char *)puVar7 = (char)param_4 + (char)uVar3 * -10 + '0';
      param_4 = uVar3;
    } while (uVar3 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar3;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 % uVar3];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  puVar5 = auStack_78 + (0x60 - (longlong)puVar7);
  if ((longlong)param_3 - (longlong)puVar4 < (longlong)puVar5) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(puVar4,puVar7,puVar5);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = puVar4 + (longlong)puVar5;
  }
}




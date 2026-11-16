// FUN_1801e1430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e1430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e1430(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5
                  )

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  param_4 = param_4 & 0xff;
  puVar7 = &local_10;
  switch(param_5) {
  case 2:
    do {
      bVar2 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 1;
      param_4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 1) + 0x30;
    } while (bVar3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar5 = param_4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 = (char)((longlong)uVar5 % (longlong)param_5) + '0';
    } while ((char)param_4 != '\0');
    break;
  case 4:
    do {
      bVar2 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 2;
      param_4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 3) + 0x30;
    } while (bVar3 != 0);
    break;
  case 8:
    do {
      bVar2 = (byte)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 3;
      param_4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 7) + 0x30;
    } while (bVar3 != 0);
    break;
  case 10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      cVar1 = (char)(param_4 / 10);
      *(char *)puVar7 = (char)param_4 + cVar1 * -10 + '0';
      param_4 = param_4 / 10;
    } while (cVar1 != '\0');
    break;
  default:
    do {
      uVar5 = param_4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 =
           "0123456789abcdefghijklmnopqrstuvwxyz"[(int)((longlong)uVar5 % (longlong)param_5)];
    } while ((char)param_4 != '\0');
    break;
  case 0x10:
    do {
      uVar4 = (uint)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 4;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4 & 0xf];
    } while ((char)param_4 != '\0');
    break;
  case 0x20:
    do {
      uVar4 = (uint)param_4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      param_4 = param_4 >> 5;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4 & 0x1f];
    } while ((char)param_4 != '\0');
  }
  puVar6 = auStack_38 + (0x28 - (longlong)puVar7);
  if (param_3 - param_2 < (longlong)puVar6) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(param_2,puVar7,puVar6);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (longlong)(puVar6 + param_2);
  }
}



